/*
 * Copyright (c) 2022-2024 Douglas H. Summerville, Binghamton University 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "usbcdc.h"
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/io_qspi.h>
#include <rp2350/uart.h>
#include <rp2350/clocks.h>
#include <rp2350/usb.h>
#include <rp2350/pll.h>
#include <rp2350/m33.h>

#include <stdint.h>
#include <stdbool.h>

#define min(A,B) ( (A)<(B) ? (A) : (B) )

/******* Start of Configurable USB Stuff***********/

//IRQ Priority
#ifndef USB_IRQ_PRIORITY
#define USB_IRQ_PRIORITY 1
#endif

//Max Packet Size
#define MAX_PACKET_SIZE 64  //8,16,32,64 

//define this to use remaining USB DPSRAM for ring buffers 
//if set total buffer size cannot exceed remaining DPSRAM size (~3kB)
#define RING_BUFFERS_IN_DPSRAM

//code optimizations used require ring buffers to be powers of 2 
//and buffers must be at least 2 but should be much bigger
////RX BUF must be at least 128
#define TXBUF_SIZE 2048
#define RXBUF_SIZE 1024

static const uint8_t language_string_descriptor[4] = 
{ 
	sizeof(language_string_descriptor), 0x03,
	0x09, 0x04
};

static const uint8_t manufacturer_string_descriptor[16] =
{   
	(uint8_t)sizeof(manufacturer_string_descriptor),0x03,
	'B',0,
	'U',0,
	' ',0,
	'E',0,
	'C',0,
	'E',0,
	'.',0
};

static const uint8_t configuration_string_descriptor[18] =
{   
	(uint8_t)sizeof(configuration_string_descriptor),0x03,
	'C',0,
	'O',0,
	'N',0,
	'F',0,
	'i',0,
	'G',0,
	'?',0,
	'.',0
};

//Table lookup for Get Descriptor
#define NUM_STRING_DESCRIPTORS 3
const uint8_t *desc_table[NUM_STRING_DESCRIPTORS] = {
    language_string_descriptor,
    manufacturer_string_descriptor,
    configuration_string_descriptor
};

static const uint8_t device_descriptor[18] = {
    sizeof(device_descriptor), // Length of this descriptor, in Bytes
    0x01, // Descriptor type = 1 indicating device descriptor
    0x10, // USB version (in BCD, lsB)
    0x01, // USB version (in BCD, msB)
    0x02, // Device class (02: communications
    0x00, // Device subclass
    0x00, // Device Protocol
    MAX_PACKET_SIZE, // Maximum packet size target can process
    0x28, // Vendor ID (lsB)
    0x0d, // Vendor ID (msB)
    0x04, // Product ID (lsb)
    0x02, // Product ID (msb)
    0x01, // Device Version (lsB)
    0x00, // Device Version (msB)
    0x01, // Index of Manufacturer string descriptor
    0x00, // Index of Device string descriptor
    0x00, // Index of Serial Number string descriptor
    0x01, // Number of configurations
};

