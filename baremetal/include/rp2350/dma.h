
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

#ifndef RP2350_DMA_H
#define RP2350_DMA_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ch0_read_addr;
		uint32_t ch0_write_addr;
		uint32_t ch0_trans_count;
		uint32_t ch0_ctrl_trig;
		uint32_t ch0_al1_ctrl;
		uint32_t ch0_al1_read_addr;
		uint32_t ch0_al1_write_addr;
		uint32_t ch0_al1_trans_count_trig;
		uint32_t ch0_al2_ctrl;
		uint32_t ch0_al2_trans_count;
		uint32_t ch0_al2_read_addr;
		uint32_t ch0_al2_write_addr_trig;
		uint32_t ch0_al3_ctrl;
		uint32_t ch0_al3_write_addr;
		uint32_t ch0_al3_trans_count;
		uint32_t ch0_al3_read_addr_trig;
		uint32_t ch1_read_addr;
		uint32_t ch1_write_addr;
		uint32_t ch1_trans_count;
		uint32_t ch1_ctrl_trig;
		uint32_t ch1_al1_ctrl;
		uint32_t ch1_al1_read_addr;
		uint32_t ch1_al1_write_addr;
		uint32_t ch1_al1_trans_count_trig;
		uint32_t ch1_al2_ctrl;
		uint32_t ch1_al2_trans_count;
		uint32_t ch1_al2_read_addr;
		uint32_t ch1_al2_write_addr_trig;
		uint32_t ch1_al3_ctrl;
		uint32_t ch1_al3_write_addr;
		uint32_t ch1_al3_trans_count;
		uint32_t ch1_al3_read_addr_trig;
		uint32_t ch2_read_addr;
		uint32_t ch2_write_addr;
		uint32_t ch2_trans_count;
		uint32_t ch2_ctrl_trig;
		uint32_t ch2_al1_ctrl;
		uint32_t ch2_al1_read_addr;
		uint32_t ch2_al1_write_addr;
		uint32_t ch2_al1_trans_count_trig;
		uint32_t ch2_al2_ctrl;
		uint32_t ch2_al2_trans_count;
		uint32_t ch2_al2_read_addr;
		uint32_t ch2_al2_write_addr_trig;
		uint32_t ch2_al3_ctrl;
		uint32_t ch2_al3_write_addr;
		uint32_t ch2_al3_trans_count;
		uint32_t ch2_al3_read_addr_trig;
		uint32_t ch3_read_addr;
		uint32_t ch3_write_addr;
		uint32_t ch3_trans_count;
		uint32_t ch3_ctrl_trig;
		uint32_t ch3_al1_ctrl;
		uint32_t ch3_al1_read_addr;
		uint32_t ch3_al1_write_addr;
		uint32_t ch3_al1_trans_count_trig;
		uint32_t ch3_al2_ctrl;
		uint32_t ch3_al2_trans_count;
		uint32_t ch3_al2_read_addr;
		uint32_t ch3_al2_write_addr_trig;
		uint32_t ch3_al3_ctrl;
		uint32_t ch3_al3_write_addr;
		uint32_t ch3_al3_trans_count;
		uint32_t ch3_al3_read_addr_trig;
		uint32_t ch4_read_addr;
		uint32_t ch4_write_addr;
		uint32_t ch4_trans_count;
		uint32_t ch4_ctrl_trig;
		uint32_t ch4_al1_ctrl;
		uint32_t ch4_al1_read_addr;
		uint32_t ch4_al1_write_addr;
		uint32_t ch4_al1_trans_count_trig;
		uint32_t ch4_al2_ctrl;
		uint32_t ch4_al2_trans_count;
		uint32_t ch4_al2_read_addr;
		uint32_t ch4_al2_write_addr_trig;
		uint32_t ch4_al3_ctrl;
		uint32_t ch4_al3_write_addr;
		uint32_t ch4_al3_trans_count;
		uint32_t ch4_al3_read_addr_trig;
		uint32_t ch5_read_addr;
		uint32_t ch5_write_addr;
		uint32_t ch5_trans_count;
		uint32_t ch5_ctrl_trig;
		uint32_t ch5_al1_ctrl;
		uint32_t ch5_al1_read_addr;
		uint32_t ch5_al1_write_addr;
		uint32_t ch5_al1_trans_count_trig;
		uint32_t ch5_al2_ctrl;
		uint32_t ch5_al2_trans_count;
		uint32_t ch5_al2_read_addr;
		uint32_t ch5_al2_write_addr_trig;
		uint32_t ch5_al3_ctrl;
		uint32_t ch5_al3_write_addr;
		uint32_t ch5_al3_trans_count;
		uint32_t ch5_al3_read_addr_trig;
		uint32_t ch6_read_addr;
		uint32_t ch6_write_addr;
		uint32_t ch6_trans_count;
		uint32_t ch6_ctrl_trig;
		uint32_t ch6_al1_ctrl;
		uint32_t ch6_al1_read_addr;
		uint32_t ch6_al1_write_addr;
		uint32_t ch6_al1_trans_count_trig;
		uint32_t ch6_al2_ctrl;
		uint32_t ch6_al2_trans_count;
		uint32_t ch6_al2_read_addr;
		uint32_t ch6_al2_write_addr_trig;
		uint32_t ch6_al3_ctrl;
		uint32_t ch6_al3_write_addr;
		uint32_t ch6_al3_trans_count;
		uint32_t ch6_al3_read_addr_trig;
		uint32_t ch7_read_addr;
		uint32_t ch7_write_addr;
		uint32_t ch7_trans_count;
		uint32_t ch7_ctrl_trig;
		uint32_t ch7_al1_ctrl;
		uint32_t ch7_al1_read_addr;
		uint32_t ch7_al1_write_addr;
		uint32_t ch7_al1_trans_count_trig;
		uint32_t ch7_al2_ctrl;
		uint32_t ch7_al2_trans_count;
		uint32_t ch7_al2_read_addr;
		uint32_t ch7_al2_write_addr_trig;
		uint32_t ch7_al3_ctrl;
		uint32_t ch7_al3_write_addr;
		uint32_t ch7_al3_trans_count;
		uint32_t ch7_al3_read_addr_trig;
		uint32_t ch8_read_addr;
		uint32_t ch8_write_addr;
		uint32_t ch8_trans_count;
		uint32_t ch8_ctrl_trig;
		uint32_t ch8_al1_ctrl;
		uint32_t ch8_al1_read_addr;
		uint32_t ch8_al1_write_addr;
		uint32_t ch8_al1_trans_count_trig;
		uint32_t ch8_al2_ctrl;
		uint32_t ch8_al2_trans_count;
		uint32_t ch8_al2_read_addr;
		uint32_t ch8_al2_write_addr_trig;
		uint32_t ch8_al3_ctrl;
		uint32_t ch8_al3_write_addr;
		uint32_t ch8_al3_trans_count;
		uint32_t ch8_al3_read_addr_trig;
		uint32_t ch9_read_addr;
		uint32_t ch9_write_addr;
		uint32_t ch9_trans_count;
		uint32_t ch9_ctrl_trig;
		uint32_t ch9_al1_ctrl;
		uint32_t ch9_al1_read_addr;
		uint32_t ch9_al1_write_addr;
		uint32_t ch9_al1_trans_count_trig;
		uint32_t ch9_al2_ctrl;
		uint32_t ch9_al2_trans_count;
		uint32_t ch9_al2_read_addr;
		uint32_t ch9_al2_write_addr_trig;
		uint32_t ch9_al3_ctrl;
		uint32_t ch9_al3_write_addr;
		uint32_t ch9_al3_trans_count;
		uint32_t ch9_al3_read_addr_trig;
		uint32_t ch10_read_addr;
		uint32_t ch10_write_addr;
		uint32_t ch10_trans_count;
		uint32_t ch10_ctrl_trig;
		uint32_t ch10_al1_ctrl;
		uint32_t ch10_al1_read_addr;
		uint32_t ch10_al1_write_addr;
		uint32_t ch10_al1_trans_count_trig;
		uint32_t ch10_al2_ctrl;
		uint32_t ch10_al2_trans_count;
		uint32_t ch10_al2_read_addr;
		uint32_t ch10_al2_write_addr_trig;
		uint32_t ch10_al3_ctrl;
		uint32_t ch10_al3_write_addr;
		uint32_t ch10_al3_trans_count;
		uint32_t ch10_al3_read_addr_trig;
		uint32_t ch11_read_addr;
		uint32_t ch11_write_addr;
		uint32_t ch11_trans_count;
		uint32_t ch11_ctrl_trig;
		uint32_t ch11_al1_ctrl;
		uint32_t ch11_al1_read_addr;
		uint32_t ch11_al1_write_addr;
		uint32_t ch11_al1_trans_count_trig;
		uint32_t ch11_al2_ctrl;
		uint32_t ch11_al2_trans_count;
		uint32_t ch11_al2_read_addr;
		uint32_t ch11_al2_write_addr_trig;
		uint32_t ch11_al3_ctrl;
		uint32_t ch11_al3_write_addr;
		uint32_t ch11_al3_trans_count;
		uint32_t ch11_al3_read_addr_trig;
		uint32_t ch12_read_addr;
		uint32_t ch12_write_addr;
		uint32_t ch12_trans_count;
		uint32_t ch12_ctrl_trig;
		uint32_t ch12_al1_ctrl;
		uint32_t ch12_al1_read_addr;
		uint32_t ch12_al1_write_addr;
		uint32_t ch12_al1_trans_count_trig;
		uint32_t ch12_al2_ctrl;
		uint32_t ch12_al2_trans_count;
		uint32_t ch12_al2_read_addr;
		uint32_t ch12_al2_write_addr_trig;
		uint32_t ch12_al3_ctrl;
		uint32_t ch12_al3_write_addr;
		uint32_t ch12_al3_trans_count;
		uint32_t ch12_al3_read_addr_trig;
		uint32_t ch13_read_addr;
		uint32_t ch13_write_addr;
		uint32_t ch13_trans_count;
		uint32_t ch13_ctrl_trig;
		uint32_t ch13_al1_ctrl;
		uint32_t ch13_al1_read_addr;
		uint32_t ch13_al1_write_addr;
		uint32_t ch13_al1_trans_count_trig;
		uint32_t ch13_al2_ctrl;
		uint32_t ch13_al2_trans_count;
		uint32_t ch13_al2_read_addr;
		uint32_t ch13_al2_write_addr_trig;
		uint32_t ch13_al3_ctrl;
		uint32_t ch13_al3_write_addr;
		uint32_t ch13_al3_trans_count;
		uint32_t ch13_al3_read_addr_trig;
		uint32_t ch14_read_addr;
		uint32_t ch14_write_addr;
		uint32_t ch14_trans_count;
		uint32_t ch14_ctrl_trig;
		uint32_t ch14_al1_ctrl;
		uint32_t ch14_al1_read_addr;
		uint32_t ch14_al1_write_addr;
		uint32_t ch14_al1_trans_count_trig;
		uint32_t ch14_al2_ctrl;
		uint32_t ch14_al2_trans_count;
		uint32_t ch14_al2_read_addr;
		uint32_t ch14_al2_write_addr_trig;
		uint32_t ch14_al3_ctrl;
		uint32_t ch14_al3_write_addr;
		uint32_t ch14_al3_trans_count;
		uint32_t ch14_al3_read_addr_trig;
		uint32_t ch15_read_addr;
		uint32_t ch15_write_addr;
		uint32_t ch15_trans_count;
		uint32_t ch15_ctrl_trig;
		uint32_t ch15_al1_ctrl;
		uint32_t ch15_al1_read_addr;
		uint32_t ch15_al1_write_addr;
		uint32_t ch15_al1_trans_count_trig;
		uint32_t ch15_al2_ctrl;
		uint32_t ch15_al2_trans_count;
		uint32_t ch15_al2_read_addr;
		uint32_t ch15_al2_write_addr_trig;
		uint32_t ch15_al3_ctrl;
		uint32_t ch15_al3_write_addr;
		uint32_t ch15_al3_trans_count;
		uint32_t ch15_al3_read_addr_trig;
		uint32_t intr;
		uint32_t inte0;
		uint32_t intf0;
		uint32_t ints0;
		uint32_t RSVD0;
		uint32_t inte1;
		uint32_t intf1;
		uint32_t ints1;
		uint32_t RSVD1;
		uint32_t inte2;
		uint32_t intf2;
		uint32_t ints2;
		uint32_t RSVD2;
		uint32_t inte3;
		uint32_t intf3;
		uint32_t ints3;
		uint32_t timer0;
		uint32_t timer1;
		uint32_t timer2;
		uint32_t timer3;
		uint32_t multi_chan_trigger;
		uint32_t sniff_ctrl;
		uint32_t sniff_data;
		uint32_t RSVD3;
		uint32_t fifo_levels;
		uint32_t chan_abort;
		uint32_t n_channels;
		uint32_t RSVD4[5];
		uint32_t seccfg_ch0;
		uint32_t seccfg_ch1;
		uint32_t seccfg_ch2;
		uint32_t seccfg_ch3;
		uint32_t seccfg_ch4;
		uint32_t seccfg_ch5;
		uint32_t seccfg_ch6;
		uint32_t seccfg_ch7;
		uint32_t seccfg_ch8;
		uint32_t seccfg_ch9;
		uint32_t seccfg_ch10;
		uint32_t seccfg_ch11;
		uint32_t seccfg_ch12;
		uint32_t seccfg_ch13;
		uint32_t seccfg_ch14;
		uint32_t seccfg_ch15;
		uint32_t seccfg_irq0;
		uint32_t seccfg_irq1;
		uint32_t seccfg_irq2;
		uint32_t seccfg_irq3;
		uint32_t seccfg_misc;
		uint32_t RSVD5[11];
		uint32_t mpu_ctrl;
		uint32_t mpu_bar0;
		uint32_t mpu_lar0;
		uint32_t mpu_bar1;
		uint32_t mpu_lar1;
		uint32_t mpu_bar2;
		uint32_t mpu_lar2;
		uint32_t mpu_bar3;
		uint32_t mpu_lar3;
		uint32_t mpu_bar4;
		uint32_t mpu_lar4;
		uint32_t mpu_bar5;
		uint32_t mpu_lar5;
		uint32_t mpu_bar6;
		uint32_t mpu_lar6;
		uint32_t mpu_bar7;
		uint32_t mpu_lar7;
		uint32_t RSVD6[175];
		uint32_t ch0_dbg_ctdreq;
		uint32_t ch0_dbg_tcr;
		uint32_t RSVD7[14];
		uint32_t ch1_dbg_ctdreq;
		uint32_t ch1_dbg_tcr;
		uint32_t RSVD8[14];
		uint32_t ch2_dbg_ctdreq;
		uint32_t ch2_dbg_tcr;
		uint32_t RSVD9[14];
		uint32_t ch3_dbg_ctdreq;
		uint32_t ch3_dbg_tcr;
		uint32_t RSVD10[14];
		uint32_t ch4_dbg_ctdreq;
		uint32_t ch4_dbg_tcr;
		uint32_t RSVD11[14];
		uint32_t ch5_dbg_ctdreq;
		uint32_t ch5_dbg_tcr;
		uint32_t RSVD12[14];
		uint32_t ch6_dbg_ctdreq;
		uint32_t ch6_dbg_tcr;
		uint32_t RSVD13[14];
		uint32_t ch7_dbg_ctdreq;
		uint32_t ch7_dbg_tcr;
		uint32_t RSVD14[14];
		uint32_t ch8_dbg_ctdreq;
		uint32_t ch8_dbg_tcr;
		uint32_t RSVD15[14];
		uint32_t ch9_dbg_ctdreq;
		uint32_t ch9_dbg_tcr;
		uint32_t RSVD16[14];
		uint32_t ch10_dbg_ctdreq;
		uint32_t ch10_dbg_tcr;
		uint32_t RSVD17[14];
		uint32_t ch11_dbg_ctdreq;
		uint32_t ch11_dbg_tcr;
		uint32_t RSVD18[14];
		uint32_t ch12_dbg_ctdreq;
		uint32_t ch12_dbg_tcr;
		uint32_t RSVD19[14];
		uint32_t ch13_dbg_ctdreq;
		uint32_t ch13_dbg_tcr;
		uint32_t RSVD20[14];
		uint32_t ch14_dbg_ctdreq;
		uint32_t ch14_dbg_tcr;
		uint32_t RSVD21[14];
		uint32_t ch15_dbg_ctdreq;
		uint32_t ch15_dbg_tcr;
		uint32_t RSVD22[270];
		uint32_t xor_ch0_read_addr;
		uint32_t xor_ch0_write_addr;
		uint32_t xor_ch0_trans_count;
		uint32_t xor_ch0_ctrl_trig;
		uint32_t xor_ch0_al1_ctrl;
		uint32_t xor_ch0_al1_read_addr;
		uint32_t xor_ch0_al1_write_addr;
		uint32_t xor_ch0_al1_trans_count_trig;
		uint32_t xor_ch0_al2_ctrl;
		uint32_t xor_ch0_al2_trans_count;
		uint32_t xor_ch0_al2_read_addr;
		uint32_t xor_ch0_al2_write_addr_trig;
		uint32_t xor_ch0_al3_ctrl;
		uint32_t xor_ch0_al3_write_addr;
		uint32_t xor_ch0_al3_trans_count;
		uint32_t xor_ch0_al3_read_addr_trig;
		uint32_t xor_ch1_read_addr;
		uint32_t xor_ch1_write_addr;
		uint32_t xor_ch1_trans_count;
		uint32_t xor_ch1_ctrl_trig;
		uint32_t xor_ch1_al1_ctrl;
		uint32_t xor_ch1_al1_read_addr;
		uint32_t xor_ch1_al1_write_addr;
		uint32_t xor_ch1_al1_trans_count_trig;
		uint32_t xor_ch1_al2_ctrl;
		uint32_t xor_ch1_al2_trans_count;
		uint32_t xor_ch1_al2_read_addr;
		uint32_t xor_ch1_al2_write_addr_trig;
		uint32_t xor_ch1_al3_ctrl;
		uint32_t xor_ch1_al3_write_addr;
		uint32_t xor_ch1_al3_trans_count;
		uint32_t xor_ch1_al3_read_addr_trig;
		uint32_t xor_ch2_read_addr;
		uint32_t xor_ch2_write_addr;
		uint32_t xor_ch2_trans_count;
		uint32_t xor_ch2_ctrl_trig;
		uint32_t xor_ch2_al1_ctrl;
		uint32_t xor_ch2_al1_read_addr;
		uint32_t xor_ch2_al1_write_addr;
		uint32_t xor_ch2_al1_trans_count_trig;
		uint32_t xor_ch2_al2_ctrl;
		uint32_t xor_ch2_al2_trans_count;
		uint32_t xor_ch2_al2_read_addr;
		uint32_t xor_ch2_al2_write_addr_trig;
		uint32_t xor_ch2_al3_ctrl;
		uint32_t xor_ch2_al3_write_addr;
		uint32_t xor_ch2_al3_trans_count;
		uint32_t xor_ch2_al3_read_addr_trig;
		uint32_t xor_ch3_read_addr;
		uint32_t xor_ch3_write_addr;
		uint32_t xor_ch3_trans_count;
		uint32_t xor_ch3_ctrl_trig;
		uint32_t xor_ch3_al1_ctrl;
		uint32_t xor_ch3_al1_read_addr;
		uint32_t xor_ch3_al1_write_addr;
		uint32_t xor_ch3_al1_trans_count_trig;
		uint32_t xor_ch3_al2_ctrl;
		uint32_t xor_ch3_al2_trans_count;
		uint32_t xor_ch3_al2_read_addr;
		uint32_t xor_ch3_al2_write_addr_trig;
		uint32_t xor_ch3_al3_ctrl;
		uint32_t xor_ch3_al3_write_addr;
		uint32_t xor_ch3_al3_trans_count;
		uint32_t xor_ch3_al3_read_addr_trig;
		uint32_t xor_ch4_read_addr;
		uint32_t xor_ch4_write_addr;
		uint32_t xor_ch4_trans_count;
		uint32_t xor_ch4_ctrl_trig;
		uint32_t xor_ch4_al1_ctrl;
		uint32_t xor_ch4_al1_read_addr;
		uint32_t xor_ch4_al1_write_addr;
		uint32_t xor_ch4_al1_trans_count_trig;
		uint32_t xor_ch4_al2_ctrl;
		uint32_t xor_ch4_al2_trans_count;
		uint32_t xor_ch4_al2_read_addr;
		uint32_t xor_ch4_al2_write_addr_trig;
		uint32_t xor_ch4_al3_ctrl;
		uint32_t xor_ch4_al3_write_addr;
		uint32_t xor_ch4_al3_trans_count;
		uint32_t xor_ch4_al3_read_addr_trig;
		uint32_t xor_ch5_read_addr;
		uint32_t xor_ch5_write_addr;
		uint32_t xor_ch5_trans_count;
		uint32_t xor_ch5_ctrl_trig;
		uint32_t xor_ch5_al1_ctrl;
		uint32_t xor_ch5_al1_read_addr;
		uint32_t xor_ch5_al1_write_addr;
		uint32_t xor_ch5_al1_trans_count_trig;
		uint32_t xor_ch5_al2_ctrl;
		uint32_t xor_ch5_al2_trans_count;
		uint32_t xor_ch5_al2_read_addr;
		uint32_t xor_ch5_al2_write_addr_trig;
		uint32_t xor_ch5_al3_ctrl;
		uint32_t xor_ch5_al3_write_addr;
		uint32_t xor_ch5_al3_trans_count;
		uint32_t xor_ch5_al3_read_addr_trig;
		uint32_t xor_ch6_read_addr;
		uint32_t xor_ch6_write_addr;
		uint32_t xor_ch6_trans_count;
		uint32_t xor_ch6_ctrl_trig;
		uint32_t xor_ch6_al1_ctrl;
		uint32_t xor_ch6_al1_read_addr;
		uint32_t xor_ch6_al1_write_addr;
		uint32_t xor_ch6_al1_trans_count_trig;
		uint32_t xor_ch6_al2_ctrl;
		uint32_t xor_ch6_al2_trans_count;
		uint32_t xor_ch6_al2_read_addr;
		uint32_t xor_ch6_al2_write_addr_trig;
		uint32_t xor_ch6_al3_ctrl;
		uint32_t xor_ch6_al3_write_addr;
		uint32_t xor_ch6_al3_trans_count;
		uint32_t xor_ch6_al3_read_addr_trig;
		uint32_t xor_ch7_read_addr;
		uint32_t xor_ch7_write_addr;
		uint32_t xor_ch7_trans_count;
		uint32_t xor_ch7_ctrl_trig;
		uint32_t xor_ch7_al1_ctrl;
		uint32_t xor_ch7_al1_read_addr;
		uint32_t xor_ch7_al1_write_addr;
		uint32_t xor_ch7_al1_trans_count_trig;
		uint32_t xor_ch7_al2_ctrl;
		uint32_t xor_ch7_al2_trans_count;
		uint32_t xor_ch7_al2_read_addr;
		uint32_t xor_ch7_al2_write_addr_trig;
		uint32_t xor_ch7_al3_ctrl;
		uint32_t xor_ch7_al3_write_addr;
		uint32_t xor_ch7_al3_trans_count;
		uint32_t xor_ch7_al3_read_addr_trig;
		uint32_t xor_ch8_read_addr;
		uint32_t xor_ch8_write_addr;
		uint32_t xor_ch8_trans_count;
		uint32_t xor_ch8_ctrl_trig;
		uint32_t xor_ch8_al1_ctrl;
		uint32_t xor_ch8_al1_read_addr;
		uint32_t xor_ch8_al1_write_addr;
		uint32_t xor_ch8_al1_trans_count_trig;
		uint32_t xor_ch8_al2_ctrl;
		uint32_t xor_ch8_al2_trans_count;
		uint32_t xor_ch8_al2_read_addr;
		uint32_t xor_ch8_al2_write_addr_trig;
		uint32_t xor_ch8_al3_ctrl;
		uint32_t xor_ch8_al3_write_addr;
		uint32_t xor_ch8_al3_trans_count;
		uint32_t xor_ch8_al3_read_addr_trig;
		uint32_t xor_ch9_read_addr;
		uint32_t xor_ch9_write_addr;
		uint32_t xor_ch9_trans_count;
		uint32_t xor_ch9_ctrl_trig;
		uint32_t xor_ch9_al1_ctrl;
		uint32_t xor_ch9_al1_read_addr;
		uint32_t xor_ch9_al1_write_addr;
		uint32_t xor_ch9_al1_trans_count_trig;
		uint32_t xor_ch9_al2_ctrl;
		uint32_t xor_ch9_al2_trans_count;
		uint32_t xor_ch9_al2_read_addr;
		uint32_t xor_ch9_al2_write_addr_trig;
		uint32_t xor_ch9_al3_ctrl;
		uint32_t xor_ch9_al3_write_addr;
		uint32_t xor_ch9_al3_trans_count;
		uint32_t xor_ch9_al3_read_addr_trig;
		uint32_t xor_ch10_read_addr;
		uint32_t xor_ch10_write_addr;
		uint32_t xor_ch10_trans_count;
		uint32_t xor_ch10_ctrl_trig;
		uint32_t xor_ch10_al1_ctrl;
		uint32_t xor_ch10_al1_read_addr;
		uint32_t xor_ch10_al1_write_addr;
		uint32_t xor_ch10_al1_trans_count_trig;
		uint32_t xor_ch10_al2_ctrl;
		uint32_t xor_ch10_al2_trans_count;
		uint32_t xor_ch10_al2_read_addr;
		uint32_t xor_ch10_al2_write_addr_trig;
		uint32_t xor_ch10_al3_ctrl;
		uint32_t xor_ch10_al3_write_addr;
		uint32_t xor_ch10_al3_trans_count;
		uint32_t xor_ch10_al3_read_addr_trig;
		uint32_t xor_ch11_read_addr;
		uint32_t xor_ch11_write_addr;
		uint32_t xor_ch11_trans_count;
		uint32_t xor_ch11_ctrl_trig;
		uint32_t xor_ch11_al1_ctrl;
		uint32_t xor_ch11_al1_read_addr;
		uint32_t xor_ch11_al1_write_addr;
		uint32_t xor_ch11_al1_trans_count_trig;
		uint32_t xor_ch11_al2_ctrl;
		uint32_t xor_ch11_al2_trans_count;
		uint32_t xor_ch11_al2_read_addr;
		uint32_t xor_ch11_al2_write_addr_trig;
		uint32_t xor_ch11_al3_ctrl;
		uint32_t xor_ch11_al3_write_addr;
		uint32_t xor_ch11_al3_trans_count;
		uint32_t xor_ch11_al3_read_addr_trig;
		uint32_t xor_ch12_read_addr;
		uint32_t xor_ch12_write_addr;
		uint32_t xor_ch12_trans_count;
		uint32_t xor_ch12_ctrl_trig;
		uint32_t xor_ch12_al1_ctrl;
		uint32_t xor_ch12_al1_read_addr;
		uint32_t xor_ch12_al1_write_addr;
		uint32_t xor_ch12_al1_trans_count_trig;
		uint32_t xor_ch12_al2_ctrl;
		uint32_t xor_ch12_al2_trans_count;
		uint32_t xor_ch12_al2_read_addr;
		uint32_t xor_ch12_al2_write_addr_trig;
		uint32_t xor_ch12_al3_ctrl;
		uint32_t xor_ch12_al3_write_addr;
		uint32_t xor_ch12_al3_trans_count;
		uint32_t xor_ch12_al3_read_addr_trig;
		uint32_t xor_ch13_read_addr;
		uint32_t xor_ch13_write_addr;
		uint32_t xor_ch13_trans_count;
		uint32_t xor_ch13_ctrl_trig;
		uint32_t xor_ch13_al1_ctrl;
		uint32_t xor_ch13_al1_read_addr;
		uint32_t xor_ch13_al1_write_addr;
		uint32_t xor_ch13_al1_trans_count_trig;
		uint32_t xor_ch13_al2_ctrl;
		uint32_t xor_ch13_al2_trans_count;
		uint32_t xor_ch13_al2_read_addr;
		uint32_t xor_ch13_al2_write_addr_trig;
		uint32_t xor_ch13_al3_ctrl;
		uint32_t xor_ch13_al3_write_addr;
		uint32_t xor_ch13_al3_trans_count;
		uint32_t xor_ch13_al3_read_addr_trig;
		uint32_t xor_ch14_read_addr;
		uint32_t xor_ch14_write_addr;
		uint32_t xor_ch14_trans_count;
		uint32_t xor_ch14_ctrl_trig;
		uint32_t xor_ch14_al1_ctrl;
		uint32_t xor_ch14_al1_read_addr;
		uint32_t xor_ch14_al1_write_addr;
		uint32_t xor_ch14_al1_trans_count_trig;
		uint32_t xor_ch14_al2_ctrl;
		uint32_t xor_ch14_al2_trans_count;
		uint32_t xor_ch14_al2_read_addr;
		uint32_t xor_ch14_al2_write_addr_trig;
		uint32_t xor_ch14_al3_ctrl;
		uint32_t xor_ch14_al3_write_addr;
		uint32_t xor_ch14_al3_trans_count;
		uint32_t xor_ch14_al3_read_addr_trig;
		uint32_t xor_ch15_read_addr;
		uint32_t xor_ch15_write_addr;
		uint32_t xor_ch15_trans_count;
		uint32_t xor_ch15_ctrl_trig;
		uint32_t xor_ch15_al1_ctrl;
		uint32_t xor_ch15_al1_read_addr;
		uint32_t xor_ch15_al1_write_addr;
		uint32_t xor_ch15_al1_trans_count_trig;
		uint32_t xor_ch15_al2_ctrl;
		uint32_t xor_ch15_al2_trans_count;
		uint32_t xor_ch15_al2_read_addr;
		uint32_t xor_ch15_al2_write_addr_trig;
		uint32_t xor_ch15_al3_ctrl;
		uint32_t xor_ch15_al3_write_addr;
		uint32_t xor_ch15_al3_trans_count;
		uint32_t xor_ch15_al3_read_addr_trig;
		uint32_t xor_intr;
		uint32_t xor_inte0;
		uint32_t xor_intf0;
		uint32_t xor_ints0;
		uint32_t RSVDxor_0;
		uint32_t xor_inte1;
		uint32_t xor_intf1;
		uint32_t xor_ints1;
		uint32_t RSVDxor_1;
		uint32_t xor_inte2;
		uint32_t xor_intf2;
		uint32_t xor_ints2;
		uint32_t RSVDxor_2;
		uint32_t xor_inte3;
		uint32_t xor_intf3;
		uint32_t xor_ints3;
		uint32_t xor_timer0;
		uint32_t xor_timer1;
		uint32_t xor_timer2;
		uint32_t xor_timer3;
		uint32_t xor_multi_chan_trigger;
		uint32_t xor_sniff_ctrl;
		uint32_t xor_sniff_data;
		uint32_t RSVDxor_3;
		uint32_t xor_fifo_levels;
		uint32_t xor_chan_abort;
		uint32_t xor_n_channels;
		uint32_t RSVDxor_4[5];
		uint32_t xor_seccfg_ch0;
		uint32_t xor_seccfg_ch1;
		uint32_t xor_seccfg_ch2;
		uint32_t xor_seccfg_ch3;
		uint32_t xor_seccfg_ch4;
		uint32_t xor_seccfg_ch5;
		uint32_t xor_seccfg_ch6;
		uint32_t xor_seccfg_ch7;
		uint32_t xor_seccfg_ch8;
		uint32_t xor_seccfg_ch9;
		uint32_t xor_seccfg_ch10;
		uint32_t xor_seccfg_ch11;
		uint32_t xor_seccfg_ch12;
		uint32_t xor_seccfg_ch13;
		uint32_t xor_seccfg_ch14;
		uint32_t xor_seccfg_ch15;
		uint32_t xor_seccfg_irq0;
		uint32_t xor_seccfg_irq1;
		uint32_t xor_seccfg_irq2;
		uint32_t xor_seccfg_irq3;
		uint32_t xor_seccfg_misc;
		uint32_t RSVDxor_5[11];
		uint32_t xor_mpu_ctrl;
		uint32_t xor_mpu_bar0;
		uint32_t xor_mpu_lar0;
		uint32_t xor_mpu_bar1;
		uint32_t xor_mpu_lar1;
		uint32_t xor_mpu_bar2;
		uint32_t xor_mpu_lar2;
		uint32_t xor_mpu_bar3;
		uint32_t xor_mpu_lar3;
		uint32_t xor_mpu_bar4;
		uint32_t xor_mpu_lar4;
		uint32_t xor_mpu_bar5;
		uint32_t xor_mpu_lar5;
		uint32_t xor_mpu_bar6;
		uint32_t xor_mpu_lar6;
		uint32_t xor_mpu_bar7;
		uint32_t xor_mpu_lar7;
		uint32_t RSVDxor_6[175];
		uint32_t xor_ch0_dbg_ctdreq;
		uint32_t xor_ch0_dbg_tcr;
		uint32_t RSVDxor_7[14];
		uint32_t xor_ch1_dbg_ctdreq;
		uint32_t xor_ch1_dbg_tcr;
		uint32_t RSVDxor_8[14];
		uint32_t xor_ch2_dbg_ctdreq;
		uint32_t xor_ch2_dbg_tcr;
		uint32_t RSVDxor_9[14];
		uint32_t xor_ch3_dbg_ctdreq;
		uint32_t xor_ch3_dbg_tcr;
		uint32_t RSVDxor_10[14];
		uint32_t xor_ch4_dbg_ctdreq;
		uint32_t xor_ch4_dbg_tcr;
		uint32_t RSVDxor_11[14];
		uint32_t xor_ch5_dbg_ctdreq;
		uint32_t xor_ch5_dbg_tcr;
		uint32_t RSVDxor_12[14];
		uint32_t xor_ch6_dbg_ctdreq;
		uint32_t xor_ch6_dbg_tcr;
		uint32_t RSVDxor_13[14];
		uint32_t xor_ch7_dbg_ctdreq;
		uint32_t xor_ch7_dbg_tcr;
		uint32_t RSVDxor_14[14];
		uint32_t xor_ch8_dbg_ctdreq;
		uint32_t xor_ch8_dbg_tcr;
		uint32_t RSVDxor_15[14];
		uint32_t xor_ch9_dbg_ctdreq;
		uint32_t xor_ch9_dbg_tcr;
		uint32_t RSVDxor_16[14];
		uint32_t xor_ch10_dbg_ctdreq;
		uint32_t xor_ch10_dbg_tcr;
		uint32_t RSVDxor_17[14];
		uint32_t xor_ch11_dbg_ctdreq;
		uint32_t xor_ch11_dbg_tcr;
		uint32_t RSVDxor_18[14];
		uint32_t xor_ch12_dbg_ctdreq;
		uint32_t xor_ch12_dbg_tcr;
		uint32_t RSVDxor_19[14];
		uint32_t xor_ch13_dbg_ctdreq;
		uint32_t xor_ch13_dbg_tcr;
		uint32_t RSVDxor_20[14];
		uint32_t xor_ch14_dbg_ctdreq;
		uint32_t xor_ch14_dbg_tcr;
		uint32_t RSVDxor_21[14];
		uint32_t xor_ch15_dbg_ctdreq;
		uint32_t xor_ch15_dbg_tcr;
		uint32_t RSVDxor_22[270];
		uint32_t set_ch0_read_addr;
		uint32_t set_ch0_write_addr;
		uint32_t set_ch0_trans_count;
		uint32_t set_ch0_ctrl_trig;
		uint32_t set_ch0_al1_ctrl;
		uint32_t set_ch0_al1_read_addr;
		uint32_t set_ch0_al1_write_addr;
		uint32_t set_ch0_al1_trans_count_trig;
		uint32_t set_ch0_al2_ctrl;
		uint32_t set_ch0_al2_trans_count;
		uint32_t set_ch0_al2_read_addr;
		uint32_t set_ch0_al2_write_addr_trig;
		uint32_t set_ch0_al3_ctrl;
		uint32_t set_ch0_al3_write_addr;
		uint32_t set_ch0_al3_trans_count;
		uint32_t set_ch0_al3_read_addr_trig;
		uint32_t set_ch1_read_addr;
		uint32_t set_ch1_write_addr;
		uint32_t set_ch1_trans_count;
		uint32_t set_ch1_ctrl_trig;
		uint32_t set_ch1_al1_ctrl;
		uint32_t set_ch1_al1_read_addr;
		uint32_t set_ch1_al1_write_addr;
		uint32_t set_ch1_al1_trans_count_trig;
		uint32_t set_ch1_al2_ctrl;
		uint32_t set_ch1_al2_trans_count;
		uint32_t set_ch1_al2_read_addr;
		uint32_t set_ch1_al2_write_addr_trig;
		uint32_t set_ch1_al3_ctrl;
		uint32_t set_ch1_al3_write_addr;
		uint32_t set_ch1_al3_trans_count;
		uint32_t set_ch1_al3_read_addr_trig;
		uint32_t set_ch2_read_addr;
		uint32_t set_ch2_write_addr;
		uint32_t set_ch2_trans_count;
		uint32_t set_ch2_ctrl_trig;
		uint32_t set_ch2_al1_ctrl;
		uint32_t set_ch2_al1_read_addr;
		uint32_t set_ch2_al1_write_addr;
		uint32_t set_ch2_al1_trans_count_trig;
		uint32_t set_ch2_al2_ctrl;
		uint32_t set_ch2_al2_trans_count;
		uint32_t set_ch2_al2_read_addr;
		uint32_t set_ch2_al2_write_addr_trig;
		uint32_t set_ch2_al3_ctrl;
		uint32_t set_ch2_al3_write_addr;
		uint32_t set_ch2_al3_trans_count;
		uint32_t set_ch2_al3_read_addr_trig;
		uint32_t set_ch3_read_addr;
		uint32_t set_ch3_write_addr;
		uint32_t set_ch3_trans_count;
		uint32_t set_ch3_ctrl_trig;
		uint32_t set_ch3_al1_ctrl;
		uint32_t set_ch3_al1_read_addr;
		uint32_t set_ch3_al1_write_addr;
		uint32_t set_ch3_al1_trans_count_trig;
		uint32_t set_ch3_al2_ctrl;
		uint32_t set_ch3_al2_trans_count;
		uint32_t set_ch3_al2_read_addr;
		uint32_t set_ch3_al2_write_addr_trig;
		uint32_t set_ch3_al3_ctrl;
		uint32_t set_ch3_al3_write_addr;
		uint32_t set_ch3_al3_trans_count;
		uint32_t set_ch3_al3_read_addr_trig;
		uint32_t set_ch4_read_addr;
		uint32_t set_ch4_write_addr;
		uint32_t set_ch4_trans_count;
		uint32_t set_ch4_ctrl_trig;
		uint32_t set_ch4_al1_ctrl;
		uint32_t set_ch4_al1_read_addr;
		uint32_t set_ch4_al1_write_addr;
		uint32_t set_ch4_al1_trans_count_trig;
		uint32_t set_ch4_al2_ctrl;
		uint32_t set_ch4_al2_trans_count;
		uint32_t set_ch4_al2_read_addr;
		uint32_t set_ch4_al2_write_addr_trig;
		uint32_t set_ch4_al3_ctrl;
		uint32_t set_ch4_al3_write_addr;
		uint32_t set_ch4_al3_trans_count;
		uint32_t set_ch4_al3_read_addr_trig;
		uint32_t set_ch5_read_addr;
		uint32_t set_ch5_write_addr;
		uint32_t set_ch5_trans_count;
		uint32_t set_ch5_ctrl_trig;
		uint32_t set_ch5_al1_ctrl;
		uint32_t set_ch5_al1_read_addr;
		uint32_t set_ch5_al1_write_addr;
		uint32_t set_ch5_al1_trans_count_trig;
		uint32_t set_ch5_al2_ctrl;
		uint32_t set_ch5_al2_trans_count;
		uint32_t set_ch5_al2_read_addr;
		uint32_t set_ch5_al2_write_addr_trig;
		uint32_t set_ch5_al3_ctrl;
		uint32_t set_ch5_al3_write_addr;
		uint32_t set_ch5_al3_trans_count;
		uint32_t set_ch5_al3_read_addr_trig;
		uint32_t set_ch6_read_addr;
		uint32_t set_ch6_write_addr;
		uint32_t set_ch6_trans_count;
		uint32_t set_ch6_ctrl_trig;
		uint32_t set_ch6_al1_ctrl;
		uint32_t set_ch6_al1_read_addr;
		uint32_t set_ch6_al1_write_addr;
		uint32_t set_ch6_al1_trans_count_trig;
		uint32_t set_ch6_al2_ctrl;
		uint32_t set_ch6_al2_trans_count;
		uint32_t set_ch6_al2_read_addr;
		uint32_t set_ch6_al2_write_addr_trig;
		uint32_t set_ch6_al3_ctrl;
		uint32_t set_ch6_al3_write_addr;
		uint32_t set_ch6_al3_trans_count;
		uint32_t set_ch6_al3_read_addr_trig;
		uint32_t set_ch7_read_addr;
		uint32_t set_ch7_write_addr;
		uint32_t set_ch7_trans_count;
		uint32_t set_ch7_ctrl_trig;
		uint32_t set_ch7_al1_ctrl;
		uint32_t set_ch7_al1_read_addr;
		uint32_t set_ch7_al1_write_addr;
		uint32_t set_ch7_al1_trans_count_trig;
		uint32_t set_ch7_al2_ctrl;
		uint32_t set_ch7_al2_trans_count;
		uint32_t set_ch7_al2_read_addr;
		uint32_t set_ch7_al2_write_addr_trig;
		uint32_t set_ch7_al3_ctrl;
		uint32_t set_ch7_al3_write_addr;
		uint32_t set_ch7_al3_trans_count;
		uint32_t set_ch7_al3_read_addr_trig;
		uint32_t set_ch8_read_addr;
		uint32_t set_ch8_write_addr;
		uint32_t set_ch8_trans_count;
		uint32_t set_ch8_ctrl_trig;
		uint32_t set_ch8_al1_ctrl;
		uint32_t set_ch8_al1_read_addr;
		uint32_t set_ch8_al1_write_addr;
		uint32_t set_ch8_al1_trans_count_trig;
		uint32_t set_ch8_al2_ctrl;
		uint32_t set_ch8_al2_trans_count;
		uint32_t set_ch8_al2_read_addr;
		uint32_t set_ch8_al2_write_addr_trig;
		uint32_t set_ch8_al3_ctrl;
		uint32_t set_ch8_al3_write_addr;
		uint32_t set_ch8_al3_trans_count;
		uint32_t set_ch8_al3_read_addr_trig;
		uint32_t set_ch9_read_addr;
		uint32_t set_ch9_write_addr;
		uint32_t set_ch9_trans_count;
		uint32_t set_ch9_ctrl_trig;
		uint32_t set_ch9_al1_ctrl;
		uint32_t set_ch9_al1_read_addr;
		uint32_t set_ch9_al1_write_addr;
		uint32_t set_ch9_al1_trans_count_trig;
		uint32_t set_ch9_al2_ctrl;
		uint32_t set_ch9_al2_trans_count;
		uint32_t set_ch9_al2_read_addr;
		uint32_t set_ch9_al2_write_addr_trig;
		uint32_t set_ch9_al3_ctrl;
		uint32_t set_ch9_al3_write_addr;
		uint32_t set_ch9_al3_trans_count;
		uint32_t set_ch9_al3_read_addr_trig;
		uint32_t set_ch10_read_addr;
		uint32_t set_ch10_write_addr;
		uint32_t set_ch10_trans_count;
		uint32_t set_ch10_ctrl_trig;
		uint32_t set_ch10_al1_ctrl;
		uint32_t set_ch10_al1_read_addr;
		uint32_t set_ch10_al1_write_addr;
		uint32_t set_ch10_al1_trans_count_trig;
		uint32_t set_ch10_al2_ctrl;
		uint32_t set_ch10_al2_trans_count;
		uint32_t set_ch10_al2_read_addr;
		uint32_t set_ch10_al2_write_addr_trig;
		uint32_t set_ch10_al3_ctrl;
		uint32_t set_ch10_al3_write_addr;
		uint32_t set_ch10_al3_trans_count;
		uint32_t set_ch10_al3_read_addr_trig;
		uint32_t set_ch11_read_addr;
		uint32_t set_ch11_write_addr;
		uint32_t set_ch11_trans_count;
		uint32_t set_ch11_ctrl_trig;
		uint32_t set_ch11_al1_ctrl;
		uint32_t set_ch11_al1_read_addr;
		uint32_t set_ch11_al1_write_addr;
		uint32_t set_ch11_al1_trans_count_trig;
		uint32_t set_ch11_al2_ctrl;
		uint32_t set_ch11_al2_trans_count;
		uint32_t set_ch11_al2_read_addr;
		uint32_t set_ch11_al2_write_addr_trig;
		uint32_t set_ch11_al3_ctrl;
		uint32_t set_ch11_al3_write_addr;
		uint32_t set_ch11_al3_trans_count;
		uint32_t set_ch11_al3_read_addr_trig;
		uint32_t set_ch12_read_addr;
		uint32_t set_ch12_write_addr;
		uint32_t set_ch12_trans_count;
		uint32_t set_ch12_ctrl_trig;
		uint32_t set_ch12_al1_ctrl;
		uint32_t set_ch12_al1_read_addr;
		uint32_t set_ch12_al1_write_addr;
		uint32_t set_ch12_al1_trans_count_trig;
		uint32_t set_ch12_al2_ctrl;
		uint32_t set_ch12_al2_trans_count;
		uint32_t set_ch12_al2_read_addr;
		uint32_t set_ch12_al2_write_addr_trig;
		uint32_t set_ch12_al3_ctrl;
		uint32_t set_ch12_al3_write_addr;
		uint32_t set_ch12_al3_trans_count;
		uint32_t set_ch12_al3_read_addr_trig;
		uint32_t set_ch13_read_addr;
		uint32_t set_ch13_write_addr;
		uint32_t set_ch13_trans_count;
		uint32_t set_ch13_ctrl_trig;
		uint32_t set_ch13_al1_ctrl;
		uint32_t set_ch13_al1_read_addr;
		uint32_t set_ch13_al1_write_addr;
		uint32_t set_ch13_al1_trans_count_trig;
		uint32_t set_ch13_al2_ctrl;
		uint32_t set_ch13_al2_trans_count;
		uint32_t set_ch13_al2_read_addr;
		uint32_t set_ch13_al2_write_addr_trig;
		uint32_t set_ch13_al3_ctrl;
		uint32_t set_ch13_al3_write_addr;
		uint32_t set_ch13_al3_trans_count;
		uint32_t set_ch13_al3_read_addr_trig;
		uint32_t set_ch14_read_addr;
		uint32_t set_ch14_write_addr;
		uint32_t set_ch14_trans_count;
		uint32_t set_ch14_ctrl_trig;
		uint32_t set_ch14_al1_ctrl;
		uint32_t set_ch14_al1_read_addr;
		uint32_t set_ch14_al1_write_addr;
		uint32_t set_ch14_al1_trans_count_trig;
		uint32_t set_ch14_al2_ctrl;
		uint32_t set_ch14_al2_trans_count;
		uint32_t set_ch14_al2_read_addr;
		uint32_t set_ch14_al2_write_addr_trig;
		uint32_t set_ch14_al3_ctrl;
		uint32_t set_ch14_al3_write_addr;
		uint32_t set_ch14_al3_trans_count;
		uint32_t set_ch14_al3_read_addr_trig;
		uint32_t set_ch15_read_addr;
		uint32_t set_ch15_write_addr;
		uint32_t set_ch15_trans_count;
		uint32_t set_ch15_ctrl_trig;
		uint32_t set_ch15_al1_ctrl;
		uint32_t set_ch15_al1_read_addr;
		uint32_t set_ch15_al1_write_addr;
		uint32_t set_ch15_al1_trans_count_trig;
		uint32_t set_ch15_al2_ctrl;
		uint32_t set_ch15_al2_trans_count;
		uint32_t set_ch15_al2_read_addr;
		uint32_t set_ch15_al2_write_addr_trig;
		uint32_t set_ch15_al3_ctrl;
		uint32_t set_ch15_al3_write_addr;
		uint32_t set_ch15_al3_trans_count;
		uint32_t set_ch15_al3_read_addr_trig;
		uint32_t set_intr;
		uint32_t set_inte0;
		uint32_t set_intf0;
		uint32_t set_ints0;
		uint32_t RSVDset_0;
		uint32_t set_inte1;
		uint32_t set_intf1;
		uint32_t set_ints1;
		uint32_t RSVDset_1;
		uint32_t set_inte2;
		uint32_t set_intf2;
		uint32_t set_ints2;
		uint32_t RSVDset_2;
		uint32_t set_inte3;
		uint32_t set_intf3;
		uint32_t set_ints3;
		uint32_t set_timer0;
		uint32_t set_timer1;
		uint32_t set_timer2;
		uint32_t set_timer3;
		uint32_t set_multi_chan_trigger;
		uint32_t set_sniff_ctrl;
		uint32_t set_sniff_data;
		uint32_t RSVDset_3;
		uint32_t set_fifo_levels;
		uint32_t set_chan_abort;
		uint32_t set_n_channels;
		uint32_t RSVDset_4[5];
		uint32_t set_seccfg_ch0;
		uint32_t set_seccfg_ch1;
		uint32_t set_seccfg_ch2;
		uint32_t set_seccfg_ch3;
		uint32_t set_seccfg_ch4;
		uint32_t set_seccfg_ch5;
		uint32_t set_seccfg_ch6;
		uint32_t set_seccfg_ch7;
		uint32_t set_seccfg_ch8;
		uint32_t set_seccfg_ch9;
		uint32_t set_seccfg_ch10;
		uint32_t set_seccfg_ch11;
		uint32_t set_seccfg_ch12;
		uint32_t set_seccfg_ch13;
		uint32_t set_seccfg_ch14;
		uint32_t set_seccfg_ch15;
		uint32_t set_seccfg_irq0;
		uint32_t set_seccfg_irq1;
		uint32_t set_seccfg_irq2;
		uint32_t set_seccfg_irq3;
		uint32_t set_seccfg_misc;
		uint32_t RSVDset_5[11];
		uint32_t set_mpu_ctrl;
		uint32_t set_mpu_bar0;
		uint32_t set_mpu_lar0;
		uint32_t set_mpu_bar1;
		uint32_t set_mpu_lar1;
		uint32_t set_mpu_bar2;
		uint32_t set_mpu_lar2;
		uint32_t set_mpu_bar3;
		uint32_t set_mpu_lar3;
		uint32_t set_mpu_bar4;
		uint32_t set_mpu_lar4;
		uint32_t set_mpu_bar5;
		uint32_t set_mpu_lar5;
		uint32_t set_mpu_bar6;
		uint32_t set_mpu_lar6;
		uint32_t set_mpu_bar7;
		uint32_t set_mpu_lar7;
		uint32_t RSVDset_6[175];
		uint32_t set_ch0_dbg_ctdreq;
		uint32_t set_ch0_dbg_tcr;
		uint32_t RSVDset_7[14];
		uint32_t set_ch1_dbg_ctdreq;
		uint32_t set_ch1_dbg_tcr;
		uint32_t RSVDset_8[14];
		uint32_t set_ch2_dbg_ctdreq;
		uint32_t set_ch2_dbg_tcr;
		uint32_t RSVDset_9[14];
		uint32_t set_ch3_dbg_ctdreq;
		uint32_t set_ch3_dbg_tcr;
		uint32_t RSVDset_10[14];
		uint32_t set_ch4_dbg_ctdreq;
		uint32_t set_ch4_dbg_tcr;
		uint32_t RSVDset_11[14];
		uint32_t set_ch5_dbg_ctdreq;
		uint32_t set_ch5_dbg_tcr;
		uint32_t RSVDset_12[14];
		uint32_t set_ch6_dbg_ctdreq;
		uint32_t set_ch6_dbg_tcr;
		uint32_t RSVDset_13[14];
		uint32_t set_ch7_dbg_ctdreq;
		uint32_t set_ch7_dbg_tcr;
		uint32_t RSVDset_14[14];
		uint32_t set_ch8_dbg_ctdreq;
		uint32_t set_ch8_dbg_tcr;
		uint32_t RSVDset_15[14];
		uint32_t set_ch9_dbg_ctdreq;
		uint32_t set_ch9_dbg_tcr;
		uint32_t RSVDset_16[14];
		uint32_t set_ch10_dbg_ctdreq;
		uint32_t set_ch10_dbg_tcr;
		uint32_t RSVDset_17[14];
		uint32_t set_ch11_dbg_ctdreq;
		uint32_t set_ch11_dbg_tcr;
		uint32_t RSVDset_18[14];
		uint32_t set_ch12_dbg_ctdreq;
		uint32_t set_ch12_dbg_tcr;
		uint32_t RSVDset_19[14];
		uint32_t set_ch13_dbg_ctdreq;
		uint32_t set_ch13_dbg_tcr;
		uint32_t RSVDset_20[14];
		uint32_t set_ch14_dbg_ctdreq;
		uint32_t set_ch14_dbg_tcr;
		uint32_t RSVDset_21[14];
		uint32_t set_ch15_dbg_ctdreq;
		uint32_t set_ch15_dbg_tcr;
		uint32_t RSVDset_22[270];
		uint32_t clr_ch0_read_addr;
		uint32_t clr_ch0_write_addr;
		uint32_t clr_ch0_trans_count;
		uint32_t clr_ch0_ctrl_trig;
		uint32_t clr_ch0_al1_ctrl;
		uint32_t clr_ch0_al1_read_addr;
		uint32_t clr_ch0_al1_write_addr;
		uint32_t clr_ch0_al1_trans_count_trig;
		uint32_t clr_ch0_al2_ctrl;
		uint32_t clr_ch0_al2_trans_count;
		uint32_t clr_ch0_al2_read_addr;
		uint32_t clr_ch0_al2_write_addr_trig;
		uint32_t clr_ch0_al3_ctrl;
		uint32_t clr_ch0_al3_write_addr;
		uint32_t clr_ch0_al3_trans_count;
		uint32_t clr_ch0_al3_read_addr_trig;
		uint32_t clr_ch1_read_addr;
		uint32_t clr_ch1_write_addr;
		uint32_t clr_ch1_trans_count;
		uint32_t clr_ch1_ctrl_trig;
		uint32_t clr_ch1_al1_ctrl;
		uint32_t clr_ch1_al1_read_addr;
		uint32_t clr_ch1_al1_write_addr;
		uint32_t clr_ch1_al1_trans_count_trig;
		uint32_t clr_ch1_al2_ctrl;
		uint32_t clr_ch1_al2_trans_count;
		uint32_t clr_ch1_al2_read_addr;
		uint32_t clr_ch1_al2_write_addr_trig;
		uint32_t clr_ch1_al3_ctrl;
		uint32_t clr_ch1_al3_write_addr;
		uint32_t clr_ch1_al3_trans_count;
		uint32_t clr_ch1_al3_read_addr_trig;
		uint32_t clr_ch2_read_addr;
		uint32_t clr_ch2_write_addr;
		uint32_t clr_ch2_trans_count;
		uint32_t clr_ch2_ctrl_trig;
		uint32_t clr_ch2_al1_ctrl;
		uint32_t clr_ch2_al1_read_addr;
		uint32_t clr_ch2_al1_write_addr;
		uint32_t clr_ch2_al1_trans_count_trig;
		uint32_t clr_ch2_al2_ctrl;
		uint32_t clr_ch2_al2_trans_count;
		uint32_t clr_ch2_al2_read_addr;
		uint32_t clr_ch2_al2_write_addr_trig;
		uint32_t clr_ch2_al3_ctrl;
		uint32_t clr_ch2_al3_write_addr;
		uint32_t clr_ch2_al3_trans_count;
		uint32_t clr_ch2_al3_read_addr_trig;
		uint32_t clr_ch3_read_addr;
		uint32_t clr_ch3_write_addr;
		uint32_t clr_ch3_trans_count;
		uint32_t clr_ch3_ctrl_trig;
		uint32_t clr_ch3_al1_ctrl;
		uint32_t clr_ch3_al1_read_addr;
		uint32_t clr_ch3_al1_write_addr;
		uint32_t clr_ch3_al1_trans_count_trig;
		uint32_t clr_ch3_al2_ctrl;
		uint32_t clr_ch3_al2_trans_count;
		uint32_t clr_ch3_al2_read_addr;
		uint32_t clr_ch3_al2_write_addr_trig;
		uint32_t clr_ch3_al3_ctrl;
		uint32_t clr_ch3_al3_write_addr;
		uint32_t clr_ch3_al3_trans_count;
		uint32_t clr_ch3_al3_read_addr_trig;
		uint32_t clr_ch4_read_addr;
		uint32_t clr_ch4_write_addr;
		uint32_t clr_ch4_trans_count;
		uint32_t clr_ch4_ctrl_trig;
		uint32_t clr_ch4_al1_ctrl;
		uint32_t clr_ch4_al1_read_addr;
		uint32_t clr_ch4_al1_write_addr;
		uint32_t clr_ch4_al1_trans_count_trig;
		uint32_t clr_ch4_al2_ctrl;
		uint32_t clr_ch4_al2_trans_count;
		uint32_t clr_ch4_al2_read_addr;
		uint32_t clr_ch4_al2_write_addr_trig;
		uint32_t clr_ch4_al3_ctrl;
		uint32_t clr_ch4_al3_write_addr;
		uint32_t clr_ch4_al3_trans_count;
		uint32_t clr_ch4_al3_read_addr_trig;
		uint32_t clr_ch5_read_addr;
		uint32_t clr_ch5_write_addr;
		uint32_t clr_ch5_trans_count;
		uint32_t clr_ch5_ctrl_trig;
		uint32_t clr_ch5_al1_ctrl;
		uint32_t clr_ch5_al1_read_addr;
		uint32_t clr_ch5_al1_write_addr;
		uint32_t clr_ch5_al1_trans_count_trig;
		uint32_t clr_ch5_al2_ctrl;
		uint32_t clr_ch5_al2_trans_count;
		uint32_t clr_ch5_al2_read_addr;
		uint32_t clr_ch5_al2_write_addr_trig;
		uint32_t clr_ch5_al3_ctrl;
		uint32_t clr_ch5_al3_write_addr;
		uint32_t clr_ch5_al3_trans_count;
		uint32_t clr_ch5_al3_read_addr_trig;
		uint32_t clr_ch6_read_addr;
		uint32_t clr_ch6_write_addr;
		uint32_t clr_ch6_trans_count;
		uint32_t clr_ch6_ctrl_trig;
		uint32_t clr_ch6_al1_ctrl;
		uint32_t clr_ch6_al1_read_addr;
		uint32_t clr_ch6_al1_write_addr;
		uint32_t clr_ch6_al1_trans_count_trig;
		uint32_t clr_ch6_al2_ctrl;
		uint32_t clr_ch6_al2_trans_count;
		uint32_t clr_ch6_al2_read_addr;
		uint32_t clr_ch6_al2_write_addr_trig;
		uint32_t clr_ch6_al3_ctrl;
		uint32_t clr_ch6_al3_write_addr;
		uint32_t clr_ch6_al3_trans_count;
		uint32_t clr_ch6_al3_read_addr_trig;
		uint32_t clr_ch7_read_addr;
		uint32_t clr_ch7_write_addr;
		uint32_t clr_ch7_trans_count;
		uint32_t clr_ch7_ctrl_trig;
		uint32_t clr_ch7_al1_ctrl;
		uint32_t clr_ch7_al1_read_addr;
		uint32_t clr_ch7_al1_write_addr;
		uint32_t clr_ch7_al1_trans_count_trig;
		uint32_t clr_ch7_al2_ctrl;
		uint32_t clr_ch7_al2_trans_count;
		uint32_t clr_ch7_al2_read_addr;
		uint32_t clr_ch7_al2_write_addr_trig;
		uint32_t clr_ch7_al3_ctrl;
		uint32_t clr_ch7_al3_write_addr;
		uint32_t clr_ch7_al3_trans_count;
		uint32_t clr_ch7_al3_read_addr_trig;
		uint32_t clr_ch8_read_addr;
		uint32_t clr_ch8_write_addr;
		uint32_t clr_ch8_trans_count;
		uint32_t clr_ch8_ctrl_trig;
		uint32_t clr_ch8_al1_ctrl;
		uint32_t clr_ch8_al1_read_addr;
		uint32_t clr_ch8_al1_write_addr;
		uint32_t clr_ch8_al1_trans_count_trig;
		uint32_t clr_ch8_al2_ctrl;
		uint32_t clr_ch8_al2_trans_count;
		uint32_t clr_ch8_al2_read_addr;
		uint32_t clr_ch8_al2_write_addr_trig;
		uint32_t clr_ch8_al3_ctrl;
		uint32_t clr_ch8_al3_write_addr;
		uint32_t clr_ch8_al3_trans_count;
		uint32_t clr_ch8_al3_read_addr_trig;
		uint32_t clr_ch9_read_addr;
		uint32_t clr_ch9_write_addr;
		uint32_t clr_ch9_trans_count;
		uint32_t clr_ch9_ctrl_trig;
		uint32_t clr_ch9_al1_ctrl;
		uint32_t clr_ch9_al1_read_addr;
		uint32_t clr_ch9_al1_write_addr;
		uint32_t clr_ch9_al1_trans_count_trig;
		uint32_t clr_ch9_al2_ctrl;
		uint32_t clr_ch9_al2_trans_count;
		uint32_t clr_ch9_al2_read_addr;
		uint32_t clr_ch9_al2_write_addr_trig;
		uint32_t clr_ch9_al3_ctrl;
		uint32_t clr_ch9_al3_write_addr;
		uint32_t clr_ch9_al3_trans_count;
		uint32_t clr_ch9_al3_read_addr_trig;
		uint32_t clr_ch10_read_addr;
		uint32_t clr_ch10_write_addr;
		uint32_t clr_ch10_trans_count;
		uint32_t clr_ch10_ctrl_trig;
		uint32_t clr_ch10_al1_ctrl;
		uint32_t clr_ch10_al1_read_addr;
		uint32_t clr_ch10_al1_write_addr;
		uint32_t clr_ch10_al1_trans_count_trig;
		uint32_t clr_ch10_al2_ctrl;
		uint32_t clr_ch10_al2_trans_count;
		uint32_t clr_ch10_al2_read_addr;
		uint32_t clr_ch10_al2_write_addr_trig;
		uint32_t clr_ch10_al3_ctrl;
		uint32_t clr_ch10_al3_write_addr;
		uint32_t clr_ch10_al3_trans_count;
		uint32_t clr_ch10_al3_read_addr_trig;
		uint32_t clr_ch11_read_addr;
		uint32_t clr_ch11_write_addr;
		uint32_t clr_ch11_trans_count;
		uint32_t clr_ch11_ctrl_trig;
		uint32_t clr_ch11_al1_ctrl;
		uint32_t clr_ch11_al1_read_addr;
		uint32_t clr_ch11_al1_write_addr;
		uint32_t clr_ch11_al1_trans_count_trig;
		uint32_t clr_ch11_al2_ctrl;
		uint32_t clr_ch11_al2_trans_count;
		uint32_t clr_ch11_al2_read_addr;
		uint32_t clr_ch11_al2_write_addr_trig;
		uint32_t clr_ch11_al3_ctrl;
		uint32_t clr_ch11_al3_write_addr;
		uint32_t clr_ch11_al3_trans_count;
		uint32_t clr_ch11_al3_read_addr_trig;
		uint32_t clr_ch12_read_addr;
		uint32_t clr_ch12_write_addr;
		uint32_t clr_ch12_trans_count;
		uint32_t clr_ch12_ctrl_trig;
		uint32_t clr_ch12_al1_ctrl;
		uint32_t clr_ch12_al1_read_addr;
		uint32_t clr_ch12_al1_write_addr;
		uint32_t clr_ch12_al1_trans_count_trig;
		uint32_t clr_ch12_al2_ctrl;
		uint32_t clr_ch12_al2_trans_count;
		uint32_t clr_ch12_al2_read_addr;
		uint32_t clr_ch12_al2_write_addr_trig;
		uint32_t clr_ch12_al3_ctrl;
		uint32_t clr_ch12_al3_write_addr;
		uint32_t clr_ch12_al3_trans_count;
		uint32_t clr_ch12_al3_read_addr_trig;
		uint32_t clr_ch13_read_addr;
		uint32_t clr_ch13_write_addr;
		uint32_t clr_ch13_trans_count;
		uint32_t clr_ch13_ctrl_trig;
		uint32_t clr_ch13_al1_ctrl;
		uint32_t clr_ch13_al1_read_addr;
		uint32_t clr_ch13_al1_write_addr;
		uint32_t clr_ch13_al1_trans_count_trig;
		uint32_t clr_ch13_al2_ctrl;
		uint32_t clr_ch13_al2_trans_count;
		uint32_t clr_ch13_al2_read_addr;
		uint32_t clr_ch13_al2_write_addr_trig;
		uint32_t clr_ch13_al3_ctrl;
		uint32_t clr_ch13_al3_write_addr;
		uint32_t clr_ch13_al3_trans_count;
		uint32_t clr_ch13_al3_read_addr_trig;
		uint32_t clr_ch14_read_addr;
		uint32_t clr_ch14_write_addr;
		uint32_t clr_ch14_trans_count;
		uint32_t clr_ch14_ctrl_trig;
		uint32_t clr_ch14_al1_ctrl;
		uint32_t clr_ch14_al1_read_addr;
		uint32_t clr_ch14_al1_write_addr;
		uint32_t clr_ch14_al1_trans_count_trig;
		uint32_t clr_ch14_al2_ctrl;
		uint32_t clr_ch14_al2_trans_count;
		uint32_t clr_ch14_al2_read_addr;
		uint32_t clr_ch14_al2_write_addr_trig;
		uint32_t clr_ch14_al3_ctrl;
		uint32_t clr_ch14_al3_write_addr;
		uint32_t clr_ch14_al3_trans_count;
		uint32_t clr_ch14_al3_read_addr_trig;
		uint32_t clr_ch15_read_addr;
		uint32_t clr_ch15_write_addr;
		uint32_t clr_ch15_trans_count;
		uint32_t clr_ch15_ctrl_trig;
		uint32_t clr_ch15_al1_ctrl;
		uint32_t clr_ch15_al1_read_addr;
		uint32_t clr_ch15_al1_write_addr;
		uint32_t clr_ch15_al1_trans_count_trig;
		uint32_t clr_ch15_al2_ctrl;
		uint32_t clr_ch15_al2_trans_count;
		uint32_t clr_ch15_al2_read_addr;
		uint32_t clr_ch15_al2_write_addr_trig;
		uint32_t clr_ch15_al3_ctrl;
		uint32_t clr_ch15_al3_write_addr;
		uint32_t clr_ch15_al3_trans_count;
		uint32_t clr_ch15_al3_read_addr_trig;
		uint32_t clr_intr;
		uint32_t clr_inte0;
		uint32_t clr_intf0;
		uint32_t clr_ints0;
		uint32_t RSVDclr_0;
		uint32_t clr_inte1;
		uint32_t clr_intf1;
		uint32_t clr_ints1;
		uint32_t RSVDclr_1;
		uint32_t clr_inte2;
		uint32_t clr_intf2;
		uint32_t clr_ints2;
		uint32_t RSVDclr_2;
		uint32_t clr_inte3;
		uint32_t clr_intf3;
		uint32_t clr_ints3;
		uint32_t clr_timer0;
		uint32_t clr_timer1;
		uint32_t clr_timer2;
		uint32_t clr_timer3;
		uint32_t clr_multi_chan_trigger;
		uint32_t clr_sniff_ctrl;
		uint32_t clr_sniff_data;
		uint32_t RSVDclr_3;
		uint32_t clr_fifo_levels;
		uint32_t clr_chan_abort;
		uint32_t clr_n_channels;
		uint32_t RSVDclr_4[5];
		uint32_t clr_seccfg_ch0;
		uint32_t clr_seccfg_ch1;
		uint32_t clr_seccfg_ch2;
		uint32_t clr_seccfg_ch3;
		uint32_t clr_seccfg_ch4;
		uint32_t clr_seccfg_ch5;
		uint32_t clr_seccfg_ch6;
		uint32_t clr_seccfg_ch7;
		uint32_t clr_seccfg_ch8;
		uint32_t clr_seccfg_ch9;
		uint32_t clr_seccfg_ch10;
		uint32_t clr_seccfg_ch11;
		uint32_t clr_seccfg_ch12;
		uint32_t clr_seccfg_ch13;
		uint32_t clr_seccfg_ch14;
		uint32_t clr_seccfg_ch15;
		uint32_t clr_seccfg_irq0;
		uint32_t clr_seccfg_irq1;
		uint32_t clr_seccfg_irq2;
		uint32_t clr_seccfg_irq3;
		uint32_t clr_seccfg_misc;
		uint32_t RSVDclr_5[11];
		uint32_t clr_mpu_ctrl;
		uint32_t clr_mpu_bar0;
		uint32_t clr_mpu_lar0;
		uint32_t clr_mpu_bar1;
		uint32_t clr_mpu_lar1;
		uint32_t clr_mpu_bar2;
		uint32_t clr_mpu_lar2;
		uint32_t clr_mpu_bar3;
		uint32_t clr_mpu_lar3;
		uint32_t clr_mpu_bar4;
		uint32_t clr_mpu_lar4;
		uint32_t clr_mpu_bar5;
		uint32_t clr_mpu_lar5;
		uint32_t clr_mpu_bar6;
		uint32_t clr_mpu_lar6;
		uint32_t clr_mpu_bar7;
		uint32_t clr_mpu_lar7;
		uint32_t RSVDclr_6[175];
		uint32_t clr_ch0_dbg_ctdreq;
		uint32_t clr_ch0_dbg_tcr;
		uint32_t RSVDclr_7[14];
		uint32_t clr_ch1_dbg_ctdreq;
		uint32_t clr_ch1_dbg_tcr;
		uint32_t RSVDclr_8[14];
		uint32_t clr_ch2_dbg_ctdreq;
		uint32_t clr_ch2_dbg_tcr;
		uint32_t RSVDclr_9[14];
		uint32_t clr_ch3_dbg_ctdreq;
		uint32_t clr_ch3_dbg_tcr;
		uint32_t RSVDclr_10[14];
		uint32_t clr_ch4_dbg_ctdreq;
		uint32_t clr_ch4_dbg_tcr;
		uint32_t RSVDclr_11[14];
		uint32_t clr_ch5_dbg_ctdreq;
		uint32_t clr_ch5_dbg_tcr;
		uint32_t RSVDclr_12[14];
		uint32_t clr_ch6_dbg_ctdreq;
		uint32_t clr_ch6_dbg_tcr;
		uint32_t RSVDclr_13[14];
		uint32_t clr_ch7_dbg_ctdreq;
		uint32_t clr_ch7_dbg_tcr;
		uint32_t RSVDclr_14[14];
		uint32_t clr_ch8_dbg_ctdreq;
		uint32_t clr_ch8_dbg_tcr;
		uint32_t RSVDclr_15[14];
		uint32_t clr_ch9_dbg_ctdreq;
		uint32_t clr_ch9_dbg_tcr;
		uint32_t RSVDclr_16[14];
		uint32_t clr_ch10_dbg_ctdreq;
		uint32_t clr_ch10_dbg_tcr;
		uint32_t RSVDclr_17[14];
		uint32_t clr_ch11_dbg_ctdreq;
		uint32_t clr_ch11_dbg_tcr;
		uint32_t RSVDclr_18[14];
		uint32_t clr_ch12_dbg_ctdreq;
		uint32_t clr_ch12_dbg_tcr;
		uint32_t RSVDclr_19[14];
		uint32_t clr_ch13_dbg_ctdreq;
		uint32_t clr_ch13_dbg_tcr;
		uint32_t RSVDclr_20[14];
		uint32_t clr_ch14_dbg_ctdreq;
		uint32_t clr_ch14_dbg_tcr;
		uint32_t RSVDclr_21[14];
		uint32_t clr_ch15_dbg_ctdreq;
		uint32_t clr_ch15_dbg_tcr;
		uint32_t RSVDclr_22[270];
} DMA_REG_BLOCKS;

