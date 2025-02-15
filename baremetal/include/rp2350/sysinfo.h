
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

#ifndef RP2350_SYSINFO_H
#define RP2350_SYSINFO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t chip_id;
		uint32_t package_sel;
		uint32_t platform;
		uint32_t RSVD0[2];
		uint32_t gitref_rp2350;
		uint32_t RSVD1[1018];
		uint32_t xor_chip_id;
		uint32_t xor_package_sel;
		uint32_t xor_platform;
		uint32_t RSVDxor_0[2];
		uint32_t xor_gitref_rp2350;
		uint32_t RSVDxor_1[1018];
		uint32_t set_chip_id;
		uint32_t set_package_sel;
		uint32_t set_platform;
		uint32_t RSVDset_0[2];
		uint32_t set_gitref_rp2350;
		uint32_t RSVDset_1[1018];
		uint32_t clr_chip_id;
		uint32_t clr_package_sel;
		uint32_t clr_platform;
		uint32_t RSVDclr_0[2];
		uint32_t clr_gitref_rp2350;
		uint32_t RSVDclr_1[1018];
} SYSINFO_REG_BLOCKS;

#define sysinfo (*(SYSINFO_REG_BLOCKS volatile *)0x40000000)

/*CHIP_ID Register macros*/

#define SYSINFO_CHIP_ID_REVISION(v) (((v)&0xf)<<28)
#define SYSINFO_CHIP_ID_REVISION_MASK SYSINFO_CHIP_ID_REVISION(ALL1)
#define SYSINFO_CHIP_ID_PART(v) (((v)&0xffff)<<12)
#define SYSINFO_CHIP_ID_PART_MASK SYSINFO_CHIP_ID_PART(ALL1)
#define SYSINFO_CHIP_ID_MANUFACTURER(v) (((v)&0x7ff)<<1)
#define SYSINFO_CHIP_ID_MANUFACTURER_MASK SYSINFO_CHIP_ID_MANUFACTURER(ALL1)
#define SYSINFO_CHIP_ID_STOP_BIT(v) (((v)&0x1)<<0)
#define SYSINFO_CHIP_ID_STOP_BIT_MASK SYSINFO_CHIP_ID_STOP_BIT(ALL1)

/*PACKAGE_SEL Register macros*/


/*PLATFORM Register macros*/

#define SYSINFO_PLATFORM_GATESIM(v) (((v)&0x1)<<4)
#define SYSINFO_PLATFORM_GATESIM_MASK SYSINFO_PLATFORM_GATESIM(ALL1)
#define SYSINFO_PLATFORM_BATCHSIM(v) (((v)&0x1)<<3)
#define SYSINFO_PLATFORM_BATCHSIM_MASK SYSINFO_PLATFORM_BATCHSIM(ALL1)
#define SYSINFO_PLATFORM_HDLSIM(v) (((v)&0x1)<<2)
#define SYSINFO_PLATFORM_HDLSIM_MASK SYSINFO_PLATFORM_HDLSIM(ALL1)
#define SYSINFO_PLATFORM_ASIC(v) (((v)&0x1)<<1)
#define SYSINFO_PLATFORM_ASIC_MASK SYSINFO_PLATFORM_ASIC(ALL1)
#define SYSINFO_PLATFORM_FPGA(v) (((v)&0x1)<<0)
#define SYSINFO_PLATFORM_FPGA_MASK SYSINFO_PLATFORM_FPGA(ALL1)

/*GITREF_RP2350 Register macros*/


#endif
