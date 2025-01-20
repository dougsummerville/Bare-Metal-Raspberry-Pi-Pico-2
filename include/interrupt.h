#ifndef INTERRUPT_H
#define INTERRUPT_H

#include <rp2350/m33.h>
#include <stdint.h>

static inline uint32_t get_primask()
{
	uint32_t primask;
	__asm__ volatile ("MRS %0, primask" : "=r" (primask) );
	return primask;
}
static inline void set_primask(uint32_t primask)
{
	__asm__ volatile ("MSR primask, %0" : : "r" (primask) );
}
#define enable_irq() __asm__ volatile ("CPSIE I")
#define disable_irq() __asm__ volatile ("CPSID I")

#endif
