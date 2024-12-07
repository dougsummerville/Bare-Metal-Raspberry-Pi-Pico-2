
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

#ifndef RP2040_SIO_H
#define RP2040_SIO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t cpuid;
		uint32_t gpio_in;
		uint32_t gpio_hi_in;
		uint32_t RSVD0;
		uint32_t gpio_out;
		uint32_t gpio_out_set;
		uint32_t gpio_out_clr;
		uint32_t gpio_out_xor;
		uint32_t gpio_oe;
		uint32_t gpio_oe_set;
		uint32_t gpio_oe_clr;
		uint32_t gpio_oe_xor;
		uint32_t gpio_hi_out;
		uint32_t gpio_hi_out_set;
		uint32_t gpio_hi_out_clr;
		uint32_t gpio_hi_out_xor;
		uint32_t gpio_hi_oe;
		uint32_t gpio_hi_oe_set;
		uint32_t gpio_hi_oe_clr;
		uint32_t gpio_hi_oe_xor;
		uint32_t fifo_st;
		uint32_t fifo_wr;
		uint32_t fifo_rd;
		uint32_t spinlock_st;
		uint32_t div_udividend;
		uint32_t div_udivisor;
		uint32_t div_sdividend;
		uint32_t div_sdivisor;
		uint32_t div_quotient;
		uint32_t div_remainder;
		uint32_t div_csr;
		uint32_t RSVD1;
		uint32_t interp0_accum0;
		uint32_t interp0_accum1;
		uint32_t interp0_base0;
		uint32_t interp0_base1;
		uint32_t interp0_base2;
		uint32_t interp0_pop_lane0;
		uint32_t interp0_pop_lane1;
		uint32_t interp0_pop_full;
		uint32_t interp0_peek_lane0;
		uint32_t interp0_peek_lane1;
		uint32_t interp0_peek_full;
		uint32_t interp0_ctrl_lane0;
		uint32_t interp0_ctrl_lane1;
		uint32_t interp0_accum0_add;
		uint32_t interp0_accum1_add;
		uint32_t interp0_base_1and0;
		uint32_t interp1_accum0;
		uint32_t interp1_accum1;
		uint32_t interp1_base0;
		uint32_t interp1_base1;
		uint32_t interp1_base2;
		uint32_t interp1_pop_lane0;
		uint32_t interp1_pop_lane1;
		uint32_t interp1_pop_full;
		uint32_t interp1_peek_lane0;
		uint32_t interp1_peek_lane1;
		uint32_t interp1_peek_full;
		uint32_t interp1_ctrl_lane0;
		uint32_t interp1_ctrl_lane1;
		uint32_t interp1_accum0_add;
		uint32_t interp1_accum1_add;
		uint32_t interp1_base_1and0;
		uint32_t spinlock0;
		uint32_t spinlock1;
		uint32_t spinlock2;
		uint32_t spinlock3;
		uint32_t spinlock4;
		uint32_t spinlock5;
		uint32_t spinlock6;
		uint32_t spinlock7;
		uint32_t spinlock8;
		uint32_t spinlock9;
		uint32_t spinlock10;
		uint32_t spinlock11;
		uint32_t spinlock12;
		uint32_t spinlock13;
		uint32_t spinlock14;
		uint32_t spinlock15;
		uint32_t spinlock16;
		uint32_t spinlock17;
		uint32_t spinlock18;
		uint32_t spinlock19;
		uint32_t spinlock20;
		uint32_t spinlock21;
		uint32_t spinlock22;
		uint32_t spinlock23;
		uint32_t spinlock24;
		uint32_t spinlock25;
		uint32_t spinlock26;
		uint32_t spinlock27;
		uint32_t spinlock28;
		uint32_t spinlock29;
		uint32_t spinlock30;
		uint32_t spinlock31;
} SIO_REG_BLOCKS;

#define sio ((SIO_REG_BLOCKS volatile *)0xd0000000)

/*CPUID Register macros*/


/*GPIO_IN Register macros*/


/*GPIO_HI_IN Register macros*/


/*GPIO_OUT Register macros*/


/*GPIO_OUT_SET Register macros*/


/*GPIO_OUT_CLR Register macros*/


/*GPIO_OUT_XOR Register macros*/


/*GPIO_OE Register macros*/