static const uint8_t config_descriptor[0x43] = {
0x09,        // bLength
0x02,        // bDescriptorType (Configuration)
0x43, 0x00,  // wTotalLength 
0x02,        // bNumInterfaces 2
0x01,        // bConfigurationValue
0x02,        // iConfiguration (String Index)
0x80,        // bmAttributes
0x32,        // bMaxPower 100mA
	//Interface 1: Control
	0x09,        // bLength
	0x04,        // bDescriptorType (Interface)
	0x00,        // bInterfaceNumber 0
	0x00,        // bAlternateSetting
	0x01,        // bNumEndpoints 1
	0x02,        // bInterfaceClass (Communication)
	0x02,        // bInterfaceSubClass (ACM
	0x01,        // bInterfaceProtocol (AT Commands)
	0x00,        // iInterface (String Index)
	//Header Functional Desc
	0x05, 0x24, 0x00, 0x10, 0x01, // (CS Interface)
	0x05, 0x24, 0x01, 0x00, 0x01, //Call Mgmt FD
	//0x05, 0x24, 0x01, 0x03, 0x02, //Call Mgmt FD
	//0x04, 0x24, 0x02, 0x06, //ACM FD
	0x04, 0x24, 0x02, 0x02, //ACM FD
	//0x05, 0x24, 0x06, 0x02, 0x01, //Union FD
	0x05, 0x24, 0x06, 0x00, 0x01, //Union FD
		//EP 
		0x07,        // bLength
		0x05,        // bDescriptorType (Endpoint)
		0x81,        // bEndpointAddress (IN/D2H)
		0x03,        // bmAttributes (Interrupt)
		0x08, 0x00,  // wMaxPacketSize 8
		0xFF,        // bInterval 16 (unit depends on device speed)
	//Interface 2: DATA
	0x09,        // bLength
	0x04,        // bDescriptorType (Interface)
	0x01,        // bInterfaceNumber 1
	0x00,        // bAlternateSetting
	0x02,        // bNumEndpoints 2
	0x0A,        // bInterfaceClass (CDC)
	0x02,        // bInterfaceSubClass
	0x00,        // bInterfaceProtocol
	0x00,        // iInterface (String Index)
		//EP 2
		0x07,        // bLength
		0x05,        // bDescriptorType (Endpoint)
		0x82,        // bEndpointAddress (IN)
		0x02,        // bmAttributes (Bulk)
		MAX_PACKET_SIZE, 0x00,  // wMaxPacketSize 64
		0x00,        // bInterval 0 (ignored)
		//EP 3
		0x07,        // bLength
		0x05,        // bDescriptorType (Endpoint)
		0x03,        // bEndpointAddress (OUT)
		0x02,        // bmAttributes (Bulk)
		0x40, 0x00,  // wMaxPacketSize 100
		0x00,        // bInterval 0 (ignored)
};


static const uint8_t line_coding[7] = {
		0x00, 0xc2, 0x01, 0x00, //115200
		0x00, //number stop 1 1.5 2
		0x00, //parity N O E M S
		0x08  //data 5,6,7,8,16
};

/*******END of Configurable USB Stuff***********/


#define USB_DPRAM_OFFSET 0x50100000
#define USBRAM_OFFSET(A) (((uint32_t)(A))&0xFFFF)
#define EP_BUF_FULL (1<<15)
#define EP_BUF_LAST (1<<14)
#define EP_DPID_1 (1<<13)
#define EP_DPID_0 (0) 
#define EP_RESET_BUFSEL (1<<12)
#define EP_STALL (1<<11)
#define EP_BUF_AVAIL (1<<10)
#define EP_XFER_LEN(V) ((V)&0x3FF)

#if (TXBUF_SIZE+RXBUF_SIZE) > 3072
#ifdef RING_BUFFERS_IN_DPSRAM
#error "Not enough DPSRAM for ring buffers"
#endif
#endif

#define is_power_of_2(a) (((a)&((a)-1)) == 0)

#if !is_power_of_2(TXBUF_SIZE )
#error "TXBUF_SIZE is not a power of 2"
#endif
#if !is_power_of_2(RXBUF_SIZE ) || RXBUF_SIZE < 128
#error "RXBUF_SIZE is not a power of 2 or at least 128"
#endif

/* Structure of DPRAM
 * 
 */
typedef struct{
	uint32_t head, tail;
	uint8_t buf[TXBUF_SIZE];
} txbuf_t;
typedef struct{
	uint32_t head, tail;
	uint8_t buf[RXBUF_SIZE];
} rxbuf_t;

typedef struct {
		uint32_t bytes_remaining;
		uint8_t const *source_data;
		uint8_t *buffer;
		_Bool data01;
} ep_state_t;

#define NUM_DATA_BUFFERS 3
#define NUM_ENDPOINTS 4
typedef struct USB_RAM_MAP{
	//EP Control Registers (EP0 space is used for setup packet
	struct{
		uint32_t in;
		uint32_t out;
	} __attribute__((packed)) ep_control_reg[16];
	//Buffer Control Registers (datasheet recommends 16b writes)
	struct{
		uint16_t in[2]; 
		uint16_t out[2];
	} __attribute__((packed)) ep_buffer_ctrl[16];
	//EP0 Buffer
	uint8_t ep0_buffer[64];
	//EP0 Opt Buffer (repurposed for device state below so marked const here)
	uint8_t const ep0_buffer_opt[64];
	//Space for data buffers
	uint8_t  data_buffer[NUM_DATA_BUFFERS][64]; //multiples of 16x32 to keep 64B aligned
	//Endpoint state
	ep_state_t ep_state[NUM_ENDPOINTS];
#ifdef RING_BUFFERS_IN_DPSRAM
	//Rest is used for TX,RX Ring Buffers (should be at least 3kB left)
	txbuf_t txbuf;
	rxbuf_t rxbuf;
} usbram_t;
#else
} usbram_t;
static txbuf_t txbuf;
static rxbuf_t rxbuf;
#endif



