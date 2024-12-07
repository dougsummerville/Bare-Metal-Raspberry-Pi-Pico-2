
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

#ifndef RP2040_SSI_H
#define RP2040_SSI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrlr0;
		uint32_t ctrlr1;
		uint32_t ssienr;
		uint32_t mwcr;
		uint32_t ser;
		uint32_t baudr;
		uint32_t txftlr;
		uint32_t rxftlr;
		uint32_t txflr;
		uint32_t rxflr;
		uint32_t sr;
		uint32_t imr;
		uint32_t isr;
		uint32_t risr;
		uint32_t txoicr;
		uint32_t rxoicr;
		uint32_t rxuicr;
		uint32_t msticr;
		uint32_t icr;
		uint32_t dmacr;
		uint32_t dmatdlr;
		uint32_t dmardlr;
		uint32_t idr;
		uint32_t ssi_version_id;
		uint32_t dr0;
		uint32_t RSVD0[35];
		uint32_t rx_sample_dly;
		uint32_t spi_ctrlr0;
		uint32_t txd_drive_edge;
		uint32_t RSVD1[961];
		uint32_t xor_ctrlr0;
		uint32_t xor_ctrlr1;
		uint32_t xor_ssienr;
		uint32_t xor_mwcr;
		uint32_t xor_ser;
		uint32_t xor_baudr;
		uint32_t xor_txftlr;
		uint32_t xor_rxftlr;
		uint32_t xor_txflr;
		uint32_t xor_rxflr;
		uint32_t xor_sr;
		uint32_t xor_imr;
		uint32_t xor_isr;
		uint32_t xor_risr;
		uint32_t xor_txoicr;
		uint32_t xor_rxoicr;
		uint32_t xor_rxuicr;
		uint32_t xor_msticr;
		uint32_t xor_icr;
		uint32_t xor_dmacr;
		uint32_t xor_dmatdlr;
		uint32_t xor_dmardlr;
		uint32_t xor_idr;
		uint32_t xor_ssi_version_id;
		uint32_t xor_dr0;
		uint32_t RSVDxor_0[35];
		uint32_t xor_rx_sample_dly;
		uint32_t xor_spi_ctrlr0;
		uint32_t xor_txd_drive_edge;
		uint32_t RSVDxor_1[961];
		uint32_t set_ctrlr0;
		uint32_t set_ctrlr1;
		uint32_t set_ssienr;
		uint32_t set_mwcr;
		uint32_t set_ser;
		uint32_t set_baudr;
		uint32_t set_txftlr;
		uint32_t set_rxftlr;
		uint32_t set_txflr;
		uint32_t set_rxflr;
		uint32_t set_sr;
		uint32_t set_imr;
		uint32_t set_isr;
		uint32_t set_risr;
		uint32_t set_txoicr;
		uint32_t set_rxoicr;
		uint32_t set_rxuicr;
		uint32_t set_msticr;
		uint32_t set_icr;
		uint32_t set_dmacr;
		uint32_t set_dmatdlr;
		uint32_t set_dmardlr;
		uint32_t set_idr;
		uint32_t set_ssi_version_id;
		uint32_t set_dr0;
		uint32_t RSVDset_0[35];
		uint32_t set_rx_sample_dly;
		uint32_t set_spi_ctrlr0;
		uint32_t set_txd_drive_edge;
		uint32_t RSVDset_1[961];
		uint32_t clr_ctrlr0;
		uint32_t clr_ctrlr1;
		uint32_t clr_ssienr;
		uint32_t clr_mwcr;
		uint32_t clr_ser;
		uint32_t clr_baudr;
		uint32_t clr_txftlr;
		uint32_t clr_rxftlr;
		uint32_t clr_txflr;
		uint32_t clr_rxflr;
		uint32_t clr_sr;
		uint32_t clr_imr;
		uint32_t clr_isr;
		uint32_t clr_risr;
		uint32_t clr_txoicr;
		uint32_t clr_rxoicr;
		uint32_t clr_rxuicr;
		uint32_t clr_msticr;
		uint32_t clr_icr;
		uint32_t clr_dmacr;
		uint32_t clr_dmatdlr;
		uint32_t clr_dmardlr;
		uint32_t clr_idr;
		uint32_t clr_ssi_version_id;
		uint32_t clr_dr0;
		uint32_t RSVDclr_0[35];
		uint32_t clr_rx_sample_dly;
		uint32_t clr_spi_ctrlr0;
		uint32_t clr_txd_drive_edge;
		uint32_t RSVDclr_1[961];
} SSI_REG_BLOCKS;

