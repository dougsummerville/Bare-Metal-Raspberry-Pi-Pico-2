#include "watchdog.h"
#include "systick.h"
#include "led.h"
#include <stdint.h>

void task_blocking_led_flash();
int main ( void )
{
	configure_systick();
	configure_led();
	configure_watchdog(1100);
	while(1)
	{
		if( !system_tick() )
			continue;
		task_blocking_led_flash();
		feed_the_watchdog();
	}
    return(0);
}
void task_blocking_led_flash()
{
	static uint16_t cnt;
	static uint8_t freeze;
	cnt++;
	if( cnt == 100)
	{
		toggle_led();
		freeze++;
	}
	if( cnt == 1000)
	{
		toggle_led();
		cnt = 0;
	}
	if( freeze == 6)
		while(1);
}
