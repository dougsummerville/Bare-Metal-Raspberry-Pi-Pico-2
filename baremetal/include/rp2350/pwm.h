
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

#ifndef RP2350_PWM_H
#define RP2350_PWM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ch0_csr;
		uint32_t ch0_div;
		uint32_t ch0_ctr;
		uint32_t ch0_cc;
		uint32_t ch0_top;
		uint32_t ch1_csr;
		uint32_t ch1_div;
		uint32_t ch1_ctr;
		uint32_t ch1_cc;
		uint32_t ch1_top;
		uint32_t ch2_csr;
		uint32_t ch2_div;
		uint32_t ch2_ctr;
		uint32_t ch2_cc;
		uint32_t ch2_top;
		uint32_t ch3_csr;
		uint32_t ch3_div;
		uint32_t ch3_ctr;
		uint32_t ch3_cc;
		uint32_t ch3_top;
		uint32_t ch4_csr;
		uint32_t ch4_div;
		uint32_t ch4_ctr;
		uint32_t ch4_cc;
		uint32_t ch4_top;
		uint32_t ch5_csr;
		uint32_t ch5_div;
		uint32_t ch5_ctr;
		uint32_t ch5_cc;
		uint32_t ch5_top;
		uint32_t ch6_csr;
		uint32_t ch6_div;
		uint32_t ch6_ctr;
		uint32_t ch6_cc;
		uint32_t ch6_top;
		uint32_t ch7_csr;
		uint32_t ch7_div;
		uint32_t ch7_ctr;
		uint32_t ch7_cc;
		uint32_t ch7_top;
		uint32_t ch8_csr;
		uint32_t ch8_div;
		uint32_t ch8_ctr;
		uint32_t ch8_cc;
		uint32_t ch8_top;
		uint32_t ch9_csr;
		uint32_t ch9_div;
		uint32_t ch9_ctr;
		uint32_t ch9_cc;
		uint32_t ch9_top;
		uint32_t ch10_csr;
		uint32_t ch10_div;
		uint32_t ch10_ctr;
		uint32_t ch10_cc;
		uint32_t ch10_top;
		uint32_t ch11_csr;
		uint32_t ch11_div;
		uint32_t ch11_ctr;
		uint32_t ch11_cc;
		uint32_t ch11_top;
		uint32_t en;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[956];
		uint32_t xor_ch0_csr;
		uint32_t xor_ch0_div;
		uint32_t xor_ch0_ctr;
		uint32_t xor_ch0_cc;
		uint32_t xor_ch0_top;
		uint32_t xor_ch1_csr;
		uint32_t xor_ch1_div;
		uint32_t xor_ch1_ctr;
		uint32_t xor_ch1_cc;
		uint32_t xor_ch1_top;
		uint32_t xor_ch2_csr;
		uint32_t xor_ch2_div;
		uint32_t xor_ch2_ctr;
		uint32_t xor_ch2_cc;
		uint32_t xor_ch2_top;
		uint32_t xor_ch3_csr;
		uint32_t xor_ch3_div;
		uint32_t xor_ch3_ctr;
		uint32_t xor_ch3_cc;
		uint32_t xor_ch3_top;
		uint32_t xor_ch4_csr;
		uint32_t xor_ch4_div;
		uint32_t xor_ch4_ctr;
		uint32_t xor_ch4_cc;
		uint32_t xor_ch4_top;
		uint32_t xor_ch5_csr;
		uint32_t xor_ch5_div;
		uint32_t xor_ch5_ctr;
		uint32_t xor_ch5_cc;
		uint32_t xor_ch5_top;
		uint32_t xor_ch6_csr;
		uint32_t xor_ch6_div;
		uint32_t xor_ch6_ctr;
		uint32_t xor_ch6_cc;
		uint32_t xor_ch6_top;
		uint32_t xor_ch7_csr;
		uint32_t xor_ch7_div;
		uint32_t xor_ch7_ctr;
		uint32_t xor_ch7_cc;
		uint32_t xor_ch7_top;
		uint32_t xor_ch8_csr;
		uint32_t xor_ch8_div;
		uint32_t xor_ch8_ctr;
		uint32_t xor_ch8_cc;
		uint32_t xor_ch8_top;
		uint32_t xor_ch9_csr;
		uint32_t xor_ch9_div;
		uint32_t xor_ch9_ctr;
		uint32_t xor_ch9_cc;
		uint32_t xor_ch9_top;
		uint32_t xor_ch10_csr;
		uint32_t xor_ch10_div;
		uint32_t xor_ch10_ctr;
		uint32_t xor_ch10_cc;
		uint32_t xor_ch10_top;
		uint32_t xor_ch11_csr;
		uint32_t xor_ch11_div;
		uint32_t xor_ch11_ctr;
		uint32_t xor_ch11_cc;
		uint32_t xor_ch11_top;
		uint32_t xor_en;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[956];
		uint32_t set_ch0_csr;
		uint32_t set_ch0_div;
		uint32_t set_ch0_ctr;
		uint32_t set_ch0_cc;
		uint32_t set_ch0_top;
		uint32_t set_ch1_csr;
		uint32_t set_ch1_div;
		uint32_t set_ch1_ctr;
		uint32_t set_ch1_cc;
		uint32_t set_ch1_top;
		uint32_t set_ch2_csr;
		uint32_t set_ch2_div;
		uint32_t set_ch2_ctr;
		uint32_t set_ch2_cc;
		uint32_t set_ch2_top;
		uint32_t set_ch3_csr;
		uint32_t set_ch3_div;
		uint32_t set_ch3_ctr;
		uint32_t set_ch3_cc;
		uint32_t set_ch3_top;
		uint32_t set_ch4_csr;
		uint32_t set_ch4_div;
		uint32_t set_ch4_ctr;
		uint32_t set_ch4_cc;
		uint32_t set_ch4_top;
		uint32_t set_ch5_csr;
		uint32_t set_ch5_div;
		uint32_t set_ch5_ctr;
		uint32_t set_ch5_cc;
		uint32_t set_ch5_top;
		uint32_t set_ch6_csr;
		uint32_t set_ch6_div;
		uint32_t set_ch6_ctr;
		uint32_t set_ch6_cc;
		uint32_t set_ch6_top;
		uint32_t set_ch7_csr;
		uint32_t set_ch7_div;
		uint32_t set_ch7_ctr;
		uint32_t set_ch7_cc;
		uint32_t set_ch7_top;
		uint32_t set_ch8_csr;
		uint32_t set_ch8_div;
		uint32_t set_ch8_ctr;
		uint32_t set_ch8_cc;
		uint32_t set_ch8_top;
		uint32_t set_ch9_csr;
		uint32_t set_ch9_div;
		uint32_t set_ch9_ctr;
		uint32_t set_ch9_cc;
		uint32_t set_ch9_top;
		uint32_t set_ch10_csr;
		uint32_t set_ch10_div;
		uint32_t set_ch10_ctr;
		uint32_t set_ch10_cc;
		uint32_t set_ch10_top;
		uint32_t set_ch11_csr;
		uint32_t set_ch11_div;
		uint32_t set_ch11_ctr;
		uint32_t set_ch11_cc;
		uint32_t set_ch11_top;
		uint32_t set_en;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[956];
		uint32_t clr_ch0_csr;
		uint32_t clr_ch0_div;
		uint32_t clr_ch0_ctr;
		uint32_t clr_ch0_cc;
		uint32_t clr_ch0_top;
		uint32_t clr_ch1_csr;
		uint32_t clr_ch1_div;
		uint32_t clr_ch1_ctr;
		uint32_t clr_ch1_cc;
		uint32_t clr_ch1_top;
		uint32_t clr_ch2_csr;
		uint32_t clr_ch2_div;
		uint32_t clr_ch2_ctr;
		uint32_t clr_ch2_cc;
		uint32_t clr_ch2_top;
		uint32_t clr_ch3_csr;
		uint32_t clr_ch3_div;
		uint32_t clr_ch3_ctr;
		uint32_t clr_ch3_cc;
		uint32_t clr_ch3_top;
		uint32_t clr_ch4_csr;
		uint32_t clr_ch4_div;
		uint32_t clr_ch4_ctr;
		uint32_t clr_ch4_cc;
		uint32_t clr_ch4_top;
		uint32_t clr_ch5_csr;
		uint32_t clr_ch5_div;
		uint32_t clr_ch5_ctr;
		uint32_t clr_ch5_cc;
		uint32_t clr_ch5_top;
		uint32_t clr_ch6_csr;
		uint32_t clr_ch6_div;
		uint32_t clr_ch6_ctr;
		uint32_t clr_ch6_cc;
		uint32_t clr_ch6_top;
		uint32_t clr_ch7_csr;
		uint32_t clr_ch7_div;
		uint32_t clr_ch7_ctr;
		uint32_t clr_ch7_cc;
		uint32_t clr_ch7_top;
		uint32_t clr_ch8_csr;
		uint32_t clr_ch8_div;
		uint32_t clr_ch8_ctr;
		uint32_t clr_ch8_cc;
		uint32_t clr_ch8_top;
		uint32_t clr_ch9_csr;
		uint32_t clr_ch9_div;
		uint32_t clr_ch9_ctr;
		uint32_t clr_ch9_cc;
		uint32_t clr_ch9_top;
		uint32_t clr_ch10_csr;
		uint32_t clr_ch10_div;
		uint32_t clr_ch10_ctr;
		uint32_t clr_ch10_cc;
		uint32_t clr_ch10_top;
		uint32_t clr_ch11_csr;
		uint32_t clr_ch11_div;
		uint32_t clr_ch11_ctr;
		uint32_t clr_ch11_cc;
		uint32_t clr_ch11_top;
		uint32_t clr_en;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[956];
} PWM_REG_BLOCKS;