#define usbram (*(volatile usbram_t *)USB_DPRAM_OFFSET)

#ifdef RING_BUFFERS_IN_DPSRAM
#define rx_buffer (usbram.rxbuf)
#define tx_buffer (usbram.txbuf)
#else
#define rx_buffer (rxbuf)
#define tx_buffer (txbuf)
#endif
//should get inlined but up to compiler optimizations
static uint32_t txhead_next() { return (tx_buffer.head+1)%TXBUF_SIZE; }
static uint32_t txtail_next() { return (tx_buffer.tail+1)%TXBUF_SIZE; }
static _Bool txbuf_is_empty() { return tx_buffer.head == tx_buffer.tail; }
static _Bool txbuf_is_full() { return txhead_next() == tx_buffer.tail; }
static uint32_t txbuf_len() { return (tx_buffer.head-tx_buffer.tail)&(TXBUF_SIZE-1);}
//static uint32_t rxbuf_free() { return RXBUF_SIZE-1-((rx_buffer.head-rx_buffer.tail)&(RXBUF_SIZE-1));}
static uint32_t rxhead_next() { return (rx_buffer.head+1)%RXBUF_SIZE; }
static uint32_t rxtail_next() { return (rx_buffer.tail+1)%RXBUF_SIZE; }
static _Bool rxbuf_is_empty() { return rx_buffer.head == rx_buffer.tail; }
static _Bool rxbuf_is_full() { return rxhead_next() == rx_buffer.tail; }
/*
 * Prepare a descriptor on EP2 from TX Ring buf iff there is TX data and
 * buffer free and device enumerated
 */
static void prepare_out_to_host()
{
	//since this is called for every putchar and every USB ISR
	//try to make common case return first
	if( txbuf_is_empty() || usbram.ep_buffer_ctrl[2].in[0] & (1<<15 ) || usbctrl -> addr_endp == 0 )
		return;
	uint8_t desc_len = min(MAX_PACKET_SIZE, txbuf_len());
	for( unsigned i=0; i<desc_len; i++ )
	{
		usbram.ep_state[2].buffer[i]= tx_buffer.buf[tx_buffer.tail];
		tx_buffer.tail = txtail_next();
	}
	uint16_t ctrl_val=desc_len + ((usbram.ep_state[2].data01) ? 0xA000 : 0x8000);
	usbram.ep_buffer_ctrl[2].in[0] = ctrl_val;
	usbram.ep_state[2].data01 = ! usbram.ep_state[2].data01;
	usbram.ep_buffer_ctrl[2].in[0] = ctrl_val|0x0400; //available several cycles after
}


/* Create struct to represent setup packet and map it to EP_CTRL_REG[0]
 */
typedef struct {
	union{
		struct{
			uint8_t bmRequestType;
			uint8_t bRequest;
		};
		uint16_t wRequest;
};
	union{
			uint16_t wValue;
			struct{
				uint8_t wValue_L;
				uint8_t wValue_H;
			};
	};
	uint16_t wIndex;
	uint16_t wLength;	
} setup_pkt_t;

#define setup_packet (*(volatile setup_pkt_t *)USB_DPRAM_OFFSET)


static void clear_ep_state( unsigned ep)
{
		usbram.ep_state[ep].data01=0;
		usbram.ep_state[ep].bytes_remaining=0;
}

/*USB Device state struct (placed in EP0 optional buffer up to 64B)
 */
typedef struct{
		uint8_t addr;
} usb_device_t;
#define usb_device ((usb_device_t *)(usbram.ep0_buffer_opt))


/*Helper function to perform the frequent step of making out buffer avail and
 * toggling the enpoiints DATA01 parity
 */
