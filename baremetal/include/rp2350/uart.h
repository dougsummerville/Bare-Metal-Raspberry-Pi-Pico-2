
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

#ifndef RP2350_UART_H
#define RP2350_UART_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t uartdr;
		uint32_t uartrsr;
		uint32_t RSVD0[4];
		uint32_t uartfr;
		uint32_t RSVD1;
		uint32_t uartilpr;
		uint32_t uartibrd;
		uint32_t uartfbrd;
		uint32_t uartlcr_h;
		uint32_t uartcr;
		uint32_t uartifls;
		uint32_t uartimsc;
		uint32_t uartris;
		uint32_t uartmis;
		uint32_t uarticr;
		uint32_t uartdmacr;
		uint32_t RSVD2[997];
		uint32_t uartperiphid0;
		uint32_t uartperiphid1;
		uint32_t uartperiphid2;
		uint32_t uartperiphid3;
		uint32_t uartpcellid0;
		uint32_t uartpcellid1;
		uint32_t uartpcellid2;
		uint32_t uartpcellid3;
		uint32_t xor_uartdr;
		uint32_t xor_uartrsr;
		uint32_t RSVDxor_0[4];
		uint32_t xor_uartfr;
		uint32_t RSVDxor_1;
		uint32_t xor_uartilpr;
		uint32_t xor_uartibrd;
		uint32_t xor_uartfbrd;
		uint32_t xor_uartlcr_h;
		uint32_t xor_uartcr;
		uint32_t xor_uartifls;
		uint32_t xor_uartimsc;
		uint32_t xor_uartris;
		uint32_t xor_uartmis;
		uint32_t xor_uarticr;
		uint32_t xor_uartdmacr;
		uint32_t RSVDxor_2[997];
		uint32_t xor_uartperiphid0;
		uint32_t xor_uartperiphid1;
		uint32_t xor_uartperiphid2;
		uint32_t xor_uartperiphid3;
		uint32_t xor_uartpcellid0;
		uint32_t xor_uartpcellid1;
		uint32_t xor_uartpcellid2;
		uint32_t xor_uartpcellid3;
		uint32_t set_uartdr;
		uint32_t set_uartrsr;
		uint32_t RSVDset_0[4];
		uint32_t set_uartfr;
		uint32_t RSVDset_1;
		uint32_t set_uartilpr;
		uint32_t set_uartibrd;
		uint32_t set_uartfbrd;
		uint32_t set_uartlcr_h;
		uint32_t set_uartcr;
		uint32_t set_uartifls;
		uint32_t set_uartimsc;
		uint32_t set_uartris;
		uint32_t set_uartmis;
		uint32_t set_uarticr;
		uint32_t set_uartdmacr;
		uint32_t RSVDset_2[997];
		uint32_t set_uartperiphid0;
		uint32_t set_uartperiphid1;
		uint32_t set_uartperiphid2;
		uint32_t set_uartperiphid3;
		uint32_t set_uartpcellid0;
		uint32_t set_uartpcellid1;
		uint32_t set_uartpcellid2;
		uint32_t set_uartpcellid3;
		uint32_t clr_uartdr;
		uint32_t clr_uartrsr;
		uint32_t RSVDclr_0[4];
		uint32_t clr_uartfr;
		uint32_t RSVDclr_1;
		uint32_t clr_uartilpr;
		uint32_t clr_uartibrd;
		uint32_t clr_uartfbrd;
		uint32_t clr_uartlcr_h;
		uint32_t clr_uartcr;
		uint32_t clr_uartifls;
		uint32_t clr_uartimsc;
		uint32_t clr_uartris;
		uint32_t clr_uartmis;
		uint32_t clr_uarticr;
		uint32_t clr_uartdmacr;
		uint32_t RSVDclr_2[997];
		uint32_t clr_uartperiphid0;
		uint32_t clr_uartperiphid1;
		uint32_t clr_uartperiphid2;
		uint32_t clr_uartperiphid3;
		uint32_t clr_uartpcellid0;
		uint32_t clr_uartpcellid1;
		uint32_t clr_uartpcellid2;
		uint32_t clr_uartpcellid3;
} UART0_REG_BLOCKS;
typedef struct{
		uint32_t uartdr;
		uint32_t uartrsr;
		uint32_t RSVD0[4];
		uint32_t uartfr;
		uint32_t RSVD1;
		uint32_t uartilpr;
		uint32_t uartibrd;
		uint32_t uartfbrd;
		uint32_t uartlcr_h;
		uint32_t uartcr;
		uint32_t uartifls;
		uint32_t uartimsc;
		uint32_t uartris;
		uint32_t uartmis;
		uint32_t uarticr;
		uint32_t uartdmacr;
		uint32_t RSVD2[997];
		uint32_t uartperiphid0;
		uint32_t uartperiphid1;
		uint32_t uartperiphid2;
		uint32_t uartperiphid3;
		uint32_t uartpcellid0;
		uint32_t uartpcellid1;
		uint32_t uartpcellid2;
		uint32_t uartpcellid3;
		uint32_t xor_uartdr;
		uint32_t xor_uartrsr;
		uint32_t RSVDxor_0[4];
		uint32_t xor_uartfr;
		uint32_t RSVDxor_1;
		uint32_t xor_uartilpr;
		uint32_t xor_uartibrd;
		uint32_t xor_uartfbrd;
		uint32_t xor_uartlcr_h;
		uint32_t xor_uartcr;
		uint32_t xor_uartifls;
		uint32_t xor_uartimsc;
		uint32_t xor_uartris;
		uint32_t xor_uartmis;
		uint32_t xor_uarticr;
		uint32_t xor_uartdmacr;
		uint32_t RSVDxor_2[997];
		uint32_t xor_uartperiphid0;
		uint32_t xor_uartperiphid1;
		uint32_t xor_uartperiphid2;
		uint32_t xor_uartperiphid3;
		uint32_t xor_uartpcellid0;
		uint32_t xor_uartpcellid1;
		uint32_t xor_uartpcellid2;
		uint32_t xor_uartpcellid3;
		uint32_t set_uartdr;
		uint32_t set_uartrsr;
		uint32_t RSVDset_0[4];
		uint32_t set_uartfr;
		uint32_t RSVDset_1;
		uint32_t set_uartilpr;
		uint32_t set_uartibrd;
		uint32_t set_uartfbrd;
		uint32_t set_uartlcr_h;
		uint32_t set_uartcr;
		uint32_t set_uartifls;
		uint32_t set_uartimsc;
		uint32_t set_uartris;
		uint32_t set_uartmis;
		uint32_t set_uarticr;
		uint32_t set_uartdmacr;
		uint32_t RSVDset_2[997];
		uint32_t set_uartperiphid0;
		uint32_t set_uartperiphid1;
		uint32_t set_uartperiphid2;
		uint32_t set_uartperiphid3;
		uint32_t set_uartpcellid0;
		uint32_t set_uartpcellid1;
		uint32_t set_uartpcellid2;
		uint32_t set_uartpcellid3;
		uint32_t clr_uartdr;
		uint32_t clr_uartrsr;
		uint32_t RSVDclr_0[4];
		uint32_t clr_uartfr;
		uint32_t RSVDclr_1;
		uint32_t clr_uartilpr;
		uint32_t clr_uartibrd;
		uint32_t clr_uartfbrd;
		uint32_t clr_uartlcr_h;
		uint32_t clr_uartcr;
		uint32_t clr_uartifls;
		uint32_t clr_uartimsc;
		uint32_t clr_uartris;
		uint32_t clr_uartmis;
		uint32_t clr_uarticr;
		uint32_t clr_uartdmacr;
		uint32_t RSVDclr_2[997];
		uint32_t clr_uartperiphid0;
		uint32_t clr_uartperiphid1;
		uint32_t clr_uartperiphid2;
		uint32_t clr_uartperiphid3;
		uint32_t clr_uartpcellid0;
		uint32_t clr_uartpcellid1;
		uint32_t clr_uartpcellid2;
		uint32_t clr_uartpcellid3;
} UART1_REG_BLOCKS;

