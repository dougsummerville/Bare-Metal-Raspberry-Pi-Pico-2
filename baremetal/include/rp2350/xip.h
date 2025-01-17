
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

#ifndef RP2350_XIP_H
#define RP2350_XIP_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_SRAM_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_NOCACHE_NOALLOC_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_MAINTENANCE_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_NOCACHE_NOALLOC_NOTRANSLATE_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_CTRL_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_QMI_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t RSVD0;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD1[1016];
		uint32_t xor_ctrl;
		uint32_t RSVDxor_0;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_1[1016];
		uint32_t set_ctrl;
		uint32_t RSVDset_0;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_1[1016];
		uint32_t clr_ctrl;
		uint32_t RSVDclr_0;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_1[1016];
} XIP_AUX_REG_BLOCKS;

#define xip (*(XIP_REG_BLOCKS volatile *)0x10000000)

#define xip_sram (*(XIP_SRAM_REG_BLOCKS volatile *)0x13ffc000)

#define xip_nocache_noalloc (*(XIP_NOCACHE_NOALLOC_REG_BLOCKS volatile *)0x14000000)

#define xip_maintenance (*(XIP_MAINTENANCE_REG_BLOCKS volatile *)0x18000000)

#define xip_nocache_noalloc_notranslate (*(XIP_NOCACHE_NOALLOC_NOTRANSLATE_REG_BLOCKS volatile *)0x1c000000)

#define xip_ctrl (*(XIP_CTRL_REG_BLOCKS volatile *)0x400c8000)

#define xip_qmi (*(XIP_QMI_REG_BLOCKS volatile *)0x400d0000)

#define xip_aux (*(XIP_AUX_REG_BLOCKS volatile *)0x50500000)

/*CTRL Register macros*/

