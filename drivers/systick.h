#ifndef SYSTICK_H
#define SYSTICK_H

#include <stdbool.h>
#include <stdint.h>

void configure_systick(uint32_t systick_period_us);
_Bool systick_has_fired();
_Bool systick_register_callback( void (*p_fn)() );

#endif