#define uart0 ((UART0_REG_BLOCKS volatile *)0x40070000)

#define uart1 ((UART1_REG_BLOCKS volatile *)0x40078000)

/*UARTDR Register macros*/

#define UART0_UARTDR_OE(v) (((v)&0x1)<<11)
#define UART0_UARTDR_OE_MASK UART0_UARTDR_OE(ALL1)
#define UART0_UARTDR_BE(v) (((v)&0x1)<<10)
#define UART0_UARTDR_BE_MASK UART0_UARTDR_BE(ALL1)
#define UART0_UARTDR_PE(v) (((v)&0x1)<<9)
#define UART0_UARTDR_PE_MASK UART0_UARTDR_PE(ALL1)
#define UART0_UARTDR_FE(v) (((v)&0x1)<<8)
#define UART0_UARTDR_FE_MASK UART0_UARTDR_FE(ALL1)
#define UART0_UARTDR_DATA(v) (((v)&0xff)<<0)
#define UART0_UARTDR_DATA_MASK UART0_UARTDR_DATA(ALL1)

/*UARTRSR Register macros*/

#define UART0_UARTRSR_OE(v) (((v)&0x1)<<3)
#define UART0_UARTRSR_OE_MASK UART0_UARTRSR_OE(ALL1)
#define UART0_UARTRSR_BE(v) (((v)&0x1)<<2)
#define UART0_UARTRSR_BE_MASK UART0_UARTRSR_BE(ALL1)
#define UART0_UARTRSR_PE(v) (((v)&0x1)<<1)
#define UART0_UARTRSR_PE_MASK UART0_UARTRSR_PE(ALL1)
#define UART0_UARTRSR_FE(v) (((v)&0x1)<<0)
#define UART0_UARTRSR_FE_MASK UART0_UARTRSR_FE(ALL1)

/*UARTFR Register macros*/

#define UART0_UARTFR_RI(v) (((v)&0x1)<<8)
#define UART0_UARTFR_RI_MASK UART0_UARTFR_RI(ALL1)
#define UART0_UARTFR_TXFE(v) (((v)&0x1)<<7)
#define UART0_UARTFR_TXFE_MASK UART0_UARTFR_TXFE(ALL1)
#define UART0_UARTFR_RXFF(v) (((v)&0x1)<<6)
#define UART0_UARTFR_RXFF_MASK UART0_UARTFR_RXFF(ALL1)
#define UART0_UARTFR_TXFF(v) (((v)&0x1)<<5)
#define UART0_UARTFR_TXFF_MASK UART0_UARTFR_TXFF(ALL1)
#define UART0_UARTFR_RXFE(v) (((v)&0x1)<<4)
#define UART0_UARTFR_RXFE_MASK UART0_UARTFR_RXFE(ALL1)
#define UART0_UARTFR_BUSY(v) (((v)&0x1)<<3)
#define UART0_UARTFR_BUSY_MASK UART0_UARTFR_BUSY(ALL1)
#define UART0_UARTFR_DCD(v) (((v)&0x1)<<2)
#define UART0_UARTFR_DCD_MASK UART0_UARTFR_DCD(ALL1)
#define UART0_UARTFR_DSR(v) (((v)&0x1)<<1)
#define UART0_UARTFR_DSR_MASK UART0_UARTFR_DSR(ALL1)
#define UART0_UARTFR_CTS(v) (((v)&0x1)<<0)
#define UART0_UARTFR_CTS_MASK UART0_UARTFR_CTS(ALL1)

/*UARTILPR Register macros*/

#define UART0_UARTILPR_ILPDVSR(v) (((v)&0xff)<<0)
#define UART0_UARTILPR_ILPDVSR_MASK UART0_UARTILPR_ILPDVSR(ALL1)

/*UARTIBRD Register macros*/

#define UART0_UARTIBRD_BAUD_DIVINT(v) (((v)&0xffff)<<0)
#define UART0_UARTIBRD_BAUD_DIVINT_MASK UART0_UARTIBRD_BAUD_DIVINT(ALL1)

/*UARTFBRD Register macros*/

#define UART0_UARTFBRD_BAUD_DIVFRAC(v) (((v)&0x3f)<<0)
#define UART0_UARTFBRD_BAUD_DIVFRAC_MASK UART0_UARTFBRD_BAUD_DIVFRAC(ALL1)