#define pwm ((PWM_REG_BLOCKS volatile *)0x400a8000)

/*CH0_CSR Register macros*/

#define PWM_CH0_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH0_CSR_PH_ADV_MASK PWM_CH0_CSR_PH_ADV(ALL1)
#define PWM_CH0_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH0_CSR_PH_RET_MASK PWM_CH0_CSR_PH_RET(ALL1)
#define PWM_CH0_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH0_CSR_DIVMODE_MASK PWM_CH0_CSR_DIVMODE(ALL1)
#define PWM_CH0_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH0_CSR_B_INV_MASK PWM_CH0_CSR_B_INV(ALL1)
#define PWM_CH0_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH0_CSR_A_INV_MASK PWM_CH0_CSR_A_INV(ALL1)
#define PWM_CH0_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH0_CSR_PH_CORRECT_MASK PWM_CH0_CSR_PH_CORRECT(ALL1)
#define PWM_CH0_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH0_CSR_EN_MASK PWM_CH0_CSR_EN(ALL1)

/*CH0_DIV Register macros*/

#define PWM_CH0_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH0_DIV_INT_MASK PWM_CH0_DIV_INT(ALL1)
#define PWM_CH0_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH0_DIV_FRAC_MASK PWM_CH0_DIV_FRAC(ALL1)

