
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

#ifndef RP2040_SPI_H
#define RP2040_SPI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t sspcr0;
		uint32_t sspcr1;
		uint32_t sspdr;
		uint32_t sspsr;
		uint32_t sspcpsr;
		uint32_t sspimsc;
		uint32_t sspris;
		uint32_t sspmis;
		uint32_t sspicr;
		uint32_t sspdmacr;
		uint32_t RSVD0[1006];
		uint32_t sspperiphid0;
		uint32_t sspperiphid1;
		uint32_t sspperiphid2;
		uint32_t sspperiphid3;
		uint32_t ssppcellid0;
		uint32_t ssppcellid1;
		uint32_t ssppcellid2;
		uint32_t ssppcellid3;
		uint32_t xor_sspcr0;
		uint32_t xor_sspcr1;
		uint32_t xor_sspdr;
		uint32_t xor_sspsr;
		uint32_t xor_sspcpsr;
		uint32_t xor_sspimsc;
		uint32_t xor_sspris;
		uint32_t xor_sspmis;
		uint32_t xor_sspicr;
		uint32_t xor_sspdmacr;
		uint32_t RSVDxor_0[1006];
		uint32_t xor_sspperiphid0;
		uint32_t xor_sspperiphid1;
		uint32_t xor_sspperiphid2;
		uint32_t xor_sspperiphid3;
		uint32_t xor_ssppcellid0;
		uint32_t xor_ssppcellid1;
		uint32_t xor_ssppcellid2;
		uint32_t xor_ssppcellid3;
		uint32_t set_sspcr0;
		uint32_t set_sspcr1;
		uint32_t set_sspdr;
		uint32_t set_sspsr;
		uint32_t set_sspcpsr;
		uint32_t set_sspimsc;
		uint32_t set_sspris;
		uint32_t set_sspmis;
		uint32_t set_sspicr;
		uint32_t set_sspdmacr;
		uint32_t RSVDset_0[1006];
		uint32_t set_sspperiphid0;
		uint32_t set_sspperiphid1;
		uint32_t set_sspperiphid2;
		uint32_t set_sspperiphid3;
		uint32_t set_ssppcellid0;
		uint32_t set_ssppcellid1;
		uint32_t set_ssppcellid2;
		uint32_t set_ssppcellid3;
		uint32_t clr_sspcr0;
		uint32_t clr_sspcr1;
		uint32_t clr_sspdr;
		uint32_t clr_sspsr;
		uint32_t clr_sspcpsr;
		uint32_t clr_sspimsc;
		uint32_t clr_sspris;
		uint32_t clr_sspmis;
		uint32_t clr_sspicr;
		uint32_t clr_sspdmacr;
		uint32_t RSVDclr_0[1006];
		uint32_t clr_sspperiphid0;
		uint32_t clr_sspperiphid1;
		uint32_t clr_sspperiphid2;
		uint32_t clr_sspperiphid3;
		uint32_t clr_ssppcellid0;
		uint32_t clr_ssppcellid1;
		uint32_t clr_ssppcellid2;
		uint32_t clr_ssppcellid3;
} SPI0_REG_BLOCKS;
typedef struct{
		uint32_t sspcr0;
		uint32_t sspcr1;
		uint32_t sspdr;
		uint32_t sspsr;
		uint32_t sspcpsr;
		uint32_t sspimsc;
		uint32_t sspris;
		uint32_t sspmis;
		uint32_t sspicr;
		uint32_t sspdmacr;
		uint32_t RSVD0[1006];
		uint32_t sspperiphid0;
		uint32_t sspperiphid1;
		uint32_t sspperiphid2;
		uint32_t sspperiphid3;
		uint32_t ssppcellid0;
		uint32_t ssppcellid1;
		uint32_t ssppcellid2;
		uint32_t ssppcellid3;
		uint32_t xor_sspcr0;
		uint32_t xor_sspcr1;
		uint32_t xor_sspdr;
		uint32_t xor_sspsr;
		uint32_t xor_sspcpsr;
		uint32_t xor_sspimsc;
		uint32_t xor_sspris;
		uint32_t xor_sspmis;
		uint32_t xor_sspicr;
		uint32_t xor_sspdmacr;
		uint32_t RSVDxor_0[1006];
		uint32_t xor_sspperiphid0;
		uint32_t xor_sspperiphid1;
		uint32_t xor_sspperiphid2;
		uint32_t xor_sspperiphid3;
		uint32_t xor_ssppcellid0;
		uint32_t xor_ssppcellid1;
		uint32_t xor_ssppcellid2;
		uint32_t xor_ssppcellid3;
		uint32_t set_sspcr0;
		uint32_t set_sspcr1;
		uint32_t set_sspdr;
		uint32_t set_sspsr;
		uint32_t set_sspcpsr;
		uint32_t set_sspimsc;
		uint32_t set_sspris;
		uint32_t set_sspmis;
		uint32_t set_sspicr;
		uint32_t set_sspdmacr;
		uint32_t RSVDset_0[1006];
		uint32_t set_sspperiphid0;
		uint32_t set_sspperiphid1;
		uint32_t set_sspperiphid2;
		uint32_t set_sspperiphid3;
		uint32_t set_ssppcellid0;
		uint32_t set_ssppcellid1;
		uint32_t set_ssppcellid2;
		uint32_t set_ssppcellid3;
		uint32_t clr_sspcr0;
		uint32_t clr_sspcr1;
		uint32_t clr_sspdr;
		uint32_t clr_sspsr;
		uint32_t clr_sspcpsr;
		uint32_t clr_sspimsc;
		uint32_t clr_sspris;
		uint32_t clr_sspmis;
		uint32_t clr_sspicr;
		uint32_t clr_sspdmacr;
		uint32_t RSVDclr_0[1006];
		uint32_t clr_sspperiphid0;
		uint32_t clr_sspperiphid1;
		uint32_t clr_sspperiphid2;
		uint32_t clr_sspperiphid3;
		uint32_t clr_ssppcellid0;
		uint32_t clr_ssppcellid1;
		uint32_t clr_ssppcellid2;
		uint32_t clr_ssppcellid3;
} SPI1_REG_BLOCKS;