/*UARTLCR_H Register macros*/

#define UART0_UARTLCR_H_SPS(v) (((v)&0x1)<<7)
#define UART0_UARTLCR_H_SPS_MASK UART0_UARTLCR_H_SPS(ALL1)
#define UART0_UARTLCR_H_WLEN(v) (((v)&0x3)<<5)
#define UART0_UARTLCR_H_WLEN_MASK UART0_UARTLCR_H_WLEN(ALL1)
#define UART0_UARTLCR_H_FEN(v) (((v)&0x1)<<4)
#define UART0_UARTLCR_H_FEN_MASK UART0_UARTLCR_H_FEN(ALL1)
#define UART0_UARTLCR_H_STP2(v) (((v)&0x1)<<3)
#define UART0_UARTLCR_H_STP2_MASK UART0_UARTLCR_H_STP2(ALL1)
#define UART0_UARTLCR_H_EPS(v) (((v)&0x1)<<2)
#define UART0_UARTLCR_H_EPS_MASK UART0_UARTLCR_H_EPS(ALL1)
#define UART0_UARTLCR_H_PEN(v) (((v)&0x1)<<1)
#define UART0_UARTLCR_H_PEN_MASK UART0_UARTLCR_H_PEN(ALL1)
#define UART0_UARTLCR_H_BRK(v) (((v)&0x1)<<0)
#define UART0_UARTLCR_H_BRK_MASK UART0_UARTLCR_H_BRK(ALL1)

/*UARTCR Register macros*/

#define UART0_UARTCR_CTSEN(v) (((v)&0x1)<<15)
#define UART0_UARTCR_CTSEN_MASK UART0_UARTCR_CTSEN(ALL1)
#define UART0_UARTCR_RTSEN(v) (((v)&0x1)<<14)
#define UART0_UARTCR_RTSEN_MASK UART0_UARTCR_RTSEN(ALL1)
#define UART0_UARTCR_OUT2(v) (((v)&0x1)<<13)
#define UART0_UARTCR_OUT2_MASK UART0_UARTCR_OUT2(ALL1)
#define UART0_UARTCR_OUT1(v) (((v)&0x1)<<12)
#define UART0_UARTCR_OUT1_MASK UART0_UARTCR_OUT1(ALL1)
#define UART0_UARTCR_RTS(v) (((v)&0x1)<<11)
#define UART0_UARTCR_RTS_MASK UART0_UARTCR_RTS(ALL1)
#define UART0_UARTCR_DTR(v) (((v)&0x1)<<10)
#define UART0_UARTCR_DTR_MASK UART0_UARTCR_DTR(ALL1)
#define UART0_UARTCR_RXE(v) (((v)&0x1)<<9)
#define UART0_UARTCR_RXE_MASK UART0_UARTCR_RXE(ALL1)
#define UART0_UARTCR_TXE(v) (((v)&0x1)<<8)
#define UART0_UARTCR_TXE_MASK UART0_UARTCR_TXE(ALL1)
#define UART0_UARTCR_LBE(v) (((v)&0x1)<<7)
#define UART0_UARTCR_LBE_MASK UART0_UARTCR_LBE(ALL1)
#define UART0_UARTCR_SIRLP(v) (((v)&0x1)<<2)
#define UART0_UARTCR_SIRLP_MASK UART0_UARTCR_SIRLP(ALL1)
#define UART0_UARTCR_SIREN(v) (((v)&0x1)<<1)
#define UART0_UARTCR_SIREN_MASK UART0_UARTCR_SIREN(ALL1)
#define UART0_UARTCR_UARTEN(v) (((v)&0x1)<<0)
#define UART0_UARTCR_UARTEN_MASK UART0_UARTCR_UARTEN(ALL1)

/*UARTIFLS Register macros*/

#define UART0_UARTIFLS_RXIFLSEL(v) (((v)&0x7)<<3)
#define UART0_UARTIFLS_RXIFLSEL_MASK UART0_UARTIFLS_RXIFLSEL(ALL1)
#define UART0_UARTIFLS_TXIFLSEL(v) (((v)&0x7)<<0)
#define UART0_UARTIFLS_TXIFLSEL_MASK UART0_UARTIFLS_TXIFLSEL(ALL1)

/*UARTIMSC Register macros*/

#define UART0_UARTIMSC_OEIM(v) (((v)&0x1)<<10)
#define UART0_UARTIMSC_OEIM_MASK UART0_UARTIMSC_OEIM(ALL1)
#define UART0_UARTIMSC_BEIM(v) (((v)&0x1)<<9)
#define UART0_UARTIMSC_BEIM_MASK UART0_UARTIMSC_BEIM(ALL1)
#define UART0_UARTIMSC_PEIM(v) (((v)&0x1)<<8)
#define UART0_UARTIMSC_PEIM_MASK UART0_UARTIMSC_PEIM(ALL1)
#define UART0_UARTIMSC_FEIM(v) (((v)&0x1)<<7)
#define UART0_UARTIMSC_FEIM_MASK UART0_UARTIMSC_FEIM(ALL1)
#define UART0_UARTIMSC_RTIM(v) (((v)&0x1)<<6)
#define UART0_UARTIMSC_RTIM_MASK UART0_UARTIMSC_RTIM(ALL1)
#define UART0_UARTIMSC_TXIM(v) (((v)&0x1)<<5)
#define UART0_UARTIMSC_TXIM_MASK UART0_UARTIMSC_TXIM(ALL1)
#define UART0_UARTIMSC_RXIM(v) (((v)&0x1)<<4)
#define UART0_UARTIMSC_RXIM_MASK UART0_UARTIMSC_RXIM(ALL1)
#define UART0_UARTIMSC_DSRMIM(v) (((v)&0x1)<<3)
#define UART0_UARTIMSC_DSRMIM_MASK UART0_UARTIMSC_DSRMIM(ALL1)
#define UART0_UARTIMSC_DCDMIM(v) (((v)&0x1)<<2)
#define UART0_UARTIMSC_DCDMIM_MASK UART0_UARTIMSC_DCDMIM(ALL1)
#define UART0_UARTIMSC_CTSMIM(v) (((v)&0x1)<<1)
#define UART0_UARTIMSC_CTSMIM_MASK UART0_UARTIMSC_CTSMIM(ALL1)
#define UART0_UARTIMSC_RIMIM(v) (((v)&0x1)<<0)
#define UART0_UARTIMSC_RIMIM_MASK UART0_UARTIMSC_RIMIM(ALL1)

