
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

#ifndef RP2040_DMA_H
#define RP2040_DMA_H

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
		uint32_t RSVD0[64];
		uint32_t intr;
		uint32_t inte0;
		uint32_t intf0;
		uint32_t ints0;
		uint32_t RSVD1;
		uint32_t inte1;
		uint32_t intf1;
		uint32_t ints1;
		uint32_t timer0;
		uint32_t timer1;
		uint32_t timer2;
		uint32_t timer3;
		uint32_t multi_chan_trigger;
		uint32_t sniff_ctrl;
		uint32_t sniff_data;
		uint32_t RSVD2;
		uint32_t fifo_levels;
		uint32_t chan_abort;
		uint32_t n_channels;
		uint32_t RSVD3[237];
		uint32_t ch0_dbg_ctdreq;
		uint32_t ch0_dbg_tcr;
		uint32_t RSVD4[14];
		uint32_t ch1_dbg_ctdreq;
		uint32_t ch1_dbg_tcr;
		uint32_t RSVD5[14];
		uint32_t ch2_dbg_ctdreq;
		uint32_t ch2_dbg_tcr;
		uint32_t RSVD6[14];
		uint32_t ch3_dbg_ctdreq;
		uint32_t ch3_dbg_tcr;
		uint32_t RSVD7[14];
		uint32_t ch4_dbg_ctdreq;
		uint32_t ch4_dbg_tcr;
		uint32_t RSVD8[14];
		uint32_t ch5_dbg_ctdreq;
		uint32_t ch5_dbg_tcr;
		uint32_t RSVD9[14];
		uint32_t ch6_dbg_ctdreq;
		uint32_t ch6_dbg_tcr;
		uint32_t RSVD10[14];
		uint32_t ch7_dbg_ctdreq;
		uint32_t ch7_dbg_tcr;
		uint32_t RSVD11[14];
		uint32_t ch8_dbg_ctdreq;
		uint32_t ch8_dbg_tcr;
		uint32_t RSVD12[14];
		uint32_t ch9_dbg_ctdreq;
		uint32_t ch9_dbg_tcr;
		uint32_t RSVD13[14];
		uint32_t ch10_dbg_ctdreq;
		uint32_t ch10_dbg_tcr;
		uint32_t RSVD14[14];
		uint32_t ch11_dbg_ctdreq;
		uint32_t ch11_dbg_tcr;
		uint32_t RSVD15[334];
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
		uint32_t RSVDxor_0[64];
		uint32_t xor_intr;
		uint32_t xor_inte0;
		uint32_t xor_intf0;
		uint32_t xor_ints0;
		uint32_t RSVDxor_1;
		uint32_t xor_inte1;
		uint32_t xor_intf1;
		uint32_t xor_ints1;
		uint32_t xor_timer0;
		uint32_t xor_timer1;
		uint32_t xor_timer2;
		uint32_t xor_timer3;
		uint32_t xor_multi_chan_trigger;
		uint32_t xor_sniff_ctrl;
		uint32_t xor_sniff_data;
		uint32_t RSVDxor_2;
		uint32_t xor_fifo_levels;
		uint32_t xor_chan_abort;
		uint32_t xor_n_channels;
		uint32_t RSVDxor_3[237];
		uint32_t xor_ch0_dbg_ctdreq;
		uint32_t xor_ch0_dbg_tcr;
		uint32_t RSVDxor_4[14];
		uint32_t xor_ch1_dbg_ctdreq;
		uint32_t xor_ch1_dbg_tcr;
		uint32_t RSVDxor_5[14];
		uint32_t xor_ch2_dbg_ctdreq;
		uint32_t xor_ch2_dbg_tcr;
		uint32_t RSVDxor_6[14];
		uint32_t xor_ch3_dbg_ctdreq;
		uint32_t xor_ch3_dbg_tcr;
		uint32_t RSVDxor_7[14];
		uint32_t xor_ch4_dbg_ctdreq;
		uint32_t xor_ch4_dbg_tcr;
		uint32_t RSVDxor_8[14];
		uint32_t xor_ch5_dbg_ctdreq;
		uint32_t xor_ch5_dbg_tcr;
		uint32_t RSVDxor_9[14];
		uint32_t xor_ch6_dbg_ctdreq;
		uint32_t xor_ch6_dbg_tcr;
		uint32_t RSVDxor_10[14];
		uint32_t xor_ch7_dbg_ctdreq;
		uint32_t xor_ch7_dbg_tcr;
		uint32_t RSVDxor_11[14];
		uint32_t xor_ch8_dbg_ctdreq;
		uint32_t xor_ch8_dbg_tcr;
		uint32_t RSVDxor_12[14];
		uint32_t xor_ch9_dbg_ctdreq;
		uint32_t xor_ch9_dbg_tcr;
		uint32_t RSVDxor_13[14];
		uint32_t xor_ch10_dbg_ctdreq;
		uint32_t xor_ch10_dbg_tcr;
		uint32_t RSVDxor_14[14];
		uint32_t xor_ch11_dbg_ctdreq;
		uint32_t xor_ch11_dbg_tcr;
		uint32_t RSVDxor_15[334];
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
		uint32_t RSVDset_0[64];
		uint32_t set_intr;
		uint32_t set_inte0;
		uint32_t set_intf0;
		uint32_t set_ints0;
		uint32_t RSVDset_1;
		uint32_t set_inte1;
		uint32_t set_intf1;
		uint32_t set_ints1;
		uint32_t set_timer0;
		uint32_t set_timer1;
		uint32_t set_timer2;
		uint32_t set_timer3;
		uint32_t set_multi_chan_trigger;
		uint32_t set_sniff_ctrl;
		uint32_t set_sniff_data;
		uint32_t RSVDset_2;
		uint32_t set_fifo_levels;
		uint32_t set_chan_abort;
		uint32_t set_n_channels;
		uint32_t RSVDset_3[237];
		uint32_t set_ch0_dbg_ctdreq;
		uint32_t set_ch0_dbg_tcr;
		uint32_t RSVDset_4[14];
		uint32_t set_ch1_dbg_ctdreq;
		uint32_t set_ch1_dbg_tcr;
		uint32_t RSVDset_5[14];
		uint32_t set_ch2_dbg_ctdreq;
		uint32_t set_ch2_dbg_tcr;
		uint32_t RSVDset_6[14];
		uint32_t set_ch3_dbg_ctdreq;
		uint32_t set_ch3_dbg_tcr;
		uint32_t RSVDset_7[14];
		uint32_t set_ch4_dbg_ctdreq;
		uint32_t set_ch4_dbg_tcr;
		uint32_t RSVDset_8[14];
		uint32_t set_ch5_dbg_ctdreq;
		uint32_t set_ch5_dbg_tcr;
		uint32_t RSVDset_9[14];
		uint32_t set_ch6_dbg_ctdreq;
		uint32_t set_ch6_dbg_tcr;
		uint32_t RSVDset_10[14];
		uint32_t set_ch7_dbg_ctdreq;
		uint32_t set_ch7_dbg_tcr;
		uint32_t RSVDset_11[14];
		uint32_t set_ch8_dbg_ctdreq;
		uint32_t set_ch8_dbg_tcr;
		uint32_t RSVDset_12[14];
		uint32_t set_ch9_dbg_ctdreq;
		uint32_t set_ch9_dbg_tcr;
		uint32_t RSVDset_13[14];
		uint32_t set_ch10_dbg_ctdreq;
		uint32_t set_ch10_dbg_tcr;
		uint32_t RSVDset_14[14];
		uint32_t set_ch11_dbg_ctdreq;
		uint32_t set_ch11_dbg_tcr;
		uint32_t RSVDset_15[334];
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
		uint32_t RSVDclr_0[64];
		uint32_t clr_intr;
		uint32_t clr_inte0;
		uint32_t clr_intf0;
		uint32_t clr_ints0;
		uint32_t RSVDclr_1;
		uint32_t clr_inte1;
		uint32_t clr_intf1;
		uint32_t clr_ints1;
		uint32_t clr_timer0;
		uint32_t clr_timer1;
		uint32_t clr_timer2;
		uint32_t clr_timer3;
		uint32_t clr_multi_chan_trigger;
		uint32_t clr_sniff_ctrl;
		uint32_t clr_sniff_data;
		uint32_t RSVDclr_2;
		uint32_t clr_fifo_levels;
		uint32_t clr_chan_abort;
		uint32_t clr_n_channels;
		uint32_t RSVDclr_3[237];
		uint32_t clr_ch0_dbg_ctdreq;
		uint32_t clr_ch0_dbg_tcr;
		uint32_t RSVDclr_4[14];
		uint32_t clr_ch1_dbg_ctdreq;
		uint32_t clr_ch1_dbg_tcr;
		uint32_t RSVDclr_5[14];
		uint32_t clr_ch2_dbg_ctdreq;
		uint32_t clr_ch2_dbg_tcr;
		uint32_t RSVDclr_6[14];
		uint32_t clr_ch3_dbg_ctdreq;
		uint32_t clr_ch3_dbg_tcr;
		uint32_t RSVDclr_7[14];
		uint32_t clr_ch4_dbg_ctdreq;
		uint32_t clr_ch4_dbg_tcr;
		uint32_t RSVDclr_8[14];
		uint32_t clr_ch5_dbg_ctdreq;
		uint32_t clr_ch5_dbg_tcr;
		uint32_t RSVDclr_9[14];
		uint32_t clr_ch6_dbg_ctdreq;
		uint32_t clr_ch6_dbg_tcr;
		uint32_t RSVDclr_10[14];
		uint32_t clr_ch7_dbg_ctdreq;
		uint32_t clr_ch7_dbg_tcr;
		uint32_t RSVDclr_11[14];
		uint32_t clr_ch8_dbg_ctdreq;
		uint32_t clr_ch8_dbg_tcr;
		uint32_t RSVDclr_12[14];
		uint32_t clr_ch9_dbg_ctdreq;
		uint32_t clr_ch9_dbg_tcr;
		uint32_t RSVDclr_13[14];
		uint32_t clr_ch10_dbg_ctdreq;
		uint32_t clr_ch10_dbg_tcr;
		uint32_t RSVDclr_14[14];
		uint32_t clr_ch11_dbg_ctdreq;
		uint32_t clr_ch11_dbg_tcr;
		uint32_t RSVDclr_15[334];
} DMA_REG_BLOCKS;