#define ssi ((SSI_REG_BLOCKS volatile *)0x18000000)

/*CTRLR0 Register macros*/

#define SSI_CTRLR0_SSTE(v) (((v)&0x1)<<24)
#define SSI_CTRLR0_SSTE_MASK SSI_CTRLR0_SSTE(ALL1)
#define SSI_CTRLR0_SPI_FRF(v) (((v)&0x3)<<21)
#define SSI_CTRLR0_SPI_FRF_MASK SSI_CTRLR0_SPI_FRF(ALL1)
#define SSI_CTRLR0_DFS_32(v) (((v)&0x1f)<<16)
#define SSI_CTRLR0_DFS_32_MASK SSI_CTRLR0_DFS_32(ALL1)
#define SSI_CTRLR0_CFS(v) (((v)&0xf)<<12)
#define SSI_CTRLR0_CFS_MASK SSI_CTRLR0_CFS(ALL1)
#define SSI_CTRLR0_SRL(v) (((v)&0x1)<<11)
#define SSI_CTRLR0_SRL_MASK SSI_CTRLR0_SRL(ALL1)
#define SSI_CTRLR0_SLV_OE(v) (((v)&0x1)<<10)
#define SSI_CTRLR0_SLV_OE_MASK SSI_CTRLR0_SLV_OE(ALL1)
#define SSI_CTRLR0_TMOD(v) (((v)&0x3)<<8)
#define SSI_CTRLR0_TMOD_MASK SSI_CTRLR0_TMOD(ALL1)
#define SSI_CTRLR0_SCPOL(v) (((v)&0x1)<<7)
#define SSI_CTRLR0_SCPOL_MASK SSI_CTRLR0_SCPOL(ALL1)
#define SSI_CTRLR0_SCPH(v) (((v)&0x1)<<6)
#define SSI_CTRLR0_SCPH_MASK SSI_CTRLR0_SCPH(ALL1)
#define SSI_CTRLR0_FRF(v) (((v)&0x3)<<4)
#define SSI_CTRLR0_FRF_MASK SSI_CTRLR0_FRF(ALL1)
#define SSI_CTRLR0_DFS(v) (((v)&0xf)<<0)
#define SSI_CTRLR0_DFS_MASK SSI_CTRLR0_DFS(ALL1)

/*CTRLR1 Register macros*/

#define SSI_CTRLR1_NDF(v) (((v)&0xffff)<<0)
#define SSI_CTRLR1_NDF_MASK SSI_CTRLR1_NDF(ALL1)

/*SSIENR Register macros*/

#define SSI_SSIENR_SSI_EN(v) (((v)&0x1)<<0)
#define SSI_SSIENR_SSI_EN_MASK SSI_SSIENR_SSI_EN(ALL1)

/*MWCR Register macros*/

#define SSI_MWCR_MHS(v) (((v)&0x1)<<2)
#define SSI_MWCR_MHS_MASK SSI_MWCR_MHS(ALL1)
#define SSI_MWCR_MDD(v) (((v)&0x1)<<1)
#define SSI_MWCR_MDD_MASK SSI_MWCR_MDD(ALL1)
#define SSI_MWCR_MWMOD(v) (((v)&0x1)<<0)
#define SSI_MWCR_MWMOD_MASK SSI_MWCR_MWMOD(ALL1)

/*SER Register macros*/


/*BAUDR Register macros*/

#define SSI_BAUDR_SCKDV(v) (((v)&0xffff)<<0)
#define SSI_BAUDR_SCKDV_MASK SSI_BAUDR_SCKDV(ALL1)

/*TXFTLR Register macros*/

#define SSI_TXFTLR_TFT(v) (((v)&0xff)<<0)
#define SSI_TXFTLR_TFT_MASK SSI_TXFTLR_TFT(ALL1)

/*RXFTLR Register macros*/

#define SSI_RXFTLR_RFT(v) (((v)&0xff)<<0)
#define SSI_RXFTLR_RFT_MASK SSI_RXFTLR_RFT(ALL1)

/*TXFLR Register macros*/

#define SSI_TXFLR_TFTFL(v) (((v)&0xff)<<0)
#define SSI_TXFLR_TFTFL_MASK SSI_TXFLR_TFTFL(ALL1)

/*RXFLR Register macros*/

#define SSI_RXFLR_RXTFL(v) (((v)&0xff)<<0)
#define SSI_RXFLR_RXTFL_MASK SSI_RXFLR_RXTFL(ALL1)