/*UARTRIS Register macros*/

#define UART0_UARTRIS_OERIS(v) (((v)&0x1)<<10)
#define UART0_UARTRIS_OERIS_MASK UART0_UARTRIS_OERIS(ALL1)
#define UART0_UARTRIS_BERIS(v) (((v)&0x1)<<9)
#define UART0_UARTRIS_BERIS_MASK UART0_UARTRIS_BERIS(ALL1)
#define UART0_UARTRIS_PERIS(v) (((v)&0x1)<<8)
#define UART0_UARTRIS_PERIS_MASK UART0_UARTRIS_PERIS(ALL1)
#define UART0_UARTRIS_FERIS(v) (((v)&0x1)<<7)
#define UART0_UARTRIS_FERIS_MASK UART0_UARTRIS_FERIS(ALL1)
#define UART0_UARTRIS_RTRIS(v) (((v)&0x1)<<6)
#define UART0_UARTRIS_RTRIS_MASK UART0_UARTRIS_RTRIS(ALL1)
#define UART0_UARTRIS_TXRIS(v) (((v)&0x1)<<5)
#define UART0_UARTRIS_TXRIS_MASK UART0_UARTRIS_TXRIS(ALL1)
#define UART0_UARTRIS_RXRIS(v) (((v)&0x1)<<4)
#define UART0_UARTRIS_RXRIS_MASK UART0_UARTRIS_RXRIS(ALL1)
#define UART0_UARTRIS_DSRRMIS(v) (((v)&0x1)<<3)
#define UART0_UARTRIS_DSRRMIS_MASK UART0_UARTRIS_DSRRMIS(ALL1)
#define UART0_UARTRIS_DCDRMIS(v) (((v)&0x1)<<2)
#define UART0_UARTRIS_DCDRMIS_MASK UART0_UARTRIS_DCDRMIS(ALL1)
#define UART0_UARTRIS_CTSRMIS(v) (((v)&0x1)<<1)
#define UART0_UARTRIS_CTSRMIS_MASK UART0_UARTRIS_CTSRMIS(ALL1)
#define UART0_UARTRIS_RIRMIS(v) (((v)&0x1)<<0)
#define UART0_UARTRIS_RIRMIS_MASK UART0_UARTRIS_RIRMIS(ALL1)

/*UARTMIS Register macros*/

#define UART0_UARTMIS_OEMIS(v) (((v)&0x1)<<10)
#define UART0_UARTMIS_OEMIS_MASK UART0_UARTMIS_OEMIS(ALL1)
#define UART0_UARTMIS_BEMIS(v) (((v)&0x1)<<9)
#define UART0_UARTMIS_BEMIS_MASK UART0_UARTMIS_BEMIS(ALL1)
#define UART0_UARTMIS_PEMIS(v) (((v)&0x1)<<8)
#define UART0_UARTMIS_PEMIS_MASK UART0_UARTMIS_PEMIS(ALL1)
#define UART0_UARTMIS_FEMIS(v) (((v)&0x1)<<7)
#define UART0_UARTMIS_FEMIS_MASK UART0_UARTMIS_FEMIS(ALL1)
#define UART0_UARTMIS_RTMIS(v) (((v)&0x1)<<6)
#define UART0_UARTMIS_RTMIS_MASK UART0_UARTMIS_RTMIS(ALL1)
#define UART0_UARTMIS_TXMIS(v) (((v)&0x1)<<5)
#define UART0_UARTMIS_TXMIS_MASK UART0_UARTMIS_TXMIS(ALL1)
#define UART0_UARTMIS_RXMIS(v) (((v)&0x1)<<4)
#define UART0_UARTMIS_RXMIS_MASK UART0_UARTMIS_RXMIS(ALL1)
#define UART0_UARTMIS_DSRMMIS(v) (((v)&0x1)<<3)
#define UART0_UARTMIS_DSRMMIS_MASK UART0_UARTMIS_DSRMMIS(ALL1)
#define UART0_UARTMIS_DCDMMIS(v) (((v)&0x1)<<2)
#define UART0_UARTMIS_DCDMMIS_MASK UART0_UARTMIS_DCDMMIS(ALL1)
#define UART0_UARTMIS_CTSMMIS(v) (((v)&0x1)<<1)
#define UART0_UARTMIS_CTSMMIS_MASK UART0_UARTMIS_CTSMMIS(ALL1)
#define UART0_UARTMIS_RIMMIS(v) (((v)&0x1)<<0)
#define UART0_UARTMIS_RIMMIS_MASK UART0_UARTMIS_RIMMIS(ALL1)

/*UARTICR Register macros*/

#define UART0_UARTICR_OEIC(v) (((v)&0x1)<<10)
#define UART0_UARTICR_OEIC_MASK UART0_UARTICR_OEIC(ALL1)
#define UART0_UARTICR_BEIC(v) (((v)&0x1)<<9)
#define UART0_UARTICR_BEIC_MASK UART0_UARTICR_BEIC(ALL1)
#define UART0_UARTICR_PEIC(v) (((v)&0x1)<<8)
#define UART0_UARTICR_PEIC_MASK UART0_UARTICR_PEIC(ALL1)
#define UART0_UARTICR_FEIC(v) (((v)&0x1)<<7)
#define UART0_UARTICR_FEIC_MASK UART0_UARTICR_FEIC(ALL1)
#define UART0_UARTICR_RTIC(v) (((v)&0x1)<<6)
#define UART0_UARTICR_RTIC_MASK UART0_UARTICR_RTIC(ALL1)
#define UART0_UARTICR_TXIC(v) (((v)&0x1)<<5)
#define UART0_UARTICR_TXIC_MASK UART0_UARTICR_TXIC(ALL1)
#define UART0_UARTICR_RXIC(v) (((v)&0x1)<<4)
#define UART0_UARTICR_RXIC_MASK UART0_UARTICR_RXIC(ALL1)
#define UART0_UARTICR_DSRMIC(v) (((v)&0x1)<<3)
#define UART0_UARTICR_DSRMIC_MASK UART0_UARTICR_DSRMIC(ALL1)
#define UART0_UARTICR_DCDMIC(v) (((v)&0x1)<<2)
#define UART0_UARTICR_DCDMIC_MASK UART0_UARTICR_DCDMIC(ALL1)
#define UART0_UARTICR_CTSMIC(v) (((v)&0x1)<<1)
#define UART0_UARTICR_CTSMIC_MASK UART0_UARTICR_CTSMIC(ALL1)
#define UART0_UARTICR_RIMIC(v) (((v)&0x1)<<0)
#define UART0_UARTICR_RIMIC_MASK UART0_UARTICR_RIMIC(ALL1)

