
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

#ifndef RP2040_RTC_H
#define RP2040_RTC_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t clkdiv_m1;
		uint32_t setup_0;
		uint32_t setup_1;
		uint32_t ctrl;
		uint32_t irq_setup_0;
		uint32_t irq_setup_1;
		uint32_t rtc_1;
		uint32_t rtc_0;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1012];
		uint32_t xor_clkdiv_m1;
		uint32_t xor_setup_0;
		uint32_t xor_setup_1;
		uint32_t xor_ctrl;
		uint32_t xor_irq_setup_0;
		uint32_t xor_irq_setup_1;
		uint32_t xor_rtc_1;
		uint32_t xor_rtc_0;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1012];
		uint32_t set_clkdiv_m1;
		uint32_t set_setup_0;
		uint32_t set_setup_1;
		uint32_t set_ctrl;
		uint32_t set_irq_setup_0;
		uint32_t set_irq_setup_1;
		uint32_t set_rtc_1;
		uint32_t set_rtc_0;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1012];
		uint32_t clr_clkdiv_m1;
		uint32_t clr_setup_0;
		uint32_t clr_setup_1;
		uint32_t clr_ctrl;
		uint32_t clr_irq_setup_0;
		uint32_t clr_irq_setup_1;
		uint32_t clr_rtc_1;
		uint32_t clr_rtc_0;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1012];
} RTC_REG_BLOCKS;

#define rtc ((RTC_REG_BLOCKS volatile *)0x4005c000)

/*CLKDIV_M1 Register macros*/


/*SETUP_0 Register macros*/

#define RTC_SETUP_0_YEAR(v) (((v)&0xfff)<<12)
#define RTC_SETUP_0_YEAR_MASK RTC_SETUP_0_YEAR(ALL1)
#define RTC_SETUP_0_MONTH(v) (((v)&0xf)<<8)
#define RTC_SETUP_0_MONTH_MASK RTC_SETUP_0_MONTH(ALL1)
#define RTC_SETUP_0_DAY(v) (((v)&0x1f)<<0)
#define RTC_SETUP_0_DAY_MASK RTC_SETUP_0_DAY(ALL1)

/*SETUP_1 Register macros*/

#define RTC_SETUP_1_DOTW(v) (((v)&0x7)<<24)
#define RTC_SETUP_1_DOTW_MASK RTC_SETUP_1_DOTW(ALL1)
#define RTC_SETUP_1_HOUR(v) (((v)&0x1f)<<16)
#define RTC_SETUP_1_HOUR_MASK RTC_SETUP_1_HOUR(ALL1)
#define RTC_SETUP_1_MIN(v) (((v)&0x3f)<<8)
#define RTC_SETUP_1_MIN_MASK RTC_SETUP_1_MIN(ALL1)
#define RTC_SETUP_1_SEC(v) (((v)&0x3f)<<0)
#define RTC_SETUP_1_SEC_MASK RTC_SETUP_1_SEC(ALL1)

/*CTRL Register macros*/

#define RTC_CTRL_FORCE_NOTLEAPYEAR(v) (((v)&0x1)<<8)
#define RTC_CTRL_FORCE_NOTLEAPYEAR_MASK RTC_CTRL_FORCE_NOTLEAPYEAR(ALL1)
#define RTC_CTRL_LOAD(v) (((v)&0x1)<<4)
#define RTC_CTRL_LOAD_MASK RTC_CTRL_LOAD(ALL1)
#define RTC_CTRL_RTC_ACTIVE(v) (((v)&0x1)<<1)
#define RTC_CTRL_RTC_ACTIVE_MASK RTC_CTRL_RTC_ACTIVE(ALL1)
#define RTC_CTRL_RTC_ENABLE(v) (((v)&0x1)<<0)
#define RTC_CTRL_RTC_ENABLE_MASK RTC_CTRL_RTC_ENABLE(ALL1)

/*IRQ_SETUP_0 Register macros*/

#define RTC_IRQ_SETUP_0_MATCH_ACTIVE(v) (((v)&0x1)<<29)
#define RTC_IRQ_SETUP_0_MATCH_ACTIVE_MASK RTC_IRQ_SETUP_0_MATCH_ACTIVE(ALL1)
#define RTC_IRQ_SETUP_0_MATCH_ENA(v) (((v)&0x1)<<28)
#define RTC_IRQ_SETUP_0_MATCH_ENA_MASK RTC_IRQ_SETUP_0_MATCH_ENA(ALL1)
#define RTC_IRQ_SETUP_0_YEAR_ENA(v) (((v)&0x1)<<26)
#define RTC_IRQ_SETUP_0_YEAR_ENA_MASK RTC_IRQ_SETUP_0_YEAR_ENA(ALL1)
#define RTC_IRQ_SETUP_0_MONTH_ENA(v) (((v)&0x1)<<25)
#define RTC_IRQ_SETUP_0_MONTH_ENA_MASK RTC_IRQ_SETUP_0_MONTH_ENA(ALL1)
#define RTC_IRQ_SETUP_0_DAY_ENA(v) (((v)&0x1)<<24)
#define RTC_IRQ_SETUP_0_DAY_ENA_MASK RTC_IRQ_SETUP_0_DAY_ENA(ALL1)
#define RTC_IRQ_SETUP_0_YEAR(v) (((v)&0xfff)<<12)
#define RTC_IRQ_SETUP_0_YEAR_MASK RTC_IRQ_SETUP_0_YEAR(ALL1)
#define RTC_IRQ_SETUP_0_MONTH(v) (((v)&0xf)<<8)
#define RTC_IRQ_SETUP_0_MONTH_MASK RTC_IRQ_SETUP_0_MONTH(ALL1)
#define RTC_IRQ_SETUP_0_DAY(v) (((v)&0x1f)<<0)
#define RTC_IRQ_SETUP_0_DAY_MASK RTC_IRQ_SETUP_0_DAY(ALL1)