#define dma ((DMA_REG_BLOCKS volatile *)0x50000000)

/*CH0_READ_ADDR Register macros*/


/*CH0_WRITE_ADDR Register macros*/


/*CH0_TRANS_COUNT Register macros*/

#define DMA_CH0_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH0_TRANS_COUNT_MODE_MASK DMA_CH0_TRANS_COUNT_MODE(ALL1)
#define DMA_CH0_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH0_TRANS_COUNT_COUNT_MASK DMA_CH0_TRANS_COUNT_COUNT(ALL1)

/*CH0_CTRL_TRIG Register macros*/

#define DMA_CH0_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH0_CTRL_TRIG_AHB_ERROR_MASK DMA_CH0_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH0_CTRL_TRIG_READ_ERROR_MASK DMA_CH0_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH0_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH0_CTRL_TRIG_BUSY_MASK DMA_CH0_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN_MASK DMA_CH0_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH0_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH0_CTRL_TRIG_BSWAP_MASK DMA_CH0_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH0_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL_MASK DMA_CH0_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO_MASK DMA_CH0_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH0_CTRL_TRIG_RING_SEL_MASK DMA_CH0_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH0_CTRL_TRIG_RING_SIZE_MASK DMA_CH0_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH0_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_MASK DMA_CH0_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH0_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH0_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH0_CTRL_TRIG_INCR_READ_MASK DMA_CH0_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH0_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH0_CTRL_TRIG_DATA_SIZE_MASK DMA_CH0_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH0_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH0_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH0_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH0_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH0_CTRL_TRIG_EN_MASK DMA_CH0_CTRL_TRIG_EN(ALL1)

