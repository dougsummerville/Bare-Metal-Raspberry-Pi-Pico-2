#include "usbcdc.h"
#include <rp2350/clocks.h>
#include <rp2350/usb.h>

int main()
{
	char c;
	asm volatile ("cpsid i");
	configure_usbcdc();
	asm volatile ("cpsie i");

	while(1){
		if( usbcdc_getchar(&c))
			usbcdc_putchar(c);
	}
}