/*IRQ_SETUP_1 Register macros*/

#define RTC_IRQ_SETUP_1_DOTW_ENA(v) (((v)&0x1)<<31)
#define RTC_IRQ_SETUP_1_DOTW_ENA_MASK RTC_IRQ_SETUP_1_DOTW_ENA(ALL1)
#define RTC_IRQ_SETUP_1_HOUR_ENA(v) (((v)&0x1)<<30)
#define RTC_IRQ_SETUP_1_HOUR_ENA_MASK RTC_IRQ_SETUP_1_HOUR_ENA(ALL1)
#define RTC_IRQ_SETUP_1_MIN_ENA(v) (((v)&0x1)<<29)
#define RTC_IRQ_SETUP_1_MIN_ENA_MASK RTC_IRQ_SETUP_1_MIN_ENA(ALL1)
#define RTC_IRQ_SETUP_1_SEC_ENA(v) (((v)&0x1)<<28)
#define RTC_IRQ_SETUP_1_SEC_ENA_MASK RTC_IRQ_SETUP_1_SEC_ENA(ALL1)
#define RTC_IRQ_SETUP_1_DOTW(v) (((v)&0x7)<<24)
#define RTC_IRQ_SETUP_1_DOTW_MASK RTC_IRQ_SETUP_1_DOTW(ALL1)
#define RTC_IRQ_SETUP_1_HOUR(v) (((v)&0x1f)<<16)
#define RTC_IRQ_SETUP_1_HOUR_MASK RTC_IRQ_SETUP_1_HOUR(ALL1)
#define RTC_IRQ_SETUP_1_MIN(v) (((v)&0x3f)<<8)
#define RTC_IRQ_SETUP_1_MIN_MASK RTC_IRQ_SETUP_1_MIN(ALL1)
#define RTC_IRQ_SETUP_1_SEC(v) (((v)&0x3f)<<0)
#define RTC_IRQ_SETUP_1_SEC_MASK RTC_IRQ_SETUP_1_SEC(ALL1)

/*RTC_1 Register macros*/

#define RTC_RTC_1_YEAR(v) (((v)&0xfff)<<12)
#define RTC_RTC_1_YEAR_MASK RTC_RTC_1_YEAR(ALL1)
#define RTC_RTC_1_MONTH(v) (((v)&0xf)<<8)
#define RTC_RTC_1_MONTH_MASK RTC_RTC_1_MONTH(ALL1)
#define RTC_RTC_1_DAY(v) (((v)&0x1f)<<0)
#define RTC_RTC_1_DAY_MASK RTC_RTC_1_DAY(ALL1)

/*RTC_0 Register macros*/

#define RTC_RTC_0_DOTW(v) (((v)&0x7)<<24)
#define RTC_RTC_0_DOTW_MASK RTC_RTC_0_DOTW(ALL1)
#define RTC_RTC_0_HOUR(v) (((v)&0x1f)<<16)
#define RTC_RTC_0_HOUR_MASK RTC_RTC_0_HOUR(ALL1)
#define RTC_RTC_0_MIN(v) (((v)&0x3f)<<8)
#define RTC_RTC_0_MIN_MASK RTC_RTC_0_MIN(ALL1)
#define RTC_RTC_0_SEC(v) (((v)&0x3f)<<0)
#define RTC_RTC_0_SEC_MASK RTC_RTC_0_SEC(ALL1)

/*INTR Register macros*/

#define RTC_INTR_RTC(v) (((v)&0x1)<<0)
#define RTC_INTR_RTC_MASK RTC_INTR_RTC(ALL1)

/*INTE Register macros*/

#define RTC_INTE_RTC(v) (((v)&0x1)<<0)
#define RTC_INTE_RTC_MASK RTC_INTE_RTC(ALL1)

/*INTF Register macros*/

#define RTC_INTF_RTC(v) (((v)&0x1)<<0)
#define RTC_INTF_RTC_MASK RTC_INTF_RTC(ALL1)

/*INTS Register macros*/

#define RTC_INTS_RTC(v) (((v)&0x1)<<0)
#define RTC_INTS_RTC_MASK RTC_INTS_RTC(ALL1)

#endif