#define dma ((DMA_REG_BLOCKS volatile *)0x50000000)

/*CH0_READ_ADDR Register macros*/


/*CH0_WRITE_ADDR Register macros*/


/*CH0_TRANS_COUNT Register macros*/


/*CH0_CTRL_TRIG Register macros*/

#define DMA_CH0_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH0_CTRL_TRIG_AHB_ERROR_MASK DMA_CH0_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH0_CTRL_TRIG_READ_ERROR_MASK DMA_CH0_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH0_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH0_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH0_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH0_CTRL_TRIG_BUSY_MASK DMA_CH0_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH0_CTRL_TRIG_SNIFF_EN_MASK DMA_CH0_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH0_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH0_CTRL_TRIG_BSWAP_MASK DMA_CH0_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH0_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH0_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH0_CTRL_TRIG_TREQ_SEL_MASK DMA_CH0_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH0_CTRL_TRIG_CHAIN_TO_MASK DMA_CH0_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH0_CTRL_TRIG_RING_SEL_MASK DMA_CH0_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH0_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH0_CTRL_TRIG_RING_SIZE_MASK DMA_CH0_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH0_CTRL_TRIG_INCR_WRITE_MASK DMA_CH0_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH1_CTRL_TRIG Register macros*/

#define DMA_CH1_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH1_CTRL_TRIG_AHB_ERROR_MASK DMA_CH1_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH1_CTRL_TRIG_READ_ERROR_MASK DMA_CH1_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH1_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH1_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH1_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH1_CTRL_TRIG_BUSY_MASK DMA_CH1_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH1_CTRL_TRIG_SNIFF_EN_MASK DMA_CH1_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH1_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH1_CTRL_TRIG_BSWAP_MASK DMA_CH1_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH1_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH1_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH1_CTRL_TRIG_TREQ_SEL_MASK DMA_CH1_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH1_CTRL_TRIG_CHAIN_TO_MASK DMA_CH1_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH1_CTRL_TRIG_RING_SEL_MASK DMA_CH1_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH1_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH1_CTRL_TRIG_RING_SIZE_MASK DMA_CH1_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH1_CTRL_TRIG_INCR_WRITE_MASK DMA_CH1_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH2_CTRL_TRIG Register macros*/