#define spi0 ((SPI0_REG_BLOCKS volatile *)0x4003c000)

#define spi1 ((SPI1_REG_BLOCKS volatile *)0x40040000)

/*SSPCR0 Register macros*/

#define SPI0_SSPCR0_SCR(v) (((v)&0xff)<<8)
#define SPI0_SSPCR0_SCR_MASK SPI0_SSPCR0_SCR(ALL1)
#define SPI0_SSPCR0_SPH(v) (((v)&0x1)<<7)
#define SPI0_SSPCR0_SPH_MASK SPI0_SSPCR0_SPH(ALL1)
#define SPI0_SSPCR0_SPO(v) (((v)&0x1)<<6)
#define SPI0_SSPCR0_SPO_MASK SPI0_SSPCR0_SPO(ALL1)
#define SPI0_SSPCR0_FRF(v) (((v)&0x3)<<4)
#define SPI0_SSPCR0_FRF_MASK SPI0_SSPCR0_FRF(ALL1)
#define SPI0_SSPCR0_DSS(v) (((v)&0xf)<<0)
#define SPI0_SSPCR0_DSS_MASK SPI0_SSPCR0_DSS(ALL1)

/*SSPCR1 Register macros*/

#define SPI0_SSPCR1_SOD(v) (((v)&0x1)<<3)
#define SPI0_SSPCR1_SOD_MASK SPI0_SSPCR1_SOD(ALL1)
#define SPI0_SSPCR1_MS(v) (((v)&0x1)<<2)
#define SPI0_SSPCR1_MS_MASK SPI0_SSPCR1_MS(ALL1)
#define SPI0_SSPCR1_SSE(v) (((v)&0x1)<<1)
#define SPI0_SSPCR1_SSE_MASK SPI0_SSPCR1_SSE(ALL1)
#define SPI0_SSPCR1_LBM(v) (((v)&0x1)<<0)
#define SPI0_SSPCR1_LBM_MASK SPI0_SSPCR1_LBM(ALL1)

