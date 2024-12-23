#include "systick.h"
#include <stdbool.h>
#include <stdint.h>
#include <rp2350/m33.h>
#include <rp2350/ticks.h>
#include <interrupt.h>

#define SYSTICK_FREQ 1000
#define SYSTICK_TOP (1000000/SYSTICK_FREQ)

static volatile _Bool systick_fired_flag=false;

void configure_systick(uint32_t systick_period_us)
{
	ticks -> set_proc0_ctrl = TICKS_PROC0_CTRL_ENABLE_MASK;
	ticks -> proc0_cycles = 1;
	m33->syst_rvr= 1000000/systick_period_us;
	m33->syst_cvr=0;
	m33->shpr3 = (m33->shpr3 & ~M33_SHPR3_PRI_14_3_MASK ) 
		| M33_SHPR3_PRI_14_3(0);
	m33->syst_csr= M33_SYST_CSR_CLKSOURCE(0) 
		| M33_SYST_CSR_ENABLE_MASK 
		| M33_SYST_CSR_TICKINT_MASK;
}
_Bool systick_has_fired()
{
	uint32_t primask=get_primask();
	disable_irq();
	_Bool retval=systick_fired_flag;
	systick_fired_flag=false;
	set_primask(primask);
	return retval;
}
void SYSTICK_Handler() 
{
	systick_fired_flag=true;
}
