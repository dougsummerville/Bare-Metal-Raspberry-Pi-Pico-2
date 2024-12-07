#include "usbcdc.h"

int main()
{
	char c;
	configure_usbcdc();
	/* Calling usbcdc_putchar() will fail immediately after configure,
	 * likely because the device has not yet enumerated.  The driver does
	 * not poll until enumeration so as not to block
	 */
	while(1)
	{
		if( usbcdc_getchar(&c))
			usbcdc_putchar(c);
	}
	return 0;
}