/*SSPDR Register macros*/

#define SPI0_SSPDR_DATA(v) (((v)&0xffff)<<0)
#define SPI0_SSPDR_DATA_MASK SPI0_SSPDR_DATA(ALL1)

/*SSPSR Register macros*/

#define SPI0_SSPSR_BSY(v) (((v)&0x1)<<4)
#define SPI0_SSPSR_BSY_MASK SPI0_SSPSR_BSY(ALL1)
#define SPI0_SSPSR_RFF(v) (((v)&0x1)<<3)
#define SPI0_SSPSR_RFF_MASK SPI0_SSPSR_RFF(ALL1)
#define SPI0_SSPSR_RNE(v) (((v)&0x1)<<2)
#define SPI0_SSPSR_RNE_MASK SPI0_SSPSR_RNE(ALL1)
#define SPI0_SSPSR_TNF(v) (((v)&0x1)<<1)
#define SPI0_SSPSR_TNF_MASK SPI0_SSPSR_TNF(ALL1)
#define SPI0_SSPSR_TFE(v) (((v)&0x1)<<0)
#define SPI0_SSPSR_TFE_MASK SPI0_SSPSR_TFE(ALL1)

/*SSPCPSR Register macros*/

#define SPI0_SSPCPSR_CPSDVSR(v) (((v)&0xff)<<0)
#define SPI0_SSPCPSR_CPSDVSR_MASK SPI0_SSPCPSR_CPSDVSR(ALL1)

/*SSPIMSC Register macros*/

#define SPI0_SSPIMSC_TXIM(v) (((v)&0x1)<<3)
#define SPI0_SSPIMSC_TXIM_MASK SPI0_SSPIMSC_TXIM(ALL1)
#define SPI0_SSPIMSC_RXIM(v) (((v)&0x1)<<2)
#define SPI0_SSPIMSC_RXIM_MASK SPI0_SSPIMSC_RXIM(ALL1)
#define SPI0_SSPIMSC_RTIM(v) (((v)&0x1)<<1)
#define SPI0_SSPIMSC_RTIM_MASK SPI0_SSPIMSC_RTIM(ALL1)
#define SPI0_SSPIMSC_RORIM(v) (((v)&0x1)<<0)
#define SPI0_SSPIMSC_RORIM_MASK SPI0_SSPIMSC_RORIM(ALL1)

/*SSPRIS Register macros*/

#define SPI0_SSPRIS_TXRIS(v) (((v)&0x1)<<3)
#define SPI0_SSPRIS_TXRIS_MASK SPI0_SSPRIS_TXRIS(ALL1)
#define SPI0_SSPRIS_RXRIS(v) (((v)&0x1)<<2)
#define SPI0_SSPRIS_RXRIS_MASK SPI0_SSPRIS_RXRIS(ALL1)
#define SPI0_SSPRIS_RTRIS(v) (((v)&0x1)<<1)
#define SPI0_SSPRIS_RTRIS_MASK SPI0_SSPRIS_RTRIS(ALL1)
#define SPI0_SSPRIS_RORRIS(v) (((v)&0x1)<<0)
#define SPI0_SSPRIS_RORRIS_MASK SPI0_SSPRIS_RORRIS(ALL1)

/*SSPMIS Register macros*/

#define SPI0_SSPMIS_TXMIS(v) (((v)&0x1)<<3)
#define SPI0_SSPMIS_TXMIS_MASK SPI0_SSPMIS_TXMIS(ALL1)
#define SPI0_SSPMIS_RXMIS(v) (((v)&0x1)<<2)
#define SPI0_SSPMIS_RXMIS_MASK SPI0_SSPMIS_RXMIS(ALL1)
#define SPI0_SSPMIS_RTMIS(v) (((v)&0x1)<<1)
#define SPI0_SSPMIS_RTMIS_MASK SPI0_SSPMIS_RTMIS(ALL1)
#define SPI0_SSPMIS_RORMIS(v) (((v)&0x1)<<0)
#define SPI0_SSPMIS_RORMIS_MASK SPI0_SSPMIS_RORMIS(ALL1)

