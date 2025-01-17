
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

#ifndef RP2350_QMI_H
#define RP2350_QMI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t direct_csr;
		uint32_t direct_tx;
		uint32_t direct_rx;
		uint32_t m0_timing;
		uint32_t m0_rfmt;
		uint32_t m0_rcmd;
		uint32_t m0_wfmt;
		uint32_t m0_wcmd;
		uint32_t m1_timing;
		uint32_t m1_rfmt;
		uint32_t m1_rcmd;
		uint32_t m1_wfmt;
		uint32_t m1_wcmd;
		uint32_t atrans0;
		uint32_t atrans1;
		uint32_t atrans2;
		uint32_t atrans3;
		uint32_t atrans4;
		uint32_t atrans5;
		uint32_t atrans6;
		uint32_t atrans7;
		uint32_t RSVD0[1003];
		uint32_t xor_direct_csr;
		uint32_t xor_direct_tx;
		uint32_t xor_direct_rx;
		uint32_t xor_m0_timing;
		uint32_t xor_m0_rfmt;
		uint32_t xor_m0_rcmd;
		uint32_t xor_m0_wfmt;
		uint32_t xor_m0_wcmd;
		uint32_t xor_m1_timing;
		uint32_t xor_m1_rfmt;
		uint32_t xor_m1_rcmd;
		uint32_t xor_m1_wfmt;
		uint32_t xor_m1_wcmd;
		uint32_t xor_atrans0;
		uint32_t xor_atrans1;
		uint32_t xor_atrans2;
		uint32_t xor_atrans3;
		uint32_t xor_atrans4;
		uint32_t xor_atrans5;
		uint32_t xor_atrans6;
		uint32_t xor_atrans7;
		uint32_t RSVDxor_0[1003];
		uint32_t set_direct_csr;
		uint32_t set_direct_tx;
		uint32_t set_direct_rx;
		uint32_t set_m0_timing;
		uint32_t set_m0_rfmt;
		uint32_t set_m0_rcmd;
		uint32_t set_m0_wfmt;
		uint32_t set_m0_wcmd;
		uint32_t set_m1_timing;
		uint32_t set_m1_rfmt;
		uint32_t set_m1_rcmd;
		uint32_t set_m1_wfmt;
		uint32_t set_m1_wcmd;
		uint32_t set_atrans0;
		uint32_t set_atrans1;
		uint32_t set_atrans2;
		uint32_t set_atrans3;
		uint32_t set_atrans4;
		uint32_t set_atrans5;
		uint32_t set_atrans6;
		uint32_t set_atrans7;
		uint32_t RSVDset_0[1003];
		uint32_t clr_direct_csr;
		uint32_t clr_direct_tx;
		uint32_t clr_direct_rx;
		uint32_t clr_m0_timing;
		uint32_t clr_m0_rfmt;
		uint32_t clr_m0_rcmd;
		uint32_t clr_m0_wfmt;
		uint32_t clr_m0_wcmd;
		uint32_t clr_m1_timing;
		uint32_t clr_m1_rfmt;
		uint32_t clr_m1_rcmd;
		uint32_t clr_m1_wfmt;
		uint32_t clr_m1_wcmd;
		uint32_t clr_atrans0;
		uint32_t clr_atrans1;
		uint32_t clr_atrans2;
		uint32_t clr_atrans3;
		uint32_t clr_atrans4;
		uint32_t clr_atrans5;
		uint32_t clr_atrans6;
		uint32_t clr_atrans7;
		uint32_t RSVDclr_0[1003];
} QMI_REG_BLOCKS;

#define qmi (*(QMI_REG_BLOCKS volatile *)0x400d0000)

/*DIRECT_CSR Register macros*/