/*GPIO_OE_SET Register macros*/


/*GPIO_OE_CLR Register macros*/


/*GPIO_OE_XOR Register macros*/


/*GPIO_HI_OUT Register macros*/


/*GPIO_HI_OUT_SET Register macros*/


/*GPIO_HI_OUT_CLR Register macros*/


/*GPIO_HI_OUT_XOR Register macros*/


/*GPIO_HI_OE Register macros*/


/*GPIO_HI_OE_SET Register macros*/


/*GPIO_HI_OE_CLR Register macros*/


/*GPIO_HI_OE_XOR Register macros*/


/*FIFO_ST Register macros*/

#define SIO_FIFO_ST_ROE(v) (((v)&0x1)<<3)
#define SIO_FIFO_ST_ROE_MASK SIO_FIFO_ST_ROE(ALL1)
#define SIO_FIFO_ST_WOF(v) (((v)&0x1)<<2)
#define SIO_FIFO_ST_WOF_MASK SIO_FIFO_ST_WOF(ALL1)
#define SIO_FIFO_ST_RDY(v) (((v)&0x1)<<1)
#define SIO_FIFO_ST_RDY_MASK SIO_FIFO_ST_RDY(ALL1)
#define SIO_FIFO_ST_VLD(v) (((v)&0x1)<<0)
#define SIO_FIFO_ST_VLD_MASK SIO_FIFO_ST_VLD(ALL1)

/*FIFO_WR Register macros*/


/*FIFO_RD Register macros*/


/*SPINLOCK_ST Register macros*/


/*DIV_UDIVIDEND Register macros*/


/*DIV_UDIVISOR Register macros*/


/*DIV_SDIVIDEND Register macros*/


/*DIV_SDIVISOR Register macros*/


/*DIV_QUOTIENT Register macros*/


/*DIV_REMAINDER Register macros*/


/*DIV_CSR Register macros*/

#define SIO_DIV_CSR_DIRTY(v) (((v)&0x1)<<1)
#define SIO_DIV_CSR_DIRTY_MASK SIO_DIV_CSR_DIRTY(ALL1)
#define SIO_DIV_CSR_READY(v) (((v)&0x1)<<0)
#define SIO_DIV_CSR_READY_MASK SIO_DIV_CSR_READY(ALL1)

/*INTERP0_ACCUM0 Register macros*/


/*INTERP0_ACCUM1 Register macros*/


/*INTERP0_BASE0 Register macros*/


/*INTERP0_BASE1 Register macros*/


/*INTERP0_BASE2 Register macros*/


/*INTERP0_POP_LANE0 Register macros*/


/*INTERP0_POP_LANE1 Register macros*/


/*INTERP0_POP_FULL Register macros*/


/*INTERP0_PEEK_LANE0 Register macros*/


/*INTERP0_PEEK_LANE1 Register macros*/


/*INTERP0_PEEK_FULL Register macros*/


/*INTERP0_CTRL_LANE0 Register macros*/

#define SIO_INTERP0_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_INTERP0_CTRL_LANE0_OVERF_MASK SIO_INTERP0_CTRL_LANE0_OVERF(ALL1)
#define SIO_INTERP0_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_INTERP0_CTRL_LANE0_OVERF1_MASK SIO_INTERP0_CTRL_LANE0_OVERF1(ALL1)
#define SIO_INTERP0_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_INTERP0_CTRL_LANE0_OVERF0_MASK SIO_INTERP0_CTRL_LANE0_OVERF0(ALL1)
#define SIO_INTERP0_CTRL_LANE0_BLEND(v) (((v)&0x1)<<21)
#define SIO_INTERP0_CTRL_LANE0_BLEND_MASK SIO_INTERP0_CTRL_LANE0_BLEND(ALL1)
#define SIO_INTERP0_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP0_CTRL_LANE0_FORCE_MSB_MASK SIO_INTERP0_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP0_CTRL_LANE0_ADD_RAW_MASK SIO_INTERP0_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_INTERP0_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP0_CTRL_LANE0_CROSS_RESULT_MASK SIO_INTERP0_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_INTERP0_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP0_CTRL_LANE0_CROSS_INPUT_MASK SIO_INTERP0_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_INTERP0_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP0_CTRL_LANE0_SIGNED_MASK SIO_INTERP0_CTRL_LANE0_SIGNED(ALL1)
#define SIO_INTERP0_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP0_CTRL_LANE0_MASK_MSB_MASK SIO_INTERP0_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP0_CTRL_LANE0_MASK_LSB_MASK SIO_INTERP0_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_INTERP0_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP0_CTRL_LANE0_SHIFT_MASK SIO_INTERP0_CTRL_LANE0_SHIFT(ALL1)

