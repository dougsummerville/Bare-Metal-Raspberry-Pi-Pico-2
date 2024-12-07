
/* Copyright (c) 2022-2025 Douglas H. Summerville (dsummer@binghamton.edu) 
 *
 * Created from scraped data which is Copyright (c) 2022 Raspberry Pi
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

#ifndef RP2040_TIMER_H
#define RP2040_TIMER_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t timehw;
		uint32_t timelw;
		uint32_t timehr;
		uint32_t timelr;
		uint32_t alarm0;
		uint32_t alarm1;
		uint32_t alarm2;
		uint32_t alarm3;
		uint32_t armed;
		uint32_t timerawh;
		uint32_t timerawl;
		uint32_t dbgpause;
		uint32_t pause;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1007];
		uint32_t xor_timehw;
		uint32_t xor_timelw;
		uint32_t xor_timehr;
		uint32_t xor_timelr;
		uint32_t xor_alarm0;
		uint32_t xor_alarm1;
		uint32_t xor_alarm2;
		uint32_t xor_alarm3;
		uint32_t xor_armed;
		uint32_t xor_timerawh;
		uint32_t xor_timerawl;
		uint32_t xor_dbgpause;
		uint32_t xor_pause;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1007];
		uint32_t set_timehw;
		uint32_t set_timelw;
		uint32_t set_timehr;
		uint32_t set_timelr;
		uint32_t set_alarm0;
		uint32_t set_alarm1;
		uint32_t set_alarm2;
		uint32_t set_alarm3;
		uint32_t set_armed;
		uint32_t set_timerawh;
		uint32_t set_timerawl;
		uint32_t set_dbgpause;
		uint32_t set_pause;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1007];
		uint32_t clr_timehw;
		uint32_t clr_timelw;
		uint32_t clr_timehr;
		uint32_t clr_timelr;
		uint32_t clr_alarm0;
		uint32_t clr_alarm1;
		uint32_t clr_alarm2;
		uint32_t clr_alarm3;
		uint32_t clr_armed;
		uint32_t clr_timerawh;
		uint32_t clr_timerawl;
		uint32_t clr_dbgpause;
		uint32_t clr_pause;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1007];
} TIMER_REG_BLOCKS;

#define timer ((TIMER_REG_BLOCKS volatile *)0x40054000)

/*TIMEHW Register macros*/


/*TIMELW Register macros*/


/*TIMEHR Register macros*/


/*TIMELR Register macros*/


/*ALARM0 Register macros*/


/*ALARM1 Register macros*/


/*ALARM2 Register macros*/


/*ALARM3 Register macros*/


/*ARMED Register macros*/


/*TIMERAWH Register macros*/


/*TIMERAWL Register macros*/


/*DBGPAUSE Register macros*/

#define TIMER_DBGPAUSE_DBG1(v) (((v)&0x1)<<2)
#define TIMER_DBGPAUSE_DBG1_MASK TIMER_DBGPAUSE_DBG1(ALL1)
#define TIMER_DBGPAUSE_DBG0(v) (((v)&0x1)<<1)
#define TIMER_DBGPAUSE_DBG0_MASK TIMER_DBGPAUSE_DBG0(ALL1)

/*PAUSE Register macros*/


/*INTR Register macros*/

#define TIMER_INTR_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER_INTR_ALARM_3_MASK TIMER_INTR_ALARM_3(ALL1)
#define TIMER_INTR_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER_INTR_ALARM_2_MASK TIMER_INTR_ALARM_2(ALL1)
#define TIMER_INTR_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER_INTR_ALARM_1_MASK TIMER_INTR_ALARM_1(ALL1)
#define TIMER_INTR_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER_INTR_ALARM_0_MASK TIMER_INTR_ALARM_0(ALL1)

/*INTE Register macros*/

#define TIMER_INTE_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER_INTE_ALARM_3_MASK TIMER_INTE_ALARM_3(ALL1)
#define TIMER_INTE_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER_INTE_ALARM_2_MASK TIMER_INTE_ALARM_2(ALL1)
#define TIMER_INTE_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER_INTE_ALARM_1_MASK TIMER_INTE_ALARM_1(ALL1)
#define TIMER_INTE_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER_INTE_ALARM_0_MASK TIMER_INTE_ALARM_0(ALL1)

/*INTF Register macros*/

#define TIMER_INTF_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER_INTF_ALARM_3_MASK TIMER_INTF_ALARM_3(ALL1)
#define TIMER_INTF_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER_INTF_ALARM_2_MASK TIMER_INTF_ALARM_2(ALL1)
#define TIMER_INTF_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER_INTF_ALARM_1_MASK TIMER_INTF_ALARM_1(ALL1)
#define TIMER_INTF_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER_INTF_ALARM_0_MASK TIMER_INTF_ALARM_0(ALL1)

/*INTS Register macros*/

#define TIMER_INTS_ALARM_3(v) (((v)&0x1)<<3)
#define TIMER_INTS_ALARM_3_MASK TIMER_INTS_ALARM_3(ALL1)
#define TIMER_INTS_ALARM_2(v) (((v)&0x1)<<2)
#define TIMER_INTS_ALARM_2_MASK TIMER_INTS_ALARM_2(ALL1)
#define TIMER_INTS_ALARM_1(v) (((v)&0x1)<<1)
#define TIMER_INTS_ALARM_1_MASK TIMER_INTS_ALARM_1(ALL1)
#define TIMER_INTS_ALARM_0(v) (((v)&0x1)<<0)
#define TIMER_INTS_ALARM_0_MASK TIMER_INTS_ALARM_0(ALL1)

#endif