/*UARTDMACR Register macros*/

#define UART0_UARTDMACR_DMAONERR(v) (((v)&0x1)<<2)
#define UART0_UARTDMACR_DMAONERR_MASK UART0_UARTDMACR_DMAONERR(ALL1)
#define UART0_UARTDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define UART0_UARTDMACR_TXDMAE_MASK UART0_UARTDMACR_TXDMAE(ALL1)
#define UART0_UARTDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define UART0_UARTDMACR_RXDMAE_MASK UART0_UARTDMACR_RXDMAE(ALL1)

/*UARTPERIPHID0 Register macros*/

#define UART0_UARTPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define UART0_UARTPERIPHID0_PARTNUMBER0_MASK UART0_UARTPERIPHID0_PARTNUMBER0(ALL1)

/*UARTPERIPHID1 Register macros*/

#define UART0_UARTPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define UART0_UARTPERIPHID1_DESIGNER0_MASK UART0_UARTPERIPHID1_DESIGNER0(ALL1)
#define UART0_UARTPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define UART0_UARTPERIPHID1_PARTNUMBER1_MASK UART0_UARTPERIPHID1_PARTNUMBER1(ALL1)

/*UARTPERIPHID2 Register macros*/

#define UART0_UARTPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define UART0_UARTPERIPHID2_REVISION_MASK UART0_UARTPERIPHID2_REVISION(ALL1)
#define UART0_UARTPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define UART0_UARTPERIPHID2_DESIGNER1_MASK UART0_UARTPERIPHID2_DESIGNER1(ALL1)

/*UARTPERIPHID3 Register macros*/

#define UART0_UARTPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define UART0_UARTPERIPHID3_CONFIGURATION_MASK UART0_UARTPERIPHID3_CONFIGURATION(ALL1)

/*UARTPCELLID0 Register macros*/

#define UART0_UARTPCELLID0_UARTPCELLID0(v) (((v)&0xff)<<0)
#define UART0_UARTPCELLID0_UARTPCELLID0_MASK UART0_UARTPCELLID0_UARTPCELLID0(ALL1)

/*UARTPCELLID1 Register macros*/

#define UART0_UARTPCELLID1_UARTPCELLID1(v) (((v)&0xff)<<0)
#define UART0_UARTPCELLID1_UARTPCELLID1_MASK UART0_UARTPCELLID1_UARTPCELLID1(ALL1)

/*UARTPCELLID2 Register macros*/

#define UART0_UARTPCELLID2_UARTPCELLID2(v) (((v)&0xff)<<0)
#define UART0_UARTPCELLID2_UARTPCELLID2_MASK UART0_UARTPCELLID2_UARTPCELLID2(ALL1)

/*UARTPCELLID3 Register macros*/

#define UART0_UARTPCELLID3_UARTPCELLID3(v) (((v)&0xff)<<0)
#define UART0_UARTPCELLID3_UARTPCELLID3_MASK UART0_UARTPCELLID3_UARTPCELLID3(ALL1)

/*UARTDR Register macros*/

#define UART1_UARTDR_OE(v) (((v)&0x1)<<11)
#define UART1_UARTDR_OE_MASK UART1_UARTDR_OE(ALL1)
#define UART1_UARTDR_BE(v) (((v)&0x1)<<10)
#define UART1_UARTDR_BE_MASK UART1_UARTDR_BE(ALL1)
#define UART1_UARTDR_PE(v) (((v)&0x1)<<9)
#define UART1_UARTDR_PE_MASK UART1_UARTDR_PE(ALL1)
#define UART1_UARTDR_FE(v) (((v)&0x1)<<8)
#define UART1_UARTDR_FE_MASK UART1_UARTDR_FE(ALL1)
#define UART1_UARTDR_DATA(v) (((v)&0xff)<<0)
#define UART1_UARTDR_DATA_MASK UART1_UARTDR_DATA(ALL1)

/*UARTRSR Register macros*/

#define UART1_UARTRSR_OE(v) (((v)&0x1)<<3)
#define UART1_UARTRSR_OE_MASK UART1_UARTRSR_OE(ALL1)
#define UART1_UARTRSR_BE(v) (((v)&0x1)<<2)
#define UART1_UARTRSR_BE_MASK UART1_UARTRSR_BE(ALL1)
#define UART1_UARTRSR_PE(v) (((v)&0x1)<<1)
#define UART1_UARTRSR_PE_MASK UART1_UARTRSR_PE(ALL1)
#define UART1_UARTRSR_FE(v) (((v)&0x1)<<0)
#define UART1_UARTRSR_FE_MASK UART1_UARTRSR_FE(ALL1)

/*UARTFR Register macros*/

