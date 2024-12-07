
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

#ifndef RP2040_XIP_H
#define RP2040_XIP_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_MAIN_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_NOALLOC_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_NOCACHE_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_NOCACHE_NOALLOC_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_CTRL_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_SRAM_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_SSI_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t flush;
		uint32_t stat;
		uint32_t ctr_hit;
		uint32_t ctr_acc;
		uint32_t stream_addr;
		uint32_t stream_ctr;
		uint32_t stream_fifo;
		uint32_t RSVD0[1016];
		uint32_t xor_ctrl;
		uint32_t xor_flush;
		uint32_t xor_stat;
		uint32_t xor_ctr_hit;
		uint32_t xor_ctr_acc;
		uint32_t xor_stream_addr;
		uint32_t xor_stream_ctr;
		uint32_t xor_stream_fifo;
		uint32_t RSVDxor_0[1016];
		uint32_t set_ctrl;
		uint32_t set_flush;
		uint32_t set_stat;
		uint32_t set_ctr_hit;
		uint32_t set_ctr_acc;
		uint32_t set_stream_addr;
		uint32_t set_stream_ctr;
		uint32_t set_stream_fifo;
		uint32_t RSVDset_0[1016];
		uint32_t clr_ctrl;
		uint32_t clr_flush;
		uint32_t clr_stat;
		uint32_t clr_ctr_hit;
		uint32_t clr_ctr_acc;
		uint32_t clr_stream_addr;
		uint32_t clr_stream_ctr;
		uint32_t clr_stream_fifo;
		uint32_t RSVDclr_0[1016];
} XIP_AUX_REG_BLOCKS;

#define xip ((XIP_REG_BLOCKS volatile *)0x10000000)

#define xip_main ((XIP_MAIN_REG_BLOCKS volatile *)0x10000000)

#define xip_noalloc ((XIP_NOALLOC_REG_BLOCKS volatile *)0x11000000)

#define xip_nocache ((XIP_NOCACHE_REG_BLOCKS volatile *)0x12000000)

#define xip_nocache_noalloc ((XIP_NOCACHE_NOALLOC_REG_BLOCKS volatile *)0x13000000)

#define xip_ctrl ((XIP_CTRL_REG_BLOCKS volatile *)0x14000000)

#define xip_sram ((XIP_SRAM_REG_BLOCKS volatile *)0x15000000)

#define xip_ssi ((XIP_SSI_REG_BLOCKS volatile *)0x18000000)

#define xip_aux ((XIP_AUX_REG_BLOCKS volatile *)0x50400000)

/*CTRL Register macros*/

