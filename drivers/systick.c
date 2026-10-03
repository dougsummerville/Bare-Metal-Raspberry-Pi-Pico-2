#include <rp2350/m33.h>
#include <rp2350/ticks.h>
#include <stdbool.h>
#include <systick.h>

#ifndef SYSTICK_FREQ
#define SYSTICK_FREQ_HZ 1000
#endif

#ifndef EXT_CLK_FREQ_HZ
#define EXT_CLK_FREQ_HZ 12000000
#endif

#define SYSTICK_TOP (EXT_CLK_FREQ_HZ/SYSTICK_FREQ_HZ - 1)

void configure_systick() {
	TICKS_PROC0_CYCLES = 1;
	TICKS_PROC0_CTRL = TICKS_PROC0_CTRL_ENABLE(1);
	M33_SYST_RVR = SYSTICK_TOP;
	M33_SYST_CVR = 0;
	M33_SYST_CSR = 
		M33_SYST_CSR_CLKSOURCE(0) 
		| M33_SYST_CSR_TICKINT(0) 
		| M33_SYST_CSR_ENABLE(1);
}

_Bool system_tick() {
	return M33_SYST_CSR & M33_SYST_CSR_COUNTFLAG_MASK; 
}