static void free_ep_output_buf_and_toggle_data_sync( uint8_t ep )
{
	uint16_t ctrl_buf_reg_val = MAX_PACKET_SIZE + (usbram.ep_state[ep].data01 ? 0x2000 : 0x0000); //data01 bit
	usbram.ep_buffer_ctrl[ep].out[0] = ctrl_buf_reg_val ;
	usbram.ep_state[ep].data01 = !usbram.ep_state[ep].data01; //satisfies delay before setting AVAIL
	usbram.ep_buffer_ctrl[ep].out[0] = (ctrl_buf_reg_val | 0x0400 ); //set AVAIL
}

/*Helper function to copy up to next MAX_PACKET_SIZE bytes to EP IN buffer
 * and toggle the enpoiints DATA01 parity
 */
static void prepare_in_buffer_on_ep( uint8_t ep )
{
	uint8_t desc_len = min( usbram.ep_state[ep].bytes_remaining, MAX_PACKET_SIZE);
	usbram.ep_state[ep].bytes_remaining -= desc_len;
	for( unsigned i=0; i<desc_len; i++ )
		usbram.ep_state[ep].buffer[i]= *(usbram.ep_state[ep].source_data++);

	uint16_t ctrl_val=desc_len + ((usbram.ep_state[ep].data01) ? 0xA000 : 0x8000);
	usbram.ep_buffer_ctrl[ep].in[0] = ctrl_val;
		usbram.ep_state[ep].data01 = ! usbram.ep_state[ep].data01;
	usbram.ep_buffer_ctrl[ep].in[0] = ctrl_val|0x0400; //available several cycles after
}


/*USB ISR
 *
 */
void __attribute__((isr)) ISR5() 
{
	uint32_t ints_req = usbctrl -> ints; //read once saves repeated volatile loads
	/*Received a USB reset 
	 */
	if( ints_req  & USBCTRL_INTS_BUS_RESET_MASK )
	{
		//reset address
		usbctrl -> addr_endp = 0;
		usb_device -> addr = 0;

		//clear state
		for( unsigned i=0; i< NUM_ENDPOINTS; i++ )
			clear_ep_state(i);

		//EP3 is Bulk in need to prime RX buf
		free_ep_output_buf_and_toggle_data_sync(3);
	}

	/*OUT received from host or IN to host completed
	 */
	if( ints_req & USBCTRL_INTS_BUFF_STATUS_MASK)
	{
		uint32_t ep_status = usbctrl->buff_status;
		
		//EP0 IN 
		if( ep_status & USBCTRL_BUFF_STATUS_EP0_IN_MASK )
		{
			//Addr is set only after SetAddress; if set, just finished Status
			//stage with old addr
			if( usb_device -> addr ) 
			{
				usbctrl->addr_endp = usb_device -> addr;
				usb_device -> addr=0;
			}
			else if( usbram.ep_state[0].bytes_remaining ) 
			{
				prepare_in_buffer_on_ep(0);
			}
		}
		
		//EP3 OUT is main data source from host
		if( !(usbram.ep_buffer_ctrl[3].out[0] & 0x0400 ))
		{
			//expected to be less than 64
			uint8_t byte_cnt = usbram.ep_buffer_ctrl[3].out[0] & 0x3ff;
			uint8_t i = 0;
			while( i < byte_cnt && !rxbuf_is_full())
			{
				rx_buffer.buf[rx_buffer.head] = usbram.ep_state[3].buffer[i];
				rx_buffer.head = rxhead_next();
				i++;
			}
			free_ep_output_buf_and_toggle_data_sync(3);
		}
	}

	/*Setup packet received
	 */
	if( ints_req  & USBCTRL_INTS_SETUP_REQ_MASK )
	{
		uint8_t desc_len = 0;
		uint8_t const *desc_ptr=0;

		//if we're receiving a setup and there is still data waiting to be sent
		//something went wrong. Throw away remaining data.
		usbram.ep_state[0].data01=1;
		usbram.ep_state[0].bytes_remaining=0;

		//there may be an out stage (e.g. set line coding)
		usbram.ep_buffer_ctrl[0].out[0] = 0x2400; //DATA1

		//parse the packet
		switch( setup_packet.wRequest )
		{
		case 0x0680: //Std Dev- Get Descriptor
			switch( setup_packet.wValue_H  )
			{
			case 0x01: //device
				desc_ptr=device_descriptor;
				desc_len=sizeof(device_descriptor);
				break;
			case 0x02: //config
				desc_ptr=config_descriptor;
				desc_len = sizeof(config_descriptor);
				break;
			case 0x03: //string
				if( setup_packet.wValue_L< NUM_STRING_DESCRIPTORS )
				{
					desc_ptr=desc_table[setup_packet.wValue_L];
					desc_len=desc_ptr[0];
				}
				else
					; // STALL? Has not happened yet
				break;
			}
			break;
		case 0x0500: //Std Dev- Set Address
			usb_device -> addr = setup_packet.wValue&0xff;
			//zero len status will be sent
			break;
		case 0x0102: //CDC Set Communications Feature
		case 0x2021: //Class Interface Set line coding
		case 0x2221: //Class Interface Set line state
		case 0x0900: //Std Dev- Set Config
			//zero len status will be sent
			break;
		case 0x21A1: //Class Interface Get Line Coding
			desc_ptr = line_coding;
			desc_len = sizeof(line_coding);
			break;
		}

		//Simplify code by always preparing IN packet (no harm if not needed)
		//If desc_len==0, a zero-length status packet will be generated
		usbram.ep_state[0].bytes_remaining= min(desc_len,setup_packet.wLength);
		usbram.ep_state[0].source_data = desc_ptr;
		prepare_in_buffer_on_ep(0);
	}
	//prepare an out packet if necessary and enumerated
	prepare_out_to_host();
	//Everything has been handled so ACK IRQ 
	usbctrl -> clr_buff_status = 0xFFFFFFFF;
	usbctrl -> clr_sie_status = 0xFFFFFFFF;
}