#define DMA_CH2_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH2_CTRL_TRIG_AHB_ERROR_MASK DMA_CH2_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH2_CTRL_TRIG_READ_ERROR_MASK DMA_CH2_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH2_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH2_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH2_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH2_CTRL_TRIG_BUSY_MASK DMA_CH2_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH2_CTRL_TRIG_SNIFF_EN_MASK DMA_CH2_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH2_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH2_CTRL_TRIG_BSWAP_MASK DMA_CH2_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH2_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH2_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH2_CTRL_TRIG_TREQ_SEL_MASK DMA_CH2_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH2_CTRL_TRIG_CHAIN_TO_MASK DMA_CH2_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH2_CTRL_TRIG_RING_SEL_MASK DMA_CH2_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH2_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH2_CTRL_TRIG_RING_SIZE_MASK DMA_CH2_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH2_CTRL_TRIG_INCR_WRITE_MASK DMA_CH2_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH3_CTRL_TRIG Register macros*/

#define DMA_CH3_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH3_CTRL_TRIG_AHB_ERROR_MASK DMA_CH3_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH3_CTRL_TRIG_READ_ERROR_MASK DMA_CH3_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH3_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH3_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH3_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH3_CTRL_TRIG_BUSY_MASK DMA_CH3_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH3_CTRL_TRIG_SNIFF_EN_MASK DMA_CH3_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH3_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH3_CTRL_TRIG_BSWAP_MASK DMA_CH3_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH3_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH3_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH3_CTRL_TRIG_TREQ_SEL_MASK DMA_CH3_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH3_CTRL_TRIG_CHAIN_TO_MASK DMA_CH3_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH3_CTRL_TRIG_RING_SEL_MASK DMA_CH3_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH3_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH3_CTRL_TRIG_RING_SIZE_MASK DMA_CH3_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH3_CTRL_TRIG_INCR_WRITE_MASK DMA_CH3_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH4_CTRL_TRIG Register macros*/

