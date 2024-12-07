#include "led.h"
#include <rp2040/resets.h>
#include <rp2040/sio.h>
#include <rp2040/io_bank0.h>
#include <rp2040/pads_bank0.h>

#define LED_RESETS (RESETS_RESET_IO_BANK0_MASK | RESETS_RESET_PADS_BANK0_MASK)
void configure_led( void )
{
    resets -> clr_reset = LED_RESETS;

    while((resets -> reset_done & LED_RESETS ) != LED_RESETS )
    	continue;

    pads_bank0 -> gpio25 = 
	PADS_BANK0_GPIO25_OD(0) 
	| PADS_BANK0_GPIO25_IE(1) 
	| PADS_BANK0_GPIO25_DRIVE(0) 
	| PADS_BANK0_GPIO25_PUE(0) 
	| PADS_BANK0_GPIO25_PDE(0) 
	| PADS_BANK0_GPIO25_SCHMITT(0) 
	| PADS_BANK0_GPIO25_SLEWFAST(0);

    io_bank0 -> gpio25_ctrl = 
	IO_BANK0_GPIO25_CTRL_IRQOVER(0) |
	IO_BANK0_GPIO25_CTRL_INOVER(0)  |
	IO_BANK0_GPIO25_CTRL_OEOVER(0)  |
	IO_BANK0_GPIO25_CTRL_OUTOVER(0) |
	IO_BANK0_GPIO25_CTRL_FUNCSEL(5);

    sio->gpio_oe_set = (1<<25);
}
void turn_on_led()
{
    sio -> gpio_out_set = (1<<25);
}
void turn_off_led()
{
    sio -> gpio_out_clr = (1<<25);
}
void toggle_led()
{
    sio -> gpio_out_xor = (1<<25);
}
