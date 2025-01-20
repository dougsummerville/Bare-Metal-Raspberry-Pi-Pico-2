#include "systick.h"
#include <stdbool.h>
#include <stdint.h>
#include <rp2350/m33.h>
#include <rp2350/ticks.h>

#define SYSTICK_FREQ 1000
#define SYSTICK_TOP (1000000/SYSTICK_FREQ)

void configure_systick(uint32_t systick_period_us)
{
	ticks.set_proc0_ctrl = TICKS_PROC0_CTRL_ENABLE_MASK;
	ticks.proc0_cycles = 1;
	m33.syst_rvr= 1000000/systick_period_us;
	m33.syst_cvr=0;
	m33.shpr3 = (m33.shpr3 & ~M33_SHPR3_PRI_14_3_MASK ) 
		| M33_SHPR3_PRI_14_3(0);
	m33.syst_csr= M33_SYST_CSR_CLKSOURCE(0) 
		| M33_SYST_CSR_ENABLE_MASK 
		| M33_SYST_CSR_TICKINT(0);
}
_Bool systick_has_fired()
{
	return m33.syst_csr & M33_SYST_CSR_COUNTFLAG_MASK;
}
