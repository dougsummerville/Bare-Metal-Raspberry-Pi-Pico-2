
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

#ifndef RP2350_HSTX_CTRL_H
#define RP2350_HSTX_CTRL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t csr;
		uint32_t bit0;
		uint32_t bit1;
		uint32_t bit2;
		uint32_t bit3;
		uint32_t bit4;
		uint32_t bit5;
		uint32_t bit6;
		uint32_t bit7;
		uint32_t expand_shift;
		uint32_t expand_tmds;
		uint32_t RSVD0[1013];
		uint32_t xor_csr;
		uint32_t xor_bit0;
		uint32_t xor_bit1;
		uint32_t xor_bit2;
		uint32_t xor_bit3;
		uint32_t xor_bit4;
		uint32_t xor_bit5;
		uint32_t xor_bit6;
		uint32_t xor_bit7;
		uint32_t xor_expand_shift;
		uint32_t xor_expand_tmds;
		uint32_t RSVDxor_0[1013];
		uint32_t set_csr;
		uint32_t set_bit0;
		uint32_t set_bit1;
		uint32_t set_bit2;
		uint32_t set_bit3;
		uint32_t set_bit4;
		uint32_t set_bit5;
		uint32_t set_bit6;
		uint32_t set_bit7;
		uint32_t set_expand_shift;
		uint32_t set_expand_tmds;
		uint32_t RSVDset_0[1013];
		uint32_t clr_csr;
		uint32_t clr_bit0;
		uint32_t clr_bit1;
		uint32_t clr_bit2;
		uint32_t clr_bit3;
		uint32_t clr_bit4;
		uint32_t clr_bit5;
		uint32_t clr_bit6;
		uint32_t clr_bit7;
		uint32_t clr_expand_shift;
		uint32_t clr_expand_tmds;
		uint32_t RSVDclr_0[1013];
} HSTX_CTRL_REG_BLOCKS;

#define hstx_ctrl (*(HSTX_CTRL_REG_BLOCKS volatile *)0x400c0000)

/*CSR Register macros*/

#define HSTX_CTRL_CSR_CLKDIV(v) (((v)&0xf)<<28)
#define HSTX_CTRL_CSR_CLKDIV_MASK HSTX_CTRL_CSR_CLKDIV(ALL1)
#define HSTX_CTRL_CSR_CLKPHASE(v) (((v)&0xf)<<24)
#define HSTX_CTRL_CSR_CLKPHASE_MASK HSTX_CTRL_CSR_CLKPHASE(ALL1)
#define HSTX_CTRL_CSR_N_SHIFTS(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_CSR_N_SHIFTS_MASK HSTX_CTRL_CSR_N_SHIFTS(ALL1)
#define HSTX_CTRL_CSR_SHIFT(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_CSR_SHIFT_MASK HSTX_CTRL_CSR_SHIFT(ALL1)
#define HSTX_CTRL_CSR_COUPLED_SEL(v) (((v)&0x3)<<5)
#define HSTX_CTRL_CSR_COUPLED_SEL_MASK HSTX_CTRL_CSR_COUPLED_SEL(ALL1)
#define HSTX_CTRL_CSR_COUPLED_MODE(v) (((v)&0x1)<<4)
#define HSTX_CTRL_CSR_COUPLED_MODE_MASK HSTX_CTRL_CSR_COUPLED_MODE(ALL1)
#define HSTX_CTRL_CSR_EXPAND_EN(v) (((v)&0x1)<<1)
#define HSTX_CTRL_CSR_EXPAND_EN_MASK HSTX_CTRL_CSR_EXPAND_EN(ALL1)
#define HSTX_CTRL_CSR_EN(v) (((v)&0x1)<<0)
#define HSTX_CTRL_CSR_EN_MASK HSTX_CTRL_CSR_EN(ALL1)

/*BIT0 Register macros*/

#define HSTX_CTRL_BIT0_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT0_CLK_MASK HSTX_CTRL_BIT0_CLK(ALL1)
#define HSTX_CTRL_BIT0_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT0_INV_MASK HSTX_CTRL_BIT0_INV(ALL1)
#define HSTX_CTRL_BIT0_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT0_SEL_N_MASK HSTX_CTRL_BIT0_SEL_N(ALL1)
#define HSTX_CTRL_BIT0_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT0_SEL_P_MASK HSTX_CTRL_BIT0_SEL_P(ALL1)

/*BIT1 Register macros*/

#define HSTX_CTRL_BIT1_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT1_CLK_MASK HSTX_CTRL_BIT1_CLK(ALL1)
#define HSTX_CTRL_BIT1_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT1_INV_MASK HSTX_CTRL_BIT1_INV(ALL1)
#define HSTX_CTRL_BIT1_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT1_SEL_N_MASK HSTX_CTRL_BIT1_SEL_N(ALL1)
#define HSTX_CTRL_BIT1_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT1_SEL_P_MASK HSTX_CTRL_BIT1_SEL_P(ALL1)

/*BIT2 Register macros*/