#define XIP_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_POWER_DOWN_MASK XIP_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_CTRL_ERR_BADWRITE_MASK XIP_CTRL_ERR_BADWRITE(ALL1)
#define XIP_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_CTRL_EN_MASK XIP_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_STAT_FIFO_FULL_MASK XIP_STAT_FIFO_FULL(ALL1)
#define XIP_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_STAT_FIFO_EMPTY_MASK XIP_STAT_FIFO_EMPTY(ALL1)
#define XIP_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_STAT_FLUSH_READY_MASK XIP_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_MAIN_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_MAIN_CTRL_POWER_DOWN_MASK XIP_MAIN_CTRL_POWER_DOWN(ALL1)
#define XIP_MAIN_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_MAIN_CTRL_ERR_BADWRITE_MASK XIP_MAIN_CTRL_ERR_BADWRITE(ALL1)
#define XIP_MAIN_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_MAIN_CTRL_EN_MASK XIP_MAIN_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_MAIN_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_MAIN_STAT_FIFO_FULL_MASK XIP_MAIN_STAT_FIFO_FULL(ALL1)
#define XIP_MAIN_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_MAIN_STAT_FIFO_EMPTY_MASK XIP_MAIN_STAT_FIFO_EMPTY(ALL1)
#define XIP_MAIN_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_MAIN_STAT_FLUSH_READY_MASK XIP_MAIN_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOALLOC_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOALLOC_CTRL_POWER_DOWN_MASK XIP_NOALLOC_CTRL_POWER_DOWN(ALL1)
#define XIP_NOALLOC_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_NOALLOC_CTRL_ERR_BADWRITE_MASK XIP_NOALLOC_CTRL_ERR_BADWRITE(ALL1)
#define XIP_NOALLOC_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_NOALLOC_CTRL_EN_MASK XIP_NOALLOC_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_NOALLOC_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOALLOC_STAT_FIFO_FULL_MASK XIP_NOALLOC_STAT_FIFO_FULL(ALL1)
#define XIP_NOALLOC_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOALLOC_STAT_FIFO_EMPTY_MASK XIP_NOALLOC_STAT_FIFO_EMPTY(ALL1)
#define XIP_NOALLOC_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_NOALLOC_STAT_FLUSH_READY_MASK XIP_NOALLOC_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_CTRL_POWER_DOWN_MASK XIP_NOCACHE_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_CTRL_ERR_BADWRITE_MASK XIP_NOCACHE_CTRL_ERR_BADWRITE(ALL1)
#define XIP_NOCACHE_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_CTRL_EN_MASK XIP_NOCACHE_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_NOCACHE_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_STAT_FIFO_FULL_MASK XIP_NOCACHE_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_STAT_FIFO_EMPTY(ALL1)
#define XIP_NOCACHE_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_STAT_FLUSH_READY_MASK XIP_NOCACHE_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN_MASK XIP_NOCACHE_NOALLOC_CTRL_POWER_DOWN(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_CTRL_ERR_BADWRITE_MASK XIP_NOCACHE_NOALLOC_CTRL_ERR_BADWRITE(ALL1)
#define XIP_NOCACHE_NOALLOC_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_CTRL_EN_MASK XIP_NOCACHE_NOALLOC_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_FULL(ALL1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY_MASK XIP_NOCACHE_NOALLOC_STAT_FIFO_EMPTY(ALL1)
#define XIP_NOCACHE_NOALLOC_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_NOCACHE_NOALLOC_STAT_FLUSH_READY_MASK XIP_NOCACHE_NOALLOC_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_CTRL_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_CTRL_CTRL_POWER_DOWN_MASK XIP_CTRL_CTRL_POWER_DOWN(ALL1)
#define XIP_CTRL_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_CTRL_CTRL_ERR_BADWRITE_MASK XIP_CTRL_CTRL_ERR_BADWRITE(ALL1)
#define XIP_CTRL_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_CTRL_CTRL_EN_MASK XIP_CTRL_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_CTRL_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_CTRL_STAT_FIFO_FULL_MASK XIP_CTRL_STAT_FIFO_FULL(ALL1)
#define XIP_CTRL_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_CTRL_STAT_FIFO_EMPTY_MASK XIP_CTRL_STAT_FIFO_EMPTY(ALL1)
#define XIP_CTRL_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_CTRL_STAT_FLUSH_READY_MASK XIP_CTRL_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_SRAM_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_SRAM_CTRL_POWER_DOWN_MASK XIP_SRAM_CTRL_POWER_DOWN(ALL1)
#define XIP_SRAM_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_SRAM_CTRL_ERR_BADWRITE_MASK XIP_SRAM_CTRL_ERR_BADWRITE(ALL1)
#define XIP_SRAM_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_SRAM_CTRL_EN_MASK XIP_SRAM_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_SRAM_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_SRAM_STAT_FIFO_FULL_MASK XIP_SRAM_STAT_FIFO_FULL(ALL1)
#define XIP_SRAM_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_SRAM_STAT_FIFO_EMPTY_MASK XIP_SRAM_STAT_FIFO_EMPTY(ALL1)
#define XIP_SRAM_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_SRAM_STAT_FLUSH_READY_MASK XIP_SRAM_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_SSI_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_SSI_CTRL_POWER_DOWN_MASK XIP_SSI_CTRL_POWER_DOWN(ALL1)
#define XIP_SSI_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_SSI_CTRL_ERR_BADWRITE_MASK XIP_SSI_CTRL_ERR_BADWRITE(ALL1)
#define XIP_SSI_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_SSI_CTRL_EN_MASK XIP_SSI_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_SSI_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_SSI_STAT_FIFO_FULL_MASK XIP_SSI_STAT_FIFO_FULL(ALL1)
#define XIP_SSI_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_SSI_STAT_FIFO_EMPTY_MASK XIP_SSI_STAT_FIFO_EMPTY(ALL1)
#define XIP_SSI_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_SSI_STAT_FLUSH_READY_MASK XIP_SSI_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


/*CTRL Register macros*/

#define XIP_AUX_CTRL_POWER_DOWN(v) (((v)&0x1)<<3)
#define XIP_AUX_CTRL_POWER_DOWN_MASK XIP_AUX_CTRL_POWER_DOWN(ALL1)
#define XIP_AUX_CTRL_ERR_BADWRITE(v) (((v)&0x1)<<1)
#define XIP_AUX_CTRL_ERR_BADWRITE_MASK XIP_AUX_CTRL_ERR_BADWRITE(ALL1)
#define XIP_AUX_CTRL_EN(v) (((v)&0x1)<<0)
#define XIP_AUX_CTRL_EN_MASK XIP_AUX_CTRL_EN(ALL1)

/*FLUSH Register macros*/


/*STAT Register macros*/

#define XIP_AUX_STAT_FIFO_FULL(v) (((v)&0x1)<<2)
#define XIP_AUX_STAT_FIFO_FULL_MASK XIP_AUX_STAT_FIFO_FULL(ALL1)
#define XIP_AUX_STAT_FIFO_EMPTY(v) (((v)&0x1)<<1)
#define XIP_AUX_STAT_FIFO_EMPTY_MASK XIP_AUX_STAT_FIFO_EMPTY(ALL1)
#define XIP_AUX_STAT_FLUSH_READY(v) (((v)&0x1)<<0)
#define XIP_AUX_STAT_FLUSH_READY_MASK XIP_AUX_STAT_FLUSH_READY(ALL1)

/*CTR_HIT Register macros*/


/*CTR_ACC Register macros*/


/*STREAM_ADDR Register macros*/


/*STREAM_CTR Register macros*/


/*STREAM_FIFO Register macros*/


#endif