void configure_usbcdc()
{
	/*
	 * Configure USB PLL.  
	 */
	//un-reset USB PLL and poll until reset is deasserted
	resets -> clr_reset  =  RESETS_RESET_PLL_USB_MASK;
	while(!(resets -> reset_done & RESETS_RESET_DONE_PLL_USB_MASK))
		continue;
	//config for 12x48MHz, disable power bits to start, and wait for lock
	pll_usb -> cs = PLL_USB_CS_REFDIV(1);
	pll_usb -> fbdiv_int = 120; //12MHz x 96 FCO = 1440 MHz
	pll_usb -> pwr = 0;
	while( !(pll_usb -> cs & PLL_USB_CS_LOCK_MASK))
		continue;
	//config post dividers for divide-by-6-by-5, which gets PLL ouput to 48 MHz
	pll_usb -> prim  =  
		 PLL_USB_PRIM_POSTDIV1(6) |PLL_USB_PRIM_POSTDIV2(5);

	/*
	 * Configure USB Clock
	 */

	//Set auxsrc mux to 0 (USBPLL), Enable the clock, and wait for switch to finish
	clocks -> clk_usb_ctrl  = 
		 CLOCKS_CLK_USB_CTRL_AUXSRC(0) 
		|CLOCKS_CLK_USB_CTRL_ENABLE_MASK;

	while( !(clocks->clk_usb_selected & 0x1) )
		continue;
	
	//Change divider to 1.0
	clocks -> clk_sys_div  =  0x00000100; //1.0
	
	/*
	 * USB Config
	 */

	//Pull USB out of reset and wait until deasserted
	resets -> clr_reset = RESETS_RESET_USBCTRL_MASK;

	while(! (resets -> reset_done & RESETS_RESET_USBCTRL_MASK))
		continue;
	
	//Clear USB DPRAM (resets ring buffers as well)
	for(uint32_t i=0; i<4096/4; i++ )
		((uint32_t *)USB_DPRAM_OFFSET)[i]=0;
		
	//Enable USB IRQ (5) and set priority, clear pending for good measure
	((uint32_t *)(0x20000000))[16+5]= (uint32_t)ISR5;
	m33 -> nvic_iser = M0PLUS_NVIC_ISER_SETENA(1<<5);
//TODO: this needs to use masking.
	m33 -> nvic_ipr1 = M0PLUS_NVIC_IPR1_IP_5(USB_IRQ_PRIORITY); 
	m33 -> nvic_icpr = M0PLUS_NVIC_ICPR_CLRPEND(1<<5);

	//connect usb to phy (should be by default)
	usbctrl -> usb_muxing = 
		 USBCTRL_USB_MUXING_TO_PHY(1) 
		|USBCTRL_USB_MUXING_SOFTCON(1);
	usbctrl -> usb_pwr = 
		 USBCTRL_USB_PWR_VBUS_DETECT(1)
		|USBCTRL_USB_PWR_VBUS_DETECT_OVERRIDE_EN(1);

	//Enable controller in device mode
	usbctrl -> main_ctrl = 
		 USBCTRL_MAIN_CTRL_CONTROLLER_EN(1) 
		| USBCTRL_MAIN_CTRL_HOST_NDEVICE(0);
	//IRQ enabled for endpoint 0
	//usbctrl -> set_sie_ctrl = USBCTRL_SIE_CTRL_EP0_INT_1BUF_MASK;
	usbctrl -> sie_ctrl = USBCTRL_SIE_CTRL_EP0_INT_1BUF(1)
		| USBCTRL_SIE_CTRL_RPU_OPT_MASK;
	usbctrl -> set_inte = 
		 USBCTRL_INTE_BUS_RESET(1)
	 	|USBCTRL_INTE_SETUP_REQ(1)
		|USBCTRL_INTE_BUFF_STATUS(1);
	/*
	 * Set up endpoints
	 */
	//EP0
	usbram.ep_state[0].buffer=(uint8_t *)usbram.ep0_buffer;
	//EP1 in is for control interface
	usbram.ep_control_reg[1].in = 
			 (1<<31)  //Endpoint Enable
			|(0<<30)  //Single Buffered
			|(1<<29)  //Enable IRQ every xfer
			|(0<<28)  //No Double Buffered IRQ
			|(0<<26)  //2-bit Control Endpoint Type (CONTROL:0)
			|(0<<18)  //Reserved
			|(0<<17)  //IRQ on Stall
			|(0<<26)  //IRQ on NAK
			|USBRAM_OFFSET(usbram.data_buffer[0]);
	//NO Transfers will occur on EP1
	usbram.ep_state[1].buffer = (uint8_t *) usbram.data_buffer[0];

	//EP2 in is for bulk IN
	usbram.ep_control_reg[2].in = 
			 (1<<31)  //Endpoint Enable
			|(0<<30)  //Single Buffered
			|(1<<29)  //Enable IRQ every xfer
			|(0<<28)  //No Double Buffered IRQ
			|(2<<26)  //2-bit Control Endpoint Type (BULK:2)
			|(0<<18)  //Reserved
			|(0<<17)  //IRQ on Stall
			|(0<<26)  //IRQ on NAK
			|USBRAM_OFFSET(usbram.data_buffer[1]);
	usbram.ep_state[2].buffer = (uint8_t *) usbram.data_buffer[1];
	//EP3 in is for bulk out
	usbram.ep_control_reg[3].out = 
			 (1<<31)  //Endpoint Enable
			|(0<<30)  //Single Buffered
			|(1<<29)  //Enable IRQ every xfer
			|(0<<28)  //No Double Buffered IRQ
			|(2<<26)  //2-bit Control Endpoint Type (BULK:2)
			|(0<<18)  //Reserved
			|(0<<17)  //IRQ on Stall
			|(0<<26)  //IRQ on NAK
			|USBRAM_OFFSET(usbram.data_buffer[2]);
	usbram.ep_state[3].buffer = (uint8_t *) usbram.data_buffer[2];

	//enable pull-ups to signal connect to host
	usbctrl -> set_sie_ctrl = USBCTRL_SIE_CTRL_PULLUP_EN(1);
}

_Bool usbcdc_getchar(char *c)
{
	_Bool retval=true;
	if( rxbuf_is_empty() )
		retval=false;
	else
	{
		*c = rx_buffer.buf[rx_buffer.tail];
		rx_buffer.tail = rxtail_next();
	}
	return retval;
}
_Bool usbcdc_putchar( char c)
{
	if( txbuf_is_full() )
		return false;
	uint32_t primask;
	__asm__ volatile ("MRS %0, primask" : "=r" (primask) );
	asm volatile ("CPSID I");
	tx_buffer.buf[tx_buffer.head] = c;
	tx_buffer.head = txhead_next();
	prepare_out_to_host();
	__asm__ volatile ("MSR primask, %0" : : "r" (primask) );
	return true;
}