/*SSPICR Register macros*/

#define SPI0_SSPICR_RTIC(v) (((v)&0x1)<<1)
#define SPI0_SSPICR_RTIC_MASK SPI0_SSPICR_RTIC(ALL1)
#define SPI0_SSPICR_RORIC(v) (((v)&0x1)<<0)
#define SPI0_SSPICR_RORIC_MASK SPI0_SSPICR_RORIC(ALL1)

/*SSPDMACR Register macros*/

#define SPI0_SSPDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define SPI0_SSPDMACR_TXDMAE_MASK SPI0_SSPDMACR_TXDMAE(ALL1)
#define SPI0_SSPDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define SPI0_SSPDMACR_RXDMAE_MASK SPI0_SSPDMACR_RXDMAE(ALL1)

/*SSPPERIPHID0 Register macros*/

#define SPI0_SSPPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define SPI0_SSPPERIPHID0_PARTNUMBER0_MASK SPI0_SSPPERIPHID0_PARTNUMBER0(ALL1)

/*SSPPERIPHID1 Register macros*/

#define SPI0_SSPPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define SPI0_SSPPERIPHID1_DESIGNER0_MASK SPI0_SSPPERIPHID1_DESIGNER0(ALL1)
#define SPI0_SSPPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define SPI0_SSPPERIPHID1_PARTNUMBER1_MASK SPI0_SSPPERIPHID1_PARTNUMBER1(ALL1)

/*SSPPERIPHID2 Register macros*/

#define SPI0_SSPPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define SPI0_SSPPERIPHID2_REVISION_MASK SPI0_SSPPERIPHID2_REVISION(ALL1)
#define SPI0_SSPPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define SPI0_SSPPERIPHID2_DESIGNER1_MASK SPI0_SSPPERIPHID2_DESIGNER1(ALL1)

/*SSPPERIPHID3 Register macros*/

#define SPI0_SSPPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define SPI0_SSPPERIPHID3_CONFIGURATION_MASK SPI0_SSPPERIPHID3_CONFIGURATION(ALL1)

/*SSPPCELLID0 Register macros*/

#define SPI0_SSPPCELLID0_SSPPCELLID0(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID0_SSPPCELLID0_MASK SPI0_SSPPCELLID0_SSPPCELLID0(ALL1)

/*SSPPCELLID1 Register macros*/

#define SPI0_SSPPCELLID1_SSPPCELLID1(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID1_SSPPCELLID1_MASK SPI0_SSPPCELLID1_SSPPCELLID1(ALL1)

/*SSPPCELLID2 Register macros*/

#define SPI0_SSPPCELLID2_SSPPCELLID2(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID2_SSPPCELLID2_MASK SPI0_SSPPCELLID2_SSPPCELLID2(ALL1)

/*SSPPCELLID3 Register macros*/

#define SPI0_SSPPCELLID3_SSPPCELLID3(v) (((v)&0xff)<<0)
#define SPI0_SSPPCELLID3_SSPPCELLID3_MASK SPI0_SSPPCELLID3_SSPPCELLID3(ALL1)

/*SSPCR0 Register macros*/

#define SPI1_SSPCR0_SCR(v) (((v)&0xff)<<8)
#define SPI1_SSPCR0_SCR_MASK SPI1_SSPCR0_SCR(ALL1)
#define SPI1_SSPCR0_SPH(v) (((v)&0x1)<<7)
#define SPI1_SSPCR0_SPH_MASK SPI1_SSPCR0_SPH(ALL1)
#define SPI1_SSPCR0_SPO(v) (((v)&0x1)<<6)
#define SPI1_SSPCR0_SPO_MASK SPI1_SSPCR0_SPO(ALL1)
#define SPI1_SSPCR0_FRF(v) (((v)&0x3)<<4)
#define SPI1_SSPCR0_FRF_MASK SPI1_SSPCR0_FRF(ALL1)
#define SPI1_SSPCR0_DSS(v) (((v)&0xf)<<0)
#define SPI1_SSPCR0_DSS_MASK SPI1_SSPCR0_DSS(ALL1)

