/* Copy to RAM Bootloader
 *
 * Copyright (c) 2022-2025 Douglas H. Summerville, Binghamton University 
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

/*
#include <rp2350/resets.h>
#include <rp2350/clocks.h>
#include <rp2350/pads_qspi.h>
#include <rp2350/xip.h>
#include <rp2350/qmi.h>
#include <stdint.h>

#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>

#define CMD_WRITE_ENABLE 0x06
#define CMD_READ_STATUS 0x05
#define CMD_READ_STATUS2 0x35
#define CMD_WRITE_STATUS 0x01
#define SREG_DATA 0x02  // Enable quad-SPI mode
			//
extern uint32_t __rom_copy_start, __ram_copy_start, __ram_copy_end;
//extern void __attribute__((naked)) __system_entry_point_thumb();
//extern uint32_t __system_entry_point;
extern void __attribute__((noreturn)) _reset_init();

*/
#include <stdint.h>

#define GET32(p) (*(uint32_t volatile *)p)
#define PUT32(p,v) ( *(uint32_t volatile *)p=v)
#define RESETS_BASE                 0x40020000

#define RESETS_RESET_RW             (RESETS_BASE+0x0+0x0000)
#define RESETS_RESET_XOR            (RESETS_BASE+0x0+0x1000)
#define RESETS_RESET_SET            (RESETS_BASE+0x0+0x2000)
#define RESETS_RESET_CLR            (RESETS_BASE+0x0+0x3000)

#define RESETS_RESET_DONE_RW        (RESETS_BASE+0x8+0x0000)
#define RESETS_RESET_DONE_XOR       (RESETS_BASE+0x8+0x1000)
#define RESETS_RESET_DONE_SET       (RESETS_BASE+0x8+0x2000)
#define RESETS_RESET_DONE_CLR       (RESETS_BASE+0x8+0x3000)

#define SIO_BASE                    0xD0000000

#define SIO_GPIO_OUT_RW             (SIO_BASE+0x10)
#define SIO_GPIO_OUT_SET            (SIO_BASE+0x18)
#define SIO_GPIO_OUT_CLR            (SIO_BASE+0x20)
#define SIO_GPIO_OUT_XOR            (SIO_BASE+0x28)

#define SIO_GPIO_OE_RW              (SIO_BASE+0x30)
#define SIO_GPIO_OE_SET             (SIO_BASE+0x38)
#define SIO_GPIO_OE_CLR             (SIO_BASE+0x40)
#define SIO_GPIO_OE_XOR             (SIO_BASE+0x48)

#define IO_BANK0_BASE               0x40028000

#define IO_BANK0_GPIO25_STATUSL_RW  (IO_BANK0_BASE+0x0C8+0x0000)
#define IO_BANK0_GPIO25_STATUSL_XOR (IO_BANK0_BASE+0x0C8+0x1000)
#define IO_BANK0_GPIO25_STATUSL_SET (IO_BANK0_BASE+0x0C8+0x2000)
#define IO_BANK0_GPIO25_STATUSL_CLR (IO_BANK0_BASE+0x0C8+0x3000)

#define IO_BANK0_GPIO25_CTRL_RW     (IO_BANK0_BASE+0x0CC+0x0000)
#define IO_BANK0_GPIO25_CTRL_XOR    (IO_BANK0_BASE+0x0CC+0x1000)
#define IO_BANK0_GPIO25_CTRL_SET    (IO_BANK0_BASE+0x0CC+0x2000)
#define IO_BANK0_GPIO25_CTRL_CLR    (IO_BANK0_BASE+0x0CC+0x3000)

#define PADS_BANK0_BASE             0x40038000

#define PADS_BANK0_BASE_GPIO25_RW   (PADS_BANK0_BASE+0x68+0x0000)
#define PADS_BANK0_BASE_GPIO25_XOR  (PADS_BANK0_BASE+0x68+0x1000)
#define PADS_BANK0_BASE_GPIO25_SET  (PADS_BANK0_BASE+0x68+0x2000)
#define PADS_BANK0_BASE_GPIO25_CLR  (PADS_BANK0_BASE+0x68+0x3000)

void __attribute__((section (".stage_2_bootloader")))
notmain ( void )
{
	asm(".word 0x20081000;");
	asm(".word 0x10000009;");
    PUT32(RESETS_RESET_CLR,((1<<6)|(1<<9)));
    while(1)
    {
        if((GET32(RESETS_RESET_DONE_RW)&((1<<6)|(1<<9)))==((1<<6)|(1<<9))) break;
    }
    PUT32(SIO_GPIO_OE_CLR,1<<25);
    PUT32(SIO_GPIO_OUT_CLR,1<<25);

    PUT32(PADS_BANK0_BASE_GPIO25_SET,1<<6);
    PUT32(IO_BANK0_GPIO25_CTRL_RW,5); //SIO
    PUT32(PADS_BANK0_BASE_GPIO25_CLR,1<<8); //ISO

    PUT32(SIO_GPIO_OE_SET,1<<25);
    while(1)
    {
        PUT32(SIO_GPIO_OUT_XOR,1<<25);
    }
}

