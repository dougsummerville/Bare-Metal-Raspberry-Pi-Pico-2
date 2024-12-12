
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

#ifndef RP2350_HSTX_FIFO_H
#define RP2350_HSTX_FIFO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t stat;
		uint32_t fifo;
		uint32_t RSVD0[1022];
		uint32_t xor_stat;
		uint32_t xor_fifo;
		uint32_t RSVDxor_0[1022];
		uint32_t set_stat;
		uint32_t set_fifo;
		uint32_t RSVDset_0[1022];
		uint32_t clr_stat;
		uint32_t clr_fifo;
		uint32_t RSVDclr_0[1022];
} HSTX_FIFO_REG_BLOCKS;

#define hstx_fifo ((HSTX_FIFO_REG_BLOCKS volatile *)0x50600000)

/*STAT Register macros*/

#define HSTX_FIFO_STAT_WOF(v) (((v)&0x1)<<10)
#define HSTX_FIFO_STAT_WOF_MASK HSTX_FIFO_STAT_WOF(ALL1)
#define HSTX_FIFO_STAT_EMPTY(v) (((v)&0x1)<<9)
#define HSTX_FIFO_STAT_EMPTY_MASK HSTX_FIFO_STAT_EMPTY(ALL1)
#define HSTX_FIFO_STAT_FULL(v) (((v)&0x1)<<8)
#define HSTX_FIFO_STAT_FULL_MASK HSTX_FIFO_STAT_FULL(ALL1)
#define HSTX_FIFO_STAT_LEVEL(v) (((v)&0xff)<<0)
#define HSTX_FIFO_STAT_LEVEL_MASK HSTX_FIFO_STAT_LEVEL(ALL1)

/*FIFO Register macros*/


#endif