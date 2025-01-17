
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

#ifndef RP2350_SHA256_H
#define RP2350_SHA256_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t csr;
		uint32_t wdata;
		uint32_t sum0;
		uint32_t sum1;
		uint32_t sum2;
		uint32_t sum3;
		uint32_t sum4;
		uint32_t sum5;
		uint32_t sum6;
		uint32_t sum7;
		uint32_t RSVD0[1014];
		uint32_t xor_csr;
		uint32_t xor_wdata;
		uint32_t xor_sum0;
		uint32_t xor_sum1;
		uint32_t xor_sum2;
		uint32_t xor_sum3;
		uint32_t xor_sum4;
		uint32_t xor_sum5;
		uint32_t xor_sum6;
		uint32_t xor_sum7;
		uint32_t RSVDxor_0[1014];
		uint32_t set_csr;
		uint32_t set_wdata;
		uint32_t set_sum0;
		uint32_t set_sum1;
		uint32_t set_sum2;
		uint32_t set_sum3;
		uint32_t set_sum4;
		uint32_t set_sum5;
		uint32_t set_sum6;
		uint32_t set_sum7;
		uint32_t RSVDset_0[1014];
		uint32_t clr_csr;
		uint32_t clr_wdata;
		uint32_t clr_sum0;
		uint32_t clr_sum1;
		uint32_t clr_sum2;
		uint32_t clr_sum3;
		uint32_t clr_sum4;
		uint32_t clr_sum5;
		uint32_t clr_sum6;
		uint32_t clr_sum7;
		uint32_t RSVDclr_0[1014];
} SHA256_REG_BLOCKS;

#define sha256 (*(SHA256_REG_BLOCKS volatile *)0x400f8000)

/*CSR Register macros*/

#define SHA256_CSR_BSWAP(v) (((v)&0x1)<<12)
#define SHA256_CSR_BSWAP_MASK SHA256_CSR_BSWAP(ALL1)
#define SHA256_CSR_DMA_SIZE(v) (((v)&0x3)<<8)
#define SHA256_CSR_DMA_SIZE_MASK SHA256_CSR_DMA_SIZE(ALL1)
#define SHA256_CSR_ERR_WDATA_NOT_RDY(v) (((v)&0x1)<<4)
#define SHA256_CSR_ERR_WDATA_NOT_RDY_MASK SHA256_CSR_ERR_WDATA_NOT_RDY(ALL1)
#define SHA256_CSR_SUM_VLD(v) (((v)&0x1)<<2)
#define SHA256_CSR_SUM_VLD_MASK SHA256_CSR_SUM_VLD(ALL1)
#define SHA256_CSR_WDATA_RDY(v) (((v)&0x1)<<1)
#define SHA256_CSR_WDATA_RDY_MASK SHA256_CSR_WDATA_RDY(ALL1)
#define SHA256_CSR_START(v) (((v)&0x1)<<0)
#define SHA256_CSR_START_MASK SHA256_CSR_START(ALL1)

/*WDATA Register macros*/


/*SUM0 Register macros*/


/*SUM1 Register macros*/


/*SUM2 Register macros*/


/*SUM3 Register macros*/


/*SUM4 Register macros*/


/*SUM5 Register macros*/


/*SUM6 Register macros*/


/*SUM7 Register macros*/


#endif
