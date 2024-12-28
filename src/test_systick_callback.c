#include "systick.h"
#include "led.h"
#include <stdint.h>
#include "interrupt.h"

#define LOOP_PERIOD_us
void task();
int main ( void )
{
	disable_irq();
	systick_register_callback(task);
	configure_systick(LOOP_PERIOD_us);
	configure_led();
	enable_irq();
	while(1)
	{
		asm("WFI");
		if( !systick_has_fired() )
			continue;
	}
    return(0);
}
void task()
{
	static uint32_t cnt=0;
	if( ++cnt==500)
	{
		toggle_led();
		cnt=0;
	}
}
