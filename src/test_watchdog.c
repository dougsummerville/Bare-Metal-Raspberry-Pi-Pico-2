#include "systick.h"
#include "led.h"
#include "watchdog.h"
#include <stdint.h>

#define LOOP_PERIOD_us 1000
#define WATCHDOG_TIMEOUT_us LOOP_PERIOD_us + 10
void test_fsm();
int main ( void )
{
	configure_led();
	configure_systick(LOOP_PERIOD_us);
	configure_watchdog(WATCHDOG_TIMEOUT_us);

	while(1)
	{
		asm("WFI");
		if( !systick_has_fired() )
			continue;
		test_fsm();
		feed_the_watchdog();
	}
    return(0);
}
void test_fsm()
{
	static enum state_type{ START,ON1, OFF1, ON2, OFF2, STOP } state=START;
	static uint16_t cnt;
	switch(state){
	case START:
		turn_on_led();
		cnt=0;
		state= ON1;
		break;
	case ON1:
		cnt++;
		if( cnt == 499 ){
			turn_off_led();
			cnt=0;
			state=OFF1;
		}
		break;
	case OFF1:
		cnt++;
		if( cnt == 499 ){
			turn_on_led();
			cnt=0;
			state=ON2;
		}
		break;
	case ON2:
		cnt++;
		if( cnt == 499 ){
			turn_off_led();
			cnt=0;
			state=OFF2;
		}
		break;
	case OFF2:
		cnt++;
		if( cnt == 499 ){
			turn_on_led();
			cnt=0;
			state=STOP;
		}
		break;
	case STOP:
		cnt++;
		if( cnt == 5000 )
			while(1);
		break;
	}
}