/*INTERP0_CTRL_LANE1 Register macros*/

#define SIO_INTERP0_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP0_CTRL_LANE1_FORCE_MSB_MASK SIO_INTERP0_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP0_CTRL_LANE1_ADD_RAW_MASK SIO_INTERP0_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_INTERP0_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP0_CTRL_LANE1_CROSS_RESULT_MASK SIO_INTERP0_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_INTERP0_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP0_CTRL_LANE1_CROSS_INPUT_MASK SIO_INTERP0_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_INTERP0_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP0_CTRL_LANE1_SIGNED_MASK SIO_INTERP0_CTRL_LANE1_SIGNED(ALL1)
#define SIO_INTERP0_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP0_CTRL_LANE1_MASK_MSB_MASK SIO_INTERP0_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP0_CTRL_LANE1_MASK_LSB_MASK SIO_INTERP0_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_INTERP0_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP0_CTRL_LANE1_SHIFT_MASK SIO_INTERP0_CTRL_LANE1_SHIFT(ALL1)

/*INTERP0_ACCUM0_ADD Register macros*/


/*INTERP0_ACCUM1_ADD Register macros*/


/*INTERP0_BASE_1AND0 Register macros*/


/*INTERP1_ACCUM0 Register macros*/


/*INTERP1_ACCUM1 Register macros*/


/*INTERP1_BASE0 Register macros*/


/*INTERP1_BASE1 Register macros*/


/*INTERP1_BASE2 Register macros*/


/*INTERP1_POP_LANE0 Register macros*/


/*INTERP1_POP_LANE1 Register macros*/


/*INTERP1_POP_FULL Register macros*/


/*INTERP1_PEEK_LANE0 Register macros*/


/*INTERP1_PEEK_LANE1 Register macros*/


/*INTERP1_PEEK_FULL Register macros*/


/*INTERP1_CTRL_LANE0 Register macros*/

#define SIO_INTERP1_CTRL_LANE0_OVERF(v) (((v)&0x1)<<25)
#define SIO_INTERP1_CTRL_LANE0_OVERF_MASK SIO_INTERP1_CTRL_LANE0_OVERF(ALL1)
#define SIO_INTERP1_CTRL_LANE0_OVERF1(v) (((v)&0x1)<<24)
#define SIO_INTERP1_CTRL_LANE0_OVERF1_MASK SIO_INTERP1_CTRL_LANE0_OVERF1(ALL1)
#define SIO_INTERP1_CTRL_LANE0_OVERF0(v) (((v)&0x1)<<23)
#define SIO_INTERP1_CTRL_LANE0_OVERF0_MASK SIO_INTERP1_CTRL_LANE0_OVERF0(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CLAMP(v) (((v)&0x1)<<22)
#define SIO_INTERP1_CTRL_LANE0_CLAMP_MASK SIO_INTERP1_CTRL_LANE0_CLAMP(ALL1)
#define SIO_INTERP1_CTRL_LANE0_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP1_CTRL_LANE0_FORCE_MSB_MASK SIO_INTERP1_CTRL_LANE0_FORCE_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP1_CTRL_LANE0_ADD_RAW_MASK SIO_INTERP1_CTRL_LANE0_ADD_RAW(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP1_CTRL_LANE0_CROSS_RESULT_MASK SIO_INTERP1_CTRL_LANE0_CROSS_RESULT(ALL1)
#define SIO_INTERP1_CTRL_LANE0_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP1_CTRL_LANE0_CROSS_INPUT_MASK SIO_INTERP1_CTRL_LANE0_CROSS_INPUT(ALL1)
#define SIO_INTERP1_CTRL_LANE0_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP1_CTRL_LANE0_SIGNED_MASK SIO_INTERP1_CTRL_LANE0_SIGNED(ALL1)
#define SIO_INTERP1_CTRL_LANE0_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP1_CTRL_LANE0_MASK_MSB_MASK SIO_INTERP1_CTRL_LANE0_MASK_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP1_CTRL_LANE0_MASK_LSB_MASK SIO_INTERP1_CTRL_LANE0_MASK_LSB(ALL1)
#define SIO_INTERP1_CTRL_LANE0_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP1_CTRL_LANE0_SHIFT_MASK SIO_INTERP1_CTRL_LANE0_SHIFT(ALL1)

