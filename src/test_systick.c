#include "systick.h"
#include "led.h"
#include <stdint.h>

#define LOOP_PERIOD_us 1000
int main ( void )
{
	uint16_t cnt=0;
	configure_systick(LOOP_PERIOD_us);
	configure_led();
	while(1)
	{
		if( !systick_has_fired() )
			continue;
		if( ++cnt==500 )
		{
			toggle_led();
			cnt=0;
		}
	}
    return(0);
}