/*CH0_CTR Register macros*/


/*CH0_CC Register macros*/

#define PWM_CH0_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH0_CC_B_MASK PWM_CH0_CC_B(ALL1)
#define PWM_CH0_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH0_CC_A_MASK PWM_CH0_CC_A(ALL1)

/*CH0_TOP Register macros*/


/*CH1_CSR Register macros*/

#define PWM_CH1_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH1_CSR_PH_ADV_MASK PWM_CH1_CSR_PH_ADV(ALL1)
#define PWM_CH1_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH1_CSR_PH_RET_MASK PWM_CH1_CSR_PH_RET(ALL1)
#define PWM_CH1_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH1_CSR_DIVMODE_MASK PWM_CH1_CSR_DIVMODE(ALL1)
#define PWM_CH1_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH1_CSR_B_INV_MASK PWM_CH1_CSR_B_INV(ALL1)
#define PWM_CH1_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH1_CSR_A_INV_MASK PWM_CH1_CSR_A_INV(ALL1)
#define PWM_CH1_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH1_CSR_PH_CORRECT_MASK PWM_CH1_CSR_PH_CORRECT(ALL1)
#define PWM_CH1_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH1_CSR_EN_MASK PWM_CH1_CSR_EN(ALL1)

/*CH1_DIV Register macros*/

#define PWM_CH1_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH1_DIV_INT_MASK PWM_CH1_DIV_INT(ALL1)
#define PWM_CH1_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH1_DIV_FRAC_MASK PWM_CH1_DIV_FRAC(ALL1)

/*CH1_CTR Register macros*/


/*CH1_CC Register macros*/

#define PWM_CH1_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH1_CC_B_MASK PWM_CH1_CC_B(ALL1)
#define PWM_CH1_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH1_CC_A_MASK PWM_CH1_CC_A(ALL1)

/*CH1_TOP Register macros*/


/*CH2_CSR Register macros*/

#define PWM_CH2_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH2_CSR_PH_ADV_MASK PWM_CH2_CSR_PH_ADV(ALL1)
#define PWM_CH2_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH2_CSR_PH_RET_MASK PWM_CH2_CSR_PH_RET(ALL1)
#define PWM_CH2_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH2_CSR_DIVMODE_MASK PWM_CH2_CSR_DIVMODE(ALL1)
#define PWM_CH2_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH2_CSR_B_INV_MASK PWM_CH2_CSR_B_INV(ALL1)
#define PWM_CH2_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH2_CSR_A_INV_MASK PWM_CH2_CSR_A_INV(ALL1)
#define PWM_CH2_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH2_CSR_PH_CORRECT_MASK PWM_CH2_CSR_PH_CORRECT(ALL1)
#define PWM_CH2_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH2_CSR_EN_MASK PWM_CH2_CSR_EN(ALL1)

/*CH2_DIV Register macros*/

#define PWM_CH2_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH2_DIV_INT_MASK PWM_CH2_DIV_INT(ALL1)
#define PWM_CH2_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH2_DIV_FRAC_MASK PWM_CH2_DIV_FRAC(ALL1)

/*CH2_CTR Register macros*/


/*CH2_CC Register macros*/

#define PWM_CH2_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH2_CC_B_MASK PWM_CH2_CC_B(ALL1)
#define PWM_CH2_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH2_CC_A_MASK PWM_CH2_CC_A(ALL1)

/*CH2_TOP Register macros*/


/*CH3_CSR Register macros*/

#define PWM_CH3_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH3_CSR_PH_ADV_MASK PWM_CH3_CSR_PH_ADV(ALL1)
#define PWM_CH3_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH3_CSR_PH_RET_MASK PWM_CH3_CSR_PH_RET(ALL1)
#define PWM_CH3_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH3_CSR_DIVMODE_MASK PWM_CH3_CSR_DIVMODE(ALL1)
#define PWM_CH3_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH3_CSR_B_INV_MASK PWM_CH3_CSR_B_INV(ALL1)
#define PWM_CH3_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH3_CSR_A_INV_MASK PWM_CH3_CSR_A_INV(ALL1)
#define PWM_CH3_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH3_CSR_PH_CORRECT_MASK PWM_CH3_CSR_PH_CORRECT(ALL1)
#define PWM_CH3_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH3_CSR_EN_MASK PWM_CH3_CSR_EN(ALL1)

/*CH3_DIV Register macros*/

#define PWM_CH3_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH3_DIV_INT_MASK PWM_CH3_DIV_INT(ALL1)
#define PWM_CH3_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH3_DIV_FRAC_MASK PWM_CH3_DIV_FRAC(ALL1)

/*CH3_CTR Register macros*/


/*CH3_CC Register macros*/

#define PWM_CH3_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH3_CC_B_MASK PWM_CH3_CC_B(ALL1)
#define PWM_CH3_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH3_CC_A_MASK PWM_CH3_CC_A(ALL1)

/*CH3_TOP Register macros*/


/*CH4_CSR Register macros*/