/*CH0_AL1_CTRL Register macros*/


/*CH0_AL1_READ_ADDR Register macros*/


/*CH0_AL1_WRITE_ADDR Register macros*/


/*CH0_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH0_AL2_CTRL Register macros*/


/*CH0_AL2_TRANS_COUNT Register macros*/


/*CH0_AL2_READ_ADDR Register macros*/


/*CH0_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH0_AL3_CTRL Register macros*/


/*CH0_AL3_WRITE_ADDR Register macros*/


/*CH0_AL3_TRANS_COUNT Register macros*/


/*CH0_AL3_READ_ADDR_TRIG Register macros*/


/*CH1_READ_ADDR Register macros*/


/*CH1_WRITE_ADDR Register macros*/


/*CH1_TRANS_COUNT Register macros*/

#define DMA_CH1_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH1_TRANS_COUNT_MODE_MASK DMA_CH1_TRANS_COUNT_MODE(ALL1)
#define DMA_CH1_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH1_TRANS_COUNT_COUNT_MASK DMA_CH1_TRANS_COUNT_COUNT(ALL1)

/*CH1_CTRL_TRIG Register macros*/

#define DMA_CH1_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH1_CTRL_TRIG_AHB_ERROR_MASK DMA_CH1_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH1_CTRL_TRIG_READ_ERROR_MASK DMA_CH1_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH1_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH1_CTRL_TRIG_BUSY_MASK DMA_CH1_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN_MASK DMA_CH1_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH1_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH1_CTRL_TRIG_BSWAP_MASK DMA_CH1_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH1_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL_MASK DMA_CH1_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO_MASK DMA_CH1_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH1_CTRL_TRIG_RING_SEL_MASK DMA_CH1_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH1_CTRL_TRIG_RING_SIZE_MASK DMA_CH1_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH1_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_MASK DMA_CH1_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH1_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH1_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH1_CTRL_TRIG_INCR_READ_MASK DMA_CH1_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH1_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH1_CTRL_TRIG_DATA_SIZE_MASK DMA_CH1_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH1_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH1_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH1_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH1_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH1_CTRL_TRIG_EN_MASK DMA_CH1_CTRL_TRIG_EN(ALL1)

