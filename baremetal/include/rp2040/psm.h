
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

#ifndef RP2040_PSM_H
#define RP2040_PSM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t frce_on;
		uint32_t frce_off;
		uint32_t wdsel;
		uint32_t done;
		uint32_t RSVD0[1020];
		uint32_t xor_frce_on;
		uint32_t xor_frce_off;
		uint32_t xor_wdsel;
		uint32_t xor_done;
		uint32_t RSVDxor_0[1020];
		uint32_t set_frce_on;
		uint32_t set_frce_off;
		uint32_t set_wdsel;
		uint32_t set_done;
		uint32_t RSVDset_0[1020];
		uint32_t clr_frce_on;
		uint32_t clr_frce_off;
		uint32_t clr_wdsel;
		uint32_t clr_done;
		uint32_t RSVDclr_0[1020];
} PSM_REG_BLOCKS;

#define psm ((PSM_REG_BLOCKS volatile *)0x40010000)

/*FRCE_ON Register macros*/

#define PSM_FRCE_ON_PROC1(v) (((v)&0x1)<<16)
#define PSM_FRCE_ON_PROC1_MASK PSM_FRCE_ON_PROC1(ALL1)
#define PSM_FRCE_ON_PROC0(v) (((v)&0x1)<<15)
#define PSM_FRCE_ON_PROC0_MASK PSM_FRCE_ON_PROC0(ALL1)
#define PSM_FRCE_ON_SIO(v) (((v)&0x1)<<14)
#define PSM_FRCE_ON_SIO_MASK PSM_FRCE_ON_SIO(ALL1)
#define PSM_FRCE_ON_VREG_AND_CHIP_RESET(v) (((v)&0x1)<<13)
#define PSM_FRCE_ON_VREG_AND_CHIP_RESET_MASK PSM_FRCE_ON_VREG_AND_CHIP_RESET(ALL1)
#define PSM_FRCE_ON_XIP(v) (((v)&0x1)<<12)
#define PSM_FRCE_ON_XIP_MASK PSM_FRCE_ON_XIP(ALL1)
#define PSM_FRCE_ON_SRAM5(v) (((v)&0x1)<<11)
#define PSM_FRCE_ON_SRAM5_MASK PSM_FRCE_ON_SRAM5(ALL1)
#define PSM_FRCE_ON_SRAM4(v) (((v)&0x1)<<10)
#define PSM_FRCE_ON_SRAM4_MASK PSM_FRCE_ON_SRAM4(ALL1)
#define PSM_FRCE_ON_SRAM3(v) (((v)&0x1)<<9)
#define PSM_FRCE_ON_SRAM3_MASK PSM_FRCE_ON_SRAM3(ALL1)
#define PSM_FRCE_ON_SRAM2(v) (((v)&0x1)<<8)
#define PSM_FRCE_ON_SRAM2_MASK PSM_FRCE_ON_SRAM2(ALL1)
#define PSM_FRCE_ON_SRAM1(v) (((v)&0x1)<<7)
#define PSM_FRCE_ON_SRAM1_MASK PSM_FRCE_ON_SRAM1(ALL1)
#define PSM_FRCE_ON_SRAM0(v) (((v)&0x1)<<6)
#define PSM_FRCE_ON_SRAM0_MASK PSM_FRCE_ON_SRAM0(ALL1)
#define PSM_FRCE_ON_ROM(v) (((v)&0x1)<<5)
#define PSM_FRCE_ON_ROM_MASK PSM_FRCE_ON_ROM(ALL1)
#define PSM_FRCE_ON_BUSFABRIC(v) (((v)&0x1)<<4)
#define PSM_FRCE_ON_BUSFABRIC_MASK PSM_FRCE_ON_BUSFABRIC(ALL1)
#define PSM_FRCE_ON_RESETS(v) (((v)&0x1)<<3)
#define PSM_FRCE_ON_RESETS_MASK PSM_FRCE_ON_RESETS(ALL1)
#define PSM_FRCE_ON_CLOCKS(v) (((v)&0x1)<<2)
#define PSM_FRCE_ON_CLOCKS_MASK PSM_FRCE_ON_CLOCKS(ALL1)
#define PSM_FRCE_ON_XOSC(v) (((v)&0x1)<<1)
#define PSM_FRCE_ON_XOSC_MASK PSM_FRCE_ON_XOSC(ALL1)
#define PSM_FRCE_ON_ROSC(v) (((v)&0x1)<<0)
#define PSM_FRCE_ON_ROSC_MASK PSM_FRCE_ON_ROSC(ALL1)

/*FRCE_OFF Register macros*/