#define PWM_CH4_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH4_CSR_PH_ADV_MASK PWM_CH4_CSR_PH_ADV(ALL1)
#define PWM_CH4_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH4_CSR_PH_RET_MASK PWM_CH4_CSR_PH_RET(ALL1)
#define PWM_CH4_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH4_CSR_DIVMODE_MASK PWM_CH4_CSR_DIVMODE(ALL1)
#define PWM_CH4_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH4_CSR_B_INV_MASK PWM_CH4_CSR_B_INV(ALL1)
#define PWM_CH4_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH4_CSR_A_INV_MASK PWM_CH4_CSR_A_INV(ALL1)
#define PWM_CH4_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH4_CSR_PH_CORRECT_MASK PWM_CH4_CSR_PH_CORRECT(ALL1)
#define PWM_CH4_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH4_CSR_EN_MASK PWM_CH4_CSR_EN(ALL1)

/*CH4_DIV Register macros*/

#define PWM_CH4_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH4_DIV_INT_MASK PWM_CH4_DIV_INT(ALL1)
#define PWM_CH4_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH4_DIV_FRAC_MASK PWM_CH4_DIV_FRAC(ALL1)

/*CH4_CTR Register macros*/


/*CH4_CC Register macros*/

#define PWM_CH4_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH4_CC_B_MASK PWM_CH4_CC_B(ALL1)
#define PWM_CH4_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH4_CC_A_MASK PWM_CH4_CC_A(ALL1)

/*CH4_TOP Register macros*/


/*CH5_CSR Register macros*/

#define PWM_CH5_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH5_CSR_PH_ADV_MASK PWM_CH5_CSR_PH_ADV(ALL1)
#define PWM_CH5_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH5_CSR_PH_RET_MASK PWM_CH5_CSR_PH_RET(ALL1)
#define PWM_CH5_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH5_CSR_DIVMODE_MASK PWM_CH5_CSR_DIVMODE(ALL1)
#define PWM_CH5_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH5_CSR_B_INV_MASK PWM_CH5_CSR_B_INV(ALL1)
#define PWM_CH5_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH5_CSR_A_INV_MASK PWM_CH5_CSR_A_INV(ALL1)
#define PWM_CH5_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH5_CSR_PH_CORRECT_MASK PWM_CH5_CSR_PH_CORRECT(ALL1)
#define PWM_CH5_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH5_CSR_EN_MASK PWM_CH5_CSR_EN(ALL1)

/*CH5_DIV Register macros*/

#define PWM_CH5_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH5_DIV_INT_MASK PWM_CH5_DIV_INT(ALL1)
#define PWM_CH5_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH5_DIV_FRAC_MASK PWM_CH5_DIV_FRAC(ALL1)

/*CH5_CTR Register macros*/


/*CH5_CC Register macros*/

#define PWM_CH5_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH5_CC_B_MASK PWM_CH5_CC_B(ALL1)
#define PWM_CH5_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH5_CC_A_MASK PWM_CH5_CC_A(ALL1)

/*CH5_TOP Register macros*/


/*CH6_CSR Register macros*/

#define PWM_CH6_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH6_CSR_PH_ADV_MASK PWM_CH6_CSR_PH_ADV(ALL1)
#define PWM_CH6_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH6_CSR_PH_RET_MASK PWM_CH6_CSR_PH_RET(ALL1)
#define PWM_CH6_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH6_CSR_DIVMODE_MASK PWM_CH6_CSR_DIVMODE(ALL1)
#define PWM_CH6_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH6_CSR_B_INV_MASK PWM_CH6_CSR_B_INV(ALL1)
#define PWM_CH6_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH6_CSR_A_INV_MASK PWM_CH6_CSR_A_INV(ALL1)
#define PWM_CH6_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH6_CSR_PH_CORRECT_MASK PWM_CH6_CSR_PH_CORRECT(ALL1)
#define PWM_CH6_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH6_CSR_EN_MASK PWM_CH6_CSR_EN(ALL1)

/*CH6_DIV Register macros*/

#define PWM_CH6_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH6_DIV_INT_MASK PWM_CH6_DIV_INT(ALL1)
#define PWM_CH6_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH6_DIV_FRAC_MASK PWM_CH6_DIV_FRAC(ALL1)

/*CH6_CTR Register macros*/


/*CH6_CC Register macros*/

#define PWM_CH6_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH6_CC_B_MASK PWM_CH6_CC_B(ALL1)
#define PWM_CH6_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH6_CC_A_MASK PWM_CH6_CC_A(ALL1)

/*CH6_TOP Register macros*/


/*CH7_CSR Register macros*/

#define PWM_CH7_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH7_CSR_PH_ADV_MASK PWM_CH7_CSR_PH_ADV(ALL1)
#define PWM_CH7_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH7_CSR_PH_RET_MASK PWM_CH7_CSR_PH_RET(ALL1)
#define PWM_CH7_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH7_CSR_DIVMODE_MASK PWM_CH7_CSR_DIVMODE(ALL1)
#define PWM_CH7_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH7_CSR_B_INV_MASK PWM_CH7_CSR_B_INV(ALL1)
#define PWM_CH7_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH7_CSR_A_INV_MASK PWM_CH7_CSR_A_INV(ALL1)
#define PWM_CH7_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH7_CSR_PH_CORRECT_MASK PWM_CH7_CSR_PH_CORRECT(ALL1)
#define PWM_CH7_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH7_CSR_EN_MASK PWM_CH7_CSR_EN(ALL1)

/*CH7_DIV Register macros*/

#define PWM_CH7_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH7_DIV_INT_MASK PWM_CH7_DIV_INT(ALL1)
#define PWM_CH7_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH7_DIV_FRAC_MASK PWM_CH7_DIV_FRAC(ALL1)