#define UART1_UARTFR_RI(v) (((v)&0x1)<<8)
#define UART1_UARTFR_RI_MASK UART1_UARTFR_RI(ALL1)
#define UART1_UARTFR_TXFE(v) (((v)&0x1)<<7)
#define UART1_UARTFR_TXFE_MASK UART1_UARTFR_TXFE(ALL1)
#define UART1_UARTFR_RXFF(v) (((v)&0x1)<<6)
#define UART1_UARTFR_RXFF_MASK UART1_UARTFR_RXFF(ALL1)
#define UART1_UARTFR_TXFF(v) (((v)&0x1)<<5)
#define UART1_UARTFR_TXFF_MASK UART1_UARTFR_TXFF(ALL1)
#define UART1_UARTFR_RXFE(v) (((v)&0x1)<<4)
#define UART1_UARTFR_RXFE_MASK UART1_UARTFR_RXFE(ALL1)
#define UART1_UARTFR_BUSY(v) (((v)&0x1)<<3)
#define UART1_UARTFR_BUSY_MASK UART1_UARTFR_BUSY(ALL1)
#define UART1_UARTFR_DCD(v) (((v)&0x1)<<2)
#define UART1_UARTFR_DCD_MASK UART1_UARTFR_DCD(ALL1)
#define UART1_UARTFR_DSR(v) (((v)&0x1)<<1)
#define UART1_UARTFR_DSR_MASK UART1_UARTFR_DSR(ALL1)
#define UART1_UARTFR_CTS(v) (((v)&0x1)<<0)
#define UART1_UARTFR_CTS_MASK UART1_UARTFR_CTS(ALL1)

/*UARTILPR Register macros*/

#define UART1_UARTILPR_ILPDVSR(v) (((v)&0xff)<<0)
#define UART1_UARTILPR_ILPDVSR_MASK UART1_UARTILPR_ILPDVSR(ALL1)

/*UARTIBRD Register macros*/

#define UART1_UARTIBRD_BAUD_DIVINT(v) (((v)&0xffff)<<0)
#define UART1_UARTIBRD_BAUD_DIVINT_MASK UART1_UARTIBRD_BAUD_DIVINT(ALL1)

/*UARTFBRD Register macros*/

#define UART1_UARTFBRD_BAUD_DIVFRAC(v) (((v)&0x3f)<<0)
#define UART1_UARTFBRD_BAUD_DIVFRAC_MASK UART1_UARTFBRD_BAUD_DIVFRAC(ALL1)

/*UARTLCR_H Register macros*/

#define UART1_UARTLCR_H_SPS(v) (((v)&0x1)<<7)
#define UART1_UARTLCR_H_SPS_MASK UART1_UARTLCR_H_SPS(ALL1)
#define UART1_UARTLCR_H_WLEN(v) (((v)&0x3)<<5)
#define UART1_UARTLCR_H_WLEN_MASK UART1_UARTLCR_H_WLEN(ALL1)
#define UART1_UARTLCR_H_FEN(v) (((v)&0x1)<<4)
#define UART1_UARTLCR_H_FEN_MASK UART1_UARTLCR_H_FEN(ALL1)
#define UART1_UARTLCR_H_STP2(v) (((v)&0x1)<<3)
#define UART1_UARTLCR_H_STP2_MASK UART1_UARTLCR_H_STP2(ALL1)
#define UART1_UARTLCR_H_EPS(v) (((v)&0x1)<<2)
#define UART1_UARTLCR_H_EPS_MASK UART1_UARTLCR_H_EPS(ALL1)
#define UART1_UARTLCR_H_PEN(v) (((v)&0x1)<<1)
#define UART1_UARTLCR_H_PEN_MASK UART1_UARTLCR_H_PEN(ALL1)
#define UART1_UARTLCR_H_BRK(v) (((v)&0x1)<<0)
#define UART1_UARTLCR_H_BRK_MASK UART1_UARTLCR_H_BRK(ALL1)

/*UARTCR Register macros*/

#define UART1_UARTCR_CTSEN(v) (((v)&0x1)<<15)
#define UART1_UARTCR_CTSEN_MASK UART1_UARTCR_CTSEN(ALL1)
#define UART1_UARTCR_RTSEN(v) (((v)&0x1)<<14)
#define UART1_UARTCR_RTSEN_MASK UART1_UARTCR_RTSEN(ALL1)
#define UART1_UARTCR_OUT2(v) (((v)&0x1)<<13)
#define UART1_UARTCR_OUT2_MASK UART1_UARTCR_OUT2(ALL1)
#define UART1_UARTCR_OUT1(v) (((v)&0x1)<<12)
#define UART1_UARTCR_OUT1_MASK UART1_UARTCR_OUT1(ALL1)
#define UART1_UARTCR_RTS(v) (((v)&0x1)<<11)
#define UART1_UARTCR_RTS_MASK UART1_UARTCR_RTS(ALL1)
#define UART1_UARTCR_DTR(v) (((v)&0x1)<<10)
#define UART1_UARTCR_DTR_MASK UART1_UARTCR_DTR(ALL1)
#define UART1_UARTCR_RXE(v) (((v)&0x1)<<9)
#define UART1_UARTCR_RXE_MASK UART1_UARTCR_RXE(ALL1)
#define UART1_UARTCR_TXE(v) (((v)&0x1)<<8)
#define UART1_UARTCR_TXE_MASK UART1_UARTCR_TXE(ALL1)
#define UART1_UARTCR_LBE(v) (((v)&0x1)<<7)
#define UART1_UARTCR_LBE_MASK UART1_UARTCR_LBE(ALL1)
#define UART1_UARTCR_SIRLP(v) (((v)&0x1)<<2)
#define UART1_UARTCR_SIRLP_MASK UART1_UARTCR_SIRLP(ALL1)
#define UART1_UARTCR_SIREN(v) (((v)&0x1)<<1)
#define UART1_UARTCR_SIREN_MASK UART1_UARTCR_SIREN(ALL1)
#define UART1_UARTCR_UARTEN(v) (((v)&0x1)<<0)
#define UART1_UARTCR_UARTEN_MASK UART1_UARTCR_UARTEN(ALL1)

/*UARTIFLS Register macros*/

#define UART1_UARTIFLS_RXIFLSEL(v) (((v)&0x7)<<3)
#define UART1_UARTIFLS_RXIFLSEL_MASK UART1_UARTIFLS_RXIFLSEL(ALL1)
#define UART1_UARTIFLS_TXIFLSEL(v) (((v)&0x7)<<0)
#define UART1_UARTIFLS_TXIFLSEL_MASK UART1_UARTIFLS_TXIFLSEL(ALL1)

/*UARTIMSC Register macros*/

