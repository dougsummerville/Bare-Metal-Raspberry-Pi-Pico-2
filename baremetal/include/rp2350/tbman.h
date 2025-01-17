
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

#ifndef RP2350_TBMAN_H
#define RP2350_TBMAN_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t platform;
		uint32_t RSVD0[1023];
		uint32_t xor_platform;
		uint32_t RSVDxor_0[1023];
		uint32_t set_platform;
		uint32_t RSVDset_0[1023];
		uint32_t clr_platform;
		uint32_t RSVDclr_0[1023];
} TBMAN_REG_BLOCKS;

#define tbman (*(TBMAN_REG_BLOCKS volatile *)0x40160000)

/*PLATFORM Register macros*/

#define TBMAN_PLATFORM_HDLSIM(v) (((v)&0x1)<<2)
#define TBMAN_PLATFORM_HDLSIM_MASK TBMAN_PLATFORM_HDLSIM(ALL1)
#define TBMAN_PLATFORM_FPGA(v) (((v)&0x1)<<1)
#define TBMAN_PLATFORM_FPGA_MASK TBMAN_PLATFORM_FPGA(ALL1)
#define TBMAN_PLATFORM_ASIC(v) (((v)&0x1)<<0)
#define TBMAN_PLATFORM_ASIC_MASK TBMAN_PLATFORM_ASIC(ALL1)

#endif