/*CH7_CTR Register macros*/


/*CH7_CC Register macros*/

#define PWM_CH7_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH7_CC_B_MASK PWM_CH7_CC_B(ALL1)
#define PWM_CH7_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH7_CC_A_MASK PWM_CH7_CC_A(ALL1)

/*CH7_TOP Register macros*/


/*CH8_CSR Register macros*/

#define PWM_CH8_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH8_CSR_PH_ADV_MASK PWM_CH8_CSR_PH_ADV(ALL1)
#define PWM_CH8_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH8_CSR_PH_RET_MASK PWM_CH8_CSR_PH_RET(ALL1)
#define PWM_CH8_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH8_CSR_DIVMODE_MASK PWM_CH8_CSR_DIVMODE(ALL1)
#define PWM_CH8_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH8_CSR_B_INV_MASK PWM_CH8_CSR_B_INV(ALL1)
#define PWM_CH8_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH8_CSR_A_INV_MASK PWM_CH8_CSR_A_INV(ALL1)
#define PWM_CH8_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH8_CSR_PH_CORRECT_MASK PWM_CH8_CSR_PH_CORRECT(ALL1)
#define PWM_CH8_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH8_CSR_EN_MASK PWM_CH8_CSR_EN(ALL1)

/*CH8_DIV Register macros*/

#define PWM_CH8_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH8_DIV_INT_MASK PWM_CH8_DIV_INT(ALL1)
#define PWM_CH8_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH8_DIV_FRAC_MASK PWM_CH8_DIV_FRAC(ALL1)

/*CH8_CTR Register macros*/


/*CH8_CC Register macros*/

#define PWM_CH8_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH8_CC_B_MASK PWM_CH8_CC_B(ALL1)
#define PWM_CH8_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH8_CC_A_MASK PWM_CH8_CC_A(ALL1)

/*CH8_TOP Register macros*/


/*CH9_CSR Register macros*/

#define PWM_CH9_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH9_CSR_PH_ADV_MASK PWM_CH9_CSR_PH_ADV(ALL1)
#define PWM_CH9_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH9_CSR_PH_RET_MASK PWM_CH9_CSR_PH_RET(ALL1)
#define PWM_CH9_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH9_CSR_DIVMODE_MASK PWM_CH9_CSR_DIVMODE(ALL1)
#define PWM_CH9_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH9_CSR_B_INV_MASK PWM_CH9_CSR_B_INV(ALL1)
#define PWM_CH9_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH9_CSR_A_INV_MASK PWM_CH9_CSR_A_INV(ALL1)
#define PWM_CH9_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH9_CSR_PH_CORRECT_MASK PWM_CH9_CSR_PH_CORRECT(ALL1)
#define PWM_CH9_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH9_CSR_EN_MASK PWM_CH9_CSR_EN(ALL1)

/*CH9_DIV Register macros*/

#define PWM_CH9_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH9_DIV_INT_MASK PWM_CH9_DIV_INT(ALL1)
#define PWM_CH9_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH9_DIV_FRAC_MASK PWM_CH9_DIV_FRAC(ALL1)

/*CH9_CTR Register macros*/


/*CH9_CC Register macros*/

#define PWM_CH9_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH9_CC_B_MASK PWM_CH9_CC_B(ALL1)
#define PWM_CH9_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH9_CC_A_MASK PWM_CH9_CC_A(ALL1)

/*CH9_TOP Register macros*/


/*CH10_CSR Register macros*/

#define PWM_CH10_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH10_CSR_PH_ADV_MASK PWM_CH10_CSR_PH_ADV(ALL1)
#define PWM_CH10_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH10_CSR_PH_RET_MASK PWM_CH10_CSR_PH_RET(ALL1)
#define PWM_CH10_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH10_CSR_DIVMODE_MASK PWM_CH10_CSR_DIVMODE(ALL1)
#define PWM_CH10_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH10_CSR_B_INV_MASK PWM_CH10_CSR_B_INV(ALL1)
#define PWM_CH10_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH10_CSR_A_INV_MASK PWM_CH10_CSR_A_INV(ALL1)
#define PWM_CH10_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH10_CSR_PH_CORRECT_MASK PWM_CH10_CSR_PH_CORRECT(ALL1)
#define PWM_CH10_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH10_CSR_EN_MASK PWM_CH10_CSR_EN(ALL1)

/*CH10_DIV Register macros*/

#define PWM_CH10_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH10_DIV_INT_MASK PWM_CH10_DIV_INT(ALL1)
#define PWM_CH10_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH10_DIV_FRAC_MASK PWM_CH10_DIV_FRAC(ALL1)

/*CH10_CTR Register macros*/


/*CH10_CC Register macros*/

#define PWM_CH10_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH10_CC_B_MASK PWM_CH10_CC_B(ALL1)
#define PWM_CH10_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH10_CC_A_MASK PWM_CH10_CC_A(ALL1)

/*CH10_TOP Register macros*/


/*CH11_CSR Register macros*/