#define DMA_CH4_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH4_CTRL_TRIG_AHB_ERROR_MASK DMA_CH4_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH4_CTRL_TRIG_READ_ERROR_MASK DMA_CH4_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH4_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH4_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH4_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH4_CTRL_TRIG_BUSY_MASK DMA_CH4_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH4_CTRL_TRIG_SNIFF_EN_MASK DMA_CH4_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH4_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH4_CTRL_TRIG_BSWAP_MASK DMA_CH4_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH4_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH4_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH4_CTRL_TRIG_TREQ_SEL_MASK DMA_CH4_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH4_CTRL_TRIG_CHAIN_TO_MASK DMA_CH4_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH4_CTRL_TRIG_RING_SEL_MASK DMA_CH4_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH4_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH4_CTRL_TRIG_RING_SIZE_MASK DMA_CH4_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH4_CTRL_TRIG_INCR_WRITE_MASK DMA_CH4_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH5_CTRL_TRIG Register macros*/

#define DMA_CH5_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH5_CTRL_TRIG_AHB_ERROR_MASK DMA_CH5_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH5_CTRL_TRIG_READ_ERROR_MASK DMA_CH5_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH5_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH5_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH5_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH5_CTRL_TRIG_BUSY_MASK DMA_CH5_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH5_CTRL_TRIG_SNIFF_EN_MASK DMA_CH5_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH5_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH5_CTRL_TRIG_BSWAP_MASK DMA_CH5_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH5_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH5_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH5_CTRL_TRIG_TREQ_SEL_MASK DMA_CH5_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH5_CTRL_TRIG_CHAIN_TO_MASK DMA_CH5_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH5_CTRL_TRIG_RING_SEL_MASK DMA_CH5_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH5_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH5_CTRL_TRIG_RING_SIZE_MASK DMA_CH5_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH5_CTRL_TRIG_INCR_WRITE_MASK DMA_CH5_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH6_CTRL_TRIG Register macros*/

