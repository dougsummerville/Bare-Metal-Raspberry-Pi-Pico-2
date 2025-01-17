
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

#ifndef RP2350_ROSC_H
#define RP2350_ROSC_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t freqa;
		uint32_t freqb;
		uint32_t random;
		uint32_t dormant;
		uint32_t div;
		uint32_t phase;
		uint32_t status;
		uint32_t randombit;
		uint32_t count;
		uint32_t RSVD0[1014];
		uint32_t xor_ctrl;
		uint32_t xor_freqa;
		uint32_t xor_freqb;
		uint32_t xor_random;
		uint32_t xor_dormant;
		uint32_t xor_div;
		uint32_t xor_phase;
		uint32_t xor_status;
		uint32_t xor_randombit;
		uint32_t xor_count;
		uint32_t RSVDxor_0[1014];
		uint32_t set_ctrl;
		uint32_t set_freqa;
		uint32_t set_freqb;
		uint32_t set_random;
		uint32_t set_dormant;
		uint32_t set_div;
		uint32_t set_phase;
		uint32_t set_status;
		uint32_t set_randombit;
		uint32_t set_count;
		uint32_t RSVDset_0[1014];
		uint32_t clr_ctrl;
		uint32_t clr_freqa;
		uint32_t clr_freqb;
		uint32_t clr_random;
		uint32_t clr_dormant;
		uint32_t clr_div;
		uint32_t clr_phase;
		uint32_t clr_status;
		uint32_t clr_randombit;
		uint32_t clr_count;
		uint32_t RSVDclr_0[1014];
} ROSC_REG_BLOCKS;

#define rosc (*(ROSC_REG_BLOCKS volatile *)0x400e8000)

/*CTRL Register macros*/

#define ROSC_CTRL_ENABLE(v) (((v)&0xfff)<<12)
#define ROSC_CTRL_ENABLE_MASK ROSC_CTRL_ENABLE(ALL1)
#define ROSC_CTRL_FREQ_RANGE(v) (((v)&0xfff)<<0)
#define ROSC_CTRL_FREQ_RANGE_MASK ROSC_CTRL_FREQ_RANGE(ALL1)

/*FREQA Register macros*/

#define ROSC_FREQA_PASSWD(v) (((v)&0xffff)<<16)
#define ROSC_FREQA_PASSWD_MASK ROSC_FREQA_PASSWD(ALL1)
#define ROSC_FREQA_DS3(v) (((v)&0x7)<<12)
#define ROSC_FREQA_DS3_MASK ROSC_FREQA_DS3(ALL1)
#define ROSC_FREQA_DS2(v) (((v)&0x7)<<8)
#define ROSC_FREQA_DS2_MASK ROSC_FREQA_DS2(ALL1)
#define ROSC_FREQA_DS1_RANDOM(v) (((v)&0x1)<<7)
#define ROSC_FREQA_DS1_RANDOM_MASK ROSC_FREQA_DS1_RANDOM(ALL1)
#define ROSC_FREQA_DS1(v) (((v)&0x7)<<4)
#define ROSC_FREQA_DS1_MASK ROSC_FREQA_DS1(ALL1)
#define ROSC_FREQA_DS0_RANDOM(v) (((v)&0x1)<<3)
#define ROSC_FREQA_DS0_RANDOM_MASK ROSC_FREQA_DS0_RANDOM(ALL1)
#define ROSC_FREQA_DS0(v) (((v)&0x7)<<0)
#define ROSC_FREQA_DS0_MASK ROSC_FREQA_DS0(ALL1)

/*FREQB Register macros*/

#define ROSC_FREQB_PASSWD(v) (((v)&0xffff)<<16)
#define ROSC_FREQB_PASSWD_MASK ROSC_FREQB_PASSWD(ALL1)
#define ROSC_FREQB_DS7(v) (((v)&0x7)<<12)
#define ROSC_FREQB_DS7_MASK ROSC_FREQB_DS7(ALL1)
#define ROSC_FREQB_DS6(v) (((v)&0x7)<<8)
#define ROSC_FREQB_DS6_MASK ROSC_FREQB_DS6(ALL1)
#define ROSC_FREQB_DS5(v) (((v)&0x7)<<4)
#define ROSC_FREQB_DS5_MASK ROSC_FREQB_DS5(ALL1)
#define ROSC_FREQB_DS4(v) (((v)&0x7)<<0)
#define ROSC_FREQB_DS4_MASK ROSC_FREQB_DS4(ALL1)

/*RANDOM Register macros*/

#define ROSC_RANDOM_SEED(v) (((v)&0xffffffff)<<0)
#define ROSC_RANDOM_SEED_MASK ROSC_RANDOM_SEED(ALL1)

/*DORMANT Register macros*/


/*DIV Register macros*/


/*PHASE Register macros*/

#define ROSC_PHASE_PASSWD(v) (((v)&0xff)<<4)
#define ROSC_PHASE_PASSWD_MASK ROSC_PHASE_PASSWD(ALL1)
#define ROSC_PHASE_ENABLE(v) (((v)&0x1)<<3)
#define ROSC_PHASE_ENABLE_MASK ROSC_PHASE_ENABLE(ALL1)
#define ROSC_PHASE_FLIP(v) (((v)&0x1)<<2)
#define ROSC_PHASE_FLIP_MASK ROSC_PHASE_FLIP(ALL1)
#define ROSC_PHASE_SHIFT(v) (((v)&0x3)<<0)
#define ROSC_PHASE_SHIFT_MASK ROSC_PHASE_SHIFT(ALL1)

/*STATUS Register macros*/

#define ROSC_STATUS_STABLE(v) (((v)&0x1)<<31)
#define ROSC_STATUS_STABLE_MASK ROSC_STATUS_STABLE(ALL1)
#define ROSC_STATUS_BADWRITE(v) (((v)&0x1)<<24)
#define ROSC_STATUS_BADWRITE_MASK ROSC_STATUS_BADWRITE(ALL1)
#define ROSC_STATUS_DIV_RUNNING(v) (((v)&0x1)<<16)
#define ROSC_STATUS_DIV_RUNNING_MASK ROSC_STATUS_DIV_RUNNING(ALL1)
#define ROSC_STATUS_ENABLED(v) (((v)&0x1)<<12)
#define ROSC_STATUS_ENABLED_MASK ROSC_STATUS_ENABLED(ALL1)

/*RANDOMBIT Register macros*/


/*COUNT Register macros*/


#endif