#define PWM_CH11_CSR_PH_ADV(v) (((v)&0x1)<<7)
#define PWM_CH11_CSR_PH_ADV_MASK PWM_CH11_CSR_PH_ADV(ALL1)
#define PWM_CH11_CSR_PH_RET(v) (((v)&0x1)<<6)
#define PWM_CH11_CSR_PH_RET_MASK PWM_CH11_CSR_PH_RET(ALL1)
#define PWM_CH11_CSR_DIVMODE(v) (((v)&0x3)<<4)
#define PWM_CH11_CSR_DIVMODE_MASK PWM_CH11_CSR_DIVMODE(ALL1)
#define PWM_CH11_CSR_B_INV(v) (((v)&0x1)<<3)
#define PWM_CH11_CSR_B_INV_MASK PWM_CH11_CSR_B_INV(ALL1)
#define PWM_CH11_CSR_A_INV(v) (((v)&0x1)<<2)
#define PWM_CH11_CSR_A_INV_MASK PWM_CH11_CSR_A_INV(ALL1)
#define PWM_CH11_CSR_PH_CORRECT(v) (((v)&0x1)<<1)
#define PWM_CH11_CSR_PH_CORRECT_MASK PWM_CH11_CSR_PH_CORRECT(ALL1)
#define PWM_CH11_CSR_EN(v) (((v)&0x1)<<0)
#define PWM_CH11_CSR_EN_MASK PWM_CH11_CSR_EN(ALL1)

/*CH11_DIV Register macros*/

#define PWM_CH11_DIV_INT(v) (((v)&0xff)<<4)
#define PWM_CH11_DIV_INT_MASK PWM_CH11_DIV_INT(ALL1)
#define PWM_CH11_DIV_FRAC(v) (((v)&0xf)<<0)
#define PWM_CH11_DIV_FRAC_MASK PWM_CH11_DIV_FRAC(ALL1)

/*CH11_CTR Register macros*/


/*CH11_CC Register macros*/

#define PWM_CH11_CC_B(v) (((v)&0xffff)<<16)
#define PWM_CH11_CC_B_MASK PWM_CH11_CC_B(ALL1)
#define PWM_CH11_CC_A(v) (((v)&0xffff)<<0)
#define PWM_CH11_CC_A_MASK PWM_CH11_CC_A(ALL1)

/*CH11_TOP Register macros*/


/*EN Register macros*/

#define PWM_EN_CH11(v) (((v)&0x1)<<11)
#define PWM_EN_CH11_MASK PWM_EN_CH11(ALL1)
#define PWM_EN_CH10(v) (((v)&0x1)<<10)
#define PWM_EN_CH10_MASK PWM_EN_CH10(ALL1)
#define PWM_EN_CH9(v) (((v)&0x1)<<9)
#define PWM_EN_CH9_MASK PWM_EN_CH9(ALL1)
#define PWM_EN_CH8(v) (((v)&0x1)<<8)
#define PWM_EN_CH8_MASK PWM_EN_CH8(ALL1)
#define PWM_EN_CH7(v) (((v)&0x1)<<7)
#define PWM_EN_CH7_MASK PWM_EN_CH7(ALL1)
#define PWM_EN_CH6(v) (((v)&0x1)<<6)
#define PWM_EN_CH6_MASK PWM_EN_CH6(ALL1)
#define PWM_EN_CH5(v) (((v)&0x1)<<5)
#define PWM_EN_CH5_MASK PWM_EN_CH5(ALL1)
#define PWM_EN_CH4(v) (((v)&0x1)<<4)
#define PWM_EN_CH4_MASK PWM_EN_CH4(ALL1)
#define PWM_EN_CH3(v) (((v)&0x1)<<3)
#define PWM_EN_CH3_MASK PWM_EN_CH3(ALL1)
#define PWM_EN_CH2(v) (((v)&0x1)<<2)
#define PWM_EN_CH2_MASK PWM_EN_CH2(ALL1)
#define PWM_EN_CH1(v) (((v)&0x1)<<1)
#define PWM_EN_CH1_MASK PWM_EN_CH1(ALL1)
#define PWM_EN_CH0(v) (((v)&0x1)<<0)
#define PWM_EN_CH0_MASK PWM_EN_CH0(ALL1)

/*INTR Register macros*/

#define PWM_INTR_CH11(v) (((v)&0x1)<<11)
#define PWM_INTR_CH11_MASK PWM_INTR_CH11(ALL1)
#define PWM_INTR_CH10(v) (((v)&0x1)<<10)
#define PWM_INTR_CH10_MASK PWM_INTR_CH10(ALL1)
#define PWM_INTR_CH9(v) (((v)&0x1)<<9)
#define PWM_INTR_CH9_MASK PWM_INTR_CH9(ALL1)
#define PWM_INTR_CH8(v) (((v)&0x1)<<8)
#define PWM_INTR_CH8_MASK PWM_INTR_CH8(ALL1)
#define PWM_INTR_CH7(v) (((v)&0x1)<<7)
#define PWM_INTR_CH7_MASK PWM_INTR_CH7(ALL1)
#define PWM_INTR_CH6(v) (((v)&0x1)<<6)
#define PWM_INTR_CH6_MASK PWM_INTR_CH6(ALL1)
#define PWM_INTR_CH5(v) (((v)&0x1)<<5)
#define PWM_INTR_CH5_MASK PWM_INTR_CH5(ALL1)
#define PWM_INTR_CH4(v) (((v)&0x1)<<4)
#define PWM_INTR_CH4_MASK PWM_INTR_CH4(ALL1)
#define PWM_INTR_CH3(v) (((v)&0x1)<<3)
#define PWM_INTR_CH3_MASK PWM_INTR_CH3(ALL1)
#define PWM_INTR_CH2(v) (((v)&0x1)<<2)
#define PWM_INTR_CH2_MASK PWM_INTR_CH2(ALL1)
#define PWM_INTR_CH1(v) (((v)&0x1)<<1)
#define PWM_INTR_CH1_MASK PWM_INTR_CH1(ALL1)
#define PWM_INTR_CH0(v) (((v)&0x1)<<0)
#define PWM_INTR_CH0_MASK PWM_INTR_CH0(ALL1)