/*SR Register macros*/

#define SSI_SR_DCOL(v) (((v)&0x1)<<6)
#define SSI_SR_DCOL_MASK SSI_SR_DCOL(ALL1)
#define SSI_SR_TXE(v) (((v)&0x1)<<5)
#define SSI_SR_TXE_MASK SSI_SR_TXE(ALL1)
#define SSI_SR_RFF(v) (((v)&0x1)<<4)
#define SSI_SR_RFF_MASK SSI_SR_RFF(ALL1)
#define SSI_SR_RFNE(v) (((v)&0x1)<<3)
#define SSI_SR_RFNE_MASK SSI_SR_RFNE(ALL1)
#define SSI_SR_TFE(v) (((v)&0x1)<<2)
#define SSI_SR_TFE_MASK SSI_SR_TFE(ALL1)
#define SSI_SR_TFNF(v) (((v)&0x1)<<1)
#define SSI_SR_TFNF_MASK SSI_SR_TFNF(ALL1)
#define SSI_SR_BUSY(v) (((v)&0x1)<<0)
#define SSI_SR_BUSY_MASK SSI_SR_BUSY(ALL1)

/*IMR Register macros*/

#define SSI_IMR_MSTIM(v) (((v)&0x1)<<5)
#define SSI_IMR_MSTIM_MASK SSI_IMR_MSTIM(ALL1)
#define SSI_IMR_RXFIM(v) (((v)&0x1)<<4)
#define SSI_IMR_RXFIM_MASK SSI_IMR_RXFIM(ALL1)
#define SSI_IMR_RXOIM(v) (((v)&0x1)<<3)
#define SSI_IMR_RXOIM_MASK SSI_IMR_RXOIM(ALL1)
#define SSI_IMR_RXUIM(v) (((v)&0x1)<<2)
#define SSI_IMR_RXUIM_MASK SSI_IMR_RXUIM(ALL1)
#define SSI_IMR_TXOIM(v) (((v)&0x1)<<1)
#define SSI_IMR_TXOIM_MASK SSI_IMR_TXOIM(ALL1)
#define SSI_IMR_TXEIM(v) (((v)&0x1)<<0)
#define SSI_IMR_TXEIM_MASK SSI_IMR_TXEIM(ALL1)

/*ISR Register macros*/

#define SSI_ISR_MSTIS(v) (((v)&0x1)<<5)
#define SSI_ISR_MSTIS_MASK SSI_ISR_MSTIS(ALL1)
#define SSI_ISR_RXFIS(v) (((v)&0x1)<<4)
#define SSI_ISR_RXFIS_MASK SSI_ISR_RXFIS(ALL1)
#define SSI_ISR_RXOIS(v) (((v)&0x1)<<3)
#define SSI_ISR_RXOIS_MASK SSI_ISR_RXOIS(ALL1)
#define SSI_ISR_RXUIS(v) (((v)&0x1)<<2)
#define SSI_ISR_RXUIS_MASK SSI_ISR_RXUIS(ALL1)
#define SSI_ISR_TXOIS(v) (((v)&0x1)<<1)
#define SSI_ISR_TXOIS_MASK SSI_ISR_TXOIS(ALL1)
#define SSI_ISR_TXEIS(v) (((v)&0x1)<<0)
#define SSI_ISR_TXEIS_MASK SSI_ISR_TXEIS(ALL1)

/*RISR Register macros*/

#define SSI_RISR_MSTIR(v) (((v)&0x1)<<5)
#define SSI_RISR_MSTIR_MASK SSI_RISR_MSTIR(ALL1)
#define SSI_RISR_RXFIR(v) (((v)&0x1)<<4)
#define SSI_RISR_RXFIR_MASK SSI_RISR_RXFIR(ALL1)
#define SSI_RISR_RXOIR(v) (((v)&0x1)<<3)
#define SSI_RISR_RXOIR_MASK SSI_RISR_RXOIR(ALL1)
#define SSI_RISR_RXUIR(v) (((v)&0x1)<<2)
#define SSI_RISR_RXUIR_MASK SSI_RISR_RXUIR(ALL1)
#define SSI_RISR_TXOIR(v) (((v)&0x1)<<1)
#define SSI_RISR_TXOIR_MASK SSI_RISR_TXOIR(ALL1)
#define SSI_RISR_TXEIR(v) (((v)&0x1)<<0)
#define SSI_RISR_TXEIR_MASK SSI_RISR_TXEIR(ALL1)

/*TXOICR Register macros*/