#define QMI_DIRECT_CSR_RXDELAY(v) (((v)&0x3)<<30)
#define QMI_DIRECT_CSR_RXDELAY_MASK QMI_DIRECT_CSR_RXDELAY(ALL1)
#define QMI_DIRECT_CSR_CLKDIV(v) (((v)&0xff)<<22)
#define QMI_DIRECT_CSR_CLKDIV_MASK QMI_DIRECT_CSR_CLKDIV(ALL1)
#define QMI_DIRECT_CSR_RXLEVEL(v) (((v)&0x7)<<18)
#define QMI_DIRECT_CSR_RXLEVEL_MASK QMI_DIRECT_CSR_RXLEVEL(ALL1)
#define QMI_DIRECT_CSR_RXFULL(v) (((v)&0x1)<<17)
#define QMI_DIRECT_CSR_RXFULL_MASK QMI_DIRECT_CSR_RXFULL(ALL1)
#define QMI_DIRECT_CSR_RXEMPTY(v) (((v)&0x1)<<16)
#define QMI_DIRECT_CSR_RXEMPTY_MASK QMI_DIRECT_CSR_RXEMPTY(ALL1)
#define QMI_DIRECT_CSR_TXLEVEL(v) (((v)&0x7)<<12)
#define QMI_DIRECT_CSR_TXLEVEL_MASK QMI_DIRECT_CSR_TXLEVEL(ALL1)
#define QMI_DIRECT_CSR_TXEMPTY(v) (((v)&0x1)<<11)
#define QMI_DIRECT_CSR_TXEMPTY_MASK QMI_DIRECT_CSR_TXEMPTY(ALL1)
#define QMI_DIRECT_CSR_TXFULL(v) (((v)&0x1)<<10)
#define QMI_DIRECT_CSR_TXFULL_MASK QMI_DIRECT_CSR_TXFULL(ALL1)
#define QMI_DIRECT_CSR_AUTO_CS1N(v) (((v)&0x1)<<7)
#define QMI_DIRECT_CSR_AUTO_CS1N_MASK QMI_DIRECT_CSR_AUTO_CS1N(ALL1)
#define QMI_DIRECT_CSR_AUTO_CS0N(v) (((v)&0x1)<<6)
#define QMI_DIRECT_CSR_AUTO_CS0N_MASK QMI_DIRECT_CSR_AUTO_CS0N(ALL1)
#define QMI_DIRECT_CSR_ASSERT_CS1N(v) (((v)&0x1)<<3)
#define QMI_DIRECT_CSR_ASSERT_CS1N_MASK QMI_DIRECT_CSR_ASSERT_CS1N(ALL1)
#define QMI_DIRECT_CSR_ASSERT_CS0N(v) (((v)&0x1)<<2)
#define QMI_DIRECT_CSR_ASSERT_CS0N_MASK QMI_DIRECT_CSR_ASSERT_CS0N(ALL1)
#define QMI_DIRECT_CSR_BUSY(v) (((v)&0x1)<<1)
#define QMI_DIRECT_CSR_BUSY_MASK QMI_DIRECT_CSR_BUSY(ALL1)
#define QMI_DIRECT_CSR_EN(v) (((v)&0x1)<<0)
#define QMI_DIRECT_CSR_EN_MASK QMI_DIRECT_CSR_EN(ALL1)

/*DIRECT_TX Register macros*/

#define QMI_DIRECT_TX_NOPUSH(v) (((v)&0x1)<<20)
#define QMI_DIRECT_TX_NOPUSH_MASK QMI_DIRECT_TX_NOPUSH(ALL1)
#define QMI_DIRECT_TX_OE(v) (((v)&0x1)<<19)
#define QMI_DIRECT_TX_OE_MASK QMI_DIRECT_TX_OE(ALL1)
#define QMI_DIRECT_TX_DWIDTH(v) (((v)&0x1)<<18)
#define QMI_DIRECT_TX_DWIDTH_MASK QMI_DIRECT_TX_DWIDTH(ALL1)
#define QMI_DIRECT_TX_IWIDTH(v) (((v)&0x3)<<16)
#define QMI_DIRECT_TX_IWIDTH_MASK QMI_DIRECT_TX_IWIDTH(ALL1)
#define QMI_DIRECT_TX_DATA(v) (((v)&0xffff)<<0)
#define QMI_DIRECT_TX_DATA_MASK QMI_DIRECT_TX_DATA(ALL1)

/*DIRECT_RX Register macros*/


/*M0_TIMING Register macros*/

