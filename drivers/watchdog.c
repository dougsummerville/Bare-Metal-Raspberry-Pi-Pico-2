#include "watchdog.h"
#include <rp2350/watchdog.h>
#include <rp2350/psm.h>
#include <rp2350/ticks.h>
#include "stdint.h"

static uint32_t reload_value;

void configure_watchdog( uint32_t reload_us)
{
	WATCHDOG_CTRL_CLR = WATCHDOG_CTRL_ENABLE_MASK;
	PSM_WDSEL = 0x01FFFFFF;
	TICKS_WATCHDOG_CYCLES=1;
	TICKS_WATCHDOG_CTRL = TICKS_WATCHDOG_CTRL_ENABLE(1);
	reload_value = reload_us & 0x00FFFFFF;
	feed_the_watchdog();
	WATCHDOG_CTRL_SET = WATCHDOG_CTRL_ENABLE(1);
}

void feed_the_watchdog()
{
	WATCHDOG_LOAD = reload_value;
}

