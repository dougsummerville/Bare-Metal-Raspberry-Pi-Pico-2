
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

#ifndef RP2350_WATCHDOG_H
#define RP2350_WATCHDOG_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t load;
		uint32_t reason;
		uint32_t scratch0;
		uint32_t scratch1;
		uint32_t scratch2;
		uint32_t scratch3;
		uint32_t scratch4;
		uint32_t scratch5;
		uint32_t scratch6;
		uint32_t scratch7;
		uint32_t RSVD0[1013];
		uint32_t xor_ctrl;
		uint32_t xor_load;
		uint32_t xor_reason;
		uint32_t xor_scratch0;
		uint32_t xor_scratch1;
		uint32_t xor_scratch2;
		uint32_t xor_scratch3;
		uint32_t xor_scratch4;
		uint32_t xor_scratch5;
		uint32_t xor_scratch6;
		uint32_t xor_scratch7;
		uint32_t RSVDxor_0[1013];
		uint32_t set_ctrl;
		uint32_t set_load;
		uint32_t set_reason;
		uint32_t set_scratch0;
		uint32_t set_scratch1;
		uint32_t set_scratch2;
		uint32_t set_scratch3;
		uint32_t set_scratch4;
		uint32_t set_scratch5;
		uint32_t set_scratch6;
		uint32_t set_scratch7;
		uint32_t RSVDset_0[1013];
		uint32_t clr_ctrl;
		uint32_t clr_load;
		uint32_t clr_reason;
		uint32_t clr_scratch0;
		uint32_t clr_scratch1;
		uint32_t clr_scratch2;
		uint32_t clr_scratch3;
		uint32_t clr_scratch4;
		uint32_t clr_scratch5;
		uint32_t clr_scratch6;
		uint32_t clr_scratch7;
		uint32_t RSVDclr_0[1013];
} WATCHDOG_REG_BLOCKS;

#define watchdog ((WATCHDOG_REG_BLOCKS volatile *)0x400d8000)

/*CTRL Register macros*/

#define WATCHDOG_CTRL_TRIGGER(v) (((v)&0x1)<<31)
#define WATCHDOG_CTRL_TRIGGER_MASK WATCHDOG_CTRL_TRIGGER(ALL1)
#define WATCHDOG_CTRL_ENABLE(v) (((v)&0x1)<<30)
#define WATCHDOG_CTRL_ENABLE_MASK WATCHDOG_CTRL_ENABLE(ALL1)
#define WATCHDOG_CTRL_PAUSE_DBG1(v) (((v)&0x1)<<26)
#define WATCHDOG_CTRL_PAUSE_DBG1_MASK WATCHDOG_CTRL_PAUSE_DBG1(ALL1)
#define WATCHDOG_CTRL_PAUSE_DBG0(v) (((v)&0x1)<<25)
#define WATCHDOG_CTRL_PAUSE_DBG0_MASK WATCHDOG_CTRL_PAUSE_DBG0(ALL1)
#define WATCHDOG_CTRL_PAUSE_JTAG(v) (((v)&0x1)<<24)
#define WATCHDOG_CTRL_PAUSE_JTAG_MASK WATCHDOG_CTRL_PAUSE_JTAG(ALL1)
#define WATCHDOG_CTRL_TIME(v) (((v)&0xffffff)<<0)
#define WATCHDOG_CTRL_TIME_MASK WATCHDOG_CTRL_TIME(ALL1)

/*LOAD Register macros*/


/*REASON Register macros*/

#define WATCHDOG_REASON_FORCE(v) (((v)&0x1)<<1)
#define WATCHDOG_REASON_FORCE_MASK WATCHDOG_REASON_FORCE(ALL1)
#define WATCHDOG_REASON_TIMER(v) (((v)&0x1)<<0)
#define WATCHDOG_REASON_TIMER_MASK WATCHDOG_REASON_TIMER(ALL1)

/*SCRATCH0 Register macros*/


/*SCRATCH1 Register macros*/


/*SCRATCH2 Register macros*/


/*SCRATCH3 Register macros*/


/*SCRATCH4 Register macros*/


/*SCRATCH5 Register macros*/


/*SCRATCH6 Register macros*/


/*SCRATCH7 Register macros*/


#endif