#define QMI_M0_TIMING_COOLDOWN(v) (((v)&0x3)<<30)
#define QMI_M0_TIMING_COOLDOWN_MASK QMI_M0_TIMING_COOLDOWN(ALL1)
#define QMI_M0_TIMING_PAGEBREAK(v) (((v)&0x3)<<28)
#define QMI_M0_TIMING_PAGEBREAK_MASK QMI_M0_TIMING_PAGEBREAK(ALL1)
#define QMI_M0_TIMING_SELECT_SETUP(v) (((v)&0x1)<<25)
#define QMI_M0_TIMING_SELECT_SETUP_MASK QMI_M0_TIMING_SELECT_SETUP(ALL1)
#define QMI_M0_TIMING_SELECT_HOLD(v) (((v)&0x3)<<23)
#define QMI_M0_TIMING_SELECT_HOLD_MASK QMI_M0_TIMING_SELECT_HOLD(ALL1)
#define QMI_M0_TIMING_MAX_SELECT(v) (((v)&0x3f)<<17)
#define QMI_M0_TIMING_MAX_SELECT_MASK QMI_M0_TIMING_MAX_SELECT(ALL1)
#define QMI_M0_TIMING_MIN_DESELECT(v) (((v)&0x1f)<<12)
#define QMI_M0_TIMING_MIN_DESELECT_MASK QMI_M0_TIMING_MIN_DESELECT(ALL1)
#define QMI_M0_TIMING_RXDELAY(v) (((v)&0x7)<<8)
#define QMI_M0_TIMING_RXDELAY_MASK QMI_M0_TIMING_RXDELAY(ALL1)
#define QMI_M0_TIMING_CLKDIV(v) (((v)&0xff)<<0)
#define QMI_M0_TIMING_CLKDIV_MASK QMI_M0_TIMING_CLKDIV(ALL1)

/*M0_RFMT Register macros*/

#define QMI_M0_RFMT_DTR(v) (((v)&0x1)<<28)
#define QMI_M0_RFMT_DTR_MASK QMI_M0_RFMT_DTR(ALL1)
#define QMI_M0_RFMT_DUMMY_LEN(v) (((v)&0x7)<<16)
#define QMI_M0_RFMT_DUMMY_LEN_MASK QMI_M0_RFMT_DUMMY_LEN(ALL1)
#define QMI_M0_RFMT_SUFFIX_LEN(v) (((v)&0x3)<<14)
#define QMI_M0_RFMT_SUFFIX_LEN_MASK QMI_M0_RFMT_SUFFIX_LEN(ALL1)
#define QMI_M0_RFMT_PREFIX_LEN(v) (((v)&0x1)<<12)
#define QMI_M0_RFMT_PREFIX_LEN_MASK QMI_M0_RFMT_PREFIX_LEN(ALL1)
#define QMI_M0_RFMT_DATA_WIDTH(v) (((v)&0x3)<<8)
#define QMI_M0_RFMT_DATA_WIDTH_MASK QMI_M0_RFMT_DATA_WIDTH(ALL1)
#define QMI_M0_RFMT_DUMMY_WIDTH(v) (((v)&0x3)<<6)
#define QMI_M0_RFMT_DUMMY_WIDTH_MASK QMI_M0_RFMT_DUMMY_WIDTH(ALL1)
#define QMI_M0_RFMT_SUFFIX_WIDTH(v) (((v)&0x3)<<4)
#define QMI_M0_RFMT_SUFFIX_WIDTH_MASK QMI_M0_RFMT_SUFFIX_WIDTH(ALL1)
#define QMI_M0_RFMT_ADDR_WIDTH(v) (((v)&0x3)<<2)
#define QMI_M0_RFMT_ADDR_WIDTH_MASK QMI_M0_RFMT_ADDR_WIDTH(ALL1)
#define QMI_M0_RFMT_PREFIX_WIDTH(v) (((v)&0x3)<<0)
#define QMI_M0_RFMT_PREFIX_WIDTH_MASK QMI_M0_RFMT_PREFIX_WIDTH(ALL1)

/*M0_RCMD Register macros*/