/*CH1_AL1_CTRL Register macros*/


/*CH1_AL1_READ_ADDR Register macros*/


/*CH1_AL1_WRITE_ADDR Register macros*/


/*CH1_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH1_AL2_CTRL Register macros*/


/*CH1_AL2_TRANS_COUNT Register macros*/


/*CH1_AL2_READ_ADDR Register macros*/


/*CH1_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH1_AL3_CTRL Register macros*/


/*CH1_AL3_WRITE_ADDR Register macros*/


/*CH1_AL3_TRANS_COUNT Register macros*/


/*CH1_AL3_READ_ADDR_TRIG Register macros*/


/*CH2_READ_ADDR Register macros*/


/*CH2_WRITE_ADDR Register macros*/


/*CH2_TRANS_COUNT Register macros*/

#define DMA_CH2_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH2_TRANS_COUNT_MODE_MASK DMA_CH2_TRANS_COUNT_MODE(ALL1)
#define DMA_CH2_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH2_TRANS_COUNT_COUNT_MASK DMA_CH2_TRANS_COUNT_COUNT(ALL1)

/*CH2_CTRL_TRIG Register macros*/

#define DMA_CH2_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH2_CTRL_TRIG_AHB_ERROR_MASK DMA_CH2_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH2_CTRL_TRIG_READ_ERROR_MASK DMA_CH2_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH2_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH2_CTRL_TRIG_BUSY_MASK DMA_CH2_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN_MASK DMA_CH2_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH2_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH2_CTRL_TRIG_BSWAP_MASK DMA_CH2_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH2_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL_MASK DMA_CH2_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO_MASK DMA_CH2_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH2_CTRL_TRIG_RING_SEL_MASK DMA_CH2_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH2_CTRL_TRIG_RING_SIZE_MASK DMA_CH2_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH2_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_MASK DMA_CH2_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH2_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH2_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH2_CTRL_TRIG_INCR_READ_MASK DMA_CH2_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH2_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH2_CTRL_TRIG_DATA_SIZE_MASK DMA_CH2_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH2_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH2_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH2_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH2_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH2_CTRL_TRIG_EN_MASK DMA_CH2_CTRL_TRIG_EN(ALL1)