#define PSM_FRCE_OFF_PROC1(v) (((v)&0x1)<<16)
#define PSM_FRCE_OFF_PROC1_MASK PSM_FRCE_OFF_PROC1(ALL1)
#define PSM_FRCE_OFF_PROC0(v) (((v)&0x1)<<15)
#define PSM_FRCE_OFF_PROC0_MASK PSM_FRCE_OFF_PROC0(ALL1)
#define PSM_FRCE_OFF_SIO(v) (((v)&0x1)<<14)
#define PSM_FRCE_OFF_SIO_MASK PSM_FRCE_OFF_SIO(ALL1)
#define PSM_FRCE_OFF_VREG_AND_CHIP_RESET(v) (((v)&0x1)<<13)
#define PSM_FRCE_OFF_VREG_AND_CHIP_RESET_MASK PSM_FRCE_OFF_VREG_AND_CHIP_RESET(ALL1)
#define PSM_FRCE_OFF_XIP(v) (((v)&0x1)<<12)
#define PSM_FRCE_OFF_XIP_MASK PSM_FRCE_OFF_XIP(ALL1)
#define PSM_FRCE_OFF_SRAM5(v) (((v)&0x1)<<11)
#define PSM_FRCE_OFF_SRAM5_MASK PSM_FRCE_OFF_SRAM5(ALL1)
#define PSM_FRCE_OFF_SRAM4(v) (((v)&0x1)<<10)
#define PSM_FRCE_OFF_SRAM4_MASK PSM_FRCE_OFF_SRAM4(ALL1)
#define PSM_FRCE_OFF_SRAM3(v) (((v)&0x1)<<9)
#define PSM_FRCE_OFF_SRAM3_MASK PSM_FRCE_OFF_SRAM3(ALL1)
#define PSM_FRCE_OFF_SRAM2(v) (((v)&0x1)<<8)
#define PSM_FRCE_OFF_SRAM2_MASK PSM_FRCE_OFF_SRAM2(ALL1)
#define PSM_FRCE_OFF_SRAM1(v) (((v)&0x1)<<7)
#define PSM_FRCE_OFF_SRAM1_MASK PSM_FRCE_OFF_SRAM1(ALL1)
#define PSM_FRCE_OFF_SRAM0(v) (((v)&0x1)<<6)
#define PSM_FRCE_OFF_SRAM0_MASK PSM_FRCE_OFF_SRAM0(ALL1)
#define PSM_FRCE_OFF_ROM(v) (((v)&0x1)<<5)
#define PSM_FRCE_OFF_ROM_MASK PSM_FRCE_OFF_ROM(ALL1)
#define PSM_FRCE_OFF_BUSFABRIC(v) (((v)&0x1)<<4)
#define PSM_FRCE_OFF_BUSFABRIC_MASK PSM_FRCE_OFF_BUSFABRIC(ALL1)
#define PSM_FRCE_OFF_RESETS(v) (((v)&0x1)<<3)
#define PSM_FRCE_OFF_RESETS_MASK PSM_FRCE_OFF_RESETS(ALL1)
#define PSM_FRCE_OFF_CLOCKS(v) (((v)&0x1)<<2)
#define PSM_FRCE_OFF_CLOCKS_MASK PSM_FRCE_OFF_CLOCKS(ALL1)
#define PSM_FRCE_OFF_XOSC(v) (((v)&0x1)<<1)
#define PSM_FRCE_OFF_XOSC_MASK PSM_FRCE_OFF_XOSC(ALL1)
#define PSM_FRCE_OFF_ROSC(v) (((v)&0x1)<<0)
#define PSM_FRCE_OFF_ROSC_MASK PSM_FRCE_OFF_ROSC(ALL1)

/*WDSEL Register macros*/

