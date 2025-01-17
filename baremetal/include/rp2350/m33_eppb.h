
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

#ifndef RP2350_M33_EPPB_H
#define RP2350_M33_EPPB_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t nmi_mask0;
		uint32_t nmi_mask1;
		uint32_t sleepctrl;
		uint32_t RSVD0[1021];
		uint32_t xor_nmi_mask0;
		uint32_t xor_nmi_mask1;
		uint32_t xor_sleepctrl;
		uint32_t RSVDxor_0[1021];
		uint32_t set_nmi_mask0;
		uint32_t set_nmi_mask1;
		uint32_t set_sleepctrl;
		uint32_t RSVDset_0[1021];
		uint32_t clr_nmi_mask0;
		uint32_t clr_nmi_mask1;
		uint32_t clr_sleepctrl;
		uint32_t RSVDclr_0[1021];
} M33_EPPB_REG_BLOCKS;

#define m33_eppb (*(M33_EPPB_REG_BLOCKS volatile *)0xe0000000)

/*NMI_MASK0 Register macros*/


/*NMI_MASK1 Register macros*/


/*SLEEPCTRL Register macros*/

#define M33_EPPB_SLEEPCTRL_WICENACK(v) (((v)&0x1)<<2)
#define M33_EPPB_SLEEPCTRL_WICENACK_MASK M33_EPPB_SLEEPCTRL_WICENACK(ALL1)
#define M33_EPPB_SLEEPCTRL_WICENREQ(v) (((v)&0x1)<<1)
#define M33_EPPB_SLEEPCTRL_WICENREQ_MASK M33_EPPB_SLEEPCTRL_WICENREQ(ALL1)
#define M33_EPPB_SLEEPCTRL_LIGHT_SLEEP(v) (((v)&0x1)<<0)
#define M33_EPPB_SLEEPCTRL_LIGHT_SLEEP_MASK M33_EPPB_SLEEPCTRL_LIGHT_SLEEP(ALL1)

#endif