/*SSPCR1 Register macros*/

#define SPI1_SSPCR1_SOD(v) (((v)&0x1)<<3)
#define SPI1_SSPCR1_SOD_MASK SPI1_SSPCR1_SOD(ALL1)
#define SPI1_SSPCR1_MS(v) (((v)&0x1)<<2)
#define SPI1_SSPCR1_MS_MASK SPI1_SSPCR1_MS(ALL1)
#define SPI1_SSPCR1_SSE(v) (((v)&0x1)<<1)
#define SPI1_SSPCR1_SSE_MASK SPI1_SSPCR1_SSE(ALL1)
#define SPI1_SSPCR1_LBM(v) (((v)&0x1)<<0)
#define SPI1_SSPCR1_LBM_MASK SPI1_SSPCR1_LBM(ALL1)

/*SSPDR Register macros*/

#define SPI1_SSPDR_DATA(v) (((v)&0xffff)<<0)
#define SPI1_SSPDR_DATA_MASK SPI1_SSPDR_DATA(ALL1)

/*SSPSR Register macros*/

#define SPI1_SSPSR_BSY(v) (((v)&0x1)<<4)
#define SPI1_SSPSR_BSY_MASK SPI1_SSPSR_BSY(ALL1)
#define SPI1_SSPSR_RFF(v) (((v)&0x1)<<3)
#define SPI1_SSPSR_RFF_MASK SPI1_SSPSR_RFF(ALL1)
#define SPI1_SSPSR_RNE(v) (((v)&0x1)<<2)
#define SPI1_SSPSR_RNE_MASK SPI1_SSPSR_RNE(ALL1)
#define SPI1_SSPSR_TNF(v) (((v)&0x1)<<1)
#define SPI1_SSPSR_TNF_MASK SPI1_SSPSR_TNF(ALL1)
#define SPI1_SSPSR_TFE(v) (((v)&0x1)<<0)
#define SPI1_SSPSR_TFE_MASK SPI1_SSPSR_TFE(ALL1)

/*SSPCPSR Register macros*/

#define SPI1_SSPCPSR_CPSDVSR(v) (((v)&0xff)<<0)
#define SPI1_SSPCPSR_CPSDVSR_MASK SPI1_SSPCPSR_CPSDVSR(ALL1)

/*SSPIMSC Register macros*/

#define SPI1_SSPIMSC_TXIM(v) (((v)&0x1)<<3)
#define SPI1_SSPIMSC_TXIM_MASK SPI1_SSPIMSC_TXIM(ALL1)
#define SPI1_SSPIMSC_RXIM(v) (((v)&0x1)<<2)
#define SPI1_SSPIMSC_RXIM_MASK SPI1_SSPIMSC_RXIM(ALL1)
#define SPI1_SSPIMSC_RTIM(v) (((v)&0x1)<<1)
#define SPI1_SSPIMSC_RTIM_MASK SPI1_SSPIMSC_RTIM(ALL1)
#define SPI1_SSPIMSC_RORIM(v) (((v)&0x1)<<0)
#define SPI1_SSPIMSC_RORIM_MASK SPI1_SSPIMSC_RORIM(ALL1)

/*SSPRIS Register macros*/

#define SPI1_SSPRIS_TXRIS(v) (((v)&0x1)<<3)
#define SPI1_SSPRIS_TXRIS_MASK SPI1_SSPRIS_TXRIS(ALL1)
#define SPI1_SSPRIS_RXRIS(v) (((v)&0x1)<<2)
#define SPI1_SSPRIS_RXRIS_MASK SPI1_SSPRIS_RXRIS(ALL1)
#define SPI1_SSPRIS_RTRIS(v) (((v)&0x1)<<1)
#define SPI1_SSPRIS_RTRIS_MASK SPI1_SSPRIS_RTRIS(ALL1)
#define SPI1_SSPRIS_RORRIS(v) (((v)&0x1)<<0)
#define SPI1_SSPRIS_RORRIS_MASK SPI1_SSPRIS_RORRIS(ALL1)