#define PSM_WDSEL_PROC1(v) (((v)&0x1)<<16)
#define PSM_WDSEL_PROC1_MASK PSM_WDSEL_PROC1(ALL1)
#define PSM_WDSEL_PROC0(v) (((v)&0x1)<<15)
#define PSM_WDSEL_PROC0_MASK PSM_WDSEL_PROC0(ALL1)
#define PSM_WDSEL_SIO(v) (((v)&0x1)<<14)
#define PSM_WDSEL_SIO_MASK PSM_WDSEL_SIO(ALL1)
#define PSM_WDSEL_VREG_AND_CHIP_RESET(v) (((v)&0x1)<<13)
#define PSM_WDSEL_VREG_AND_CHIP_RESET_MASK PSM_WDSEL_VREG_AND_CHIP_RESET(ALL1)
#define PSM_WDSEL_XIP(v) (((v)&0x1)<<12)
#define PSM_WDSEL_XIP_MASK PSM_WDSEL_XIP(ALL1)
#define PSM_WDSEL_SRAM5(v) (((v)&0x1)<<11)
#define PSM_WDSEL_SRAM5_MASK PSM_WDSEL_SRAM5(ALL1)
#define PSM_WDSEL_SRAM4(v) (((v)&0x1)<<10)
#define PSM_WDSEL_SRAM4_MASK PSM_WDSEL_SRAM4(ALL1)
#define PSM_WDSEL_SRAM3(v) (((v)&0x1)<<9)
#define PSM_WDSEL_SRAM3_MASK PSM_WDSEL_SRAM3(ALL1)
#define PSM_WDSEL_SRAM2(v) (((v)&0x1)<<8)
#define PSM_WDSEL_SRAM2_MASK PSM_WDSEL_SRAM2(ALL1)
#define PSM_WDSEL_SRAM1(v) (((v)&0x1)<<7)
#define PSM_WDSEL_SRAM1_MASK PSM_WDSEL_SRAM1(ALL1)
#define PSM_WDSEL_SRAM0(v) (((v)&0x1)<<6)
#define PSM_WDSEL_SRAM0_MASK PSM_WDSEL_SRAM0(ALL1)
#define PSM_WDSEL_ROM(v) (((v)&0x1)<<5)
#define PSM_WDSEL_ROM_MASK PSM_WDSEL_ROM(ALL1)
#define PSM_WDSEL_BUSFABRIC(v) (((v)&0x1)<<4)
#define PSM_WDSEL_BUSFABRIC_MASK PSM_WDSEL_BUSFABRIC(ALL1)
#define PSM_WDSEL_RESETS(v) (((v)&0x1)<<3)
#define PSM_WDSEL_RESETS_MASK PSM_WDSEL_RESETS(ALL1)
#define PSM_WDSEL_CLOCKS(v) (((v)&0x1)<<2)
#define PSM_WDSEL_CLOCKS_MASK PSM_WDSEL_CLOCKS(ALL1)
#define PSM_WDSEL_XOSC(v) (((v)&0x1)<<1)
#define PSM_WDSEL_XOSC_MASK PSM_WDSEL_XOSC(ALL1)
#define PSM_WDSEL_ROSC(v) (((v)&0x1)<<0)
#define PSM_WDSEL_ROSC_MASK PSM_WDSEL_ROSC(ALL1)

/*DONE Register macros*/

#define PSM_DONE_PROC1(v) (((v)&0x1)<<16)
#define PSM_DONE_PROC1_MASK PSM_DONE_PROC1(ALL1)
#define PSM_DONE_PROC0(v) (((v)&0x1)<<15)
#define PSM_DONE_PROC0_MASK PSM_DONE_PROC0(ALL1)
#define PSM_DONE_SIO(v) (((v)&0x1)<<14)
#define PSM_DONE_SIO_MASK PSM_DONE_SIO(ALL1)
#define PSM_DONE_VREG_AND_CHIP_RESET(v) (((v)&0x1)<<13)
#define PSM_DONE_VREG_AND_CHIP_RESET_MASK PSM_DONE_VREG_AND_CHIP_RESET(ALL1)
#define PSM_DONE_XIP(v) (((v)&0x1)<<12)
#define PSM_DONE_XIP_MASK PSM_DONE_XIP(ALL1)
#define PSM_DONE_SRAM5(v) (((v)&0x1)<<11)
#define PSM_DONE_SRAM5_MASK PSM_DONE_SRAM5(ALL1)
#define PSM_DONE_SRAM4(v) (((v)&0x1)<<10)
#define PSM_DONE_SRAM4_MASK PSM_DONE_SRAM4(ALL1)
#define PSM_DONE_SRAM3(v) (((v)&0x1)<<9)
#define PSM_DONE_SRAM3_MASK PSM_DONE_SRAM3(ALL1)
#define PSM_DONE_SRAM2(v) (((v)&0x1)<<8)
#define PSM_DONE_SRAM2_MASK PSM_DONE_SRAM2(ALL1)
#define PSM_DONE_SRAM1(v) (((v)&0x1)<<7)
#define PSM_DONE_SRAM1_MASK PSM_DONE_SRAM1(ALL1)
#define PSM_DONE_SRAM0(v) (((v)&0x1)<<6)
#define PSM_DONE_SRAM0_MASK PSM_DONE_SRAM0(ALL1)
#define PSM_DONE_ROM(v) (((v)&0x1)<<5)
#define PSM_DONE_ROM_MASK PSM_DONE_ROM(ALL1)
#define PSM_DONE_BUSFABRIC(v) (((v)&0x1)<<4)
#define PSM_DONE_BUSFABRIC_MASK PSM_DONE_BUSFABRIC(ALL1)
#define PSM_DONE_RESETS(v) (((v)&0x1)<<3)
#define PSM_DONE_RESETS_MASK PSM_DONE_RESETS(ALL1)
#define PSM_DONE_CLOCKS(v) (((v)&0x1)<<2)
#define PSM_DONE_CLOCKS_MASK PSM_DONE_CLOCKS(ALL1)
#define PSM_DONE_XOSC(v) (((v)&0x1)<<1)
#define PSM_DONE_XOSC_MASK PSM_DONE_XOSC(ALL1)
#define PSM_DONE_ROSC(v) (((v)&0x1)<<0)
#define PSM_DONE_ROSC_MASK PSM_DONE_ROSC(ALL1)

#endif