/*CH2_AL1_CTRL Register macros*/


/*CH2_AL1_READ_ADDR Register macros*/


/*CH2_AL1_WRITE_ADDR Register macros*/


/*CH2_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH2_AL2_CTRL Register macros*/


/*CH2_AL2_TRANS_COUNT Register macros*/


/*CH2_AL2_READ_ADDR Register macros*/


/*CH2_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH2_AL3_CTRL Register macros*/


/*CH2_AL3_WRITE_ADDR Register macros*/


/*CH2_AL3_TRANS_COUNT Register macros*/


/*CH2_AL3_READ_ADDR_TRIG Register macros*/


/*CH3_READ_ADDR Register macros*/


/*CH3_WRITE_ADDR Register macros*/


/*CH3_TRANS_COUNT Register macros*/

#define DMA_CH3_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH3_TRANS_COUNT_MODE_MASK DMA_CH3_TRANS_COUNT_MODE(ALL1)
#define DMA_CH3_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH3_TRANS_COUNT_COUNT_MASK DMA_CH3_TRANS_COUNT_COUNT(ALL1)

/*CH3_CTRL_TRIG Register macros*/

#define DMA_CH3_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH3_CTRL_TRIG_AHB_ERROR_MASK DMA_CH3_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH3_CTRL_TRIG_READ_ERROR_MASK DMA_CH3_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH3_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH3_CTRL_TRIG_BUSY_MASK DMA_CH3_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN_MASK DMA_CH3_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH3_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH3_CTRL_TRIG_BSWAP_MASK DMA_CH3_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH3_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL_MASK DMA_CH3_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO_MASK DMA_CH3_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH3_CTRL_TRIG_RING_SEL_MASK DMA_CH3_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH3_CTRL_TRIG_RING_SIZE_MASK DMA_CH3_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH3_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_MASK DMA_CH3_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH3_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH3_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH3_CTRL_TRIG_INCR_READ_MASK DMA_CH3_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH3_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH3_CTRL_TRIG_DATA_SIZE_MASK DMA_CH3_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH3_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH3_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH3_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH3_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH3_CTRL_TRIG_EN_MASK DMA_CH3_CTRL_TRIG_EN(ALL1)

/*CH3_AL1_CTRL Register macros*/


/*CH3_AL1_READ_ADDR Register macros*/


/*CH3_AL1_WRITE_ADDR Register macros*/


/*CH3_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH3_AL2_CTRL Register macros*/


/*CH3_AL2_TRANS_COUNT Register macros*/


/*CH3_AL2_READ_ADDR Register macros*/


/*CH3_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH3_AL3_CTRL Register macros*/


/*CH3_AL3_WRITE_ADDR Register macros*/


/*CH3_AL3_TRANS_COUNT Register macros*/


/*CH3_AL3_READ_ADDR_TRIG Register macros*/


/*CH4_READ_ADDR Register macros*/


/*CH4_WRITE_ADDR Register macros*/


/*CH4_TRANS_COUNT Register macros*/

#define DMA_CH4_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH4_TRANS_COUNT_MODE_MASK DMA_CH4_TRANS_COUNT_MODE(ALL1)
#define DMA_CH4_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH4_TRANS_COUNT_COUNT_MASK DMA_CH4_TRANS_COUNT_COUNT(ALL1)

/*CH4_CTRL_TRIG Register macros*/