#define HSTX_CTRL_BIT2_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT2_CLK_MASK HSTX_CTRL_BIT2_CLK(ALL1)
#define HSTX_CTRL_BIT2_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT2_INV_MASK HSTX_CTRL_BIT2_INV(ALL1)
#define HSTX_CTRL_BIT2_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT2_SEL_N_MASK HSTX_CTRL_BIT2_SEL_N(ALL1)
#define HSTX_CTRL_BIT2_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT2_SEL_P_MASK HSTX_CTRL_BIT2_SEL_P(ALL1)

/*BIT3 Register macros*/

#define HSTX_CTRL_BIT3_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT3_CLK_MASK HSTX_CTRL_BIT3_CLK(ALL1)
#define HSTX_CTRL_BIT3_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT3_INV_MASK HSTX_CTRL_BIT3_INV(ALL1)
#define HSTX_CTRL_BIT3_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT3_SEL_N_MASK HSTX_CTRL_BIT3_SEL_N(ALL1)
#define HSTX_CTRL_BIT3_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT3_SEL_P_MASK HSTX_CTRL_BIT3_SEL_P(ALL1)

/*BIT4 Register macros*/

#define HSTX_CTRL_BIT4_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT4_CLK_MASK HSTX_CTRL_BIT4_CLK(ALL1)
#define HSTX_CTRL_BIT4_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT4_INV_MASK HSTX_CTRL_BIT4_INV(ALL1)
#define HSTX_CTRL_BIT4_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT4_SEL_N_MASK HSTX_CTRL_BIT4_SEL_N(ALL1)
#define HSTX_CTRL_BIT4_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT4_SEL_P_MASK HSTX_CTRL_BIT4_SEL_P(ALL1)

/*BIT5 Register macros*/

#define HSTX_CTRL_BIT5_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT5_CLK_MASK HSTX_CTRL_BIT5_CLK(ALL1)
#define HSTX_CTRL_BIT5_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT5_INV_MASK HSTX_CTRL_BIT5_INV(ALL1)
#define HSTX_CTRL_BIT5_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT5_SEL_N_MASK HSTX_CTRL_BIT5_SEL_N(ALL1)
#define HSTX_CTRL_BIT5_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT5_SEL_P_MASK HSTX_CTRL_BIT5_SEL_P(ALL1)

/*BIT6 Register macros*/

#define HSTX_CTRL_BIT6_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT6_CLK_MASK HSTX_CTRL_BIT6_CLK(ALL1)
#define HSTX_CTRL_BIT6_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT6_INV_MASK HSTX_CTRL_BIT6_INV(ALL1)
#define HSTX_CTRL_BIT6_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT6_SEL_N_MASK HSTX_CTRL_BIT6_SEL_N(ALL1)
#define HSTX_CTRL_BIT6_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT6_SEL_P_MASK HSTX_CTRL_BIT6_SEL_P(ALL1)

/*BIT7 Register macros*/

#define HSTX_CTRL_BIT7_CLK(v) (((v)&0x1)<<17)
#define HSTX_CTRL_BIT7_CLK_MASK HSTX_CTRL_BIT7_CLK(ALL1)
#define HSTX_CTRL_BIT7_INV(v) (((v)&0x1)<<16)
#define HSTX_CTRL_BIT7_INV_MASK HSTX_CTRL_BIT7_INV(ALL1)
#define HSTX_CTRL_BIT7_SEL_N(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_BIT7_SEL_N_MASK HSTX_CTRL_BIT7_SEL_N(ALL1)
#define HSTX_CTRL_BIT7_SEL_P(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_BIT7_SEL_P_MASK HSTX_CTRL_BIT7_SEL_P(ALL1)

/*EXPAND_SHIFT Register macros*/

#define HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS(v) (((v)&0x1f)<<24)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS_MASK HSTX_CTRL_EXPAND_SHIFT_ENC_N_SHIFTS(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT_MASK HSTX_CTRL_EXPAND_SHIFT_ENC_SHIFT(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS_MASK HSTX_CTRL_EXPAND_SHIFT_RAW_N_SHIFTS(ALL1)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT_MASK HSTX_CTRL_EXPAND_SHIFT_RAW_SHIFT(ALL1)

/*EXPAND_TMDS Register macros*/

#define HSTX_CTRL_EXPAND_TMDS_L2_NBITS(v) (((v)&0x7)<<21)
#define HSTX_CTRL_EXPAND_TMDS_L2_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L2_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L2_ROT(v) (((v)&0x1f)<<16)
#define HSTX_CTRL_EXPAND_TMDS_L2_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L2_ROT(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L1_NBITS(v) (((v)&0x7)<<13)
#define HSTX_CTRL_EXPAND_TMDS_L1_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L1_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L1_ROT(v) (((v)&0x1f)<<8)
#define HSTX_CTRL_EXPAND_TMDS_L1_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L1_ROT(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L0_NBITS(v) (((v)&0x7)<<5)
#define HSTX_CTRL_EXPAND_TMDS_L0_NBITS_MASK HSTX_CTRL_EXPAND_TMDS_L0_NBITS(ALL1)
#define HSTX_CTRL_EXPAND_TMDS_L0_ROT(v) (((v)&0x1f)<<0)
#define HSTX_CTRL_EXPAND_TMDS_L0_ROT_MASK HSTX_CTRL_EXPAND_TMDS_L0_ROT(ALL1)

#endif
