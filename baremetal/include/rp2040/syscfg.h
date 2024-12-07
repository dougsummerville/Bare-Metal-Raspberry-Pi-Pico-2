
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

#ifndef RP2040_SYSCFG_H
#define RP2040_SYSCFG_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t proc0_nmi_mask;
		uint32_t proc1_nmi_mask;
		uint32_t proc_config;
		uint32_t proc_in_sync_bypass;
		uint32_t proc_in_sync_bypass_hi;
		uint32_t dbgforce;
		uint32_t mempowerdown;
		uint32_t RSVD0[1017];
		uint32_t xor_proc0_nmi_mask;
		uint32_t xor_proc1_nmi_mask;
		uint32_t xor_proc_config;
		uint32_t xor_proc_in_sync_bypass;
		uint32_t xor_proc_in_sync_bypass_hi;
		uint32_t xor_dbgforce;
		uint32_t xor_mempowerdown;
		uint32_t RSVDxor_0[1017];
		uint32_t set_proc0_nmi_mask;
		uint32_t set_proc1_nmi_mask;
		uint32_t set_proc_config;
		uint32_t set_proc_in_sync_bypass;
		uint32_t set_proc_in_sync_bypass_hi;
		uint32_t set_dbgforce;
		uint32_t set_mempowerdown;
		uint32_t RSVDset_0[1017];
		uint32_t clr_proc0_nmi_mask;
		uint32_t clr_proc1_nmi_mask;
		uint32_t clr_proc_config;
		uint32_t clr_proc_in_sync_bypass;
		uint32_t clr_proc_in_sync_bypass_hi;
		uint32_t clr_dbgforce;
		uint32_t clr_mempowerdown;
		uint32_t RSVDclr_0[1017];
} SYSCFG_REG_BLOCKS;

#define syscfg ((SYSCFG_REG_BLOCKS volatile *)0x40004000)

/*PROC0_NMI_MASK Register macros*/


/*PROC1_NMI_MASK Register macros*/


/*PROC_CONFIG Register macros*/

#define SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID(v) (((v)&0xf)<<28)
#define SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID_MASK SYSCFG_PROC_CONFIG_PROC1_DAP_INSTID(ALL1)
#define SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID(v) (((v)&0xf)<<24)
#define SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID_MASK SYSCFG_PROC_CONFIG_PROC0_DAP_INSTID(ALL1)
#define SYSCFG_PROC_CONFIG_PROC1_HALTED(v) (((v)&0x1)<<1)
#define SYSCFG_PROC_CONFIG_PROC1_HALTED_MASK SYSCFG_PROC_CONFIG_PROC1_HALTED(ALL1)
#define SYSCFG_PROC_CONFIG_PROC0_HALTED(v) (((v)&0x1)<<0)
#define SYSCFG_PROC_CONFIG_PROC0_HALTED_MASK SYSCFG_PROC_CONFIG_PROC0_HALTED(ALL1)

/*PROC_IN_SYNC_BYPASS Register macros*/


/*PROC_IN_SYNC_BYPASS_HI Register macros*/


/*DBGFORCE Register macros*/

#define SYSCFG_DBGFORCE_PROC1_ATTACH(v) (((v)&0x1)<<7)
#define SYSCFG_DBGFORCE_PROC1_ATTACH_MASK SYSCFG_DBGFORCE_PROC1_ATTACH(ALL1)
#define SYSCFG_DBGFORCE_PROC1_SWCLK(v) (((v)&0x1)<<6)
#define SYSCFG_DBGFORCE_PROC1_SWCLK_MASK SYSCFG_DBGFORCE_PROC1_SWCLK(ALL1)
#define SYSCFG_DBGFORCE_PROC1_SWDI(v) (((v)&0x1)<<5)
#define SYSCFG_DBGFORCE_PROC1_SWDI_MASK SYSCFG_DBGFORCE_PROC1_SWDI(ALL1)
#define SYSCFG_DBGFORCE_PROC1_SWDO(v) (((v)&0x1)<<4)
#define SYSCFG_DBGFORCE_PROC1_SWDO_MASK SYSCFG_DBGFORCE_PROC1_SWDO(ALL1)
#define SYSCFG_DBGFORCE_PROC0_ATTACH(v) (((v)&0x1)<<3)
#define SYSCFG_DBGFORCE_PROC0_ATTACH_MASK SYSCFG_DBGFORCE_PROC0_ATTACH(ALL1)
#define SYSCFG_DBGFORCE_PROC0_SWCLK(v) (((v)&0x1)<<2)
#define SYSCFG_DBGFORCE_PROC0_SWCLK_MASK SYSCFG_DBGFORCE_PROC0_SWCLK(ALL1)
#define SYSCFG_DBGFORCE_PROC0_SWDI(v) (((v)&0x1)<<1)
#define SYSCFG_DBGFORCE_PROC0_SWDI_MASK SYSCFG_DBGFORCE_PROC0_SWDI(ALL1)
#define SYSCFG_DBGFORCE_PROC0_SWDO(v) (((v)&0x1)<<0)
#define SYSCFG_DBGFORCE_PROC0_SWDO_MASK SYSCFG_DBGFORCE_PROC0_SWDO(ALL1)

/*MEMPOWERDOWN Register macros*/

#define SYSCFG_MEMPOWERDOWN_ROM(v) (((v)&0x1)<<7)
#define SYSCFG_MEMPOWERDOWN_ROM_MASK SYSCFG_MEMPOWERDOWN_ROM(ALL1)
#define SYSCFG_MEMPOWERDOWN_USB(v) (((v)&0x1)<<6)
#define SYSCFG_MEMPOWERDOWN_USB_MASK SYSCFG_MEMPOWERDOWN_USB(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM5(v) (((v)&0x1)<<5)
#define SYSCFG_MEMPOWERDOWN_SRAM5_MASK SYSCFG_MEMPOWERDOWN_SRAM5(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM4(v) (((v)&0x1)<<4)
#define SYSCFG_MEMPOWERDOWN_SRAM4_MASK SYSCFG_MEMPOWERDOWN_SRAM4(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM3(v) (((v)&0x1)<<3)
#define SYSCFG_MEMPOWERDOWN_SRAM3_MASK SYSCFG_MEMPOWERDOWN_SRAM3(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM2(v) (((v)&0x1)<<2)
#define SYSCFG_MEMPOWERDOWN_SRAM2_MASK SYSCFG_MEMPOWERDOWN_SRAM2(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM1(v) (((v)&0x1)<<1)
#define SYSCFG_MEMPOWERDOWN_SRAM1_MASK SYSCFG_MEMPOWERDOWN_SRAM1(ALL1)
#define SYSCFG_MEMPOWERDOWN_SRAM0(v) (((v)&0x1)<<0)
#define SYSCFG_MEMPOWERDOWN_SRAM0_MASK SYSCFG_MEMPOWERDOWN_SRAM0(ALL1)

#endif