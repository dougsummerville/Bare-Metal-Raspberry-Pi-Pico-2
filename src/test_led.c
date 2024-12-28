#include <led.h>

#define DELAY 0x00400000

int main ( void )
{
	configure_led();
	volatile unsigned i;

	while(1){
		for( i=0; i<DELAY; i++);
		toggle_led();
	}
	return(0);
}