/*SSPMIS Register macros*/

#define SPI1_SSPMIS_TXMIS(v) (((v)&0x1)<<3)
#define SPI1_SSPMIS_TXMIS_MASK SPI1_SSPMIS_TXMIS(ALL1)
#define SPI1_SSPMIS_RXMIS(v) (((v)&0x1)<<2)
#define SPI1_SSPMIS_RXMIS_MASK SPI1_SSPMIS_RXMIS(ALL1)
#define SPI1_SSPMIS_RTMIS(v) (((v)&0x1)<<1)
#define SPI1_SSPMIS_RTMIS_MASK SPI1_SSPMIS_RTMIS(ALL1)
#define SPI1_SSPMIS_RORMIS(v) (((v)&0x1)<<0)
#define SPI1_SSPMIS_RORMIS_MASK SPI1_SSPMIS_RORMIS(ALL1)

/*SSPICR Register macros*/

#define SPI1_SSPICR_RTIC(v) (((v)&0x1)<<1)
#define SPI1_SSPICR_RTIC_MASK SPI1_SSPICR_RTIC(ALL1)
#define SPI1_SSPICR_RORIC(v) (((v)&0x1)<<0)
#define SPI1_SSPICR_RORIC_MASK SPI1_SSPICR_RORIC(ALL1)

/*SSPDMACR Register macros*/

#define SPI1_SSPDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define SPI1_SSPDMACR_TXDMAE_MASK SPI1_SSPDMACR_TXDMAE(ALL1)
#define SPI1_SSPDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define SPI1_SSPDMACR_RXDMAE_MASK SPI1_SSPDMACR_RXDMAE(ALL1)

/*SSPPERIPHID0 Register macros*/

#define SPI1_SSPPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define SPI1_SSPPERIPHID0_PARTNUMBER0_MASK SPI1_SSPPERIPHID0_PARTNUMBER0(ALL1)

/*SSPPERIPHID1 Register macros*/

#define SPI1_SSPPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define SPI1_SSPPERIPHID1_DESIGNER0_MASK SPI1_SSPPERIPHID1_DESIGNER0(ALL1)
#define SPI1_SSPPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define SPI1_SSPPERIPHID1_PARTNUMBER1_MASK SPI1_SSPPERIPHID1_PARTNUMBER1(ALL1)

/*SSPPERIPHID2 Register macros*/

#define SPI1_SSPPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define SPI1_SSPPERIPHID2_REVISION_MASK SPI1_SSPPERIPHID2_REVISION(ALL1)
#define SPI1_SSPPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define SPI1_SSPPERIPHID2_DESIGNER1_MASK SPI1_SSPPERIPHID2_DESIGNER1(ALL1)

/*SSPPERIPHID3 Register macros*/

#define SPI1_SSPPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define SPI1_SSPPERIPHID3_CONFIGURATION_MASK SPI1_SSPPERIPHID3_CONFIGURATION(ALL1)

/*SSPPCELLID0 Register macros*/

#define SPI1_SSPPCELLID0_SSPPCELLID0(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID0_SSPPCELLID0_MASK SPI1_SSPPCELLID0_SSPPCELLID0(ALL1)

/*SSPPCELLID1 Register macros*/

#define SPI1_SSPPCELLID1_SSPPCELLID1(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID1_SSPPCELLID1_MASK SPI1_SSPPCELLID1_SSPPCELLID1(ALL1)

/*SSPPCELLID2 Register macros*/

#define SPI1_SSPPCELLID2_SSPPCELLID2(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID2_SSPPCELLID2_MASK SPI1_SSPPCELLID2_SSPPCELLID2(ALL1)

/*SSPPCELLID3 Register macros*/

#define SPI1_SSPPCELLID3_SSPPCELLID3(v) (((v)&0xff)<<0)
#define SPI1_SSPPCELLID3_SSPPCELLID3_MASK SPI1_SSPPCELLID3_SSPPCELLID3(ALL1)

#endif