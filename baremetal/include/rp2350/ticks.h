
/* Copyright (c) 2024-2025 Douglas H. Summerville (dsummer@binghamton.edu) 
 *
 * Created from scraped data which is Copyright (c) 2024 Raspberry Pi
 * (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef RP2350_TICKS_H
#define RP2350_TICKS_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t proc0_ctrl;
		uint32_t proc0_cycles;
		uint32_t proc0_count;
		uint32_t proc1_ctrl;
		uint32_t proc1_cycles;
		uint32_t proc1_count;
		uint32_t timer0_ctrl;
		uint32_t timer0_cycles;
		uint32_t timer0_count;
		uint32_t timer1_ctrl;
		uint32_t timer1_cycles;
		uint32_t timer1_count;
		uint32_t watchdog_ctrl;
		uint32_t watchdog_cycles;
		uint32_t watchdog_count;
		uint32_t riscv_ctrl;
		uint32_t riscv_cycles;
		uint32_t riscv_count;
		uint32_t RSVD0[1006];
		uint32_t xor_proc0_ctrl;
		uint32_t xor_proc0_cycles;
		uint32_t xor_proc0_count;
		uint32_t xor_proc1_ctrl;
		uint32_t xor_proc1_cycles;
		uint32_t xor_proc1_count;
		uint32_t xor_timer0_ctrl;
		uint32_t xor_timer0_cycles;
		uint32_t xor_timer0_count;
		uint32_t xor_timer1_ctrl;
		uint32_t xor_timer1_cycles;
		uint32_t xor_timer1_count;
		uint32_t xor_watchdog_ctrl;
		uint32_t xor_watchdog_cycles;
		uint32_t xor_watchdog_count;
		uint32_t xor_riscv_ctrl;
		uint32_t xor_riscv_cycles;
		uint32_t xor_riscv_count;
		uint32_t RSVDxor_0[1006];
		uint32_t set_proc0_ctrl;
		uint32_t set_proc0_cycles;
		uint32_t set_proc0_count;
		uint32_t set_proc1_ctrl;
		uint32_t set_proc1_cycles;
		uint32_t set_proc1_count;
		uint32_t set_timer0_ctrl;
		uint32_t set_timer0_cycles;
		uint32_t set_timer0_count;
		uint32_t set_timer1_ctrl;
		uint32_t set_timer1_cycles;
		uint32_t set_timer1_count;
		uint32_t set_watchdog_ctrl;
		uint32_t set_watchdog_cycles;
		uint32_t set_watchdog_count;
		uint32_t set_riscv_ctrl;
		uint32_t set_riscv_cycles;
		uint32_t set_riscv_count;
		uint32_t RSVDset_0[1006];
		uint32_t clr_proc0_ctrl;
		uint32_t clr_proc0_cycles;
		uint32_t clr_proc0_count;
		uint32_t clr_proc1_ctrl;
		uint32_t clr_proc1_cycles;
		uint32_t clr_proc1_count;
		uint32_t clr_timer0_ctrl;
		uint32_t clr_timer0_cycles;
		uint32_t clr_timer0_count;
		uint32_t clr_timer1_ctrl;
		uint32_t clr_timer1_cycles;
		uint32_t clr_timer1_count;
		uint32_t clr_watchdog_ctrl;
		uint32_t clr_watchdog_cycles;
		uint32_t clr_watchdog_count;
		uint32_t clr_riscv_ctrl;
		uint32_t clr_riscv_cycles;
		uint32_t clr_riscv_count;
		uint32_t RSVDclr_0[1006];
} TICKS_REG_BLOCKS;

#define ticks (*(TICKS_REG_BLOCKS volatile *)0x40108000)

/*PROC0_CTRL Register macros*/

#define TICKS_PROC0_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_PROC0_CTRL_RUNNING_MASK TICKS_PROC0_CTRL_RUNNING(ALL1)
#define TICKS_PROC0_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_PROC0_CTRL_ENABLE_MASK TICKS_PROC0_CTRL_ENABLE(ALL1)

/*PROC0_CYCLES Register macros*/


/*PROC0_COUNT Register macros*/


/*PROC1_CTRL Register macros*/

#define TICKS_PROC1_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_PROC1_CTRL_RUNNING_MASK TICKS_PROC1_CTRL_RUNNING(ALL1)
#define TICKS_PROC1_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_PROC1_CTRL_ENABLE_MASK TICKS_PROC1_CTRL_ENABLE(ALL1)

/*PROC1_CYCLES Register macros*/


/*PROC1_COUNT Register macros*/


/*TIMER0_CTRL Register macros*/

#define TICKS_TIMER0_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_TIMER0_CTRL_RUNNING_MASK TICKS_TIMER0_CTRL_RUNNING(ALL1)
#define TICKS_TIMER0_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_TIMER0_CTRL_ENABLE_MASK TICKS_TIMER0_CTRL_ENABLE(ALL1)

/*TIMER0_CYCLES Register macros*/


/*TIMER0_COUNT Register macros*/


/*TIMER1_CTRL Register macros*/

#define TICKS_TIMER1_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_TIMER1_CTRL_RUNNING_MASK TICKS_TIMER1_CTRL_RUNNING(ALL1)
#define TICKS_TIMER1_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_TIMER1_CTRL_ENABLE_MASK TICKS_TIMER1_CTRL_ENABLE(ALL1)

/*TIMER1_CYCLES Register macros*/


/*TIMER1_COUNT Register macros*/


/*WATCHDOG_CTRL Register macros*/

#define TICKS_WATCHDOG_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_WATCHDOG_CTRL_RUNNING_MASK TICKS_WATCHDOG_CTRL_RUNNING(ALL1)
#define TICKS_WATCHDOG_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_WATCHDOG_CTRL_ENABLE_MASK TICKS_WATCHDOG_CTRL_ENABLE(ALL1)

/*WATCHDOG_CYCLES Register macros*/


/*WATCHDOG_COUNT Register macros*/


/*RISCV_CTRL Register macros*/

#define TICKS_RISCV_CTRL_RUNNING(v) (((v)&0x1)<<1)
#define TICKS_RISCV_CTRL_RUNNING_MASK TICKS_RISCV_CTRL_RUNNING(ALL1)
#define TICKS_RISCV_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define TICKS_RISCV_CTRL_ENABLE_MASK TICKS_RISCV_CTRL_ENABLE(ALL1)

/*RISCV_CYCLES Register macros*/


/*RISCV_COUNT Register macros*/


#endif