#define DMA_CH6_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH6_CTRL_TRIG_AHB_ERROR_MASK DMA_CH6_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH6_CTRL_TRIG_READ_ERROR_MASK DMA_CH6_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH6_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH6_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH6_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH6_CTRL_TRIG_BUSY_MASK DMA_CH6_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH6_CTRL_TRIG_SNIFF_EN_MASK DMA_CH6_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH6_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH6_CTRL_TRIG_BSWAP_MASK DMA_CH6_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH6_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH6_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH6_CTRL_TRIG_TREQ_SEL_MASK DMA_CH6_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH6_CTRL_TRIG_CHAIN_TO_MASK DMA_CH6_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH6_CTRL_TRIG_RING_SEL_MASK DMA_CH6_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH6_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH6_CTRL_TRIG_RING_SIZE_MASK DMA_CH6_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH6_CTRL_TRIG_INCR_WRITE_MASK DMA_CH6_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH7_CTRL_TRIG Register macros*/

#define DMA_CH7_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH7_CTRL_TRIG_AHB_ERROR_MASK DMA_CH7_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH7_CTRL_TRIG_READ_ERROR_MASK DMA_CH7_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH7_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH7_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH7_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH7_CTRL_TRIG_BUSY_MASK DMA_CH7_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH7_CTRL_TRIG_SNIFF_EN_MASK DMA_CH7_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH7_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH7_CTRL_TRIG_BSWAP_MASK DMA_CH7_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH7_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH7_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH7_CTRL_TRIG_TREQ_SEL_MASK DMA_CH7_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH7_CTRL_TRIG_CHAIN_TO_MASK DMA_CH7_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH7_CTRL_TRIG_RING_SEL_MASK DMA_CH7_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH7_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH7_CTRL_TRIG_RING_SIZE_MASK DMA_CH7_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH7_CTRL_TRIG_INCR_WRITE_MASK DMA_CH7_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH8_CTRL_TRIG Register macros*/

#define DMA_CH8_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH8_CTRL_TRIG_AHB_ERROR_MASK DMA_CH8_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH8_CTRL_TRIG_READ_ERROR_MASK DMA_CH8_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH8_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH8_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH8_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH8_CTRL_TRIG_BUSY_MASK DMA_CH8_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH8_CTRL_TRIG_SNIFF_EN_MASK DMA_CH8_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH8_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH8_CTRL_TRIG_BSWAP_MASK DMA_CH8_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH8_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH8_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH8_CTRL_TRIG_TREQ_SEL_MASK DMA_CH8_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH8_CTRL_TRIG_CHAIN_TO_MASK DMA_CH8_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH8_CTRL_TRIG_RING_SEL_MASK DMA_CH8_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH8_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH8_CTRL_TRIG_RING_SIZE_MASK DMA_CH8_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH8_CTRL_TRIG_INCR_WRITE_MASK DMA_CH8_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH9_CTRL_TRIG Register macros*/

#define DMA_CH9_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH9_CTRL_TRIG_AHB_ERROR_MASK DMA_CH9_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH9_CTRL_TRIG_READ_ERROR_MASK DMA_CH9_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH9_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH9_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH9_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH9_CTRL_TRIG_BUSY_MASK DMA_CH9_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH9_CTRL_TRIG_SNIFF_EN_MASK DMA_CH9_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH9_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH9_CTRL_TRIG_BSWAP_MASK DMA_CH9_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH9_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH9_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH9_CTRL_TRIG_TREQ_SEL_MASK DMA_CH9_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH9_CTRL_TRIG_CHAIN_TO_MASK DMA_CH9_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH9_CTRL_TRIG_RING_SEL_MASK DMA_CH9_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH9_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH9_CTRL_TRIG_RING_SIZE_MASK DMA_CH9_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH9_CTRL_TRIG_INCR_WRITE_MASK DMA_CH9_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH10_CTRL_TRIG Register macros*/

