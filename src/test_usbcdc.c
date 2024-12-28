#include "usbcdc.h"
int main()
{
	char c;
	char prompt[]="Program will echo back each typed key\n\n\r";

	asm volatile ("cpsid i");
	configure_usbcdc();
	asm volatile ("cpsie i");


	for( char *p=prompt; *p != 0; p++ )
		usbcdc_putchar(*p);


	while(1){
		if( usbcdc_getchar(&c)){
			usbcdc_putchar(c);
		}
	}
}