#define QMI_M0_RCMD_SUFFIX(v) (((v)&0xff)<<8)
#define QMI_M0_RCMD_SUFFIX_MASK QMI_M0_RCMD_SUFFIX(ALL1)
#define QMI_M0_RCMD_PREFIX(v) (((v)&0xff)<<0)
#define QMI_M0_RCMD_PREFIX_MASK QMI_M0_RCMD_PREFIX(ALL1)

/*M0_WFMT Register macros*/

#define QMI_M0_WFMT_DTR(v) (((v)&0x1)<<28)
#define QMI_M0_WFMT_DTR_MASK QMI_M0_WFMT_DTR(ALL1)
#define QMI_M0_WFMT_DUMMY_LEN(v) (((v)&0x7)<<16)
#define QMI_M0_WFMT_DUMMY_LEN_MASK QMI_M0_WFMT_DUMMY_LEN(ALL1)
#define QMI_M0_WFMT_SUFFIX_LEN(v) (((v)&0x3)<<14)
#define QMI_M0_WFMT_SUFFIX_LEN_MASK QMI_M0_WFMT_SUFFIX_LEN(ALL1)
#define QMI_M0_WFMT_PREFIX_LEN(v) (((v)&0x1)<<12)
#define QMI_M0_WFMT_PREFIX_LEN_MASK QMI_M0_WFMT_PREFIX_LEN(ALL1)
#define QMI_M0_WFMT_DATA_WIDTH(v) (((v)&0x3)<<8)
#define QMI_M0_WFMT_DATA_WIDTH_MASK QMI_M0_WFMT_DATA_WIDTH(ALL1)
#define QMI_M0_WFMT_DUMMY_WIDTH(v) (((v)&0x3)<<6)
#define QMI_M0_WFMT_DUMMY_WIDTH_MASK QMI_M0_WFMT_DUMMY_WIDTH(ALL1)
#define QMI_M0_WFMT_SUFFIX_WIDTH(v) (((v)&0x3)<<4)
#define QMI_M0_WFMT_SUFFIX_WIDTH_MASK QMI_M0_WFMT_SUFFIX_WIDTH(ALL1)
#define QMI_M0_WFMT_ADDR_WIDTH(v) (((v)&0x3)<<2)
#define QMI_M0_WFMT_ADDR_WIDTH_MASK QMI_M0_WFMT_ADDR_WIDTH(ALL1)
#define QMI_M0_WFMT_PREFIX_WIDTH(v) (((v)&0x3)<<0)
#define QMI_M0_WFMT_PREFIX_WIDTH_MASK QMI_M0_WFMT_PREFIX_WIDTH(ALL1)

/*M0_WCMD Register macros*/

#define QMI_M0_WCMD_SUFFIX(v) (((v)&0xff)<<8)
#define QMI_M0_WCMD_SUFFIX_MASK QMI_M0_WCMD_SUFFIX(ALL1)
#define QMI_M0_WCMD_PREFIX(v) (((v)&0xff)<<0)
#define QMI_M0_WCMD_PREFIX_MASK QMI_M0_WCMD_PREFIX(ALL1)

/*M1_TIMING Register macros*/

#define QMI_M1_TIMING_COOLDOWN(v) (((v)&0x3)<<30)
#define QMI_M1_TIMING_COOLDOWN_MASK QMI_M1_TIMING_COOLDOWN(ALL1)
#define QMI_M1_TIMING_PAGEBREAK(v) (((v)&0x3)<<28)
#define QMI_M1_TIMING_PAGEBREAK_MASK QMI_M1_TIMING_PAGEBREAK(ALL1)
#define QMI_M1_TIMING_SELECT_SETUP(v) (((v)&0x1)<<25)
#define QMI_M1_TIMING_SELECT_SETUP_MASK QMI_M1_TIMING_SELECT_SETUP(ALL1)
#define QMI_M1_TIMING_SELECT_HOLD(v) (((v)&0x3)<<23)
#define QMI_M1_TIMING_SELECT_HOLD_MASK QMI_M1_TIMING_SELECT_HOLD(ALL1)
#define QMI_M1_TIMING_MAX_SELECT(v) (((v)&0x3f)<<17)
#define QMI_M1_TIMING_MAX_SELECT_MASK QMI_M1_TIMING_MAX_SELECT(ALL1)
#define QMI_M1_TIMING_MIN_DESELECT(v) (((v)&0x1f)<<12)
#define QMI_M1_TIMING_MIN_DESELECT_MASK QMI_M1_TIMING_MIN_DESELECT(ALL1)
#define QMI_M1_TIMING_RXDELAY(v) (((v)&0x7)<<8)
#define QMI_M1_TIMING_RXDELAY_MASK QMI_M1_TIMING_RXDELAY(ALL1)
#define QMI_M1_TIMING_CLKDIV(v) (((v)&0xff)<<0)
#define QMI_M1_TIMING_CLKDIV_MASK QMI_M1_TIMING_CLKDIV(ALL1)