#define DMA_CH10_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH10_CTRL_TRIG_AHB_ERROR_MASK DMA_CH10_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH10_CTRL_TRIG_READ_ERROR_MASK DMA_CH10_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH10_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH10_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH10_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH10_CTRL_TRIG_BUSY_MASK DMA_CH10_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH10_CTRL_TRIG_SNIFF_EN_MASK DMA_CH10_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH10_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH10_CTRL_TRIG_BSWAP_MASK DMA_CH10_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH10_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH10_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH10_CTRL_TRIG_TREQ_SEL_MASK DMA_CH10_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH10_CTRL_TRIG_CHAIN_TO_MASK DMA_CH10_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH10_CTRL_TRIG_RING_SEL_MASK DMA_CH10_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH10_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH10_CTRL_TRIG_RING_SIZE_MASK DMA_CH10_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH10_CTRL_TRIG_INCR_WRITE_MASK DMA_CH10_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*CH11_CTRL_TRIG Register macros*/

#define DMA_CH11_CTRL_TRIG_AHB_ERROR(v) (((v)&0x1)<<31)
#define DMA_CH11_CTRL_TRIG_AHB_ERROR_MASK DMA_CH11_CTRL_TRIG_AHB_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_READ_ERROR(v) (((v)&0x1)<<30)
#define DMA_CH11_CTRL_TRIG_READ_ERROR_MASK DMA_CH11_CTRL_TRIG_READ_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR(v) (((v)&0x1)<<29)
#define DMA_CH11_CTRL_TRIG_WRITE_ERROR_MASK DMA_CH11_CTRL_TRIG_WRITE_ERROR(ALL1)
#define DMA_CH11_CTRL_TRIG_BUSY(v) (((v)&0x1)<<24)
#define DMA_CH11_CTRL_TRIG_BUSY_MASK DMA_CH11_CTRL_TRIG_BUSY(ALL1)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN(v) (((v)&0x1)<<23)
#define DMA_CH11_CTRL_TRIG_SNIFF_EN_MASK DMA_CH11_CTRL_TRIG_SNIFF_EN(ALL1)
#define DMA_CH11_CTRL_TRIG_BSWAP(v) (((v)&0x1)<<22)
#define DMA_CH11_CTRL_TRIG_BSWAP_MASK DMA_CH11_CTRL_TRIG_BSWAP(ALL1)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET(v) (((v)&0x1)<<21)
#define DMA_CH11_CTRL_TRIG_IRQ_QUIET_MASK DMA_CH11_CTRL_TRIG_IRQ_QUIET(ALL1)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL(v) (((v)&0x3f)<<15)
#define DMA_CH11_CTRL_TRIG_TREQ_SEL_MASK DMA_CH11_CTRL_TRIG_TREQ_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO(v) (((v)&0xf)<<11)
#define DMA_CH11_CTRL_TRIG_CHAIN_TO_MASK DMA_CH11_CTRL_TRIG_CHAIN_TO(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SEL(v) (((v)&0x1)<<10)
#define DMA_CH11_CTRL_TRIG_RING_SEL_MASK DMA_CH11_CTRL_TRIG_RING_SEL(ALL1)
#define DMA_CH11_CTRL_TRIG_RING_SIZE(v) (((v)&0xf)<<6)
#define DMA_CH11_CTRL_TRIG_RING_SIZE_MASK DMA_CH11_CTRL_TRIG_RING_SIZE(ALL1)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE(v) (((v)&0x1)<<5)
#define DMA_CH11_CTRL_TRIG_INCR_WRITE_MASK DMA_CH11_CTRL_TRIG_INCR_WRITE(ALL1)
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


/*INTR Register macros*/


/*INTE0 Register macros*/


/*INTF0 Register macros*/


/*INTS0 Register macros*/


/*INTE1 Register macros*/


/*INTF1 Register macros*/


/*INTS1 Register macros*/


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


#endif