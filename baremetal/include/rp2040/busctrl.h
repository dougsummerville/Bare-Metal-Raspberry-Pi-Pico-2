
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

#ifndef RP2040_BUSCTRL_H
#define RP2040_BUSCTRL_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t bus_priority;
		uint32_t bus_priority_ack;
		uint32_t perfctr0;
		uint32_t perfsel0;
		uint32_t perfctr1;
		uint32_t perfsel1;
		uint32_t perfctr2;
		uint32_t perfsel2;
		uint32_t perfctr3;
		uint32_t perfsel3;
		uint32_t RSVD0[1014];
		uint32_t xor_bus_priority;
		uint32_t xor_bus_priority_ack;
		uint32_t xor_perfctr0;
		uint32_t xor_perfsel0;
		uint32_t xor_perfctr1;
		uint32_t xor_perfsel1;
		uint32_t xor_perfctr2;
		uint32_t xor_perfsel2;
		uint32_t xor_perfctr3;
		uint32_t xor_perfsel3;
		uint32_t RSVDxor_0[1014];
		uint32_t set_bus_priority;
		uint32_t set_bus_priority_ack;
		uint32_t set_perfctr0;
		uint32_t set_perfsel0;
		uint32_t set_perfctr1;
		uint32_t set_perfsel1;
		uint32_t set_perfctr2;
		uint32_t set_perfsel2;
		uint32_t set_perfctr3;
		uint32_t set_perfsel3;
		uint32_t RSVDset_0[1014];
		uint32_t clr_bus_priority;
		uint32_t clr_bus_priority_ack;
		uint32_t clr_perfctr0;
		uint32_t clr_perfsel0;
		uint32_t clr_perfctr1;
		uint32_t clr_perfsel1;
		uint32_t clr_perfctr2;
		uint32_t clr_perfsel2;
		uint32_t clr_perfctr3;
		uint32_t clr_perfsel3;
		uint32_t RSVDclr_0[1014];
} BUSCTRL_REG_BLOCKS;

#define busctrl ((BUSCTRL_REG_BLOCKS volatile *)0x40030000)

/*BUS_PRIORITY Register macros*/

#define BUSCTRL_BUS_PRIORITY_DMA_W(v) (((v)&0x1)<<12)
#define BUSCTRL_BUS_PRIORITY_DMA_W_MASK BUSCTRL_BUS_PRIORITY_DMA_W(ALL1)
#define BUSCTRL_BUS_PRIORITY_DMA_R(v) (((v)&0x1)<<8)
#define BUSCTRL_BUS_PRIORITY_DMA_R_MASK BUSCTRL_BUS_PRIORITY_DMA_R(ALL1)
#define BUSCTRL_BUS_PRIORITY_PROC1(v) (((v)&0x1)<<4)
#define BUSCTRL_BUS_PRIORITY_PROC1_MASK BUSCTRL_BUS_PRIORITY_PROC1(ALL1)
#define BUSCTRL_BUS_PRIORITY_PROC0(v) (((v)&0x1)<<0)
#define BUSCTRL_BUS_PRIORITY_PROC0_MASK BUSCTRL_BUS_PRIORITY_PROC0(ALL1)

/*BUS_PRIORITY_ACK Register macros*/


/*PERFCTR0 Register macros*/


/*PERFSEL0 Register macros*/


/*PERFCTR1 Register macros*/


/*PERFSEL1 Register macros*/


/*PERFCTR2 Register macros*/


/*PERFSEL2 Register macros*/


/*PERFCTR3 Register macros*/


/*PERFSEL3 Register macros*/


#endif