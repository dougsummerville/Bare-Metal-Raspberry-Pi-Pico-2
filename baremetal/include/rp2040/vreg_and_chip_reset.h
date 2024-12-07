
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

#ifndef RP2040_VREG_AND_CHIP_RESET_H
#define RP2040_VREG_AND_CHIP_RESET_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t vreg;
		uint32_t bod;
		uint32_t chip_reset;
		uint32_t RSVD0[1021];
		uint32_t xor_vreg;
		uint32_t xor_bod;
		uint32_t xor_chip_reset;
		uint32_t RSVDxor_0[1021];
		uint32_t set_vreg;
		uint32_t set_bod;
		uint32_t set_chip_reset;
		uint32_t RSVDset_0[1021];
		uint32_t clr_vreg;
		uint32_t clr_bod;
		uint32_t clr_chip_reset;
		uint32_t RSVDclr_0[1021];
} VREG_AND_CHIP_RESET_REG_BLOCKS;

#define vreg_and_chip_reset ((VREG_AND_CHIP_RESET_REG_BLOCKS volatile *)0x40064000)

/*VREG Register macros*/

#define VREG_AND_CHIP_RESET_VREG_ROK(v) (((v)&0x1)<<12)
#define VREG_AND_CHIP_RESET_VREG_ROK_MASK VREG_AND_CHIP_RESET_VREG_ROK(ALL1)
#define VREG_AND_CHIP_RESET_VREG_VSEL(v) (((v)&0xf)<<4)
#define VREG_AND_CHIP_RESET_VREG_VSEL_MASK VREG_AND_CHIP_RESET_VREG_VSEL(ALL1)
#define VREG_AND_CHIP_RESET_VREG_HIZ(v) (((v)&0x1)<<1)
#define VREG_AND_CHIP_RESET_VREG_HIZ_MASK VREG_AND_CHIP_RESET_VREG_HIZ(ALL1)
#define VREG_AND_CHIP_RESET_VREG_EN(v) (((v)&0x1)<<0)
#define VREG_AND_CHIP_RESET_VREG_EN_MASK VREG_AND_CHIP_RESET_VREG_EN(ALL1)

/*BOD Register macros*/

#define VREG_AND_CHIP_RESET_BOD_VSEL(v) (((v)&0xf)<<4)
#define VREG_AND_CHIP_RESET_BOD_VSEL_MASK VREG_AND_CHIP_RESET_BOD_VSEL(ALL1)
#define VREG_AND_CHIP_RESET_BOD_EN(v) (((v)&0x1)<<0)
#define VREG_AND_CHIP_RESET_BOD_EN_MASK VREG_AND_CHIP_RESET_BOD_EN(ALL1)

/*CHIP_RESET Register macros*/

#define VREG_AND_CHIP_RESET_CHIP_RESET_PSM_RESTART_FLAG(v) (((v)&0x1)<<24)
#define VREG_AND_CHIP_RESET_CHIP_RESET_PSM_RESTART_FLAG_MASK VREG_AND_CHIP_RESET_CHIP_RESET_PSM_RESTART_FLAG(ALL1)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_PSM_RESTART(v) (((v)&0x1)<<20)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_PSM_RESTART_MASK VREG_AND_CHIP_RESET_CHIP_RESET_HAD_PSM_RESTART(ALL1)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_RUN(v) (((v)&0x1)<<16)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_RUN_MASK VREG_AND_CHIP_RESET_CHIP_RESET_HAD_RUN(ALL1)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_POR(v) (((v)&0x1)<<8)
#define VREG_AND_CHIP_RESET_CHIP_RESET_HAD_POR_MASK VREG_AND_CHIP_RESET_CHIP_RESET_HAD_POR(ALL1)

#endif