#define UART1_UARTIMSC_OEIM(v) (((v)&0x1)<<10)
#define UART1_UARTIMSC_OEIM_MASK UART1_UARTIMSC_OEIM(ALL1)
#define UART1_UARTIMSC_BEIM(v) (((v)&0x1)<<9)
#define UART1_UARTIMSC_BEIM_MASK UART1_UARTIMSC_BEIM(ALL1)
#define UART1_UARTIMSC_PEIM(v) (((v)&0x1)<<8)
#define UART1_UARTIMSC_PEIM_MASK UART1_UARTIMSC_PEIM(ALL1)
#define UART1_UARTIMSC_FEIM(v) (((v)&0x1)<<7)
#define UART1_UARTIMSC_FEIM_MASK UART1_UARTIMSC_FEIM(ALL1)
#define UART1_UARTIMSC_RTIM(v) (((v)&0x1)<<6)
#define UART1_UARTIMSC_RTIM_MASK UART1_UARTIMSC_RTIM(ALL1)
#define UART1_UARTIMSC_TXIM(v) (((v)&0x1)<<5)
#define UART1_UARTIMSC_TXIM_MASK UART1_UARTIMSC_TXIM(ALL1)
#define UART1_UARTIMSC_RXIM(v) (((v)&0x1)<<4)
#define UART1_UARTIMSC_RXIM_MASK UART1_UARTIMSC_RXIM(ALL1)
#define UART1_UARTIMSC_DSRMIM(v) (((v)&0x1)<<3)
#define UART1_UARTIMSC_DSRMIM_MASK UART1_UARTIMSC_DSRMIM(ALL1)
#define UART1_UARTIMSC_DCDMIM(v) (((v)&0x1)<<2)
#define UART1_UARTIMSC_DCDMIM_MASK UART1_UARTIMSC_DCDMIM(ALL1)
#define UART1_UARTIMSC_CTSMIM(v) (((v)&0x1)<<1)
#define UART1_UARTIMSC_CTSMIM_MASK UART1_UARTIMSC_CTSMIM(ALL1)
#define UART1_UARTIMSC_RIMIM(v) (((v)&0x1)<<0)
#define UART1_UARTIMSC_RIMIM_MASK UART1_UARTIMSC_RIMIM(ALL1)

/*UARTRIS Register macros*/

#define UART1_UARTRIS_OERIS(v) (((v)&0x1)<<10)
#define UART1_UARTRIS_OERIS_MASK UART1_UARTRIS_OERIS(ALL1)
#define UART1_UARTRIS_BERIS(v) (((v)&0x1)<<9)
#define UART1_UARTRIS_BERIS_MASK UART1_UARTRIS_BERIS(ALL1)
#define UART1_UARTRIS_PERIS(v) (((v)&0x1)<<8)
#define UART1_UARTRIS_PERIS_MASK UART1_UARTRIS_PERIS(ALL1)
#define UART1_UARTRIS_FERIS(v) (((v)&0x1)<<7)
#define UART1_UARTRIS_FERIS_MASK UART1_UARTRIS_FERIS(ALL1)
#define UART1_UARTRIS_RTRIS(v) (((v)&0x1)<<6)
#define UART1_UARTRIS_RTRIS_MASK UART1_UARTRIS_RTRIS(ALL1)
#define UART1_UARTRIS_TXRIS(v) (((v)&0x1)<<5)
#define UART1_UARTRIS_TXRIS_MASK UART1_UARTRIS_TXRIS(ALL1)
#define UART1_UARTRIS_RXRIS(v) (((v)&0x1)<<4)
#define UART1_UARTRIS_RXRIS_MASK UART1_UARTRIS_RXRIS(ALL1)
#define UART1_UARTRIS_DSRRMIS(v) (((v)&0x1)<<3)
#define UART1_UARTRIS_DSRRMIS_MASK UART1_UARTRIS_DSRRMIS(ALL1)
#define UART1_UARTRIS_DCDRMIS(v) (((v)&0x1)<<2)
#define UART1_UARTRIS_DCDRMIS_MASK UART1_UARTRIS_DCDRMIS(ALL1)
#define UART1_UARTRIS_CTSRMIS(v) (((v)&0x1)<<1)
#define UART1_UARTRIS_CTSRMIS_MASK UART1_UARTRIS_CTSRMIS(ALL1)
#define UART1_UARTRIS_RIRMIS(v) (((v)&0x1)<<0)
#define UART1_UARTRIS_RIRMIS_MASK UART1_UARTRIS_RIRMIS(ALL1)

/*UARTMIS Register macros*/

#define UART1_UARTMIS_OEMIS(v) (((v)&0x1)<<10)
#define UART1_UARTMIS_OEMIS_MASK UART1_UARTMIS_OEMIS(ALL1)
#define UART1_UARTMIS_BEMIS(v) (((v)&0x1)<<9)
#define UART1_UARTMIS_BEMIS_MASK UART1_UARTMIS_BEMIS(ALL1)
#define UART1_UARTMIS_PEMIS(v) (((v)&0x1)<<8)
#define UART1_UARTMIS_PEMIS_MASK UART1_UARTMIS_PEMIS(ALL1)
#define UART1_UARTMIS_FEMIS(v) (((v)&0x1)<<7)
#define UART1_UARTMIS_FEMIS_MASK UART1_UARTMIS_FEMIS(ALL1)
#define UART1_UARTMIS_RTMIS(v) (((v)&0x1)<<6)
#define UART1_UARTMIS_RTMIS_MASK UART1_UARTMIS_RTMIS(ALL1)
#define UART1_UARTMIS_TXMIS(v) (((v)&0x1)<<5)
#define UART1_UARTMIS_TXMIS_MASK UART1_UARTMIS_TXMIS(ALL1)
#define UART1_UARTMIS_RXMIS(v) (((v)&0x1)<<4)
#define UART1_UARTMIS_RXMIS_MASK UART1_UARTMIS_RXMIS(ALL1)
#define UART1_UARTMIS_DSRMMIS(v) (((v)&0x1)<<3)
#define UART1_UARTMIS_DSRMMIS_MASK UART1_UARTMIS_DSRMMIS(ALL1)
#define UART1_UARTMIS_DCDMMIS(v) (((v)&0x1)<<2)
#define UART1_UARTMIS_DCDMMIS_MASK UART1_UARTMIS_DCDMMIS(ALL1)
#define UART1_UARTMIS_CTSMMIS(v) (((v)&0x1)<<1)
#define UART1_UARTMIS_CTSMMIS_MASK UART1_UARTMIS_CTSMMIS(ALL1)
#define UART1_UARTMIS_RIMMIS(v) (((v)&0x1)<<0)
#define UART1_UARTMIS_RIMMIS_MASK UART1_UARTMIS_RIMMIS(ALL1)

