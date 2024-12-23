#include <stdio.h>
#include <usbcdc.h>

int (* _stdin_getchar)( char *c) = usbcdc_getchar;
int (* _stdout_putchar)( char c) = usbcdc_putchar;

void main()
{
	configure_usbcdc();
	while(1){
		if( getchar() != -1 )
			puts("Hello World!\n");
	}
}
