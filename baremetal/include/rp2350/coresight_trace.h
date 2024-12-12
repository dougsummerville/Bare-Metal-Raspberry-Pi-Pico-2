
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

#ifndef RP2350_CORESIGHT_TRACE_H
#define RP2350_CORESIGHT_TRACE_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl_status;
		uint32_t trace_capture_fifo;
		uint32_t RSVD0[1022];
		uint32_t xor_ctrl_status;
		uint32_t xor_trace_capture_fifo;
		uint32_t RSVDxor_0[1022];
		uint32_t set_ctrl_status;
		uint32_t set_trace_capture_fifo;
		uint32_t RSVDset_0[1022];
		uint32_t clr_ctrl_status;
		uint32_t clr_trace_capture_fifo;
		uint32_t RSVDclr_0[1022];
} CORESIGHT_TRACE_REG_BLOCKS;

#define coresight_trace ((CORESIGHT_TRACE_REG_BLOCKS volatile *)0x50700000)

/*CTRL_STATUS Register macros*/

#define CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW(v) (((v)&0x1)<<1)
#define CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW_MASK CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_OVERFLOW(ALL1)
#define CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH(v) (((v)&0x1)<<0)
#define CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH_MASK CORESIGHT_TRACE_CTRL_STATUS_TRACE_CAPTURE_FIFO_FLUSH(ALL1)

/*TRACE_CAPTURE_FIFO Register macros*/

#define CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA(v) (((v)&0xffffffff)<<0)
#define CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA_MASK CORESIGHT_TRACE_TRACE_CAPTURE_FIFO_RDATA(ALL1)

#endif