/*UARTICR Register macros*/

#define UART1_UARTICR_OEIC(v) (((v)&0x1)<<10)
#define UART1_UARTICR_OEIC_MASK UART1_UARTICR_OEIC(ALL1)
#define UART1_UARTICR_BEIC(v) (((v)&0x1)<<9)
#define UART1_UARTICR_BEIC_MASK UART1_UARTICR_BEIC(ALL1)
#define UART1_UARTICR_PEIC(v) (((v)&0x1)<<8)
#define UART1_UARTICR_PEIC_MASK UART1_UARTICR_PEIC(ALL1)
#define UART1_UARTICR_FEIC(v) (((v)&0x1)<<7)
#define UART1_UARTICR_FEIC_MASK UART1_UARTICR_FEIC(ALL1)
#define UART1_UARTICR_RTIC(v) (((v)&0x1)<<6)
#define UART1_UARTICR_RTIC_MASK UART1_UARTICR_RTIC(ALL1)
#define UART1_UARTICR_TXIC(v) (((v)&0x1)<<5)
#define UART1_UARTICR_TXIC_MASK UART1_UARTICR_TXIC(ALL1)
#define UART1_UARTICR_RXIC(v) (((v)&0x1)<<4)
#define UART1_UARTICR_RXIC_MASK UART1_UARTICR_RXIC(ALL1)
#define UART1_UARTICR_DSRMIC(v) (((v)&0x1)<<3)
#define UART1_UARTICR_DSRMIC_MASK UART1_UARTICR_DSRMIC(ALL1)
#define UART1_UARTICR_DCDMIC(v) (((v)&0x1)<<2)
#define UART1_UARTICR_DCDMIC_MASK UART1_UARTICR_DCDMIC(ALL1)
#define UART1_UARTICR_CTSMIC(v) (((v)&0x1)<<1)
#define UART1_UARTICR_CTSMIC_MASK UART1_UARTICR_CTSMIC(ALL1)
#define UART1_UARTICR_RIMIC(v) (((v)&0x1)<<0)
#define UART1_UARTICR_RIMIC_MASK UART1_UARTICR_RIMIC(ALL1)

/*UARTDMACR Register macros*/

#define UART1_UARTDMACR_DMAONERR(v) (((v)&0x1)<<2)
#define UART1_UARTDMACR_DMAONERR_MASK UART1_UARTDMACR_DMAONERR(ALL1)
#define UART1_UARTDMACR_TXDMAE(v) (((v)&0x1)<<1)
#define UART1_UARTDMACR_TXDMAE_MASK UART1_UARTDMACR_TXDMAE(ALL1)
#define UART1_UARTDMACR_RXDMAE(v) (((v)&0x1)<<0)
#define UART1_UARTDMACR_RXDMAE_MASK UART1_UARTDMACR_RXDMAE(ALL1)

/*UARTPERIPHID0 Register macros*/

#define UART1_UARTPERIPHID0_PARTNUMBER0(v) (((v)&0xff)<<0)
#define UART1_UARTPERIPHID0_PARTNUMBER0_MASK UART1_UARTPERIPHID0_PARTNUMBER0(ALL1)

/*UARTPERIPHID1 Register macros*/

#define UART1_UARTPERIPHID1_DESIGNER0(v) (((v)&0xf)<<4)
#define UART1_UARTPERIPHID1_DESIGNER0_MASK UART1_UARTPERIPHID1_DESIGNER0(ALL1)
#define UART1_UARTPERIPHID1_PARTNUMBER1(v) (((v)&0xf)<<0)
#define UART1_UARTPERIPHID1_PARTNUMBER1_MASK UART1_UARTPERIPHID1_PARTNUMBER1(ALL1)

/*UARTPERIPHID2 Register macros*/

#define UART1_UARTPERIPHID2_REVISION(v) (((v)&0xf)<<4)
#define UART1_UARTPERIPHID2_REVISION_MASK UART1_UARTPERIPHID2_REVISION(ALL1)
#define UART1_UARTPERIPHID2_DESIGNER1(v) (((v)&0xf)<<0)
#define UART1_UARTPERIPHID2_DESIGNER1_MASK UART1_UARTPERIPHID2_DESIGNER1(ALL1)

/*UARTPERIPHID3 Register macros*/

#define UART1_UARTPERIPHID3_CONFIGURATION(v) (((v)&0xff)<<0)
#define UART1_UARTPERIPHID3_CONFIGURATION_MASK UART1_UARTPERIPHID3_CONFIGURATION(ALL1)

/*UARTPCELLID0 Register macros*/

#define UART1_UARTPCELLID0_UARTPCELLID0(v) (((v)&0xff)<<0)
#define UART1_UARTPCELLID0_UARTPCELLID0_MASK UART1_UARTPCELLID0_UARTPCELLID0(ALL1)

/*UARTPCELLID1 Register macros*/

#define UART1_UARTPCELLID1_UARTPCELLID1(v) (((v)&0xff)<<0)
#define UART1_UARTPCELLID1_UARTPCELLID1_MASK UART1_UARTPCELLID1_UARTPCELLID1(ALL1)

/*UARTPCELLID2 Register macros*/

#define UART1_UARTPCELLID2_UARTPCELLID2(v) (((v)&0xff)<<0)
#define UART1_UARTPCELLID2_UARTPCELLID2_MASK UART1_UARTPCELLID2_UARTPCELLID2(ALL1)

/*UARTPCELLID3 Register macros*/

#define UART1_UARTPCELLID3_UARTPCELLID3(v) (((v)&0xff)<<0)
#define UART1_UARTPCELLID3_UARTPCELLID3_MASK UART1_UARTPCELLID3_UARTPCELLID3(ALL1)

#endif