/*M1_RFMT Register macros*/

#define QMI_M1_RFMT_DTR(v) (((v)&0x1)<<28)
#define QMI_M1_RFMT_DTR_MASK QMI_M1_RFMT_DTR(ALL1)
#define QMI_M1_RFMT_DUMMY_LEN(v) (((v)&0x7)<<16)
#define QMI_M1_RFMT_DUMMY_LEN_MASK QMI_M1_RFMT_DUMMY_LEN(ALL1)
#define QMI_M1_RFMT_SUFFIX_LEN(v) (((v)&0x3)<<14)
#define QMI_M1_RFMT_SUFFIX_LEN_MASK QMI_M1_RFMT_SUFFIX_LEN(ALL1)
#define QMI_M1_RFMT_PREFIX_LEN(v) (((v)&0x1)<<12)
#define QMI_M1_RFMT_PREFIX_LEN_MASK QMI_M1_RFMT_PREFIX_LEN(ALL1)
#define QMI_M1_RFMT_DATA_WIDTH(v) (((v)&0x3)<<8)
#define QMI_M1_RFMT_DATA_WIDTH_MASK QMI_M1_RFMT_DATA_WIDTH(ALL1)
#define QMI_M1_RFMT_DUMMY_WIDTH(v) (((v)&0x3)<<6)
#define QMI_M1_RFMT_DUMMY_WIDTH_MASK QMI_M1_RFMT_DUMMY_WIDTH(ALL1)
#define QMI_M1_RFMT_SUFFIX_WIDTH(v) (((v)&0x3)<<4)
#define QMI_M1_RFMT_SUFFIX_WIDTH_MASK QMI_M1_RFMT_SUFFIX_WIDTH(ALL1)
#define QMI_M1_RFMT_ADDR_WIDTH(v) (((v)&0x3)<<2)
#define QMI_M1_RFMT_ADDR_WIDTH_MASK QMI_M1_RFMT_ADDR_WIDTH(ALL1)
#define QMI_M1_RFMT_PREFIX_WIDTH(v) (((v)&0x3)<<0)
#define QMI_M1_RFMT_PREFIX_WIDTH_MASK QMI_M1_RFMT_PREFIX_WIDTH(ALL1)

/*M1_RCMD Register macros*/

#define QMI_M1_RCMD_SUFFIX(v) (((v)&0xff)<<8)
#define QMI_M1_RCMD_SUFFIX_MASK QMI_M1_RCMD_SUFFIX(ALL1)
#define QMI_M1_RCMD_PREFIX(v) (((v)&0xff)<<0)
#define QMI_M1_RCMD_PREFIX_MASK QMI_M1_RCMD_PREFIX(ALL1)

/*M1_WFMT Register macros*/

