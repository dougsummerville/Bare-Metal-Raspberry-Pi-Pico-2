
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

#ifndef RP2350_XOSC_H
#define RP2350_XOSC_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t status;
		uint32_t dormant;
		uint32_t startup;
		uint32_t count;
		uint32_t RSVD0[1019];
		uint32_t xor_ctrl;
		uint32_t xor_status;
		uint32_t xor_dormant;
		uint32_t xor_startup;
		uint32_t xor_count;
		uint32_t RSVDxor_0[1019];
		uint32_t set_ctrl;
		uint32_t set_status;
		uint32_t set_dormant;
		uint32_t set_startup;
		uint32_t set_count;
		uint32_t RSVDset_0[1019];
		uint32_t clr_ctrl;
		uint32_t clr_status;
		uint32_t clr_dormant;
		uint32_t clr_startup;
		uint32_t clr_count;
		uint32_t RSVDclr_0[1019];
} XOSC_REG_BLOCKS;

#define xosc (*(XOSC_REG_BLOCKS volatile *)0x40048000)

/*CTRL Register macros*/

#define XOSC_CTRL_ENABLE(v) (((v)&0xfff)<<12)
#define XOSC_CTRL_ENABLE_MASK XOSC_CTRL_ENABLE(ALL1)
#define XOSC_CTRL_FREQ_RANGE(v) (((v)&0xfff)<<0)
#define XOSC_CTRL_FREQ_RANGE_MASK XOSC_CTRL_FREQ_RANGE(ALL1)

/*STATUS Register macros*/

#define XOSC_STATUS_STABLE(v) (((v)&0x1)<<31)
#define XOSC_STATUS_STABLE_MASK XOSC_STATUS_STABLE(ALL1)
#define XOSC_STATUS_BADWRITE(v) (((v)&0x1)<<24)
#define XOSC_STATUS_BADWRITE_MASK XOSC_STATUS_BADWRITE(ALL1)
#define XOSC_STATUS_ENABLED(v) (((v)&0x1)<<12)
#define XOSC_STATUS_ENABLED_MASK XOSC_STATUS_ENABLED(ALL1)
#define XOSC_STATUS_FREQ_RANGE(v) (((v)&0x3)<<0)
#define XOSC_STATUS_FREQ_RANGE_MASK XOSC_STATUS_FREQ_RANGE(ALL1)

/*DORMANT Register macros*/


/*STARTUP Register macros*/

#define XOSC_STARTUP_X4(v) (((v)&0x1)<<20)
#define XOSC_STARTUP_X4_MASK XOSC_STARTUP_X4(ALL1)
#define XOSC_STARTUP_DELAY(v) (((v)&0x3fff)<<0)
#define XOSC_STARTUP_DELAY_MASK XOSC_STARTUP_DELAY(ALL1)

/*COUNT Register macros*/


#endif
