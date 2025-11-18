#include "spi0.h"
#include <stdbool.h>
#include <stdint.h>
#include <rp2350/resets.h>
#include <rp2350/sio.h>
#include <rp2350/io_bank0.h>
#include <rp2350/pads_bank0.h>
#include <rp2350/spi.h>
#include <rp2350/clocks.h>

#define CONCAT2(X,Y) X ## Y
#define CONCAT3(X,Y,Z) X ## Y ## Z
#define IO_BANK0_GPIO_CTRL(X) CONCAT3(IO_BANK0_GPIO,X,_CTRL)
#define PADS_BANK0_GPIO(X) CONCAT2(PADS_BANK0_GPIO,X)

#define DATA_BITS 8 //must be 4-16
#define MOTOROLA_CPHA 1
#define MOTOROLA_CPOL 1
#define SPI0_SCLK_LOC 6
#define SPI0_TXD_LOC 7
#define SPI0_CSn_LOC 5
#define SPI0_RXD_LOC 4

#define SPI0_RESETS ( RESETS_RESET_SPI0_MASK \
		| RESETS_RESET_IO_BANK0_MASK \
		| RESETS_RESET_PADS_BANK0_MASK )

void configure_spi0()
{
	CLOCKS_CLK_PERI_CTRL = 
		 CLOCKS_CLK_PERI_CTRL_ENABLE(1)
		|CLOCKS_CLK_PERI_CTRL_AUXSRC(0)
		|CLOCKS_CLK_PERI_CTRL_KILL(0);

	RESETS_RESET_CLR = SPI0_RESETS;

	while( (RESETS_RESET_DONE & SPI0_RESETS) != SPI0_RESETS);


	const uint32_t pads_bank0_gpio_in = 
	PADS_BANK0_GPIO0_OD(1) 
	| PADS_BANK0_GPIO0_IE(1) 
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);

	const uint32_t pads_bank0_gpio_out = 
	PADS_BANK0_GPIO0_OD(0) 
	| PADS_BANK0_GPIO0_IE(0) 
	| PADS_BANK0_GPIO0_DRIVE(0) 
	| PADS_BANK0_GPIO0_PUE(0) 
	| PADS_BANK0_GPIO0_PDE(0) 
	| PADS_BANK0_GPIO0_SCHMITT(0) 
	| PADS_BANK0_GPIO0_SLEWFAST(0);

	const uint32_t io_bank0_gpio_ctrl= 
	  IO_BANK0_GPIO0_CTRL_IRQOVER(0) 
	| IO_BANK0_GPIO0_CTRL_INOVER(0)
	| IO_BANK0_GPIO0_CTRL_OEOVER(0) 
	| IO_BANK0_GPIO0_CTRL_OUTOVER(0)
	| IO_BANK0_GPIO0_CTRL_FUNCSEL(1);

	IO_BANK0_GPIO_CTRL( SPI0_SCLK_LOC ) = io_bank0_gpio_ctrl;
	IO_BANK0_GPIO_CTRL( SPI0_TXD_LOC  ) = io_bank0_gpio_ctrl;
	IO_BANK0_GPIO_CTRL( SPI0_RXD_LOC ) = io_bank0_gpio_ctrl;
	IO_BANK0_GPIO_CTRL( SPI0_CSn_LOC ) = io_bank0_gpio_ctrl;

	PADS_BANK0_GPIO( SPI0_SCLK_LOC ) = pads_bank0_gpio_out;
	PADS_BANK0_GPIO( SPI0_TXD_LOC  ) = pads_bank0_gpio_out;
	PADS_BANK0_GPIO( SPI0_CSn_LOC  ) = pads_bank0_gpio_out;
	PADS_BANK0_GPIO( SPI0_RXD_LOC  ) = pads_bank0_gpio_in;

	SPI0_SSPCR0 =
		  SPI0_SSPCR0_SCR(15-1)
		| SPI0_SSPCR0_SPH(MOTOROLA_CPHA)
		| SPI0_SSPCR0_SPO(MOTOROLA_CPOL)
		| SPI0_SSPCR0_FRF(0)
		| SPI0_SSPCR0_DSS(DATA_BITS-1);

	SPI0_SSPCR1 =
		  SPI0_SSPCR1_SOD(0)
		| SPI0_SSPCR1_MS(0)
		| SPI0_SSPCR1_SSE(0)
		| SPI0_SSPCR1_LBM(0);
 
	SPI0_SSPCR1_SET = SPI0_SSPCR1_SSE(1);
}
_Bool spi0_write( uint8_t x)
{
	_Bool retval = false;
	if( SPI0_SSPSR & SPI0_SSPSR_TNF_MASK )
	{
		SPI0_SSPDR = x;
		retval = true;
	}
	return retval;
}
_Bool spi0_read( uint8_t *x)
{
	_Bool retval = false;
	if( SPI0_SSPSR & SPI0_SSPSR_RNE_MASK )
	{
		*x = SPI0_SSPDR;
		retval = true;
	}
	return retval;
}