#define DMA_CH4_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH4_CTRL_TRIG_AHB_ERROR_MASK DMA_CH4_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH4_CTRL_TRIG_READ_ERROR_MASK DMA_CH4_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH4_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH4_CTRL_TRIG_BUSY_MASK DMA_CH4_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN_MASK DMA_CH4_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH4_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH4_CTRL_TRIG_BSWAP_MASK DMA_CH4_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH4_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL_MASK DMA_CH4_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO_MASK DMA_CH4_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH4_CTRL_TRIG_RING_SEL_MASK DMA_CH4_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH4_CTRL_TRIG_RING_SIZE_MASK DMA_CH4_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH4_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_MASK DMA_CH4_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH4_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH4_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH4_CTRL_TRIG_INCR_READ_MASK DMA_CH4_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH4_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH4_CTRL_TRIG_DATA_SIZE_MASK DMA_CH4_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH4_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH4_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH4_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH4_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH4_CTRL_TRIG_EN_MASK DMA_CH4_CTRL_TRIG_EN(ALL1)

/*CH4_AL1_CTRL Register macros*/


/*CH4_AL1_READ_ADDR Register macros*/


/*CH4_AL1_WRITE_ADDR Register macros*/


/*CH4_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH4_AL2_CTRL Register macros*/


/*CH4_AL2_TRANS_COUNT Register macros*/


/*CH4_AL2_READ_ADDR Register macros*/


/*CH4_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH4_AL3_CTRL Register macros*/


/*CH4_AL3_WRITE_ADDR Register macros*/


/*CH4_AL3_TRANS_COUNT Register macros*/


/*CH4_AL3_READ_ADDR_TRIG Register macros*/


/*CH5_READ_ADDR Register macros*/


/*CH5_WRITE_ADDR Register macros*/


/*CH5_TRANS_COUNT Register macros*/

#define DMA_CH5_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH5_TRANS_COUNT_MODE_MASK DMA_CH5_TRANS_COUNT_MODE(ALL1)
#define DMA_CH5_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH5_TRANS_COUNT_COUNT_MASK DMA_CH5_TRANS_COUNT_COUNT(ALL1)

/*CH5_CTRL_TRIG Register macros*/

#define DMA_CH5_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH5_CTRL_TRIG_AHB_ERROR_MASK DMA_CH5_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH5_CTRL_TRIG_READ_ERROR_MASK DMA_CH5_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH5_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH5_CTRL_TRIG_BUSY_MASK DMA_CH5_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN_MASK DMA_CH5_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH5_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH5_CTRL_TRIG_BSWAP_MASK DMA_CH5_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH5_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL_MASK DMA_CH5_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO_MASK DMA_CH5_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH5_CTRL_TRIG_RING_SEL_MASK DMA_CH5_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH5_CTRL_TRIG_RING_SIZE_MASK DMA_CH5_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH5_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_MASK DMA_CH5_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH5_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH5_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH5_CTRL_TRIG_INCR_READ_MASK DMA_CH5_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH5_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH5_CTRL_TRIG_DATA_SIZE_MASK DMA_CH5_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH5_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH5_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH5_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH5_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH5_CTRL_TRIG_EN_MASK DMA_CH5_CTRL_TRIG_EN(ALL1)

/*CH5_AL1_CTRL Register macros*/


/*CH5_AL1_READ_ADDR Register macros*/


/*CH5_AL1_WRITE_ADDR Register macros*/


/*CH5_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH5_AL2_CTRL Register macros*/


/*CH5_AL2_TRANS_COUNT Register macros*/


/*CH5_AL2_READ_ADDR Register macros*/


/*CH5_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH5_AL3_CTRL Register macros*/


/*CH5_AL3_WRITE_ADDR Register macros*/


/*CH5_AL3_TRANS_COUNT Register macros*/


/*CH5_AL3_READ_ADDR_TRIG Register macros*/


/*CH6_READ_ADDR Register macros*/


/*CH6_WRITE_ADDR Register macros*/


/*CH6_TRANS_COUNT Register macros*/

#define DMA_CH6_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH6_TRANS_COUNT_MODE_MASK DMA_CH6_TRANS_COUNT_MODE(ALL1)
#define DMA_CH6_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH6_TRANS_COUNT_COUNT_MASK DMA_CH6_TRANS_COUNT_COUNT(ALL1)

/*CH6_CTRL_TRIG Register macros*/

#define DMA_CH6_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH6_CTRL_TRIG_AHB_ERROR_MASK DMA_CH6_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH6_CTRL_TRIG_READ_ERROR_MASK DMA_CH6_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH6_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH6_CTRL_TRIG_BUSY_MASK DMA_CH6_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN_MASK DMA_CH6_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH6_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH6_CTRL_TRIG_BSWAP_MASK DMA_CH6_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH6_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL_MASK DMA_CH6_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO_MASK DMA_CH6_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH6_CTRL_TRIG_RING_SEL_MASK DMA_CH6_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH6_CTRL_TRIG_RING_SIZE_MASK DMA_CH6_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH6_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_MASK DMA_CH6_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH6_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH6_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH6_CTRL_TRIG_INCR_READ_MASK DMA_CH6_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH6_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH6_CTRL_TRIG_DATA_SIZE_MASK DMA_CH6_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH6_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH6_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH6_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH6_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH6_CTRL_TRIG_EN_MASK DMA_CH6_CTRL_TRIG_EN(ALL1)

/*CH6_AL1_CTRL Register macros*/


/*CH6_AL1_READ_ADDR Register macros*/


/*CH6_AL1_WRITE_ADDR Register macros*/


/*CH6_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH6_AL2_CTRL Register macros*/


/*CH6_AL2_TRANS_COUNT Register macros*/


/*CH6_AL2_READ_ADDR Register macros*/


/*CH6_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH6_AL3_CTRL Register macros*/


/*CH6_AL3_WRITE_ADDR Register macros*/


/*CH6_AL3_TRANS_COUNT Register macros*/


/*CH6_AL3_READ_ADDR_TRIG Register macros*/


/*CH7_READ_ADDR Register macros*/


/*CH7_WRITE_ADDR Register macros*/


/*CH7_TRANS_COUNT Register macros*/

#define DMA_CH7_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH7_TRANS_COUNT_MODE_MASK DMA_CH7_TRANS_COUNT_MODE(ALL1)
#define DMA_CH7_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH7_TRANS_COUNT_COUNT_MASK DMA_CH7_TRANS_COUNT_COUNT(ALL1)

/*CH7_CTRL_TRIG Register macros*/

#define DMA_CH7_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH7_CTRL_TRIG_AHB_ERROR_MASK DMA_CH7_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH7_CTRL_TRIG_READ_ERROR_MASK DMA_CH7_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH7_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH7_CTRL_TRIG_BUSY_MASK DMA_CH7_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN_MASK DMA_CH7_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH7_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH7_CTRL_TRIG_BSWAP_MASK DMA_CH7_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH7_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL_MASK DMA_CH7_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO_MASK DMA_CH7_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH7_CTRL_TRIG_RING_SEL_MASK DMA_CH7_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH7_CTRL_TRIG_RING_SIZE_MASK DMA_CH7_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH7_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_MASK DMA_CH7_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH7_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH7_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH7_CTRL_TRIG_INCR_READ_MASK DMA_CH7_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH7_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH7_CTRL_TRIG_DATA_SIZE_MASK DMA_CH7_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH7_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH7_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH7_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH7_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH7_CTRL_TRIG_EN_MASK DMA_CH7_CTRL_TRIG_EN(ALL1)

/*CH7_AL1_CTRL Register macros*/


/*CH7_AL1_READ_ADDR Register macros*/


/*CH7_AL1_WRITE_ADDR Register macros*/


/*CH7_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH7_AL2_CTRL Register macros*/


/*CH7_AL2_TRANS_COUNT Register macros*/


/*CH7_AL2_READ_ADDR Register macros*/


/*CH7_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH7_AL3_CTRL Register macros*/


/*CH7_AL3_WRITE_ADDR Register macros*/


/*CH7_AL3_TRANS_COUNT Register macros*/


/*CH7_AL3_READ_ADDR_TRIG Register macros*/


/*CH8_READ_ADDR Register macros*/


/*CH8_WRITE_ADDR Register macros*/


/*CH8_TRANS_COUNT Register macros*/

#define DMA_CH8_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH8_TRANS_COUNT_MODE_MASK DMA_CH8_TRANS_COUNT_MODE(ALL1)
#define DMA_CH8_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH8_TRANS_COUNT_COUNT_MASK DMA_CH8_TRANS_COUNT_COUNT(ALL1)

/*CH8_CTRL_TRIG Register macros*/

#define DMA_CH8_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH8_CTRL_TRIG_AHB_ERROR_MASK DMA_CH8_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH8_CTRL_TRIG_READ_ERROR_MASK DMA_CH8_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH8_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH8_CTRL_TRIG_BUSY_MASK DMA_CH8_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN_MASK DMA_CH8_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH8_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH8_CTRL_TRIG_BSWAP_MASK DMA_CH8_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH8_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL_MASK DMA_CH8_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO_MASK DMA_CH8_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH8_CTRL_TRIG_RING_SEL_MASK DMA_CH8_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH8_CTRL_TRIG_RING_SIZE_MASK DMA_CH8_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH8_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_MASK DMA_CH8_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH8_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH8_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH8_CTRL_TRIG_INCR_READ_MASK DMA_CH8_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH8_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH8_CTRL_TRIG_DATA_SIZE_MASK DMA_CH8_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH8_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH8_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH8_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH8_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH8_CTRL_TRIG_EN_MASK DMA_CH8_CTRL_TRIG_EN(ALL1)

/*CH8_AL1_CTRL Register macros*/


/*CH8_AL1_READ_ADDR Register macros*/


/*CH8_AL1_WRITE_ADDR Register macros*/


/*CH8_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH8_AL2_CTRL Register macros*/


/*CH8_AL2_TRANS_COUNT Register macros*/


/*CH8_AL2_READ_ADDR Register macros*/


/*CH8_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH8_AL3_CTRL Register macros*/


/*CH8_AL3_WRITE_ADDR Register macros*/


/*CH8_AL3_TRANS_COUNT Register macros*/


/*CH8_AL3_READ_ADDR_TRIG Register macros*/


/*CH9_READ_ADDR Register macros*/


/*CH9_WRITE_ADDR Register macros*/


/*CH9_TRANS_COUNT Register macros*/

#define DMA_CH9_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH9_TRANS_COUNT_MODE_MASK DMA_CH9_TRANS_COUNT_MODE(ALL1)
#define DMA_CH9_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH9_TRANS_COUNT_COUNT_MASK DMA_CH9_TRANS_COUNT_COUNT(ALL1)

/*CH9_CTRL_TRIG Register macros*/

#define DMA_CH9_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH9_CTRL_TRIG_AHB_ERROR_MASK DMA_CH9_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH9_CTRL_TRIG_READ_ERROR_MASK DMA_CH9_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH9_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH9_CTRL_TRIG_BUSY_MASK DMA_CH9_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN_MASK DMA_CH9_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH9_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH9_CTRL_TRIG_BSWAP_MASK DMA_CH9_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH9_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL_MASK DMA_CH9_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO_MASK DMA_CH9_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH9_CTRL_TRIG_RING_SEL_MASK DMA_CH9_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH9_CTRL_TRIG_RING_SIZE_MASK DMA_CH9_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH9_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_MASK DMA_CH9_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH9_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH9_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH9_CTRL_TRIG_INCR_READ_MASK DMA_CH9_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH9_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH9_CTRL_TRIG_DATA_SIZE_MASK DMA_CH9_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH9_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH9_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH9_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH9_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH9_CTRL_TRIG_EN_MASK DMA_CH9_CTRL_TRIG_EN(ALL1)

/*CH9_AL1_CTRL Register macros*/


/*CH9_AL1_READ_ADDR Register macros*/


/*CH9_AL1_WRITE_ADDR Register macros*/


/*CH9_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH9_AL2_CTRL Register macros*/


/*CH9_AL2_TRANS_COUNT Register macros*/


/*CH9_AL2_READ_ADDR Register macros*/


/*CH9_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH9_AL3_CTRL Register macros*/


/*CH9_AL3_WRITE_ADDR Register macros*/


/*CH9_AL3_TRANS_COUNT Register macros*/


/*CH9_AL3_READ_ADDR_TRIG Register macros*/


/*CH10_READ_ADDR Register macros*/


/*CH10_WRITE_ADDR Register macros*/


/*CH10_TRANS_COUNT Register macros*/

#define DMA_CH10_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH10_TRANS_COUNT_MODE_MASK DMA_CH10_TRANS_COUNT_MODE(ALL1)
#define DMA_CH10_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH10_TRANS_COUNT_COUNT_MASK DMA_CH10_TRANS_COUNT_COUNT(ALL1)

/*CH10_CTRL_TRIG Register macros*/

#define DMA_CH10_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH10_CTRL_TRIG_AHB_ERROR_MASK DMA_CH10_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH10_CTRL_TRIG_READ_ERROR_MASK DMA_CH10_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH10_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH10_CTRL_TRIG_BUSY_MASK DMA_CH10_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN_MASK DMA_CH10_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH10_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH10_CTRL_TRIG_BSWAP_MASK DMA_CH10_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH10_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL_MASK DMA_CH10_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO_MASK DMA_CH10_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH10_CTRL_TRIG_RING_SEL_MASK DMA_CH10_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH10_CTRL_TRIG_RING_SIZE_MASK DMA_CH10_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH10_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_MASK DMA_CH10_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH10_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH10_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH10_CTRL_TRIG_INCR_READ_MASK DMA_CH10_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH10_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH10_CTRL_TRIG_DATA_SIZE_MASK DMA_CH10_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH10_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH10_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH10_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH10_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH10_CTRL_TRIG_EN_MASK DMA_CH10_CTRL_TRIG_EN(ALL1)

/*CH10_AL1_CTRL Register macros*/


/*CH10_AL1_READ_ADDR Register macros*/


/*CH10_AL1_WRITE_ADDR Register macros*/


/*CH10_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH10_AL2_CTRL Register macros*/


/*CH10_AL2_TRANS_COUNT Register macros*/


/*CH10_AL2_READ_ADDR Register macros*/


/*CH10_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH10_AL3_CTRL Register macros*/


/*CH10_AL3_WRITE_ADDR Register macros*/


/*CH10_AL3_TRANS_COUNT Register macros*/


/*CH10_AL3_READ_ADDR_TRIG Register macros*/


/*CH11_READ_ADDR Register macros*/


/*CH11_WRITE_ADDR Register macros*/


/*CH11_TRANS_COUNT Register macros*/

#define DMA_CH11_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH11_TRANS_COUNT_MODE_MASK DMA_CH11_TRANS_COUNT_MODE(ALL1)
#define DMA_CH11_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH11_TRANS_COUNT_COUNT_MASK DMA_CH11_TRANS_COUNT_COUNT(ALL1)

/*CH11_CTRL_TRIG Register macros*/

#define DMA_CH11_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH11_CTRL_TRIG_AHB_ERROR_MASK DMA_CH11_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH11_CTRL_TRIG_READ_ERROR_MASK DMA_CH11_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH11_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH11_CTRL_TRIG_BUSY_MASK DMA_CH11_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN_MASK DMA_CH11_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH11_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH11_CTRL_TRIG_BSWAP_MASK DMA_CH11_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH11_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL_MASK DMA_CH11_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO_MASK DMA_CH11_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH11_CTRL_TRIG_RING_SEL_MASK DMA_CH11_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH11_CTRL_TRIG_RING_SIZE_MASK DMA_CH11_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH11_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_MASK DMA_CH11_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH11_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH11_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH11_CTRL_TRIG_INCR_READ_MASK DMA_CH11_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH11_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH11_CTRL_TRIG_DATA_SIZE_MASK DMA_CH11_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH11_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH11_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH11_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH11_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH11_CTRL_TRIG_EN_MASK DMA_CH11_CTRL_TRIG_EN(ALL1)

/*CH11_AL1_CTRL Register macros*/


/*CH11_AL1_READ_ADDR Register macros*/


/*CH11_AL1_WRITE_ADDR Register macros*/


/*CH11_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH11_AL2_CTRL Register macros*/


/*CH11_AL2_TRANS_COUNT Register macros*/


/*CH11_AL2_READ_ADDR Register macros*/


/*CH11_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH11_AL3_CTRL Register macros*/


/*CH11_AL3_WRITE_ADDR Register macros*/


/*CH11_AL3_TRANS_COUNT Register macros*/


/*CH11_AL3_READ_ADDR_TRIG Register macros*/


/*CH12_READ_ADDR Register macros*/


/*CH12_WRITE_ADDR Register macros*/


/*CH12_TRANS_COUNT Register macros*/

#define DMA_CH12_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH12_TRANS_COUNT_MODE_MASK DMA_CH12_TRANS_COUNT_MODE(ALL1)
#define DMA_CH12_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH12_TRANS_COUNT_COUNT_MASK DMA_CH12_TRANS_COUNT_COUNT(ALL1)