/*INTERP1_CTRL_LANE1 Register macros*/

#define SIO_INTERP1_CTRL_LANE1_FORCE_MSB(v) (((v)&0x3)<<19)
#define SIO_INTERP1_CTRL_LANE1_FORCE_MSB_MASK SIO_INTERP1_CTRL_LANE1_FORCE_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_ADD_RAW(v) (((v)&0x1)<<18)
#define SIO_INTERP1_CTRL_LANE1_ADD_RAW_MASK SIO_INTERP1_CTRL_LANE1_ADD_RAW(ALL1)
#define SIO_INTERP1_CTRL_LANE1_CROSS_RESULT(v) (((v)&0x1)<<17)
#define SIO_INTERP1_CTRL_LANE1_CROSS_RESULT_MASK SIO_INTERP1_CTRL_LANE1_CROSS_RESULT(ALL1)
#define SIO_INTERP1_CTRL_LANE1_CROSS_INPUT(v) (((v)&0x1)<<16)
#define SIO_INTERP1_CTRL_LANE1_CROSS_INPUT_MASK SIO_INTERP1_CTRL_LANE1_CROSS_INPUT(ALL1)
#define SIO_INTERP1_CTRL_LANE1_SIGNED(v) (((v)&0x1)<<15)
#define SIO_INTERP1_CTRL_LANE1_SIGNED_MASK SIO_INTERP1_CTRL_LANE1_SIGNED(ALL1)
#define SIO_INTERP1_CTRL_LANE1_MASK_MSB(v) (((v)&0x1f)<<10)
#define SIO_INTERP1_CTRL_LANE1_MASK_MSB_MASK SIO_INTERP1_CTRL_LANE1_MASK_MSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_MASK_LSB(v) (((v)&0x1f)<<5)
#define SIO_INTERP1_CTRL_LANE1_MASK_LSB_MASK SIO_INTERP1_CTRL_LANE1_MASK_LSB(ALL1)
#define SIO_INTERP1_CTRL_LANE1_SHIFT(v) (((v)&0x1f)<<0)
#define SIO_INTERP1_CTRL_LANE1_SHIFT_MASK SIO_INTERP1_CTRL_LANE1_SHIFT(ALL1)

/*INTERP1_ACCUM0_ADD Register macros*/


/*INTERP1_ACCUM1_ADD Register macros*/


/*INTERP1_BASE_1AND0 Register macros*/


/*SPINLOCK0 Register macros*/


/*SPINLOCK1 Register macros*/


/*SPINLOCK2 Register macros*/


/*SPINLOCK3 Register macros*/


/*SPINLOCK4 Register macros*/


/*SPINLOCK5 Register macros*/


/*SPINLOCK6 Register macros*/


/*SPINLOCK7 Register macros*/


/*SPINLOCK8 Register macros*/


/*SPINLOCK9 Register macros*/


/*SPINLOCK10 Register macros*/


/*SPINLOCK11 Register macros*/


/*SPINLOCK12 Register macros*/


/*SPINLOCK13 Register macros*/


/*SPINLOCK14 Register macros*/


/*SPINLOCK15 Register macros*/


/*SPINLOCK16 Register macros*/


/*SPINLOCK17 Register macros*/


/*SPINLOCK18 Register macros*/


/*SPINLOCK19 Register macros*/


/*SPINLOCK20 Register macros*/


/*SPINLOCK21 Register macros*/


/*SPINLOCK22 Register macros*/


/*SPINLOCK23 Register macros*/


/*SPINLOCK24 Register macros*/


/*SPINLOCK25 Register macros*/


/*SPINLOCK26 Register macros*/


/*SPINLOCK27 Register macros*/


/*SPINLOCK28 Register macros*/


/*SPINLOCK29 Register macros*/


/*SPINLOCK30 Register macros*/


/*SPINLOCK31 Register macros*/


#endif