/*RXOICR Register macros*/


/*RXUICR Register macros*/


/*MSTICR Register macros*/


/*ICR Register macros*/


/*DMACR Register macros*/

#define SSI_DMACR_TDMAE(v) (((v)&0x1)<<1)
#define SSI_DMACR_TDMAE_MASK SSI_DMACR_TDMAE(ALL1)
#define SSI_DMACR_RDMAE(v) (((v)&0x1)<<0)
#define SSI_DMACR_RDMAE_MASK SSI_DMACR_RDMAE(ALL1)

/*DMATDLR Register macros*/

#define SSI_DMATDLR_DMATDL(v) (((v)&0xff)<<0)
#define SSI_DMATDLR_DMATDL_MASK SSI_DMATDLR_DMATDL(ALL1)

/*DMARDLR Register macros*/

#define SSI_DMARDLR_DMARDL(v) (((v)&0xff)<<0)
#define SSI_DMARDLR_DMARDL_MASK SSI_DMARDLR_DMARDL(ALL1)

/*IDR Register macros*/

#define SSI_IDR_IDCODE(v) (((v)&0xffffffff)<<0)
#define SSI_IDR_IDCODE_MASK SSI_IDR_IDCODE(ALL1)

/*SSI_VERSION_ID Register macros*/

#define SSI_SSI_VERSION_ID_SSI_COMP_VERSION(v) (((v)&0xffffffff)<<0)
#define SSI_SSI_VERSION_ID_SSI_COMP_VERSION_MASK SSI_SSI_VERSION_ID_SSI_COMP_VERSION(ALL1)

/*DR0 Register macros*/

#define SSI_DR0_DR(v) (((v)&0xffffffff)<<0)
#define SSI_DR0_DR_MASK SSI_DR0_DR(ALL1)

/*RX_SAMPLE_DLY Register macros*/

#define SSI_RX_SAMPLE_DLY_RSD(v) (((v)&0xff)<<0)
#define SSI_RX_SAMPLE_DLY_RSD_MASK SSI_RX_SAMPLE_DLY_RSD(ALL1)

/*SPI_CTRLR0 Register macros*/

#define SSI_SPI_CTRLR0_XIP_CMD(v) (((v)&0xff)<<24)
#define SSI_SPI_CTRLR0_XIP_CMD_MASK SSI_SPI_CTRLR0_XIP_CMD(ALL1)
#define SSI_SPI_CTRLR0_SPI_RXDS_EN(v) (((v)&0x1)<<18)
#define SSI_SPI_CTRLR0_SPI_RXDS_EN_MASK SSI_SPI_CTRLR0_SPI_RXDS_EN(ALL1)
#define SSI_SPI_CTRLR0_INST_DDR_EN(v) (((v)&0x1)<<17)
#define SSI_SPI_CTRLR0_INST_DDR_EN_MASK SSI_SPI_CTRLR0_INST_DDR_EN(ALL1)
#define SSI_SPI_CTRLR0_SPI_DDR_EN(v) (((v)&0x1)<<16)
#define SSI_SPI_CTRLR0_SPI_DDR_EN_MASK SSI_SPI_CTRLR0_SPI_DDR_EN(ALL1)
#define SSI_SPI_CTRLR0_WAIT_CYCLES(v) (((v)&0x1f)<<11)
#define SSI_SPI_CTRLR0_WAIT_CYCLES_MASK SSI_SPI_CTRLR0_WAIT_CYCLES(ALL1)
#define SSI_SPI_CTRLR0_INST_L(v) (((v)&0x3)<<8)
#define SSI_SPI_CTRLR0_INST_L_MASK SSI_SPI_CTRLR0_INST_L(ALL1)
#define SSI_SPI_CTRLR0_ADDR_L(v) (((v)&0xf)<<2)
#define SSI_SPI_CTRLR0_ADDR_L_MASK SSI_SPI_CTRLR0_ADDR_L(ALL1)
#define SSI_SPI_CTRLR0_TRANS_TYPE(v) (((v)&0x3)<<0)
#define SSI_SPI_CTRLR0_TRANS_TYPE_MASK SSI_SPI_CTRLR0_TRANS_TYPE(ALL1)

/*TXD_DRIVE_EDGE Register macros*/

#define SSI_TXD_DRIVE_EDGE_TDE(v) (((v)&0xff)<<0)
#define SSI_TXD_DRIVE_EDGE_TDE_MASK SSI_TXD_DRIVE_EDGE_TDE(ALL1)

#endif