/*CH12_CTRL_TRIG Register macros*/

#define DMA_CH12_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH12_CTRL_TRIG_AHB_ERROR_MASK DMA_CH12_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH12_CTRL_TRIG_READ_ERROR_MASK DMA_CH12_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH12_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH12_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH12_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH12_CTRL_TRIG_BUSY_MASK DMA_CH12_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH12_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH12_CTRL_TRIG_SNIFF_EN_MASK DMA_CH12_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH12_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH12_CTRL_TRIG_BSWAP_MASK DMA_CH12_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH12_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH12_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH12_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH12_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH12_CTRL_TRIG_TREQ_SEL_MASK DMA_CH12_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH12_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH12_CTRL_TRIG_CHAIN_TO_MASK DMA_CH12_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH12_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH12_CTRL_TRIG_RING_SEL_MASK DMA_CH12_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH12_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH12_CTRL_TRIG_RING_SIZE_MASK DMA_CH12_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH12_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH12_CTRL_TRIG_INCR_WRITE_MASK DMA_CH12_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH12_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH12_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH12_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH12_CTRL_TRIG_INCR_READ_MASK DMA_CH12_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH12_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH12_CTRL_TRIG_DATA_SIZE_MASK DMA_CH12_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH12_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH12_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH12_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH12_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH12_CTRL_TRIG_EN_MASK DMA_CH12_CTRL_TRIG_EN(ALL1)

/*CH12_AL1_CTRL Register macros*/


/*CH12_AL1_READ_ADDR Register macros*/


/*CH12_AL1_WRITE_ADDR Register macros*/


/*CH12_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH12_AL2_CTRL Register macros*/


/*CH12_AL2_TRANS_COUNT Register macros*/


/*CH12_AL2_READ_ADDR Register macros*/


/*CH12_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH12_AL3_CTRL Register macros*/


/*CH12_AL3_WRITE_ADDR Register macros*/


/*CH12_AL3_TRANS_COUNT Register macros*/


/*CH12_AL3_READ_ADDR_TRIG Register macros*/


/*CH13_READ_ADDR Register macros*/


/*CH13_WRITE_ADDR Register macros*/


/*CH13_TRANS_COUNT Register macros*/

#define DMA_CH13_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH13_TRANS_COUNT_MODE_MASK DMA_CH13_TRANS_COUNT_MODE(ALL1)
#define DMA_CH13_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH13_TRANS_COUNT_COUNT_MASK DMA_CH13_TRANS_COUNT_COUNT(ALL1)

/*CH13_CTRL_TRIG Register macros*/

#define DMA_CH13_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH13_CTRL_TRIG_AHB_ERROR_MASK DMA_CH13_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH13_CTRL_TRIG_READ_ERROR_MASK DMA_CH13_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH13_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH13_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH13_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH13_CTRL_TRIG_BUSY_MASK DMA_CH13_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH13_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH13_CTRL_TRIG_SNIFF_EN_MASK DMA_CH13_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH13_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH13_CTRL_TRIG_BSWAP_MASK DMA_CH13_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH13_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH13_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH13_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH13_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH13_CTRL_TRIG_TREQ_SEL_MASK DMA_CH13_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH13_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH13_CTRL_TRIG_CHAIN_TO_MASK DMA_CH13_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH13_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH13_CTRL_TRIG_RING_SEL_MASK DMA_CH13_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH13_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH13_CTRL_TRIG_RING_SIZE_MASK DMA_CH13_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH13_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH13_CTRL_TRIG_INCR_WRITE_MASK DMA_CH13_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH13_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH13_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH13_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH13_CTRL_TRIG_INCR_READ_MASK DMA_CH13_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH13_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH13_CTRL_TRIG_DATA_SIZE_MASK DMA_CH13_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH13_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH13_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH13_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH13_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH13_CTRL_TRIG_EN_MASK DMA_CH13_CTRL_TRIG_EN(ALL1)

/*CH13_AL1_CTRL Register macros*/


/*CH13_AL1_READ_ADDR Register macros*/


/*CH13_AL1_WRITE_ADDR Register macros*/


/*CH13_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH13_AL2_CTRL Register macros*/


/*CH13_AL2_TRANS_COUNT Register macros*/


/*CH13_AL2_READ_ADDR Register macros*/


/*CH13_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH13_AL3_CTRL Register macros*/


/*CH13_AL3_WRITE_ADDR Register macros*/


/*CH13_AL3_TRANS_COUNT Register macros*/


/*CH13_AL3_READ_ADDR_TRIG Register macros*/


/*CH14_READ_ADDR Register macros*/


/*CH14_WRITE_ADDR Register macros*/


/*CH14_TRANS_COUNT Register macros*/

#define DMA_CH14_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH14_TRANS_COUNT_MODE_MASK DMA_CH14_TRANS_COUNT_MODE(ALL1)
#define DMA_CH14_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH14_TRANS_COUNT_COUNT_MASK DMA_CH14_TRANS_COUNT_COUNT(ALL1)

/*CH14_CTRL_TRIG Register macros*/

#define DMA_CH14_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH14_CTRL_TRIG_AHB_ERROR_MASK DMA_CH14_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH14_CTRL_TRIG_READ_ERROR_MASK DMA_CH14_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH14_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH14_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH14_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH14_CTRL_TRIG_BUSY_MASK DMA_CH14_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH14_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH14_CTRL_TRIG_SNIFF_EN_MASK DMA_CH14_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH14_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH14_CTRL_TRIG_BSWAP_MASK DMA_CH14_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH14_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH14_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH14_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH14_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH14_CTRL_TRIG_TREQ_SEL_MASK DMA_CH14_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH14_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH14_CTRL_TRIG_CHAIN_TO_MASK DMA_CH14_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH14_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH14_CTRL_TRIG_RING_SEL_MASK DMA_CH14_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH14_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH14_CTRL_TRIG_RING_SIZE_MASK DMA_CH14_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH14_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH14_CTRL_TRIG_INCR_WRITE_MASK DMA_CH14_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH14_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH14_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH14_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH14_CTRL_TRIG_INCR_READ_MASK DMA_CH14_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH14_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH14_CTRL_TRIG_DATA_SIZE_MASK DMA_CH14_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH14_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH14_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH14_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH14_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH14_CTRL_TRIG_EN_MASK DMA_CH14_CTRL_TRIG_EN(ALL1)

/*CH14_AL1_CTRL Register macros*/


/*CH14_AL1_READ_ADDR Register macros*/


/*CH14_AL1_WRITE_ADDR Register macros*/


/*CH14_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH14_AL2_CTRL Register macros*/


/*CH14_AL2_TRANS_COUNT Register macros*/


/*CH14_AL2_READ_ADDR Register macros*/


/*CH14_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH14_AL3_CTRL Register macros*/


/*CH14_AL3_WRITE_ADDR Register macros*/


/*CH14_AL3_TRANS_COUNT Register macros*/


/*CH14_AL3_READ_ADDR_TRIG Register macros*/


/*CH15_READ_ADDR Register macros*/


/*CH15_WRITE_ADDR Register macros*/


/*CH15_TRANS_COUNT Register macros*/

#define DMA_CH15_TRANS_COUNT_MODE(v) (((v)&0xf)<<28)
#define DMA_CH15_TRANS_COUNT_MODE_MASK DMA_CH15_TRANS_COUNT_MODE(ALL1)
#define DMA_CH15_TRANS_COUNT_COUNT(v) (((v)&0xfffffff)<<0)
#define DMA_CH15_TRANS_COUNT_COUNT_MASK DMA_CH15_TRANS_COUNT_COUNT(ALL1)

/*CH15_CTRL_TRIG Register macros*/

#define DMA_CH15_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH15_CTRL_TRIG_AHB_ERROR_MASK DMA_CH15_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH15_CTRL_TRIG_READ_ERROR_MASK DMA_CH15_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH15_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH15_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH15_CTRL_TRIG_BUSY(v) (((v)&0x1)<<26)
#define DMA_CH15_CTRL_TRIG_BUSY_MASK DMA_CH15_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH15_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<25)
#define DMA_CH15_CTRL_TRIG_SNIFF_EN_MASK DMA_CH15_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH15_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<24)
#define DMA_CH15_CTRL_TRIG_BSWAP_MASK DMA_CH15_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH15_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<23)
#define DMA_CH15_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH15_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH15_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<17)
#define DMA_CH15_CTRL_TRIG_TREQ_SEL_MASK DMA_CH15_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH15_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<13)
#define DMA_CH15_CTRL_TRIG_CHAIN_TO_MASK DMA_CH15_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH15_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<12)
#define DMA_CH15_CTRL_TRIG_RING_SEL_MASK DMA_CH15_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH15_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<8)
#define DMA_CH15_CTRL_TRIG_RING_SIZE_MASK DMA_CH15_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_REV(v) (((v)&0x1)<<7)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_REV_MASK DMA_CH15_CTRL_TRIG_INCR_WRITE_REV(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<6)
#define DMA_CH15_CTRL_TRIG_INCR_WRITE_MASK DMA_CH15_CTRL_TRIG_INCR_WRITE(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_READ_REV(v) (((v)&0x1)<<5)
#define DMA_CH15_CTRL_TRIG_INCR_READ_REV_MASK DMA_CH15_CTRL_TRIG_INCR_READ_REV(ALL1)
#define DMA_CH15_CTRL_TRIG_INCR_READ(v) (((v)&0x1)<<4)
#define DMA_CH15_CTRL_TRIG_INCR_READ_MASK DMA_CH15_CTRL_TRIG_INCR_READ(ALL1)
#define DMA_CH15_CTRL_TRIG_DATA_SIZE(v) (((v)&0x3)<<2)
#define DMA_CH15_CTRL_TRIG_DATA_SIZE_MASK DMA_CH15_CTRL_TRIG_DATA_SIZE(ALL1)
#define DMA_CH15_CTRL_TRIG_HIGH_PRIORITY(v) (((v)&0x1)<<1)
#define DMA_CH15_CTRL_TRIG_HIGH_PRIORITY_MASK DMA_CH15_CTRL_TRIG_HIGH_PRIORITY(ALL1)
#define DMA_CH15_CTRL_TRIG_EN(v) (((v)&0x1)<<0)
#define DMA_CH15_CTRL_TRIG_EN_MASK DMA_CH15_CTRL_TRIG_EN(ALL1)

/*CH15_AL1_CTRL Register macros*/


/*CH15_AL1_READ_ADDR Register macros*/


/*CH15_AL1_WRITE_ADDR Register macros*/


/*CH15_AL1_TRANS_COUNT_TRIG Register macros*/


/*CH15_AL2_CTRL Register macros*/


/*CH15_AL2_TRANS_COUNT Register macros*/


/*CH15_AL2_READ_ADDR Register macros*/


/*CH15_AL2_WRITE_ADDR_TRIG Register macros*/


/*CH15_AL3_CTRL Register macros*/


/*CH15_AL3_WRITE_ADDR Register macros*/


/*CH15_AL3_TRANS_COUNT Register macros*/


/*CH15_AL3_READ_ADDR_TRIG Register macros*/


/*INTR Register macros*/


/*INTE0 Register macros*/


/*INTF0 Register macros*/


/*INTS0 Register macros*/


/*INTE1 Register macros*/


/*INTF1 Register macros*/


/*INTS1 Register macros*/


/*INTE2 Register macros*/


/*INTF2 Register macros*/


/*INTS2 Register macros*/


/*INTE3 Register macros*/


/*INTF3 Register macros*/


/*INTS3 Register macros*/


/*TIMER0 Register macros*/

#define DMA_TIMER0_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER0_X_MASK DMA_TIMER0_X(ALL1)
#define DMA_TIMER0_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER0_Y_MASK DMA_TIMER0_Y(ALL1)

/*TIMER1 Register macros*/

#define DMA_TIMER1_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER1_X_MASK DMA_TIMER1_X(ALL1)
#define DMA_TIMER1_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER1_Y_MASK DMA_TIMER1_Y(ALL1)

/*TIMER2 Register macros*/

#define DMA_TIMER2_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER2_X_MASK DMA_TIMER2_X(ALL1)
#define DMA_TIMER2_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER2_Y_MASK DMA_TIMER2_Y(ALL1)

/*TIMER3 Register macros*/

#define DMA_TIMER3_X(v) (((v)&0xffff)<<16)
#define DMA_TIMER3_X_MASK DMA_TIMER3_X(ALL1)
#define DMA_TIMER3_Y(v) (((v)&0xffff)<<0)
#define DMA_TIMER3_Y_MASK DMA_TIMER3_Y(ALL1)

/*MULTI_CHAN_TRIGGER Register macros*/


/*SNIFF_CTRL Register macros*/

#define DMA_SNIFF_CTRL_OUT_INV(v) (((v)&0x1)<<11)
#define DMA_SNIFF_CTRL_OUT_INV_MASK DMA_SNIFF_CTRL_OUT_INV(ALL1)
#define DMA_SNIFF_CTRL_OUT_REV(v) (((v)&0x1)<<10)
#define DMA_SNIFF_CTRL_OUT_REV_MASK DMA_SNIFF_CTRL_OUT_REV(ALL1)
#define DMA_SNIFF_CTRL_BSWAP(v) (((v)&0x1)<<9)
#define DMA_SNIFF_CTRL_BSWAP_MASK DMA_SNIFF_CTRL_BSWAP(ALL1)
#define DMA_SNIFF_CTRL_CALC(v) (((v)&0xf)<<5)
#define DMA_SNIFF_CTRL_CALC_MASK DMA_SNIFF_CTRL_CALC(ALL1)
#define DMA_SNIFF_CTRL_DMACH(v) (((v)&0xf)<<1)
#define DMA_SNIFF_CTRL_DMACH_MASK DMA_SNIFF_CTRL_DMACH(ALL1)
#define DMA_SNIFF_CTRL_EN(v) (((v)&0x1)<<0)
#define DMA_SNIFF_CTRL_EN_MASK DMA_SNIFF_CTRL_EN(ALL1)

/*SNIFF_DATA Register macros*/


/*FIFO_LEVELS Register macros*/

#define DMA_FIFO_LEVELS_RAF_LVL(v) (((v)&0xff)<<16)
#define DMA_FIFO_LEVELS_RAF_LVL_MASK DMA_FIFO_LEVELS_RAF_LVL(ALL1)
#define DMA_FIFO_LEVELS_WAF_LVL(v) (((v)&0xff)<<8)
#define DMA_FIFO_LEVELS_WAF_LVL_MASK DMA_FIFO_LEVELS_WAF_LVL(ALL1)
#define DMA_FIFO_LEVELS_TDF_LVL(v) (((v)&0xff)<<0)
#define DMA_FIFO_LEVELS_TDF_LVL_MASK DMA_FIFO_LEVELS_TDF_LVL(ALL1)

/*CHAN_ABORT Register macros*/


/*N_CHANNELS Register macros*/


/*SECCFG_CH0 Register macros*/

#define DMA_SECCFG_CH0_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH0_LOCK_MASK DMA_SECCFG_CH0_LOCK(ALL1)
#define DMA_SECCFG_CH0_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH0_S_MASK DMA_SECCFG_CH0_S(ALL1)
#define DMA_SECCFG_CH0_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH0_P_MASK DMA_SECCFG_CH0_P(ALL1)

/*SECCFG_CH1 Register macros*/

#define DMA_SECCFG_CH1_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH1_LOCK_MASK DMA_SECCFG_CH1_LOCK(ALL1)
#define DMA_SECCFG_CH1_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH1_S_MASK DMA_SECCFG_CH1_S(ALL1)
#define DMA_SECCFG_CH1_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH1_P_MASK DMA_SECCFG_CH1_P(ALL1)

/*SECCFG_CH2 Register macros*/

#define DMA_SECCFG_CH2_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH2_LOCK_MASK DMA_SECCFG_CH2_LOCK(ALL1)
#define DMA_SECCFG_CH2_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH2_S_MASK DMA_SECCFG_CH2_S(ALL1)
#define DMA_SECCFG_CH2_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH2_P_MASK DMA_SECCFG_CH2_P(ALL1)

/*SECCFG_CH3 Register macros*/

#define DMA_SECCFG_CH3_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH3_LOCK_MASK DMA_SECCFG_CH3_LOCK(ALL1)
#define DMA_SECCFG_CH3_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH3_S_MASK DMA_SECCFG_CH3_S(ALL1)
#define DMA_SECCFG_CH3_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH3_P_MASK DMA_SECCFG_CH3_P(ALL1)

/*SECCFG_CH4 Register macros*/