#define XIP_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_CTRL_WRITABLE_M1_MASK XIP_CTRL_WRITABLE_M1(ALL1)
#define XIP_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_CTRL_WRITABLE_M0_MASK XIP_CTRL_WRITABLE_M0(ALL1)
#define XIP_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_CTRL_SPLIT_WAYS_MASK XIP_CTRL_SPLIT_WAYS(ALL1)
#define XIP_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_CTRL_MAINT_NONSEC_MASK XIP_CTRL_MAINT_NONSEC(ALL1)
#define XIP_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_CTRL_NO_UNCACHED_NONSEC_MASK XIP_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_CTRL_NO_UNCACHED_SEC_MASK XIP_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_POWER_DOWN_MASK XIP_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_CTRL_EN_NONSECURE_MASK XIP_CTRL_EN_NONSECURE(ALL1)
#define XIP_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_CTRL_EN_SECURE_MASK XIP_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_STAT_FIFO_FULL_MASK XIP_STAT_FIFO_FULL(ALL1)
#define XIP_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_STAT_FIFO_EMPTY_MASK XIP_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_SRAM_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_SRAM_CTRL_WRITABLE_M1_MASK XIP_SRAM_CTRL_WRITABLE_M1(ALL1)
#define XIP_SRAM_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_SRAM_CTRL_WRITABLE_M0_MASK XIP_SRAM_CTRL_WRITABLE_M0(ALL1)
#define XIP_SRAM_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_SRAM_CTRL_SPLIT_WAYS_MASK XIP_SRAM_CTRL_SPLIT_WAYS(ALL1)
#define XIP_SRAM_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_SRAM_CTRL_MAINT_NONSEC_MASK XIP_SRAM_CTRL_MAINT_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_SRAM_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_SRAM_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_SRAM_CTRL_NO_UNCACHED_NONSEC_MASK XIP_SRAM_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_SRAM_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_SRAM_CTRL_NO_UNCACHED_SEC_MASK XIP_SRAM_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_SRAM_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_SRAM_CTRL_POWER_DOWN_MASK XIP_SRAM_CTRL_POWER_DOWN(ALL1)
#define XIP_SRAM_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_SRAM_CTRL_EN_NONSECURE_MASK XIP_SRAM_CTRL_EN_NONSECURE(ALL1)
#define XIP_SRAM_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_SRAM_CTRL_EN_SECURE_MASK XIP_SRAM_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_SRAM_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_SRAM_STAT_FIFO_FULL_MASK XIP_SRAM_STAT_FIFO_FULL(ALL1)
#define XIP_SRAM_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_SRAM_STAT_FIFO_EMPTY_MASK XIP_SRAM_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1_MASK XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M1(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0_MASK XIP_NOCACHE_NOALLOC_CTRL_WRITABLE_M0(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS_MASK XIP_NOCACHE_NOALLOC_CTRL_SPLIT_WAYS(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_MAINT_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC_MASK XIP_NOCACHE_NOALLOC_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN_MASK XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE_MASK XIP_NOCACHE_NOALLOC_CTRL_EN_NONSECURE(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE_MASK XIP_NOCACHE_NOALLOC_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_MAINTENANCE_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M1_MASK XIP_MAINTENANCE_CTRL_WRITABLE_M1(ALL1)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_MAINTENANCE_CTRL_WRITABLE_M0_MASK XIP_MAINTENANCE_CTRL_WRITABLE_M0(ALL1)
#define XIP_MAINTENANCE_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_MAINTENANCE_CTRL_SPLIT_WAYS_MASK XIP_MAINTENANCE_CTRL_SPLIT_WAYS(ALL1)
#define XIP_MAINTENANCE_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_MAINTENANCE_CTRL_MAINT_NONSEC_MASK XIP_MAINTENANCE_CTRL_MAINT_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_MAINTENANCE_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC_MASK XIP_MAINTENANCE_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC_MASK XIP_MAINTENANCE_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_MAINTENANCE_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_MAINTENANCE_CTRL_POWER_DOWN_MASK XIP_MAINTENANCE_CTRL_POWER_DOWN(ALL1)
#define XIP_MAINTENANCE_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_MAINTENANCE_CTRL_EN_NONSECURE_MASK XIP_MAINTENANCE_CTRL_EN_NONSECURE(ALL1)
#define XIP_MAINTENANCE_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_MAINTENANCE_CTRL_EN_SECURE_MASK XIP_MAINTENANCE_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_MAINTENANCE_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_MAINTENANCE_STAT_FIFO_FULL_MASK XIP_MAINTENANCE_STAT_FIFO_FULL(ALL1)
#define XIP_MAINTENANCE_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_MAINTENANCE_STAT_FIFO_EMPTY_MASK XIP_MAINTENANCE_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M1(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_WRITABLE_M0(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_SPLIT_WAYS(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_MAINT_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_NONSECURE(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_NOALLOC_NOTRANSLATE_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_CTRL_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_CTRL_CTRL_WRITABLE_M1_MASK XIP_CTRL_CTRL_WRITABLE_M1(ALL1)
#define XIP_CTRL_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_CTRL_CTRL_WRITABLE_M0_MASK XIP_CTRL_CTRL_WRITABLE_M0(ALL1)
#define XIP_CTRL_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_CTRL_CTRL_SPLIT_WAYS_MASK XIP_CTRL_CTRL_SPLIT_WAYS(ALL1)
#define XIP_CTRL_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_CTRL_CTRL_MAINT_NONSEC_MASK XIP_CTRL_CTRL_MAINT_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_CTRL_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_CTRL_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_CTRL_CTRL_NO_UNCACHED_NONSEC_MASK XIP_CTRL_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_CTRL_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_CTRL_CTRL_NO_UNCACHED_SEC_MASK XIP_CTRL_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_CTRL_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_CTRL_POWER_DOWN_MASK XIP_CTRL_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_CTRL_CTRL_EN_NONSECURE_MASK XIP_CTRL_CTRL_EN_NONSECURE(ALL1)
#define XIP_CTRL_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_CTRL_CTRL_EN_SECURE_MASK XIP_CTRL_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_CTRL_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_CTRL_STAT_FIFO_FULL_MASK XIP_CTRL_STAT_FIFO_FULL(ALL1)
#define XIP_CTRL_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_CTRL_STAT_FIFO_EMPTY_MASK XIP_CTRL_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_QMI_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_QMI_CTRL_WRITABLE_M1_MASK XIP_QMI_CTRL_WRITABLE_M1(ALL1)
#define XIP_QMI_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_QMI_CTRL_WRITABLE_M0_MASK XIP_QMI_CTRL_WRITABLE_M0(ALL1)
#define XIP_QMI_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_QMI_CTRL_SPLIT_WAYS_MASK XIP_QMI_CTRL_SPLIT_WAYS(ALL1)
#define XIP_QMI_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_QMI_CTRL_MAINT_NONSEC_MASK XIP_QMI_CTRL_MAINT_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_QMI_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_QMI_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_QMI_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_QMI_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_QMI_CTRL_NO_UNCACHED_NONSEC_MASK XIP_QMI_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_QMI_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_QMI_CTRL_NO_UNCACHED_SEC_MASK XIP_QMI_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_QMI_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_QMI_CTRL_POWER_DOWN_MASK XIP_QMI_CTRL_POWER_DOWN(ALL1)
#define XIP_QMI_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_QMI_CTRL_EN_NONSECURE_MASK XIP_QMI_CTRL_EN_NONSECURE(ALL1)
#define XIP_QMI_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_QMI_CTRL_EN_SECURE_MASK XIP_QMI_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_QMI_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_QMI_STAT_FIFO_FULL_MASK XIP_QMI_STAT_FIFO_FULL(ALL1)
#define XIP_QMI_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_QMI_STAT_FIFO_EMPTY_MASK XIP_QMI_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_AUX_CTRL_WRITABLE_M1(v) (((v)&0x1)<<11)
#define XIP_AUX_CTRL_WRITABLE_M1_MASK XIP_AUX_CTRL_WRITABLE_M1(ALL1)
#define XIP_AUX_CTRL_WRITABLE_M0(v) (((v)&0x1)<<10)
#define XIP_AUX_CTRL_WRITABLE_M0_MASK XIP_AUX_CTRL_WRITABLE_M0(ALL1)
#define XIP_AUX_CTRL_SPLIT_WAYS(v) (((v)&0x1)<<9)
#define XIP_AUX_CTRL_SPLIT_WAYS_MASK XIP_AUX_CTRL_SPLIT_WAYS(ALL1)
#define XIP_AUX_CTRL_MAINT_NONSEC(v) (((v)&0x1)<<8)
#define XIP_AUX_CTRL_MAINT_NONSEC_MASK XIP_AUX_CTRL_MAINT_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC(v) (((v)&0x1)<<7)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC_MASK XIP_AUX_CTRL_NO_UNTRANSLATED_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_SEC(v) (((v)&0x1)<<6)
#define XIP_AUX_CTRL_NO_UNTRANSLATED_SEC_MASK XIP_AUX_CTRL_NO_UNTRANSLATED_SEC(ALL1)
#define XIP_AUX_CTRL_NO_UNCACHED_NONSEC(v) (((v)&0x1)<<5)
#define XIP_AUX_CTRL_NO_UNCACHED_NONSEC_MASK XIP_AUX_CTRL_NO_UNCACHED_NONSEC(ALL1)
#define XIP_AUX_CTRL_NO_UNCACHED_SEC(v) (((v)&0x1)<<4)
#define XIP_AUX_CTRL_NO_UNCACHED_SEC_MASK XIP_AUX_CTRL_NO_UNCACHED_SEC(ALL1)
#define XIP_AUX_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_AUX_CTRL_POWER_DOWN_MASK XIP_AUX_CTRL_POWER_DOWN(ALL1)
#define XIP_AUX_CTRL_EN_NONSECURE(v) (((v)&0x1)<<1)
#define XIP_AUX_CTRL_EN_NONSECURE_MASK XIP_AUX_CTRL_EN_NONSECURE(ALL1)
#define XIP_AUX_CTRL_EN_SECURE(v) (((v)&0x1)<<0)
#define XIP_AUX_CTRL_EN_SECURE_MASK XIP_AUX_CTRL_EN_SECURE(ALL1)

/*STAT Register macros*/

#define XIP_AUX_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_AUX_STAT_FIFO_FULL_MASK XIP_AUX_STAT_FIFO_FULL(ALL1)
#define XIP_AUX_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_AUX_STAT_FIFO_EMPTY_MASK XIP_AUX_STAT_FIFO_EMPTY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


#endif