/*IRQ0_INTE Register macros*/

#define PWM_IRQ0_INTE_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTE_CH11_MASK PWM_IRQ0_INTE_CH11(ALL1)
#define PWM_IRQ0_INTE_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTE_CH10_MASK PWM_IRQ0_INTE_CH10(ALL1)
#define PWM_IRQ0_INTE_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTE_CH9_MASK PWM_IRQ0_INTE_CH9(ALL1)
#define PWM_IRQ0_INTE_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTE_CH8_MASK PWM_IRQ0_INTE_CH8(ALL1)
#define PWM_IRQ0_INTE_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTE_CH7_MASK PWM_IRQ0_INTE_CH7(ALL1)
#define PWM_IRQ0_INTE_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTE_CH6_MASK PWM_IRQ0_INTE_CH6(ALL1)
#define PWM_IRQ0_INTE_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTE_CH5_MASK PWM_IRQ0_INTE_CH5(ALL1)
#define PWM_IRQ0_INTE_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTE_CH4_MASK PWM_IRQ0_INTE_CH4(ALL1)
#define PWM_IRQ0_INTE_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTE_CH3_MASK PWM_IRQ0_INTE_CH3(ALL1)
#define PWM_IRQ0_INTE_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTE_CH2_MASK PWM_IRQ0_INTE_CH2(ALL1)
#define PWM_IRQ0_INTE_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTE_CH1_MASK PWM_IRQ0_INTE_CH1(ALL1)
#define PWM_IRQ0_INTE_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTE_CH0_MASK PWM_IRQ0_INTE_CH0(ALL1)

/*IRQ0_INTF Register macros*/

#define PWM_IRQ0_INTF_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTF_CH11_MASK PWM_IRQ0_INTF_CH11(ALL1)
#define PWM_IRQ0_INTF_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTF_CH10_MASK PWM_IRQ0_INTF_CH10(ALL1)
#define PWM_IRQ0_INTF_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTF_CH9_MASK PWM_IRQ0_INTF_CH9(ALL1)
#define PWM_IRQ0_INTF_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTF_CH8_MASK PWM_IRQ0_INTF_CH8(ALL1)
#define PWM_IRQ0_INTF_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTF_CH7_MASK PWM_IRQ0_INTF_CH7(ALL1)
#define PWM_IRQ0_INTF_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTF_CH6_MASK PWM_IRQ0_INTF_CH6(ALL1)
#define PWM_IRQ0_INTF_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTF_CH5_MASK PWM_IRQ0_INTF_CH5(ALL1)
#define PWM_IRQ0_INTF_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTF_CH4_MASK PWM_IRQ0_INTF_CH4(ALL1)
#define PWM_IRQ0_INTF_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTF_CH3_MASK PWM_IRQ0_INTF_CH3(ALL1)
#define PWM_IRQ0_INTF_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTF_CH2_MASK PWM_IRQ0_INTF_CH2(ALL1)
#define PWM_IRQ0_INTF_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTF_CH1_MASK PWM_IRQ0_INTF_CH1(ALL1)
#define PWM_IRQ0_INTF_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTF_CH0_MASK PWM_IRQ0_INTF_CH0(ALL1)

/*IRQ0_INTS Register macros*/

#define PWM_IRQ0_INTS_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ0_INTS_CH11_MASK PWM_IRQ0_INTS_CH11(ALL1)
#define PWM_IRQ0_INTS_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ0_INTS_CH10_MASK PWM_IRQ0_INTS_CH10(ALL1)
#define PWM_IRQ0_INTS_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ0_INTS_CH9_MASK PWM_IRQ0_INTS_CH9(ALL1)
#define PWM_IRQ0_INTS_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ0_INTS_CH8_MASK PWM_IRQ0_INTS_CH8(ALL1)
#define PWM_IRQ0_INTS_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ0_INTS_CH7_MASK PWM_IRQ0_INTS_CH7(ALL1)
#define PWM_IRQ0_INTS_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ0_INTS_CH6_MASK PWM_IRQ0_INTS_CH6(ALL1)
#define PWM_IRQ0_INTS_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ0_INTS_CH5_MASK PWM_IRQ0_INTS_CH5(ALL1)
#define PWM_IRQ0_INTS_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ0_INTS_CH4_MASK PWM_IRQ0_INTS_CH4(ALL1)
#define PWM_IRQ0_INTS_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ0_INTS_CH3_MASK PWM_IRQ0_INTS_CH3(ALL1)
#define PWM_IRQ0_INTS_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ0_INTS_CH2_MASK PWM_IRQ0_INTS_CH2(ALL1)
#define PWM_IRQ0_INTS_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ0_INTS_CH1_MASK PWM_IRQ0_INTS_CH1(ALL1)
#define PWM_IRQ0_INTS_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ0_INTS_CH0_MASK PWM_IRQ0_INTS_CH0(ALL1)

/*IRQ1_INTE Register macros*/

