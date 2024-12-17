/* Baremetal startup code for the Raspberry Pi Pico 2
 *
 * Copyright (c) 2022-2025 Douglas H. Summerville, Binghamton University 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <rp2350/clocks.h>
#include <rp2350/m33.h>
#include <rp2350/pll.h>
#include <rp2350/resets.h>
#include <rp2350/xosc.h>

#include <stdint.h>

//Segment Locations Declared in Linker Script
extern uint32_t __system_entry_point;
extern uint32_t __stack_top;
extern uint32_t __block_loop_link_forward, __block_loop_link_reverse;
extern uint32_t __bss, __ebss;
extern uint32_t __data, __edata, __etext;

//Functions provided
static void config_sys_clock();

//Functions needed
extern void main();

void _crt0(){
	config_sys_clock();
	//clear BSS
	uint32_t *p = &__bss;
	while( p < &__ebss)
		*p++ = 0;
	uint32_t *to = &__data;
	uint32_t *from = &__etext;
	while( to < &__edata )
		*to++ = *from++;
	main();
}
static void config_sys_clock()
{
	//disable RESUS since it's meant for debugging
	clocks -> clk_sys_resus_ctrl = 0;

	//Turn on the XOSC and wait for it to stabilize
	xosc -> ctrl =  XOSC_CTRL_FREQ_RANGE(0xaa0);	
	xosc -> ctrl = XOSC_CTRL_ENABLE(0xfab) ;	
	while( ((xosc -> status) & XOSC_STATUS_STABLE_MASK) == 0 )
		continue;
	

	//Reset PLL so we can (re)configure
	resets -> set_reset  =  RESETS_RESET_PLL_SYS_MASK;
	resets -> clr_reset  =  RESETS_RESET_PLL_SYS_MASK;
	while(!(resets -> reset_done & RESETS_RESET_DONE_PLL_SYS_MASK))
		continue;

	//switch the glitchless mux to ref
	clocks -> clr_clk_sys_ctrl =  CLOCKS_CLK_SYS_CTRL_SRC_MASK  ;
	//poll the SELECTED register until the switch is completed
	while( !(clocks -> clk_sys_selected ) )
		continue;
	//config SYS PLL for 150 MHz CPU clock
	pll_sys -> cs = PLL_SYS_CS_REFDIV(1);
	pll_sys -> fbdiv_int = 125; //12MHz x 125 FCO = 1500 MHz
	//disable power save bits to start PLL
	pll_sys -> clr_pwr = PLL_SYS_PWR_PD_MASK | PLL_SYS_PWR_VCOPD_MASK;
	//wait for PLL to lock
	while( !((pll_sys->cs) & PLL_SYS_CS_LOCK_MASK))
		continue;
	//config post dividers for divide-by-5-by-2, which gets PLL ouput
	//to 1500/5/2 = 150 MHz
	pll_sys -> prim  =  PLL_SYS_PRIM_POSTDIV1(5) | PLL_SYS_PRIM_POSTDIV2(2);
	pll_sys -> clr_pwr = PLL_SYS_PWR_POSTDIVPD_MASK;
	

	//change the auxiliary mux select control
	clocks -> clr_clk_sys_ctrl = CLOCKS_CLK_SYS_CTRL_AUXSRC_MASK;
	//switch the glitchless mux back to the aux mux
	clocks -> set_clk_sys_ctrl  = CLOCKS_CLK_SYS_CTRL_SRC_MASK;
	//wait for good measure
	while( !(clocks -> clk_sys_selected ) )
		continue;
	//Change divider to 1.0
	clocks -> clk_sys_div  =  CLOCKS_CLK_SYS_DIV_INT(1);

}
/*Environment Initialization*/
/*
void __attribute__ ((naked,noreturn,section (".system_startup_code")))
_reset_init(void)
{
	//having the linker calculate the VTOR value saves instructions here
	//because,unfortunately,linker symbols are not constants at compile
	//time so we can't get the preprocessor to do the math
	m33 -> vtor = (uint32_t)&__vector_table_offset_vtor;
	
	//initialize stack from vector table at offset 0
	asm("mov sp,%0"::"r"(__vector_table_offset));


	//init clock
	//config_sys_clock();

	//reset all peripherals except pll_sys
	resets->set_reset = 0x01ffefff;

	//clear BSS
	uint32_t *p = &__bss_start;
	while( p < &__bss_end )
		*p++ = 0;
	//call main
	main();
	//don't expect main to return; if it does power down CPU
	while(1)
		asm("WFI");
}
static void config_sys_clock()
{
	//Turn on the XOSC and wait for it to stabilize
	xosc -> ctrl = XOSC_CTRL_ENABLE(0xfab);	
	while( ((xosc -> status) & XOSC_STATUS_STABLE_MASK) == 0 )
		continue;
	
	//disable RESUS since it's meant for debugging
	clocks -> clk_sys_resus_ctrl = 0;

	//Reset PLL so we can (re)configure
	resets -> set_reset  =  RESETS_RESET_PLL_SYS_MASK;
	resets -> clr_reset  =  RESETS_RESET_PLL_SYS_MASK;
	while(!(resets -> reset_done & RESETS_RESET_DONE_PLL_SYS_MASK))
		continue;

	//config SYS PLL for 125 MHz CPU clock
	pll_sys -> cs = PLL_SYS_CS_REFDIV(1);
	pll_sys -> fbdiv_int = 125; //12MHz x 125 FCO = 1596 MHz
	//disable power save bits to start PLL
	pll_sys -> clr_pwr = PLL_SYS_PWR_PD_MASK | PLL_SYS_PWR_VCOPD_MASK;
	//wait for PLL to lock
	while( !((pll_sys->cs) & PLL_SYS_CS_LOCK_MASK))
		continue;
	//config post dividers for divide-by-6-by-2, which gets PLL ouput
	//to 125*12/6/2 = 125 MHz
	pll_sys -> prim  =  PLL_SYS_PRIM_POSTDIV1(6) | PLL_SYS_PRIM_POSTDIV2(2);
	pll_sys -> clr_pwr = PLL_SYS_PWR_POSTDIVPD_MASK;
	
	//switch the glitchless mux to PLL
	clocks -> clr_clk_sys_ctrl = CLOCKS_CLK_SYS_CTRL_SRC_MASK;
	//Change divider to 1.0
	clocks -> clk_sys_div  =  0x00000100;
	//poll the SELECTED register until the switch is completed
	while( !(clocks -> clk_sys_selected ) )
		continue;

	//change the auxiliary mux select control
	clocks -> clr_clk_sys_ctrl = CLOCKS_CLK_SYS_CTRL_AUXSRC_MASK;
	//switch the glitchless mux back to the aux mux
	clocks -> clk_sys_ctrl  |= CLOCKS_CLK_SYS_CTRL_SRC_MASK;
	//wait for good measure
	while( !(clocks -> clk_sys_selected ) )
		continue;

}
*/

//The default ISR to handle errant interrupts
//Just block forever to prevent further damage
