
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

#ifndef RP2350_BOOTRAM_H
#define RP2350_BOOTRAM_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t RSVD0[512];
		uint32_t write_once0;
		uint32_t write_once1;
		uint32_t bootlock_stat;
		uint32_t bootlock0;
		uint32_t bootlock1;
		uint32_t bootlock2;
		uint32_t bootlock3;
		uint32_t bootlock4;
		uint32_t bootlock5;
		uint32_t bootlock6;
		uint32_t bootlock7;
		uint32_t RSVD1[501];
		uint32_t RSVDxor_0[512];
		uint32_t xor_write_once0;
		uint32_t xor_write_once1;
		uint32_t xor_bootlock_stat;
		uint32_t xor_bootlock0;
		uint32_t xor_bootlock1;
		uint32_t xor_bootlock2;
		uint32_t xor_bootlock3;
		uint32_t xor_bootlock4;
		uint32_t xor_bootlock5;
		uint32_t xor_bootlock6;
		uint32_t xor_bootlock7;
		uint32_t RSVDxor_1[501];
		uint32_t RSVDset_0[512];
		uint32_t set_write_once0;
		uint32_t set_write_once1;
		uint32_t set_bootlock_stat;
		uint32_t set_bootlock0;
		uint32_t set_bootlock1;
		uint32_t set_bootlock2;
		uint32_t set_bootlock3;
		uint32_t set_bootlock4;
		uint32_t set_bootlock5;
		uint32_t set_bootlock6;
		uint32_t set_bootlock7;
		uint32_t RSVDset_1[501];
		uint32_t RSVDclr_0[512];
		uint32_t clr_write_once0;
		uint32_t clr_write_once1;
		uint32_t clr_bootlock_stat;
		uint32_t clr_bootlock0;
		uint32_t clr_bootlock1;
		uint32_t clr_bootlock2;
		uint32_t clr_bootlock3;
		uint32_t clr_bootlock4;
		uint32_t clr_bootlock5;
		uint32_t clr_bootlock6;
		uint32_t clr_bootlock7;
		uint32_t RSVDclr_1[501];
} BOOTRAM_REG_BLOCKS;

#define bootram (*(BOOTRAM_REG_BLOCKS volatile *)0x400e0000)

/*WRITE_ONCE0 Register macros*/


/*WRITE_ONCE1 Register macros*/


/*BOOTLOCK_STAT Register macros*/


/*BOOTLOCK0 Register macros*/


/*BOOTLOCK1 Register macros*/


/*BOOTLOCK2 Register macros*/


/*BOOTLOCK3 Register macros*/


/*BOOTLOCK4 Register macros*/


/*BOOTLOCK5 Register macros*/


/*BOOTLOCK6 Register macros*/


/*BOOTLOCK7 Register macros*/


#endif