#define PWM_IRQ1_INTE_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTE_CH11_MASK PWM_IRQ1_INTE_CH11(ALL1)
#define PWM_IRQ1_INTE_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTE_CH10_MASK PWM_IRQ1_INTE_CH10(ALL1)
#define PWM_IRQ1_INTE_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTE_CH9_MASK PWM_IRQ1_INTE_CH9(ALL1)
#define PWM_IRQ1_INTE_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTE_CH8_MASK PWM_IRQ1_INTE_CH8(ALL1)
#define PWM_IRQ1_INTE_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTE_CH7_MASK PWM_IRQ1_INTE_CH7(ALL1)
#define PWM_IRQ1_INTE_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTE_CH6_MASK PWM_IRQ1_INTE_CH6(ALL1)
#define PWM_IRQ1_INTE_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTE_CH5_MASK PWM_IRQ1_INTE_CH5(ALL1)
#define PWM_IRQ1_INTE_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTE_CH4_MASK PWM_IRQ1_INTE_CH4(ALL1)
#define PWM_IRQ1_INTE_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTE_CH3_MASK PWM_IRQ1_INTE_CH3(ALL1)
#define PWM_IRQ1_INTE_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTE_CH2_MASK PWM_IRQ1_INTE_CH2(ALL1)
#define PWM_IRQ1_INTE_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTE_CH1_MASK PWM_IRQ1_INTE_CH1(ALL1)
#define PWM_IRQ1_INTE_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTE_CH0_MASK PWM_IRQ1_INTE_CH0(ALL1)

/*IRQ1_INTF Register macros*/

#define PWM_IRQ1_INTF_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTF_CH11_MASK PWM_IRQ1_INTF_CH11(ALL1)
#define PWM_IRQ1_INTF_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTF_CH10_MASK PWM_IRQ1_INTF_CH10(ALL1)
#define PWM_IRQ1_INTF_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTF_CH9_MASK PWM_IRQ1_INTF_CH9(ALL1)
#define PWM_IRQ1_INTF_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTF_CH8_MASK PWM_IRQ1_INTF_CH8(ALL1)
#define PWM_IRQ1_INTF_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTF_CH7_MASK PWM_IRQ1_INTF_CH7(ALL1)
#define PWM_IRQ1_INTF_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTF_CH6_MASK PWM_IRQ1_INTF_CH6(ALL1)
#define PWM_IRQ1_INTF_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTF_CH5_MASK PWM_IRQ1_INTF_CH5(ALL1)
#define PWM_IRQ1_INTF_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTF_CH4_MASK PWM_IRQ1_INTF_CH4(ALL1)
#define PWM_IRQ1_INTF_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTF_CH3_MASK PWM_IRQ1_INTF_CH3(ALL1)
#define PWM_IRQ1_INTF_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTF_CH2_MASK PWM_IRQ1_INTF_CH2(ALL1)
#define PWM_IRQ1_INTF_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTF_CH1_MASK PWM_IRQ1_INTF_CH1(ALL1)
#define PWM_IRQ1_INTF_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTF_CH0_MASK PWM_IRQ1_INTF_CH0(ALL1)

/*IRQ1_INTS Register macros*/

#define PWM_IRQ1_INTS_CH11(v) (((v)&0x1)<<11)
#define PWM_IRQ1_INTS_CH11_MASK PWM_IRQ1_INTS_CH11(ALL1)
#define PWM_IRQ1_INTS_CH10(v) (((v)&0x1)<<10)
#define PWM_IRQ1_INTS_CH10_MASK PWM_IRQ1_INTS_CH10(ALL1)
#define PWM_IRQ1_INTS_CH9(v) (((v)&0x1)<<9)
#define PWM_IRQ1_INTS_CH9_MASK PWM_IRQ1_INTS_CH9(ALL1)
#define PWM_IRQ1_INTS_CH8(v) (((v)&0x1)<<8)
#define PWM_IRQ1_INTS_CH8_MASK PWM_IRQ1_INTS_CH8(ALL1)
#define PWM_IRQ1_INTS_CH7(v) (((v)&0x1)<<7)
#define PWM_IRQ1_INTS_CH7_MASK PWM_IRQ1_INTS_CH7(ALL1)
#define PWM_IRQ1_INTS_CH6(v) (((v)&0x1)<<6)
#define PWM_IRQ1_INTS_CH6_MASK PWM_IRQ1_INTS_CH6(ALL1)
#define PWM_IRQ1_INTS_CH5(v) (((v)&0x1)<<5)
#define PWM_IRQ1_INTS_CH5_MASK PWM_IRQ1_INTS_CH5(ALL1)
#define PWM_IRQ1_INTS_CH4(v) (((v)&0x1)<<4)
#define PWM_IRQ1_INTS_CH4_MASK PWM_IRQ1_INTS_CH4(ALL1)
#define PWM_IRQ1_INTS_CH3(v) (((v)&0x1)<<3)
#define PWM_IRQ1_INTS_CH3_MASK PWM_IRQ1_INTS_CH3(ALL1)
#define PWM_IRQ1_INTS_CH2(v) (((v)&0x1)<<2)
#define PWM_IRQ1_INTS_CH2_MASK PWM_IRQ1_INTS_CH2(ALL1)
#define PWM_IRQ1_INTS_CH1(v) (((v)&0x1)<<1)
#define PWM_IRQ1_INTS_CH1_MASK PWM_IRQ1_INTS_CH1(ALL1)
#define PWM_IRQ1_INTS_CH0(v) (((v)&0x1)<<0)
#define PWM_IRQ1_INTS_CH0_MASK PWM_IRQ1_INTS_CH0(ALL1)

#endif