//-------------------------------------------------------------------------
/*Stage 2 needs to fit in 256 bytes and will be at the top of RAM.  At the
 * time this is executed, the SP will be initialized by the stage 1 boot to
 * be just below this code in RAM.  
 */
//void __attribute__((section (".stage_2_bootloader")))
//copy_to_ram_bootloader()
//{

	/*
	pads_qspi -> gpio_qspi_sclk = PADS_QSPI_GPIO_QSPI_SCLK_DRIVE(2) | PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST_MASK;
	pads_qspi -> clr_gpio_qspi_sd0 = PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK; 
	pads_qspi -> clr_gpio_qspi_sd1 = PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK;
	pads_qspi -> clr_gpio_qspi_sd2 = PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK;
	pads_qspi -> clr_gpio_qspi_sd3 = PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK;
	qmi -> direct_csr = QMI_DIRECT_CSR_CLKDIV(30) | QMI_DIRECT_CSR_EN_MASK | QMI_DIRECT_CSR_AUTO_CS0N_MASK;
	while( qmi -> direct_csr & QMI_DIRECT_CSR_BUSY_MASK );
	qmi -> direct_tx = CMD_READ_STATUS2;
	qmi -> direct_tx = CMD_READ_STATUS2;
	qmi -> direct_rx;
	if ( qmi -> direct_rx ) {
		qmi -> direct_tx = CMD_WRITE_ENABLE;
		while( qmi -> direct_csr & QMI_DIRECT_CSR_BUSY_MASK );
		qmi -> direct_rx;
		qmi -> direct_tx = CMD_WRITE_STATUS;
		qmi -> direct_tx = 0;
		qmi -> direct_tx = SREG_DATA;
		while( qmi -> direct_csr & QMI_DIRECT_CSR_BUSY_MASK );
		qmi -> direct_rx;
		qmi -> direct_rx;
		qmi -> direct_rx;
		qmi -> direct_tx = CMD_READ_STATUS;
		qmi -> direct_tx = CMD_READ_STATUS;
		qmi -> direct_rx;
		if( ! qmi -> direct_rx & 0x01 )
			qmi -> direct_csr = QMI_DIRECT_CSR_CLKDIV(30) | QMI_DIRECT_CSR_AUTO_CS0N_MASK;
	} else{
		qmi -> direct_csr = QMI_DIRECT_CSR_CLKDIV(30) | QMI_DIRECT_CSR_AUTO_CS0N_MASK;
	}
	*/

	/*
	qmi -> m0_timing = QMI_M0_TIMING_COOLDOWN(1) | QMI_M0_TIMING_RXDELAY(2) | QMI_M0_TIMING_CLKDIV(2);
	qmi -> m0_rcmd = QMI_M0_RCMD_PREFIX(0xeb) | QMI_M0_RCMD_SUFFIX(0xa0 ); 
	qmi -> m0_rfmt = 
		QMI_M0_RFMT_PREFIX_WIDTH(0) |
		QMI_M0_RFMT_ADDR_WIDTH(2) |
		QMI_M0_RFMT_SUFFIX_WIDTH(2) |
		QMI_M0_RFMT_DUMMY_WIDTH(2) |
		QMI_M0_RFMT_DATA_WIDTH(2) |
		QMI_M0_RFMT_PREFIX_LEN(1) |
		QMI_M0_RFMT_SUFFIX_LEN(2) |
		QMI_M0_RFMT_DUMMY_LEN(4); 
	xip_nocache_noalloc -> ctrl;

	qmi -> clr_m0_rfmt = QMI_M0_RFMT_PREFIX_LEN_MASK;
	*/
    /* linker script will warn if copy to RAM may overwrite this stage 2
     * by enforcing minimu stack size 
     */
	/*
	uint32_t *ram_ptr = (uint32_t *) &__ram_copy_start;
	uint32_t *rom_ptr = (uint32_t *) &__rom_copy_start;
	while( ram_ptr  < (uint32_t *) &__ram_copy_end )
		*ram_ptr++ = *rom_ptr++;
	//AT this time we're done with XIP so disable 
	//TODO
	//switch the glitchless mux to before resetting peripherals (including PLL)
	clocks -> clr_clk_sys_ctrl = CLOCKS_CLK_SYS_CTRL_SRC_MASK;
	while( !(clocks -> clk_sys_selected & 0x1) );

	//got to system initialization
	_reset_init();
	*/
//}