#define DMA_SECCFG_CH4_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH4_LOCK_MASK DMA_SECCFG_CH4_LOCK(ALL1)
#define DMA_SECCFG_CH4_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH4_S_MASK DMA_SECCFG_CH4_S(ALL1)
#define DMA_SECCFG_CH4_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH4_P_MASK DMA_SECCFG_CH4_P(ALL1)

/*SECCFG_CH5 Register macros*/

#define DMA_SECCFG_CH5_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH5_LOCK_MASK DMA_SECCFG_CH5_LOCK(ALL1)
#define DMA_SECCFG_CH5_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH5_S_MASK DMA_SECCFG_CH5_S(ALL1)
#define DMA_SECCFG_CH5_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH5_P_MASK DMA_SECCFG_CH5_P(ALL1)

/*SECCFG_CH6 Register macros*/

#define DMA_SECCFG_CH6_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH6_LOCK_MASK DMA_SECCFG_CH6_LOCK(ALL1)
#define DMA_SECCFG_CH6_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH6_S_MASK DMA_SECCFG_CH6_S(ALL1)
#define DMA_SECCFG_CH6_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH6_P_MASK DMA_SECCFG_CH6_P(ALL1)

/*SECCFG_CH7 Register macros*/

#define DMA_SECCFG_CH7_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH7_LOCK_MASK DMA_SECCFG_CH7_LOCK(ALL1)
#define DMA_SECCFG_CH7_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH7_S_MASK DMA_SECCFG_CH7_S(ALL1)
#define DMA_SECCFG_CH7_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH7_P_MASK DMA_SECCFG_CH7_P(ALL1)

/*SECCFG_CH8 Register macros*/

#define DMA_SECCFG_CH8_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH8_LOCK_MASK DMA_SECCFG_CH8_LOCK(ALL1)
#define DMA_SECCFG_CH8_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH8_S_MASK DMA_SECCFG_CH8_S(ALL1)
#define DMA_SECCFG_CH8_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH8_P_MASK DMA_SECCFG_CH8_P(ALL1)

/*SECCFG_CH9 Register macros*/

#define DMA_SECCFG_CH9_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH9_LOCK_MASK DMA_SECCFG_CH9_LOCK(ALL1)
#define DMA_SECCFG_CH9_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH9_S_MASK DMA_SECCFG_CH9_S(ALL1)
#define DMA_SECCFG_CH9_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH9_P_MASK DMA_SECCFG_CH9_P(ALL1)

/*SECCFG_CH10 Register macros*/

#define DMA_SECCFG_CH10_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH10_LOCK_MASK DMA_SECCFG_CH10_LOCK(ALL1)
#define DMA_SECCFG_CH10_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH10_S_MASK DMA_SECCFG_CH10_S(ALL1)
#define DMA_SECCFG_CH10_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH10_P_MASK DMA_SECCFG_CH10_P(ALL1)

/*SECCFG_CH11 Register macros*/

#define DMA_SECCFG_CH11_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH11_LOCK_MASK DMA_SECCFG_CH11_LOCK(ALL1)
#define DMA_SECCFG_CH11_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH11_S_MASK DMA_SECCFG_CH11_S(ALL1)
#define DMA_SECCFG_CH11_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH11_P_MASK DMA_SECCFG_CH11_P(ALL1)

/*SECCFG_CH12 Register macros*/

#define DMA_SECCFG_CH12_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH12_LOCK_MASK DMA_SECCFG_CH12_LOCK(ALL1)
#define DMA_SECCFG_CH12_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH12_S_MASK DMA_SECCFG_CH12_S(ALL1)
#define DMA_SECCFG_CH12_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH12_P_MASK DMA_SECCFG_CH12_P(ALL1)

/*SECCFG_CH13 Register macros*/

#define DMA_SECCFG_CH13_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH13_LOCK_MASK DMA_SECCFG_CH13_LOCK(ALL1)
#define DMA_SECCFG_CH13_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH13_S_MASK DMA_SECCFG_CH13_S(ALL1)
#define DMA_SECCFG_CH13_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH13_P_MASK DMA_SECCFG_CH13_P(ALL1)

/*SECCFG_CH14 Register macros*/

#define DMA_SECCFG_CH14_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH14_LOCK_MASK DMA_SECCFG_CH14_LOCK(ALL1)
#define DMA_SECCFG_CH14_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH14_S_MASK DMA_SECCFG_CH14_S(ALL1)
#define DMA_SECCFG_CH14_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH14_P_MASK DMA_SECCFG_CH14_P(ALL1)

/*SECCFG_CH15 Register macros*/

#define DMA_SECCFG_CH15_LOCK(v) (((v)&0x1)<<2)
#define DMA_SECCFG_CH15_LOCK_MASK DMA_SECCFG_CH15_LOCK(ALL1)
#define DMA_SECCFG_CH15_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_CH15_S_MASK DMA_SECCFG_CH15_S(ALL1)
#define DMA_SECCFG_CH15_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_CH15_P_MASK DMA_SECCFG_CH15_P(ALL1)

/*SECCFG_IRQ0 Register macros*/

#define DMA_SECCFG_IRQ0_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ0_S_MASK DMA_SECCFG_IRQ0_S(ALL1)
#define DMA_SECCFG_IRQ0_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ0_P_MASK DMA_SECCFG_IRQ0_P(ALL1)

/*SECCFG_IRQ1 Register macros*/

#define DMA_SECCFG_IRQ1_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ1_S_MASK DMA_SECCFG_IRQ1_S(ALL1)
#define DMA_SECCFG_IRQ1_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ1_P_MASK DMA_SECCFG_IRQ1_P(ALL1)

/*SECCFG_IRQ2 Register macros*/

#define DMA_SECCFG_IRQ2_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ2_S_MASK DMA_SECCFG_IRQ2_S(ALL1)
#define DMA_SECCFG_IRQ2_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ2_P_MASK DMA_SECCFG_IRQ2_P(ALL1)

/*SECCFG_IRQ3 Register macros*/

#define DMA_SECCFG_IRQ3_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_IRQ3_S_MASK DMA_SECCFG_IRQ3_S(ALL1)
#define DMA_SECCFG_IRQ3_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_IRQ3_P_MASK DMA_SECCFG_IRQ3_P(ALL1)

/*SECCFG_MISC Register macros*/

#define DMA_SECCFG_MISC_TIMER3_S(v) (((v)&0x1)<<9)
#define DMA_SECCFG_MISC_TIMER3_S_MASK DMA_SECCFG_MISC_TIMER3_S(ALL1)
#define DMA_SECCFG_MISC_TIMER3_P(v) (((v)&0x1)<<8)
#define DMA_SECCFG_MISC_TIMER3_P_MASK DMA_SECCFG_MISC_TIMER3_P(ALL1)
#define DMA_SECCFG_MISC_TIMER2_S(v) (((v)&0x1)<<7)
#define DMA_SECCFG_MISC_TIMER2_S_MASK DMA_SECCFG_MISC_TIMER2_S(ALL1)
#define DMA_SECCFG_MISC_TIMER2_P(v) (((v)&0x1)<<6)
#define DMA_SECCFG_MISC_TIMER2_P_MASK DMA_SECCFG_MISC_TIMER2_P(ALL1)
#define DMA_SECCFG_MISC_TIMER1_S(v) (((v)&0x1)<<5)
#define DMA_SECCFG_MISC_TIMER1_S_MASK DMA_SECCFG_MISC_TIMER1_S(ALL1)
#define DMA_SECCFG_MISC_TIMER1_P(v) (((v)&0x1)<<4)
#define DMA_SECCFG_MISC_TIMER1_P_MASK DMA_SECCFG_MISC_TIMER1_P(ALL1)
#define DMA_SECCFG_MISC_TIMER0_S(v) (((v)&0x1)<<3)
#define DMA_SECCFG_MISC_TIMER0_S_MASK DMA_SECCFG_MISC_TIMER0_S(ALL1)
#define DMA_SECCFG_MISC_TIMER0_P(v) (((v)&0x1)<<2)
#define DMA_SECCFG_MISC_TIMER0_P_MASK DMA_SECCFG_MISC_TIMER0_P(ALL1)
#define DMA_SECCFG_MISC_SNIFF_S(v) (((v)&0x1)<<1)
#define DMA_SECCFG_MISC_SNIFF_S_MASK DMA_SECCFG_MISC_SNIFF_S(ALL1)
#define DMA_SECCFG_MISC_SNIFF_P(v) (((v)&0x1)<<0)
#define DMA_SECCFG_MISC_SNIFF_P_MASK DMA_SECCFG_MISC_SNIFF_P(ALL1)

/*MPU_CTRL Register macros*/

#define DMA_MPU_CTRL_NS_HIDE_ADDR(v) (((v)&0x1)<<3)
#define DMA_MPU_CTRL_NS_HIDE_ADDR_MASK DMA_MPU_CTRL_NS_HIDE_ADDR(ALL1)
#define DMA_MPU_CTRL_S(v) (((v)&0x1)<<2)
#define DMA_MPU_CTRL_S_MASK DMA_MPU_CTRL_S(ALL1)
#define DMA_MPU_CTRL_P(v) (((v)&0x1)<<1)
#define DMA_MPU_CTRL_P_MASK DMA_MPU_CTRL_P(ALL1)

/*MPU_BAR0 Register macros*/

#define DMA_MPU_BAR0_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR0_ADDR_MASK DMA_MPU_BAR0_ADDR(ALL1)

/*MPU_LAR0 Register macros*/

#define DMA_MPU_LAR0_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR0_ADDR_MASK DMA_MPU_LAR0_ADDR(ALL1)
#define DMA_MPU_LAR0_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR0_S_MASK DMA_MPU_LAR0_S(ALL1)
#define DMA_MPU_LAR0_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR0_P_MASK DMA_MPU_LAR0_P(ALL1)
#define DMA_MPU_LAR0_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR0_EN_MASK DMA_MPU_LAR0_EN(ALL1)

/*MPU_BAR1 Register macros*/

#define DMA_MPU_BAR1_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR1_ADDR_MASK DMA_MPU_BAR1_ADDR(ALL1)

/*MPU_LAR1 Register macros*/

#define DMA_MPU_LAR1_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR1_ADDR_MASK DMA_MPU_LAR1_ADDR(ALL1)
#define DMA_MPU_LAR1_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR1_S_MASK DMA_MPU_LAR1_S(ALL1)
#define DMA_MPU_LAR1_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR1_P_MASK DMA_MPU_LAR1_P(ALL1)
#define DMA_MPU_LAR1_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR1_EN_MASK DMA_MPU_LAR1_EN(ALL1)

/*MPU_BAR2 Register macros*/

#define DMA_MPU_BAR2_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR2_ADDR_MASK DMA_MPU_BAR2_ADDR(ALL1)

/*MPU_LAR2 Register macros*/

#define DMA_MPU_LAR2_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR2_ADDR_MASK DMA_MPU_LAR2_ADDR(ALL1)
#define DMA_MPU_LAR2_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR2_S_MASK DMA_MPU_LAR2_S(ALL1)
#define DMA_MPU_LAR2_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR2_P_MASK DMA_MPU_LAR2_P(ALL1)
#define DMA_MPU_LAR2_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR2_EN_MASK DMA_MPU_LAR2_EN(ALL1)

/*MPU_BAR3 Register macros*/

#define DMA_MPU_BAR3_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR3_ADDR_MASK DMA_MPU_BAR3_ADDR(ALL1)

/*MPU_LAR3 Register macros*/

#define DMA_MPU_LAR3_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR3_ADDR_MASK DMA_MPU_LAR3_ADDR(ALL1)
#define DMA_MPU_LAR3_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR3_S_MASK DMA_MPU_LAR3_S(ALL1)
#define DMA_MPU_LAR3_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR3_P_MASK DMA_MPU_LAR3_P(ALL1)
#define DMA_MPU_LAR3_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR3_EN_MASK DMA_MPU_LAR3_EN(ALL1)

/*MPU_BAR4 Register macros*/

#define DMA_MPU_BAR4_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR4_ADDR_MASK DMA_MPU_BAR4_ADDR(ALL1)

/*MPU_LAR4 Register macros*/

#define DMA_MPU_LAR4_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR4_ADDR_MASK DMA_MPU_LAR4_ADDR(ALL1)
#define DMA_MPU_LAR4_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR4_S_MASK DMA_MPU_LAR4_S(ALL1)
#define DMA_MPU_LAR4_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR4_P_MASK DMA_MPU_LAR4_P(ALL1)
#define DMA_MPU_LAR4_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR4_EN_MASK DMA_MPU_LAR4_EN(ALL1)

/*MPU_BAR5 Register macros*/

#define DMA_MPU_BAR5_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR5_ADDR_MASK DMA_MPU_BAR5_ADDR(ALL1)

/*MPU_LAR5 Register macros*/

#define DMA_MPU_LAR5_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR5_ADDR_MASK DMA_MPU_LAR5_ADDR(ALL1)
#define DMA_MPU_LAR5_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR5_S_MASK DMA_MPU_LAR5_S(ALL1)
#define DMA_MPU_LAR5_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR5_P_MASK DMA_MPU_LAR5_P(ALL1)
#define DMA_MPU_LAR5_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR5_EN_MASK DMA_MPU_LAR5_EN(ALL1)

/*MPU_BAR6 Register macros*/

#define DMA_MPU_BAR6_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR6_ADDR_MASK DMA_MPU_BAR6_ADDR(ALL1)

/*MPU_LAR6 Register macros*/

#define DMA_MPU_LAR6_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR6_ADDR_MASK DMA_MPU_LAR6_ADDR(ALL1)
#define DMA_MPU_LAR6_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR6_S_MASK DMA_MPU_LAR6_S(ALL1)
#define DMA_MPU_LAR6_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR6_P_MASK DMA_MPU_LAR6_P(ALL1)
#define DMA_MPU_LAR6_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR6_EN_MASK DMA_MPU_LAR6_EN(ALL1)

/*MPU_BAR7 Register macros*/

#define DMA_MPU_BAR7_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_BAR7_ADDR_MASK DMA_MPU_BAR7_ADDR(ALL1)

/*MPU_LAR7 Register macros*/

#define DMA_MPU_LAR7_ADDR(v) (((v)&0x7ffffff)<<5)
#define DMA_MPU_LAR7_ADDR_MASK DMA_MPU_LAR7_ADDR(ALL1)
#define DMA_MPU_LAR7_S(v) (((v)&0x1)<<2)
#define DMA_MPU_LAR7_S_MASK DMA_MPU_LAR7_S(ALL1)
#define DMA_MPU_LAR7_P(v) (((v)&0x1)<<1)
#define DMA_MPU_LAR7_P_MASK DMA_MPU_LAR7_P(ALL1)
#define DMA_MPU_LAR7_EN(v) (((v)&0x1)<<0)
#define DMA_MPU_LAR7_EN_MASK DMA_MPU_LAR7_EN(ALL1)

/*CH0_DBG_CTDREQ Register macros*/


/*CH0_DBG_TCR Register macros*/


/*CH1_DBG_CTDREQ Register macros*/


/*CH1_DBG_TCR Register macros*/


/*CH2_DBG_CTDREQ Register macros*/


/*CH2_DBG_TCR Register macros*/


/*CH3_DBG_CTDREQ Register macros*/


/*CH3_DBG_TCR Register macros*/


/*CH4_DBG_CTDREQ Register macros*/


/*CH4_DBG_TCR Register macros*/


/*CH5_DBG_CTDREQ Register macros*/


/*CH5_DBG_TCR Register macros*/


/*CH6_DBG_CTDREQ Register macros*/


/*CH6_DBG_TCR Register macros*/


/*CH7_DBG_CTDREQ Register macros*/


/*CH7_DBG_TCR Register macros*/


/*CH8_DBG_CTDREQ Register macros*/


/*CH8_DBG_TCR Register macros*/


/*CH9_DBG_CTDREQ Register macros*/


/*CH9_DBG_TCR Register macros*/


/*CH10_DBG_CTDREQ Register macros*/


/*CH10_DBG_TCR Register macros*/


/*CH11_DBG_CTDREQ Register macros*/


/*CH11_DBG_TCR Register macros*/


/*CH12_DBG_CTDREQ Register macros*/


/*CH12_DBG_TCR Register macros*/


/*CH13_DBG_CTDREQ Register macros*/


/*CH13_DBG_TCR Register macros*/


/*CH14_DBG_CTDREQ Register macros*/


/*CH14_DBG_TCR Register macros*/


/*CH15_DBG_CTDREQ Register macros*/


/*CH15_DBG_TCR Register macros*/


#endif