
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

#ifndef RP2350_PLL_H
#define RP2350_PLL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t cs;
		uint32_t pwr;
		uint32_t fbdiv_int;
		uint32_t prim;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1016];
		uint32_t xor_cs;
		uint32_t xor_pwr;
		uint32_t xor_fbdiv_int;
		uint32_t xor_prim;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1016];
		uint32_t set_cs;
		uint32_t set_pwr;
		uint32_t set_fbdiv_int;
		uint32_t set_prim;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1016];
		uint32_t clr_cs;
		uint32_t clr_pwr;
		uint32_t clr_fbdiv_int;
		uint32_t clr_prim;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1016];
} PLL_SYS_REG_BLOCKS;
typedef struct{
		uint32_t cs;
		uint32_t pwr;
		uint32_t fbdiv_int;
		uint32_t prim;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[1016];
		uint32_t xor_cs;
		uint32_t xor_pwr;
		uint32_t xor_fbdiv_int;
		uint32_t xor_prim;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[1016];
		uint32_t set_cs;
		uint32_t set_pwr;
		uint32_t set_fbdiv_int;
		uint32_t set_prim;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[1016];
		uint32_t clr_cs;
		uint32_t clr_pwr;
		uint32_t clr_fbdiv_int;
		uint32_t clr_prim;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[1016];
} PLL_USB_REG_BLOCKS;

#define pll_sys ((PLL_SYS_REG_BLOCKS volatile *)0x40050000)

#define pll_usb ((PLL_USB_REG_BLOCKS volatile *)0x40058000)

/*CS Register macros*/

#define PLL_SYS_CS_LOCK(v) (((v)&0x1)<<31)
#define PLL_SYS_CS_LOCK_MASK PLL_SYS_CS_LOCK(ALL1)
#define PLL_SYS_CS_LOCK_N(v) (((v)&0x1)<<30)
#define PLL_SYS_CS_LOCK_N_MASK PLL_SYS_CS_LOCK_N(ALL1)
#define PLL_SYS_CS_BYPASS(v) (((v)&0x1)<<8)
#define PLL_SYS_CS_BYPASS_MASK PLL_SYS_CS_BYPASS(ALL1)
#define PLL_SYS_CS_REFDIV(v) (((v)&0x3f)<<0)
#define PLL_SYS_CS_REFDIV_MASK PLL_SYS_CS_REFDIV(ALL1)

/*PWR Register macros*/

#define PLL_SYS_PWR_VCOPD(v) (((v)&0x1)<<5)
#define PLL_SYS_PWR_VCOPD_MASK PLL_SYS_PWR_VCOPD(ALL1)
#define PLL_SYS_PWR_POSTDIVPD(v) (((v)&0x1)<<3)
#define PLL_SYS_PWR_POSTDIVPD_MASK PLL_SYS_PWR_POSTDIVPD(ALL1)
#define PLL_SYS_PWR_DSMPD(v) (((v)&0x1)<<2)
#define PLL_SYS_PWR_DSMPD_MASK PLL_SYS_PWR_DSMPD(ALL1)
#define PLL_SYS_PWR_PD(v) (((v)&0x1)<<0)
#define PLL_SYS_PWR_PD_MASK PLL_SYS_PWR_PD(ALL1)

/*FBDIV_INT Register macros*/


/*PRIM Register macros*/

#define PLL_SYS_PRIM_POSTDIV1(v) (((v)&0x7)<<16)
#define PLL_SYS_PRIM_POSTDIV1_MASK PLL_SYS_PRIM_POSTDIV1(ALL1)
#define PLL_SYS_PRIM_POSTDIV2(v) (((v)&0x7)<<12)
#define PLL_SYS_PRIM_POSTDIV2_MASK PLL_SYS_PRIM_POSTDIV2(ALL1)

/*INTR Register macros*/

#define PLL_SYS_INTR_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTR_LOCK_N_STICKY_MASK PLL_SYS_INTR_LOCK_N_STICKY(ALL1)

/*INTE Register macros*/

#define PLL_SYS_INTE_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTE_LOCK_N_STICKY_MASK PLL_SYS_INTE_LOCK_N_STICKY(ALL1)

/*INTF Register macros*/

#define PLL_SYS_INTF_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTF_LOCK_N_STICKY_MASK PLL_SYS_INTF_LOCK_N_STICKY(ALL1)

/*INTS Register macros*/

#define PLL_SYS_INTS_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_SYS_INTS_LOCK_N_STICKY_MASK PLL_SYS_INTS_LOCK_N_STICKY(ALL1)

/*CS Register macros*/

#define PLL_USB_CS_LOCK(v) (((v)&0x1)<<31)
#define PLL_USB_CS_LOCK_MASK PLL_USB_CS_LOCK(ALL1)
#define PLL_USB_CS_LOCK_N(v) (((v)&0x1)<<30)
#define PLL_USB_CS_LOCK_N_MASK PLL_USB_CS_LOCK_N(ALL1)
#define PLL_USB_CS_BYPASS(v) (((v)&0x1)<<8)
#define PLL_USB_CS_BYPASS_MASK PLL_USB_CS_BYPASS(ALL1)
#define PLL_USB_CS_REFDIV(v) (((v)&0x3f)<<0)
#define PLL_USB_CS_REFDIV_MASK PLL_USB_CS_REFDIV(ALL1)

/*PWR Register macros*/

#define PLL_USB_PWR_VCOPD(v) (((v)&0x1)<<5)
#define PLL_USB_PWR_VCOPD_MASK PLL_USB_PWR_VCOPD(ALL1)
#define PLL_USB_PWR_POSTDIVPD(v) (((v)&0x1)<<3)
#define PLL_USB_PWR_POSTDIVPD_MASK PLL_USB_PWR_POSTDIVPD(ALL1)
#define PLL_USB_PWR_DSMPD(v) (((v)&0x1)<<2)
#define PLL_USB_PWR_DSMPD_MASK PLL_USB_PWR_DSMPD(ALL1)
#define PLL_USB_PWR_PD(v) (((v)&0x1)<<0)
#define PLL_USB_PWR_PD_MASK PLL_USB_PWR_PD(ALL1)

/*FBDIV_INT Register macros*/


/*PRIM Register macros*/

#define PLL_USB_PRIM_POSTDIV1(v) (((v)&0x7)<<16)
#define PLL_USB_PRIM_POSTDIV1_MASK PLL_USB_PRIM_POSTDIV1(ALL1)
#define PLL_USB_PRIM_POSTDIV2(v) (((v)&0x7)<<12)
#define PLL_USB_PRIM_POSTDIV2_MASK PLL_USB_PRIM_POSTDIV2(ALL1)

/*INTR Register macros*/

#define PLL_USB_INTR_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTR_LOCK_N_STICKY_MASK PLL_USB_INTR_LOCK_N_STICKY(ALL1)

/*INTE Register macros*/

#define PLL_USB_INTE_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTE_LOCK_N_STICKY_MASK PLL_USB_INTE_LOCK_N_STICKY(ALL1)

/*INTF Register macros*/

#define PLL_USB_INTF_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTF_LOCK_N_STICKY_MASK PLL_USB_INTF_LOCK_N_STICKY(ALL1)

/*INTS Register macros*/

#define PLL_USB_INTS_LOCK_N_STICKY(v) (((v)&0x1)<<0)
#define PLL_USB_INTS_LOCK_N_STICKY_MASK PLL_USB_INTS_LOCK_N_STICKY(ALL1)

#endif