#define QMI_M1_WFMT_DTR(v) (((v)&0x1)<<28)
#define QMI_M1_WFMT_DTR_MASK QMI_M1_WFMT_DTR(ALL1)
#define QMI_M1_WFMT_DUMMY_LEN(v) (((v)&0x7)<<16)
#define QMI_M1_WFMT_DUMMY_LEN_MASK QMI_M1_WFMT_DUMMY_LEN(ALL1)
#define QMI_M1_WFMT_SUFFIX_LEN(v) (((v)&0x3)<<14)
#define QMI_M1_WFMT_SUFFIX_LEN_MASK QMI_M1_WFMT_SUFFIX_LEN(ALL1)
#define QMI_M1_WFMT_PREFIX_LEN(v) (((v)&0x1)<<12)
#define QMI_M1_WFMT_PREFIX_LEN_MASK QMI_M1_WFMT_PREFIX_LEN(ALL1)
#define QMI_M1_WFMT_DATA_WIDTH(v) (((v)&0x3)<<8)
#define QMI_M1_WFMT_DATA_WIDTH_MASK QMI_M1_WFMT_DATA_WIDTH(ALL1)
#define QMI_M1_WFMT_DUMMY_WIDTH(v) (((v)&0x3)<<6)
#define QMI_M1_WFMT_DUMMY_WIDTH_MASK QMI_M1_WFMT_DUMMY_WIDTH(ALL1)
#define QMI_M1_WFMT_SUFFIX_WIDTH(v) (((v)&0x3)<<4)
#define QMI_M1_WFMT_SUFFIX_WIDTH_MASK QMI_M1_WFMT_SUFFIX_WIDTH(ALL1)
#define QMI_M1_WFMT_ADDR_WIDTH(v) (((v)&0x3)<<2)
#define QMI_M1_WFMT_ADDR_WIDTH_MASK QMI_M1_WFMT_ADDR_WIDTH(ALL1)
#define QMI_M1_WFMT_PREFIX_WIDTH(v) (((v)&0x3)<<0)
#define QMI_M1_WFMT_PREFIX_WIDTH_MASK QMI_M1_WFMT_PREFIX_WIDTH(ALL1)

/*M1_WCMD Register macros*/

#define QMI_M1_WCMD_SUFFIX(v) (((v)&0xff)<<8)
#define QMI_M1_WCMD_SUFFIX_MASK QMI_M1_WCMD_SUFFIX(ALL1)
#define QMI_M1_WCMD_PREFIX(v) (((v)&0xff)<<0)
#define QMI_M1_WCMD_PREFIX_MASK QMI_M1_WCMD_PREFIX(ALL1)

/*ATRANS0 Register macros*/

#define QMI_ATRANS0_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS0_SIZE_MASK QMI_ATRANS0_SIZE(ALL1)
#define QMI_ATRANS0_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS0_BASE_MASK QMI_ATRANS0_BASE(ALL1)

/*ATRANS1 Register macros*/

#define QMI_ATRANS1_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS1_SIZE_MASK QMI_ATRANS1_SIZE(ALL1)
#define QMI_ATRANS1_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS1_BASE_MASK QMI_ATRANS1_BASE(ALL1)

/*ATRANS2 Register macros*/

#define QMI_ATRANS2_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS2_SIZE_MASK QMI_ATRANS2_SIZE(ALL1)
#define QMI_ATRANS2_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS2_BASE_MASK QMI_ATRANS2_BASE(ALL1)

/*ATRANS3 Register macros*/

#define QMI_ATRANS3_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS3_SIZE_MASK QMI_ATRANS3_SIZE(ALL1)
#define QMI_ATRANS3_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS3_BASE_MASK QMI_ATRANS3_BASE(ALL1)

/*ATRANS4 Register macros*/

#define QMI_ATRANS4_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS4_SIZE_MASK QMI_ATRANS4_SIZE(ALL1)
#define QMI_ATRANS4_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS4_BASE_MASK QMI_ATRANS4_BASE(ALL1)

/*ATRANS5 Register macros*/

#define QMI_ATRANS5_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS5_SIZE_MASK QMI_ATRANS5_SIZE(ALL1)
#define QMI_ATRANS5_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS5_BASE_MASK QMI_ATRANS5_BASE(ALL1)

/*ATRANS6 Register macros*/

#define QMI_ATRANS6_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS6_SIZE_MASK QMI_ATRANS6_SIZE(ALL1)
#define QMI_ATRANS6_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS6_BASE_MASK QMI_ATRANS6_BASE(ALL1)

/*ATRANS7 Register macros*/

#define QMI_ATRANS7_SIZE(v) (((v)&0x7ff)<<16)
#define QMI_ATRANS7_SIZE_MASK QMI_ATRANS7_SIZE(ALL1)
#define QMI_ATRANS7_BASE(v) (((v)&0xfff)<<0)
#define QMI_ATRANS7_BASE_MASK QMI_ATRANS7_BASE(ALL1)

#endif
