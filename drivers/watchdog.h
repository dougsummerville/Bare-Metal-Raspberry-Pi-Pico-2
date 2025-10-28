#ifndef WATCHDOG_H
#define WATCHDOG_H
#include "stdint.h"

void configure_watchdog( uint32_t reload_us);
void feed_the_watchdog();

#endif
