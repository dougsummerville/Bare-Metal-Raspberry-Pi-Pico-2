
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

#ifndef RP2350_I2C_H
#define RP2350_I2C_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ic_con;
		uint32_t ic_tar;
		uint32_t ic_sar;
		uint32_t RSVD0;
		uint32_t ic_data_cmd;
		uint32_t ic_ss_scl_hcnt;
		uint32_t ic_ss_scl_lcnt;
		uint32_t ic_fs_scl_hcnt;
		uint32_t ic_fs_scl_lcnt;
		uint32_t RSVD1[2];
		uint32_t ic_intr_stat;
		uint32_t ic_intr_mask;
		uint32_t ic_raw_intr_stat;
		uint32_t ic_rx_tl;
		uint32_t ic_tx_tl;
		uint32_t ic_clr_intr;
		uint32_t ic_clr_rx_under;
		uint32_t ic_clr_rx_over;
		uint32_t ic_clr_tx_over;
		uint32_t ic_clr_rd_req;
		uint32_t ic_clr_tx_abrt;
		uint32_t ic_clr_rx_done;
		uint32_t ic_clr_activity;
		uint32_t ic_clr_stop_det;
		uint32_t ic_clr_start_det;
		uint32_t ic_clr_gen_call;
		uint32_t ic_enable;
		uint32_t ic_status;
		uint32_t ic_txflr;
		uint32_t ic_rxflr;
		uint32_t ic_sda_hold;
		uint32_t ic_tx_abrt_source;
		uint32_t ic_slv_data_nack_only;
		uint32_t ic_dma_cr;
		uint32_t ic_dma_tdlr;
		uint32_t ic_dma_rdlr;
		uint32_t ic_sda_setup;
		uint32_t ic_ack_general_call;
		uint32_t ic_enable_status;
		uint32_t ic_fs_spklen;
		uint32_t RSVD2;
		uint32_t ic_clr_restart_det;
		uint32_t RSVD3[18];
		uint32_t ic_comp_param_1;
		uint32_t ic_comp_version;
		uint32_t ic_comp_type;
		uint32_t RSVD4[960];
		uint32_t xor_ic_con;
		uint32_t xor_ic_tar;
		uint32_t xor_ic_sar;
		uint32_t RSVDxor_0;
		uint32_t xor_ic_data_cmd;
		uint32_t xor_ic_ss_scl_hcnt;
		uint32_t xor_ic_ss_scl_lcnt;
		uint32_t xor_ic_fs_scl_hcnt;
		uint32_t xor_ic_fs_scl_lcnt;
		uint32_t RSVDxor_1[2];
		uint32_t xor_ic_intr_stat;
		uint32_t xor_ic_intr_mask;
		uint32_t xor_ic_raw_intr_stat;
		uint32_t xor_ic_rx_tl;
		uint32_t xor_ic_tx_tl;
		uint32_t xor_ic_clr_intr;
		uint32_t xor_ic_clr_rx_under;
		uint32_t xor_ic_clr_rx_over;
		uint32_t xor_ic_clr_tx_over;
		uint32_t xor_ic_clr_rd_req;
		uint32_t xor_ic_clr_tx_abrt;
		uint32_t xor_ic_clr_rx_done;
		uint32_t xor_ic_clr_activity;
		uint32_t xor_ic_clr_stop_det;
		uint32_t xor_ic_clr_start_det;
		uint32_t xor_ic_clr_gen_call;
		uint32_t xor_ic_enable;
		uint32_t xor_ic_status;
		uint32_t xor_ic_txflr;
		uint32_t xor_ic_rxflr;
		uint32_t xor_ic_sda_hold;
		uint32_t xor_ic_tx_abrt_source;
		uint32_t xor_ic_slv_data_nack_only;
		uint32_t xor_ic_dma_cr;
		uint32_t xor_ic_dma_tdlr;
		uint32_t xor_ic_dma_rdlr;
		uint32_t xor_ic_sda_setup;
		uint32_t xor_ic_ack_general_call;
		uint32_t xor_ic_enable_status;
		uint32_t xor_ic_fs_spklen;
		uint32_t RSVDxor_2;
		uint32_t xor_ic_clr_restart_det;
		uint32_t RSVDxor_3[18];
		uint32_t xor_ic_comp_param_1;
		uint32_t xor_ic_comp_version;
		uint32_t xor_ic_comp_type;
		uint32_t RSVDxor_4[960];
		uint32_t set_ic_con;
		uint32_t set_ic_tar;
		uint32_t set_ic_sar;
		uint32_t RSVDset_0;
		uint32_t set_ic_data_cmd;
		uint32_t set_ic_ss_scl_hcnt;
		uint32_t set_ic_ss_scl_lcnt;
		uint32_t set_ic_fs_scl_hcnt;
		uint32_t set_ic_fs_scl_lcnt;
		uint32_t RSVDset_1[2];
		uint32_t set_ic_intr_stat;
		uint32_t set_ic_intr_mask;
		uint32_t set_ic_raw_intr_stat;
		uint32_t set_ic_rx_tl;
		uint32_t set_ic_tx_tl;
		uint32_t set_ic_clr_intr;
		uint32_t set_ic_clr_rx_under;
		uint32_t set_ic_clr_rx_over;
		uint32_t set_ic_clr_tx_over;
		uint32_t set_ic_clr_rd_req;
		uint32_t set_ic_clr_tx_abrt;
		uint32_t set_ic_clr_rx_done;
		uint32_t set_ic_clr_activity;
		uint32_t set_ic_clr_stop_det;
		uint32_t set_ic_clr_start_det;
		uint32_t set_ic_clr_gen_call;
		uint32_t set_ic_enable;
		uint32_t set_ic_status;
		uint32_t set_ic_txflr;
		uint32_t set_ic_rxflr;
		uint32_t set_ic_sda_hold;
		uint32_t set_ic_tx_abrt_source;
		uint32_t set_ic_slv_data_nack_only;
		uint32_t set_ic_dma_cr;
		uint32_t set_ic_dma_tdlr;
		uint32_t set_ic_dma_rdlr;
		uint32_t set_ic_sda_setup;
		uint32_t set_ic_ack_general_call;
		uint32_t set_ic_enable_status;
		uint32_t set_ic_fs_spklen;
		uint32_t RSVDset_2;
		uint32_t set_ic_clr_restart_det;
		uint32_t RSVDset_3[18];
		uint32_t set_ic_comp_param_1;
		uint32_t set_ic_comp_version;
		uint32_t set_ic_comp_type;
		uint32_t RSVDset_4[960];
		uint32_t clr_ic_con;
		uint32_t clr_ic_tar;
		uint32_t clr_ic_sar;
		uint32_t RSVDclr_0;
		uint32_t clr_ic_data_cmd;
		uint32_t clr_ic_ss_scl_hcnt;
		uint32_t clr_ic_ss_scl_lcnt;
		uint32_t clr_ic_fs_scl_hcnt;
		uint32_t clr_ic_fs_scl_lcnt;
		uint32_t RSVDclr_1[2];
		uint32_t clr_ic_intr_stat;
		uint32_t clr_ic_intr_mask;
		uint32_t clr_ic_raw_intr_stat;
		uint32_t clr_ic_rx_tl;
		uint32_t clr_ic_tx_tl;
		uint32_t clr_ic_clr_intr;
		uint32_t clr_ic_clr_rx_under;
		uint32_t clr_ic_clr_rx_over;
		uint32_t clr_ic_clr_tx_over;
		uint32_t clr_ic_clr_rd_req;
		uint32_t clr_ic_clr_tx_abrt;
		uint32_t clr_ic_clr_rx_done;
		uint32_t clr_ic_clr_activity;
		uint32_t clr_ic_clr_stop_det;
		uint32_t clr_ic_clr_start_det;
		uint32_t clr_ic_clr_gen_call;
		uint32_t clr_ic_enable;
		uint32_t clr_ic_status;
		uint32_t clr_ic_txflr;
		uint32_t clr_ic_rxflr;
		uint32_t clr_ic_sda_hold;
		uint32_t clr_ic_tx_abrt_source;
		uint32_t clr_ic_slv_data_nack_only;
		uint32_t clr_ic_dma_cr;
		uint32_t clr_ic_dma_tdlr;
		uint32_t clr_ic_dma_rdlr;
		uint32_t clr_ic_sda_setup;
		uint32_t clr_ic_ack_general_call;
		uint32_t clr_ic_enable_status;
		uint32_t clr_ic_fs_spklen;
		uint32_t RSVDclr_2;
		uint32_t clr_ic_clr_restart_det;
		uint32_t RSVDclr_3[18];
		uint32_t clr_ic_comp_param_1;
		uint32_t clr_ic_comp_version;
		uint32_t clr_ic_comp_type;
		uint32_t RSVDclr_4[960];
} I2C0_REG_BLOCKS;
typedef struct{
		uint32_t ic_con;
		uint32_t ic_tar;
		uint32_t ic_sar;
		uint32_t RSVD0;
		uint32_t ic_data_cmd;
		uint32_t ic_ss_scl_hcnt;
		uint32_t ic_ss_scl_lcnt;
		uint32_t ic_fs_scl_hcnt;
		uint32_t ic_fs_scl_lcnt;
		uint32_t RSVD1[2];
		uint32_t ic_intr_stat;
		uint32_t ic_intr_mask;
		uint32_t ic_raw_intr_stat;
		uint32_t ic_rx_tl;
		uint32_t ic_tx_tl;
		uint32_t ic_clr_intr;
		uint32_t ic_clr_rx_under;
		uint32_t ic_clr_rx_over;
		uint32_t ic_clr_tx_over;
		uint32_t ic_clr_rd_req;
		uint32_t ic_clr_tx_abrt;
		uint32_t ic_clr_rx_done;
		uint32_t ic_clr_activity;
		uint32_t ic_clr_stop_det;
		uint32_t ic_clr_start_det;
		uint32_t ic_clr_gen_call;
		uint32_t ic_enable;
		uint32_t ic_status;
		uint32_t ic_txflr;
		uint32_t ic_rxflr;
		uint32_t ic_sda_hold;
		uint32_t ic_tx_abrt_source;
		uint32_t ic_slv_data_nack_only;
		uint32_t ic_dma_cr;
		uint32_t ic_dma_tdlr;
		uint32_t ic_dma_rdlr;
		uint32_t ic_sda_setup;
		uint32_t ic_ack_general_call;
		uint32_t ic_enable_status;
		uint32_t ic_fs_spklen;
		uint32_t RSVD2;
		uint32_t ic_clr_restart_det;
		uint32_t RSVD3[18];
		uint32_t ic_comp_param_1;
		uint32_t ic_comp_version;
		uint32_t ic_comp_type;
		uint32_t RSVD4[960];
		uint32_t xor_ic_con;
		uint32_t xor_ic_tar;
		uint32_t xor_ic_sar;
		uint32_t RSVDxor_0;
		uint32_t xor_ic_data_cmd;
		uint32_t xor_ic_ss_scl_hcnt;
		uint32_t xor_ic_ss_scl_lcnt;
		uint32_t xor_ic_fs_scl_hcnt;
		uint32_t xor_ic_fs_scl_lcnt;
		uint32_t RSVDxor_1[2];
		uint32_t xor_ic_intr_stat;
		uint32_t xor_ic_intr_mask;
		uint32_t xor_ic_raw_intr_stat;
		uint32_t xor_ic_rx_tl;
		uint32_t xor_ic_tx_tl;
		uint32_t xor_ic_clr_intr;
		uint32_t xor_ic_clr_rx_under;
		uint32_t xor_ic_clr_rx_over;
		uint32_t xor_ic_clr_tx_over;
		uint32_t xor_ic_clr_rd_req;
		uint32_t xor_ic_clr_tx_abrt;
		uint32_t xor_ic_clr_rx_done;
		uint32_t xor_ic_clr_activity;
		uint32_t xor_ic_clr_stop_det;
		uint32_t xor_ic_clr_start_det;
		uint32_t xor_ic_clr_gen_call;
		uint32_t xor_ic_enable;
		uint32_t xor_ic_status;
		uint32_t xor_ic_txflr;
		uint32_t xor_ic_rxflr;
		uint32_t xor_ic_sda_hold;
		uint32_t xor_ic_tx_abrt_source;
		uint32_t xor_ic_slv_data_nack_only;
		uint32_t xor_ic_dma_cr;
		uint32_t xor_ic_dma_tdlr;
		uint32_t xor_ic_dma_rdlr;
		uint32_t xor_ic_sda_setup;
		uint32_t xor_ic_ack_general_call;
		uint32_t xor_ic_enable_status;
		uint32_t xor_ic_fs_spklen;
		uint32_t RSVDxor_2;
		uint32_t xor_ic_clr_restart_det;
		uint32_t RSVDxor_3[18];
		uint32_t xor_ic_comp_param_1;
		uint32_t xor_ic_comp_version;
		uint32_t xor_ic_comp_type;
		uint32_t RSVDxor_4[960];
		uint32_t set_ic_con;
		uint32_t set_ic_tar;
		uint32_t set_ic_sar;
		uint32_t RSVDset_0;
		uint32_t set_ic_data_cmd;
		uint32_t set_ic_ss_scl_hcnt;
		uint32_t set_ic_ss_scl_lcnt;
		uint32_t set_ic_fs_scl_hcnt;
		uint32_t set_ic_fs_scl_lcnt;
		uint32_t RSVDset_1[2];
		uint32_t set_ic_intr_stat;
		uint32_t set_ic_intr_mask;
		uint32_t set_ic_raw_intr_stat;
		uint32_t set_ic_rx_tl;
		uint32_t set_ic_tx_tl;
		uint32_t set_ic_clr_intr;
		uint32_t set_ic_clr_rx_under;
		uint32_t set_ic_clr_rx_over;
		uint32_t set_ic_clr_tx_over;
		uint32_t set_ic_clr_rd_req;
		uint32_t set_ic_clr_tx_abrt;
		uint32_t set_ic_clr_rx_done;
		uint32_t set_ic_clr_activity;
		uint32_t set_ic_clr_stop_det;
		uint32_t set_ic_clr_start_det;
		uint32_t set_ic_clr_gen_call;
		uint32_t set_ic_enable;
		uint32_t set_ic_status;
		uint32_t set_ic_txflr;
		uint32_t set_ic_rxflr;
		uint32_t set_ic_sda_hold;
		uint32_t set_ic_tx_abrt_source;
		uint32_t set_ic_slv_data_nack_only;
		uint32_t set_ic_dma_cr;
		uint32_t set_ic_dma_tdlr;
		uint32_t set_ic_dma_rdlr;
		uint32_t set_ic_sda_setup;
		uint32_t set_ic_ack_general_call;
		uint32_t set_ic_enable_status;
		uint32_t set_ic_fs_spklen;
		uint32_t RSVDset_2;
		uint32_t set_ic_clr_restart_det;
		uint32_t RSVDset_3[18];
		uint32_t set_ic_comp_param_1;
		uint32_t set_ic_comp_version;
		uint32_t set_ic_comp_type;
		uint32_t RSVDset_4[960];
		uint32_t clr_ic_con;
		uint32_t clr_ic_tar;
		uint32_t clr_ic_sar;
		uint32_t RSVDclr_0;
		uint32_t clr_ic_data_cmd;
		uint32_t clr_ic_ss_scl_hcnt;
		uint32_t clr_ic_ss_scl_lcnt;
		uint32_t clr_ic_fs_scl_hcnt;
		uint32_t clr_ic_fs_scl_lcnt;
		uint32_t RSVDclr_1[2];
		uint32_t clr_ic_intr_stat;
		uint32_t clr_ic_intr_mask;
		uint32_t clr_ic_raw_intr_stat;
		uint32_t clr_ic_rx_tl;
		uint32_t clr_ic_tx_tl;
		uint32_t clr_ic_clr_intr;
		uint32_t clr_ic_clr_rx_under;
		uint32_t clr_ic_clr_rx_over;
		uint32_t clr_ic_clr_tx_over;
		uint32_t clr_ic_clr_rd_req;
		uint32_t clr_ic_clr_tx_abrt;
		uint32_t clr_ic_clr_rx_done;
		uint32_t clr_ic_clr_activity;
		uint32_t clr_ic_clr_stop_det;
		uint32_t clr_ic_clr_start_det;
		uint32_t clr_ic_clr_gen_call;
		uint32_t clr_ic_enable;
		uint32_t clr_ic_status;
		uint32_t clr_ic_txflr;
		uint32_t clr_ic_rxflr;
		uint32_t clr_ic_sda_hold;
		uint32_t clr_ic_tx_abrt_source;
		uint32_t clr_ic_slv_data_nack_only;
		uint32_t clr_ic_dma_cr;
		uint32_t clr_ic_dma_tdlr;
		uint32_t clr_ic_dma_rdlr;
		uint32_t clr_ic_sda_setup;
		uint32_t clr_ic_ack_general_call;
		uint32_t clr_ic_enable_status;
		uint32_t clr_ic_fs_spklen;
		uint32_t RSVDclr_2;
		uint32_t clr_ic_clr_restart_det;
		uint32_t RSVDclr_3[18];
		uint32_t clr_ic_comp_param_1;
		uint32_t clr_ic_comp_version;
		uint32_t clr_ic_comp_type;
		uint32_t RSVDclr_4[960];
} I2C1_REG_BLOCKS;

#define i2c0 ((I2C0_REG_BLOCKS volatile *)0x40090000)

#define i2c1 ((I2C1_REG_BLOCKS volatile *)0x40098000)

/*IC_CON Register macros*/

#define I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE(v) (((v)&0x1)<<10)
#define I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE_MASK I2C0_IC_CON_STOP_DET_IF_MASTER_ACTIVE(ALL1)
#define I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL(v) (((v)&0x1)<<9)
#define I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL_MASK I2C0_IC_CON_RX_FIFO_FULL_HLD_CTRL(ALL1)
#define I2C0_IC_CON_TX_EMPTY_CTRL(v) (((v)&0x1)<<8)
#define I2C0_IC_CON_TX_EMPTY_CTRL_MASK I2C0_IC_CON_TX_EMPTY_CTRL(ALL1)
#define I2C0_IC_CON_STOP_DET_IFADDRESSED(v) (((v)&0x1)<<7)
#define I2C0_IC_CON_STOP_DET_IFADDRESSED_MASK I2C0_IC_CON_STOP_DET_IFADDRESSED(ALL1)
#define I2C0_IC_CON_IC_SLAVE_DISABLE(v) (((v)&0x1)<<6)
#define I2C0_IC_CON_IC_SLAVE_DISABLE_MASK I2C0_IC_CON_IC_SLAVE_DISABLE(ALL1)
#define I2C0_IC_CON_IC_RESTART_EN(v) (((v)&0x1)<<5)
#define I2C0_IC_CON_IC_RESTART_EN_MASK I2C0_IC_CON_IC_RESTART_EN(ALL1)
#define I2C0_IC_CON_IC_10BITADDR_MASTER(v) (((v)&0x1)<<4)
#define I2C0_IC_CON_IC_10BITADDR_MASTER_MASK I2C0_IC_CON_IC_10BITADDR_MASTER(ALL1)
#define I2C0_IC_CON_IC_10BITADDR_SLAVE(v) (((v)&0x1)<<3)
#define I2C0_IC_CON_IC_10BITADDR_SLAVE_MASK I2C0_IC_CON_IC_10BITADDR_SLAVE(ALL1)
#define I2C0_IC_CON_SPEED(v) (((v)&0x3)<<1)
#define I2C0_IC_CON_SPEED_MASK I2C0_IC_CON_SPEED(ALL1)
#define I2C0_IC_CON_MASTER_MODE(v) (((v)&0x1)<<0)
#define I2C0_IC_CON_MASTER_MODE_MASK I2C0_IC_CON_MASTER_MODE(ALL1)

/*IC_TAR Register macros*/

#define I2C0_IC_TAR_SPECIAL(v) (((v)&0x1)<<11)
#define I2C0_IC_TAR_SPECIAL_MASK I2C0_IC_TAR_SPECIAL(ALL1)
#define I2C0_IC_TAR_GC_OR_START(v) (((v)&0x1)<<10)
#define I2C0_IC_TAR_GC_OR_START_MASK I2C0_IC_TAR_GC_OR_START(ALL1)
#define I2C0_IC_TAR_IC_TAR(v) (((v)&0x3ff)<<0)
#define I2C0_IC_TAR_IC_TAR_MASK I2C0_IC_TAR_IC_TAR(ALL1)

/*IC_SAR Register macros*/

#define I2C0_IC_SAR_IC_SAR(v) (((v)&0x3ff)<<0)
#define I2C0_IC_SAR_IC_SAR_MASK I2C0_IC_SAR_IC_SAR(ALL1)

/*IC_DATA_CMD Register macros*/

#define I2C0_IC_DATA_CMD_FIRST_DATA_BYTE(v) (((v)&0x1)<<11)
#define I2C0_IC_DATA_CMD_FIRST_DATA_BYTE_MASK I2C0_IC_DATA_CMD_FIRST_DATA_BYTE(ALL1)
#define I2C0_IC_DATA_CMD_RESTART(v) (((v)&0x1)<<10)
#define I2C0_IC_DATA_CMD_RESTART_MASK I2C0_IC_DATA_CMD_RESTART(ALL1)
#define I2C0_IC_DATA_CMD_STOP(v) (((v)&0x1)<<9)
#define I2C0_IC_DATA_CMD_STOP_MASK I2C0_IC_DATA_CMD_STOP(ALL1)
#define I2C0_IC_DATA_CMD_CMD(v) (((v)&0x1)<<8)
#define I2C0_IC_DATA_CMD_CMD_MASK I2C0_IC_DATA_CMD_CMD(ALL1)
#define I2C0_IC_DATA_CMD_DAT(v) (((v)&0xff)<<0)
#define I2C0_IC_DATA_CMD_DAT_MASK I2C0_IC_DATA_CMD_DAT(ALL1)

/*IC_SS_SCL_HCNT Register macros*/

#define I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_MASK I2C0_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(ALL1)

/*IC_SS_SCL_LCNT Register macros*/

#define I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_MASK I2C0_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(ALL1)

/*IC_FS_SCL_HCNT Register macros*/

#define I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_MASK I2C0_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(ALL1)

/*IC_FS_SCL_LCNT Register macros*/

#define I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_MASK I2C0_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(ALL1)

/*IC_INTR_STAT Register macros*/

#define I2C0_IC_INTR_STAT_R_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_INTR_STAT_R_RESTART_DET_MASK I2C0_IC_INTR_STAT_R_RESTART_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_INTR_STAT_R_GEN_CALL_MASK I2C0_IC_INTR_STAT_R_GEN_CALL(ALL1)
#define I2C0_IC_INTR_STAT_R_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_INTR_STAT_R_START_DET_MASK I2C0_IC_INTR_STAT_R_START_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_INTR_STAT_R_STOP_DET_MASK I2C0_IC_INTR_STAT_R_STOP_DET(ALL1)
#define I2C0_IC_INTR_STAT_R_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_INTR_STAT_R_ACTIVITY_MASK I2C0_IC_INTR_STAT_R_ACTIVITY(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_INTR_STAT_R_RX_DONE_MASK I2C0_IC_INTR_STAT_R_RX_DONE(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_INTR_STAT_R_TX_ABRT_MASK I2C0_IC_INTR_STAT_R_TX_ABRT(ALL1)
#define I2C0_IC_INTR_STAT_R_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_INTR_STAT_R_RD_REQ_MASK I2C0_IC_INTR_STAT_R_RD_REQ(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_INTR_STAT_R_TX_EMPTY_MASK I2C0_IC_INTR_STAT_R_TX_EMPTY(ALL1)
#define I2C0_IC_INTR_STAT_R_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_INTR_STAT_R_TX_OVER_MASK I2C0_IC_INTR_STAT_R_TX_OVER(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_INTR_STAT_R_RX_FULL_MASK I2C0_IC_INTR_STAT_R_RX_FULL(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_INTR_STAT_R_RX_OVER_MASK I2C0_IC_INTR_STAT_R_RX_OVER(ALL1)
#define I2C0_IC_INTR_STAT_R_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_INTR_STAT_R_RX_UNDER_MASK I2C0_IC_INTR_STAT_R_RX_UNDER(ALL1)

/*IC_INTR_MASK Register macros*/

#define I2C0_IC_INTR_MASK_M_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_INTR_MASK_M_RESTART_DET_MASK I2C0_IC_INTR_MASK_M_RESTART_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_INTR_MASK_M_GEN_CALL_MASK I2C0_IC_INTR_MASK_M_GEN_CALL(ALL1)
#define I2C0_IC_INTR_MASK_M_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_INTR_MASK_M_START_DET_MASK I2C0_IC_INTR_MASK_M_START_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_INTR_MASK_M_STOP_DET_MASK I2C0_IC_INTR_MASK_M_STOP_DET(ALL1)
#define I2C0_IC_INTR_MASK_M_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_INTR_MASK_M_ACTIVITY_MASK I2C0_IC_INTR_MASK_M_ACTIVITY(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_INTR_MASK_M_RX_DONE_MASK I2C0_IC_INTR_MASK_M_RX_DONE(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_INTR_MASK_M_TX_ABRT_MASK I2C0_IC_INTR_MASK_M_TX_ABRT(ALL1)
#define I2C0_IC_INTR_MASK_M_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_INTR_MASK_M_RD_REQ_MASK I2C0_IC_INTR_MASK_M_RD_REQ(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_INTR_MASK_M_TX_EMPTY_MASK I2C0_IC_INTR_MASK_M_TX_EMPTY(ALL1)
#define I2C0_IC_INTR_MASK_M_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_INTR_MASK_M_TX_OVER_MASK I2C0_IC_INTR_MASK_M_TX_OVER(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_INTR_MASK_M_RX_FULL_MASK I2C0_IC_INTR_MASK_M_RX_FULL(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_INTR_MASK_M_RX_OVER_MASK I2C0_IC_INTR_MASK_M_RX_OVER(ALL1)
#define I2C0_IC_INTR_MASK_M_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_INTR_MASK_M_RX_UNDER_MASK I2C0_IC_INTR_MASK_M_RX_UNDER(ALL1)

/*IC_RAW_INTR_STAT Register macros*/

#define I2C0_IC_RAW_INTR_STAT_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C0_IC_RAW_INTR_STAT_RESTART_DET_MASK I2C0_IC_RAW_INTR_STAT_RESTART_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C0_IC_RAW_INTR_STAT_GEN_CALL_MASK I2C0_IC_RAW_INTR_STAT_GEN_CALL(ALL1)
#define I2C0_IC_RAW_INTR_STAT_START_DET(v) (((v)&0x1)<<10)
#define I2C0_IC_RAW_INTR_STAT_START_DET_MASK I2C0_IC_RAW_INTR_STAT_START_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_STOP_DET(v) (((v)&0x1)<<9)
#define I2C0_IC_RAW_INTR_STAT_STOP_DET_MASK I2C0_IC_RAW_INTR_STAT_STOP_DET(ALL1)
#define I2C0_IC_RAW_INTR_STAT_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C0_IC_RAW_INTR_STAT_ACTIVITY_MASK I2C0_IC_RAW_INTR_STAT_ACTIVITY(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_DONE(v) (((v)&0x1)<<7)
#define I2C0_IC_RAW_INTR_STAT_RX_DONE_MASK I2C0_IC_RAW_INTR_STAT_RX_DONE(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C0_IC_RAW_INTR_STAT_TX_ABRT_MASK I2C0_IC_RAW_INTR_STAT_TX_ABRT(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RD_REQ(v) (((v)&0x1)<<5)
#define I2C0_IC_RAW_INTR_STAT_RD_REQ_MASK I2C0_IC_RAW_INTR_STAT_RD_REQ(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C0_IC_RAW_INTR_STAT_TX_EMPTY_MASK I2C0_IC_RAW_INTR_STAT_TX_EMPTY(ALL1)
#define I2C0_IC_RAW_INTR_STAT_TX_OVER(v) (((v)&0x1)<<3)
#define I2C0_IC_RAW_INTR_STAT_TX_OVER_MASK I2C0_IC_RAW_INTR_STAT_TX_OVER(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_FULL(v) (((v)&0x1)<<2)
#define I2C0_IC_RAW_INTR_STAT_RX_FULL_MASK I2C0_IC_RAW_INTR_STAT_RX_FULL(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_OVER(v) (((v)&0x1)<<1)
#define I2C0_IC_RAW_INTR_STAT_RX_OVER_MASK I2C0_IC_RAW_INTR_STAT_RX_OVER(ALL1)
#define I2C0_IC_RAW_INTR_STAT_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_RAW_INTR_STAT_RX_UNDER_MASK I2C0_IC_RAW_INTR_STAT_RX_UNDER(ALL1)

/*IC_RX_TL Register macros*/

#define I2C0_IC_RX_TL_RX_TL(v) (((v)&0xff)<<0)
#define I2C0_IC_RX_TL_RX_TL_MASK I2C0_IC_RX_TL_RX_TL(ALL1)

/*IC_TX_TL Register macros*/

#define I2C0_IC_TX_TL_TX_TL(v) (((v)&0xff)<<0)
#define I2C0_IC_TX_TL_TX_TL_MASK I2C0_IC_TX_TL_TX_TL(ALL1)

/*IC_CLR_INTR Register macros*/

#define I2C0_IC_CLR_INTR_CLR_INTR(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_INTR_CLR_INTR_MASK I2C0_IC_CLR_INTR_CLR_INTR(ALL1)

/*IC_CLR_RX_UNDER Register macros*/

#define I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER_MASK I2C0_IC_CLR_RX_UNDER_CLR_RX_UNDER(ALL1)

/*IC_CLR_RX_OVER Register macros*/

#define I2C0_IC_CLR_RX_OVER_CLR_RX_OVER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_OVER_CLR_RX_OVER_MASK I2C0_IC_CLR_RX_OVER_CLR_RX_OVER(ALL1)

/*IC_CLR_TX_OVER Register macros*/

#define I2C0_IC_CLR_TX_OVER_CLR_TX_OVER(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_TX_OVER_CLR_TX_OVER_MASK I2C0_IC_CLR_TX_OVER_CLR_TX_OVER(ALL1)

/*IC_CLR_RD_REQ Register macros*/

#define I2C0_IC_CLR_RD_REQ_CLR_RD_REQ(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RD_REQ_CLR_RD_REQ_MASK I2C0_IC_CLR_RD_REQ_CLR_RD_REQ(ALL1)

/*IC_CLR_TX_ABRT Register macros*/

#define I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT_MASK I2C0_IC_CLR_TX_ABRT_CLR_TX_ABRT(ALL1)

/*IC_CLR_RX_DONE Register macros*/

#define I2C0_IC_CLR_RX_DONE_CLR_RX_DONE(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RX_DONE_CLR_RX_DONE_MASK I2C0_IC_CLR_RX_DONE_CLR_RX_DONE(ALL1)

/*IC_CLR_ACTIVITY Register macros*/

#define I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY_MASK I2C0_IC_CLR_ACTIVITY_CLR_ACTIVITY(ALL1)

/*IC_CLR_STOP_DET Register macros*/

#define I2C0_IC_CLR_STOP_DET_CLR_STOP_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_STOP_DET_CLR_STOP_DET_MASK I2C0_IC_CLR_STOP_DET_CLR_STOP_DET(ALL1)

/*IC_CLR_START_DET Register macros*/

#define I2C0_IC_CLR_START_DET_CLR_START_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_START_DET_CLR_START_DET_MASK I2C0_IC_CLR_START_DET_CLR_START_DET(ALL1)

/*IC_CLR_GEN_CALL Register macros*/

#define I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL_MASK I2C0_IC_CLR_GEN_CALL_CLR_GEN_CALL(ALL1)

/*IC_ENABLE Register macros*/

#define I2C0_IC_ENABLE_TX_CMD_BLOCK(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_TX_CMD_BLOCK_MASK I2C0_IC_ENABLE_TX_CMD_BLOCK(ALL1)
#define I2C0_IC_ENABLE_ABORT(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_ABORT_MASK I2C0_IC_ENABLE_ABORT(ALL1)
#define I2C0_IC_ENABLE_ENABLE(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_ENABLE_MASK I2C0_IC_ENABLE_ENABLE(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C0_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_STATUS_IC_EN_MASK I2C0_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_STATUS Register macros*/

#define I2C0_IC_STATUS_SLV_ACTIVITY(v) (((v)&0x1)<<6)
#define I2C0_IC_STATUS_SLV_ACTIVITY_MASK I2C0_IC_STATUS_SLV_ACTIVITY(ALL1)
#define I2C0_IC_STATUS_MST_ACTIVITY(v) (((v)&0x1)<<5)
#define I2C0_IC_STATUS_MST_ACTIVITY_MASK I2C0_IC_STATUS_MST_ACTIVITY(ALL1)
#define I2C0_IC_STATUS_RFF(v) (((v)&0x1)<<4)
#define I2C0_IC_STATUS_RFF_MASK I2C0_IC_STATUS_RFF(ALL1)
#define I2C0_IC_STATUS_RFNE(v) (((v)&0x1)<<3)
#define I2C0_IC_STATUS_RFNE_MASK I2C0_IC_STATUS_RFNE(ALL1)
#define I2C0_IC_STATUS_TFE(v) (((v)&0x1)<<2)
#define I2C0_IC_STATUS_TFE_MASK I2C0_IC_STATUS_TFE(ALL1)
#define I2C0_IC_STATUS_TFNF(v) (((v)&0x1)<<1)
#define I2C0_IC_STATUS_TFNF_MASK I2C0_IC_STATUS_TFNF(ALL1)
#define I2C0_IC_STATUS_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C0_IC_STATUS_ACTIVITY_MASK I2C0_IC_STATUS_ACTIVITY(ALL1)

/*IC_TXFLR Register macros*/

#define I2C0_IC_TXFLR_TXFLR(v) (((v)&0x1f)<<0)
#define I2C0_IC_TXFLR_TXFLR_MASK I2C0_IC_TXFLR_TXFLR(ALL1)

/*IC_RXFLR Register macros*/

#define I2C0_IC_RXFLR_RXFLR(v) (((v)&0x1f)<<0)
#define I2C0_IC_RXFLR_RXFLR_MASK I2C0_IC_RXFLR_RXFLR(ALL1)

/*IC_SDA_HOLD Register macros*/

#define I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD(v) (((v)&0xff)<<16)
#define I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD_MASK I2C0_IC_SDA_HOLD_IC_SDA_RX_HOLD(ALL1)
#define I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD(v) (((v)&0xffff)<<0)
#define I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD_MASK I2C0_IC_SDA_HOLD_IC_SDA_TX_HOLD(ALL1)

/*IC_TX_ABRT_SOURCE Register macros*/

#define I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(v) (((v)&0x1ff)<<23)
#define I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MASK I2C0_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(v) (((v)&0x1)<<16)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(v) (((v)&0x1)<<15)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(v) (((v)&0x1)<<14)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(v) (((v)&0x1)<<13)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ARB_LOST(v) (((v)&0x1)<<12)
#define I2C0_IC_TX_ABRT_SOURCE_ARB_LOST_MASK I2C0_IC_TX_ABRT_SOURCE_ARB_LOST(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(v) (((v)&0x1)<<11)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(v) (((v)&0x1)<<10)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(v) (((v)&0x1)<<9)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(v) (((v)&0x1)<<8)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(v) (((v)&0x1)<<7)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(v) (((v)&0x1)<<6)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(v) (((v)&0x1)<<5)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(v) (((v)&0x1)<<4)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(v) (((v)&0x1)<<3)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(v) (((v)&0x1)<<2)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(v) (((v)&0x1)<<1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(ALL1)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(v) (((v)&0x1)<<0)
#define I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_MASK I2C0_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(ALL1)

/*IC_SLV_DATA_NACK_ONLY Register macros*/

#define I2C0_IC_SLV_DATA_NACK_ONLY_NACK(v) (((v)&0x1)<<0)
#define I2C0_IC_SLV_DATA_NACK_ONLY_NACK_MASK I2C0_IC_SLV_DATA_NACK_ONLY_NACK(ALL1)

/*IC_DMA_CR Register macros*/

#define I2C0_IC_DMA_CR_TDMAE(v) (((v)&0x1)<<1)
#define I2C0_IC_DMA_CR_TDMAE_MASK I2C0_IC_DMA_CR_TDMAE(ALL1)
#define I2C0_IC_DMA_CR_RDMAE(v) (((v)&0x1)<<0)
#define I2C0_IC_DMA_CR_RDMAE_MASK I2C0_IC_DMA_CR_RDMAE(ALL1)

/*IC_DMA_TDLR Register macros*/

#define I2C0_IC_DMA_TDLR_DMATDL(v) (((v)&0xf)<<0)
#define I2C0_IC_DMA_TDLR_DMATDL_MASK I2C0_IC_DMA_TDLR_DMATDL(ALL1)

/*IC_DMA_RDLR Register macros*/

#define I2C0_IC_DMA_RDLR_DMARDL(v) (((v)&0xf)<<0)
#define I2C0_IC_DMA_RDLR_DMARDL_MASK I2C0_IC_DMA_RDLR_DMARDL(ALL1)

/*IC_SDA_SETUP Register macros*/

#define I2C0_IC_SDA_SETUP_SDA_SETUP(v) (((v)&0xff)<<0)
#define I2C0_IC_SDA_SETUP_SDA_SETUP_MASK I2C0_IC_SDA_SETUP_SDA_SETUP(ALL1)

/*IC_ACK_GENERAL_CALL Register macros*/

#define I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_MASK I2C0_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(ALL1)

/*IC_ENABLE_STATUS Register macros*/

#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C0_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C0_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C0_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C0_IC_ENABLE_STATUS_IC_EN_MASK I2C0_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_FS_SPKLEN Register macros*/

#define I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN(v) (((v)&0xff)<<0)
#define I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN_MASK I2C0_IC_FS_SPKLEN_IC_FS_SPKLEN(ALL1)

/*IC_CLR_RESTART_DET Register macros*/

#define I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET(v) (((v)&0x1)<<0)
#define I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET_MASK I2C0_IC_CLR_RESTART_DET_CLR_RESTART_DET(ALL1)

/*IC_COMP_PARAM_1 Register macros*/

#define I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(v) (((v)&0xff)<<16)
#define I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MASK I2C0_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(ALL1)
#define I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(v) (((v)&0xff)<<8)
#define I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MASK I2C0_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(ALL1)
#define I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(v) (((v)&0x1)<<7)
#define I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_MASK I2C0_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(ALL1)
#define I2C0_IC_COMP_PARAM_1_HAS_DMA(v) (((v)&0x1)<<6)
#define I2C0_IC_COMP_PARAM_1_HAS_DMA_MASK I2C0_IC_COMP_PARAM_1_HAS_DMA(ALL1)
#define I2C0_IC_COMP_PARAM_1_INTR_IO(v) (((v)&0x1)<<5)
#define I2C0_IC_COMP_PARAM_1_INTR_IO_MASK I2C0_IC_COMP_PARAM_1_INTR_IO(ALL1)
#define I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES(v) (((v)&0x1)<<4)
#define I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES_MASK I2C0_IC_COMP_PARAM_1_HC_COUNT_VALUES(ALL1)
#define I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE(v) (((v)&0x3)<<2)
#define I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE_MASK I2C0_IC_COMP_PARAM_1_MAX_SPEED_MODE(ALL1)
#define I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH(v) (((v)&0x3)<<0)
#define I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH_MASK I2C0_IC_COMP_PARAM_1_APB_DATA_WIDTH(ALL1)

/*IC_COMP_VERSION Register macros*/

#define I2C0_IC_COMP_VERSION_IC_COMP_VERSION(v) (((v)&0xffffffff)<<0)
#define I2C0_IC_COMP_VERSION_IC_COMP_VERSION_MASK I2C0_IC_COMP_VERSION_IC_COMP_VERSION(ALL1)

/*IC_COMP_TYPE Register macros*/

#define I2C0_IC_COMP_TYPE_IC_COMP_TYPE(v) (((v)&0xffffffff)<<0)
#define I2C0_IC_COMP_TYPE_IC_COMP_TYPE_MASK I2C0_IC_COMP_TYPE_IC_COMP_TYPE(ALL1)

/*IC_CON Register macros*/

#define I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE(v) (((v)&0x1)<<10)
#define I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE_MASK I2C1_IC_CON_STOP_DET_IF_MASTER_ACTIVE(ALL1)
#define I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL(v) (((v)&0x1)<<9)
#define I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL_MASK I2C1_IC_CON_RX_FIFO_FULL_HLD_CTRL(ALL1)
#define I2C1_IC_CON_TX_EMPTY_CTRL(v) (((v)&0x1)<<8)
#define I2C1_IC_CON_TX_EMPTY_CTRL_MASK I2C1_IC_CON_TX_EMPTY_CTRL(ALL1)
#define I2C1_IC_CON_STOP_DET_IFADDRESSED(v) (((v)&0x1)<<7)
#define I2C1_IC_CON_STOP_DET_IFADDRESSED_MASK I2C1_IC_CON_STOP_DET_IFADDRESSED(ALL1)
#define I2C1_IC_CON_IC_SLAVE_DISABLE(v) (((v)&0x1)<<6)
#define I2C1_IC_CON_IC_SLAVE_DISABLE_MASK I2C1_IC_CON_IC_SLAVE_DISABLE(ALL1)
#define I2C1_IC_CON_IC_RESTART_EN(v) (((v)&0x1)<<5)
#define I2C1_IC_CON_IC_RESTART_EN_MASK I2C1_IC_CON_IC_RESTART_EN(ALL1)
#define I2C1_IC_CON_IC_10BITADDR_MASTER(v) (((v)&0x1)<<4)
#define I2C1_IC_CON_IC_10BITADDR_MASTER_MASK I2C1_IC_CON_IC_10BITADDR_MASTER(ALL1)
#define I2C1_IC_CON_IC_10BITADDR_SLAVE(v) (((v)&0x1)<<3)
#define I2C1_IC_CON_IC_10BITADDR_SLAVE_MASK I2C1_IC_CON_IC_10BITADDR_SLAVE(ALL1)
#define I2C1_IC_CON_SPEED(v) (((v)&0x3)<<1)
#define I2C1_IC_CON_SPEED_MASK I2C1_IC_CON_SPEED(ALL1)
#define I2C1_IC_CON_MASTER_MODE(v) (((v)&0x1)<<0)
#define I2C1_IC_CON_MASTER_MODE_MASK I2C1_IC_CON_MASTER_MODE(ALL1)

/*IC_TAR Register macros*/

#define I2C1_IC_TAR_SPECIAL(v) (((v)&0x1)<<11)
#define I2C1_IC_TAR_SPECIAL_MASK I2C1_IC_TAR_SPECIAL(ALL1)
#define I2C1_IC_TAR_GC_OR_START(v) (((v)&0x1)<<10)
#define I2C1_IC_TAR_GC_OR_START_MASK I2C1_IC_TAR_GC_OR_START(ALL1)
#define I2C1_IC_TAR_IC_TAR(v) (((v)&0x3ff)<<0)
#define I2C1_IC_TAR_IC_TAR_MASK I2C1_IC_TAR_IC_TAR(ALL1)

/*IC_SAR Register macros*/

#define I2C1_IC_SAR_IC_SAR(v) (((v)&0x3ff)<<0)
#define I2C1_IC_SAR_IC_SAR_MASK I2C1_IC_SAR_IC_SAR(ALL1)

/*IC_DATA_CMD Register macros*/

#define I2C1_IC_DATA_CMD_FIRST_DATA_BYTE(v) (((v)&0x1)<<11)
#define I2C1_IC_DATA_CMD_FIRST_DATA_BYTE_MASK I2C1_IC_DATA_CMD_FIRST_DATA_BYTE(ALL1)
#define I2C1_IC_DATA_CMD_RESTART(v) (((v)&0x1)<<10)
#define I2C1_IC_DATA_CMD_RESTART_MASK I2C1_IC_DATA_CMD_RESTART(ALL1)
#define I2C1_IC_DATA_CMD_STOP(v) (((v)&0x1)<<9)
#define I2C1_IC_DATA_CMD_STOP_MASK I2C1_IC_DATA_CMD_STOP(ALL1)
#define I2C1_IC_DATA_CMD_CMD(v) (((v)&0x1)<<8)
#define I2C1_IC_DATA_CMD_CMD_MASK I2C1_IC_DATA_CMD_CMD(ALL1)
#define I2C1_IC_DATA_CMD_DAT(v) (((v)&0xff)<<0)
#define I2C1_IC_DATA_CMD_DAT_MASK I2C1_IC_DATA_CMD_DAT(ALL1)

/*IC_SS_SCL_HCNT Register macros*/

#define I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT_MASK I2C1_IC_SS_SCL_HCNT_IC_SS_SCL_HCNT(ALL1)

/*IC_SS_SCL_LCNT Register macros*/

#define I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT_MASK I2C1_IC_SS_SCL_LCNT_IC_SS_SCL_LCNT(ALL1)

/*IC_FS_SCL_HCNT Register macros*/

#define I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT_MASK I2C1_IC_FS_SCL_HCNT_IC_FS_SCL_HCNT(ALL1)

/*IC_FS_SCL_LCNT Register macros*/

#define I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(v) (((v)&0xffff)<<0)
#define I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT_MASK I2C1_IC_FS_SCL_LCNT_IC_FS_SCL_LCNT(ALL1)

/*IC_INTR_STAT Register macros*/

#define I2C1_IC_INTR_STAT_R_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_INTR_STAT_R_RESTART_DET_MASK I2C1_IC_INTR_STAT_R_RESTART_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_INTR_STAT_R_GEN_CALL_MASK I2C1_IC_INTR_STAT_R_GEN_CALL(ALL1)
#define I2C1_IC_INTR_STAT_R_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_INTR_STAT_R_START_DET_MASK I2C1_IC_INTR_STAT_R_START_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_INTR_STAT_R_STOP_DET_MASK I2C1_IC_INTR_STAT_R_STOP_DET(ALL1)
#define I2C1_IC_INTR_STAT_R_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_INTR_STAT_R_ACTIVITY_MASK I2C1_IC_INTR_STAT_R_ACTIVITY(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_INTR_STAT_R_RX_DONE_MASK I2C1_IC_INTR_STAT_R_RX_DONE(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_INTR_STAT_R_TX_ABRT_MASK I2C1_IC_INTR_STAT_R_TX_ABRT(ALL1)
#define I2C1_IC_INTR_STAT_R_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_INTR_STAT_R_RD_REQ_MASK I2C1_IC_INTR_STAT_R_RD_REQ(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_INTR_STAT_R_TX_EMPTY_MASK I2C1_IC_INTR_STAT_R_TX_EMPTY(ALL1)
#define I2C1_IC_INTR_STAT_R_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_INTR_STAT_R_TX_OVER_MASK I2C1_IC_INTR_STAT_R_TX_OVER(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_INTR_STAT_R_RX_FULL_MASK I2C1_IC_INTR_STAT_R_RX_FULL(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_INTR_STAT_R_RX_OVER_MASK I2C1_IC_INTR_STAT_R_RX_OVER(ALL1)
#define I2C1_IC_INTR_STAT_R_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_INTR_STAT_R_RX_UNDER_MASK I2C1_IC_INTR_STAT_R_RX_UNDER(ALL1)

/*IC_INTR_MASK Register macros*/

#define I2C1_IC_INTR_MASK_M_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_INTR_MASK_M_RESTART_DET_MASK I2C1_IC_INTR_MASK_M_RESTART_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_INTR_MASK_M_GEN_CALL_MASK I2C1_IC_INTR_MASK_M_GEN_CALL(ALL1)
#define I2C1_IC_INTR_MASK_M_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_INTR_MASK_M_START_DET_MASK I2C1_IC_INTR_MASK_M_START_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_INTR_MASK_M_STOP_DET_MASK I2C1_IC_INTR_MASK_M_STOP_DET(ALL1)
#define I2C1_IC_INTR_MASK_M_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_INTR_MASK_M_ACTIVITY_MASK I2C1_IC_INTR_MASK_M_ACTIVITY(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_INTR_MASK_M_RX_DONE_MASK I2C1_IC_INTR_MASK_M_RX_DONE(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_INTR_MASK_M_TX_ABRT_MASK I2C1_IC_INTR_MASK_M_TX_ABRT(ALL1)
#define I2C1_IC_INTR_MASK_M_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_INTR_MASK_M_RD_REQ_MASK I2C1_IC_INTR_MASK_M_RD_REQ(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_INTR_MASK_M_TX_EMPTY_MASK I2C1_IC_INTR_MASK_M_TX_EMPTY(ALL1)
#define I2C1_IC_INTR_MASK_M_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_INTR_MASK_M_TX_OVER_MASK I2C1_IC_INTR_MASK_M_TX_OVER(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_INTR_MASK_M_RX_FULL_MASK I2C1_IC_INTR_MASK_M_RX_FULL(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_INTR_MASK_M_RX_OVER_MASK I2C1_IC_INTR_MASK_M_RX_OVER(ALL1)
#define I2C1_IC_INTR_MASK_M_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_INTR_MASK_M_RX_UNDER_MASK I2C1_IC_INTR_MASK_M_RX_UNDER(ALL1)

/*IC_RAW_INTR_STAT Register macros*/

#define I2C1_IC_RAW_INTR_STAT_RESTART_DET(v) (((v)&0x1)<<12)
#define I2C1_IC_RAW_INTR_STAT_RESTART_DET_MASK I2C1_IC_RAW_INTR_STAT_RESTART_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_GEN_CALL(v) (((v)&0x1)<<11)
#define I2C1_IC_RAW_INTR_STAT_GEN_CALL_MASK I2C1_IC_RAW_INTR_STAT_GEN_CALL(ALL1)
#define I2C1_IC_RAW_INTR_STAT_START_DET(v) (((v)&0x1)<<10)
#define I2C1_IC_RAW_INTR_STAT_START_DET_MASK I2C1_IC_RAW_INTR_STAT_START_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_STOP_DET(v) (((v)&0x1)<<9)
#define I2C1_IC_RAW_INTR_STAT_STOP_DET_MASK I2C1_IC_RAW_INTR_STAT_STOP_DET(ALL1)
#define I2C1_IC_RAW_INTR_STAT_ACTIVITY(v) (((v)&0x1)<<8)
#define I2C1_IC_RAW_INTR_STAT_ACTIVITY_MASK I2C1_IC_RAW_INTR_STAT_ACTIVITY(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_DONE(v) (((v)&0x1)<<7)
#define I2C1_IC_RAW_INTR_STAT_RX_DONE_MASK I2C1_IC_RAW_INTR_STAT_RX_DONE(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_ABRT(v) (((v)&0x1)<<6)
#define I2C1_IC_RAW_INTR_STAT_TX_ABRT_MASK I2C1_IC_RAW_INTR_STAT_TX_ABRT(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RD_REQ(v) (((v)&0x1)<<5)
#define I2C1_IC_RAW_INTR_STAT_RD_REQ_MASK I2C1_IC_RAW_INTR_STAT_RD_REQ(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_EMPTY(v) (((v)&0x1)<<4)
#define I2C1_IC_RAW_INTR_STAT_TX_EMPTY_MASK I2C1_IC_RAW_INTR_STAT_TX_EMPTY(ALL1)
#define I2C1_IC_RAW_INTR_STAT_TX_OVER(v) (((v)&0x1)<<3)
#define I2C1_IC_RAW_INTR_STAT_TX_OVER_MASK I2C1_IC_RAW_INTR_STAT_TX_OVER(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_FULL(v) (((v)&0x1)<<2)
#define I2C1_IC_RAW_INTR_STAT_RX_FULL_MASK I2C1_IC_RAW_INTR_STAT_RX_FULL(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_OVER(v) (((v)&0x1)<<1)
#define I2C1_IC_RAW_INTR_STAT_RX_OVER_MASK I2C1_IC_RAW_INTR_STAT_RX_OVER(ALL1)
#define I2C1_IC_RAW_INTR_STAT_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_RAW_INTR_STAT_RX_UNDER_MASK I2C1_IC_RAW_INTR_STAT_RX_UNDER(ALL1)

/*IC_RX_TL Register macros*/

#define I2C1_IC_RX_TL_RX_TL(v) (((v)&0xff)<<0)
#define I2C1_IC_RX_TL_RX_TL_MASK I2C1_IC_RX_TL_RX_TL(ALL1)

/*IC_TX_TL Register macros*/

#define I2C1_IC_TX_TL_TX_TL(v) (((v)&0xff)<<0)
#define I2C1_IC_TX_TL_TX_TL_MASK I2C1_IC_TX_TL_TX_TL(ALL1)

/*IC_CLR_INTR Register macros*/

#define I2C1_IC_CLR_INTR_CLR_INTR(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_INTR_CLR_INTR_MASK I2C1_IC_CLR_INTR_CLR_INTR(ALL1)

/*IC_CLR_RX_UNDER Register macros*/

#define I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER_MASK I2C1_IC_CLR_RX_UNDER_CLR_RX_UNDER(ALL1)

/*IC_CLR_RX_OVER Register macros*/

#define I2C1_IC_CLR_RX_OVER_CLR_RX_OVER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_OVER_CLR_RX_OVER_MASK I2C1_IC_CLR_RX_OVER_CLR_RX_OVER(ALL1)

/*IC_CLR_TX_OVER Register macros*/

#define I2C1_IC_CLR_TX_OVER_CLR_TX_OVER(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_TX_OVER_CLR_TX_OVER_MASK I2C1_IC_CLR_TX_OVER_CLR_TX_OVER(ALL1)

/*IC_CLR_RD_REQ Register macros*/

#define I2C1_IC_CLR_RD_REQ_CLR_RD_REQ(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RD_REQ_CLR_RD_REQ_MASK I2C1_IC_CLR_RD_REQ_CLR_RD_REQ(ALL1)

/*IC_CLR_TX_ABRT Register macros*/

#define I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT_MASK I2C1_IC_CLR_TX_ABRT_CLR_TX_ABRT(ALL1)

/*IC_CLR_RX_DONE Register macros*/

#define I2C1_IC_CLR_RX_DONE_CLR_RX_DONE(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RX_DONE_CLR_RX_DONE_MASK I2C1_IC_CLR_RX_DONE_CLR_RX_DONE(ALL1)

/*IC_CLR_ACTIVITY Register macros*/

#define I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY_MASK I2C1_IC_CLR_ACTIVITY_CLR_ACTIVITY(ALL1)

/*IC_CLR_STOP_DET Register macros*/

#define I2C1_IC_CLR_STOP_DET_CLR_STOP_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_STOP_DET_CLR_STOP_DET_MASK I2C1_IC_CLR_STOP_DET_CLR_STOP_DET(ALL1)

/*IC_CLR_START_DET Register macros*/

#define I2C1_IC_CLR_START_DET_CLR_START_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_START_DET_CLR_START_DET_MASK I2C1_IC_CLR_START_DET_CLR_START_DET(ALL1)

/*IC_CLR_GEN_CALL Register macros*/

#define I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL_MASK I2C1_IC_CLR_GEN_CALL_CLR_GEN_CALL(ALL1)

/*IC_ENABLE Register macros*/

#define I2C1_IC_ENABLE_TX_CMD_BLOCK(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_TX_CMD_BLOCK_MASK I2C1_IC_ENABLE_TX_CMD_BLOCK(ALL1)
#define I2C1_IC_ENABLE_ABORT(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_ABORT_MASK I2C1_IC_ENABLE_ABORT(ALL1)
#define I2C1_IC_ENABLE_ENABLE(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_ENABLE_MASK I2C1_IC_ENABLE_ENABLE(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C1_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_STATUS_IC_EN_MASK I2C1_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_STATUS Register macros*/

#define I2C1_IC_STATUS_SLV_ACTIVITY(v) (((v)&0x1)<<6)
#define I2C1_IC_STATUS_SLV_ACTIVITY_MASK I2C1_IC_STATUS_SLV_ACTIVITY(ALL1)
#define I2C1_IC_STATUS_MST_ACTIVITY(v) (((v)&0x1)<<5)
#define I2C1_IC_STATUS_MST_ACTIVITY_MASK I2C1_IC_STATUS_MST_ACTIVITY(ALL1)
#define I2C1_IC_STATUS_RFF(v) (((v)&0x1)<<4)
#define I2C1_IC_STATUS_RFF_MASK I2C1_IC_STATUS_RFF(ALL1)
#define I2C1_IC_STATUS_RFNE(v) (((v)&0x1)<<3)
#define I2C1_IC_STATUS_RFNE_MASK I2C1_IC_STATUS_RFNE(ALL1)
#define I2C1_IC_STATUS_TFE(v) (((v)&0x1)<<2)
#define I2C1_IC_STATUS_TFE_MASK I2C1_IC_STATUS_TFE(ALL1)
#define I2C1_IC_STATUS_TFNF(v) (((v)&0x1)<<1)
#define I2C1_IC_STATUS_TFNF_MASK I2C1_IC_STATUS_TFNF(ALL1)
#define I2C1_IC_STATUS_ACTIVITY(v) (((v)&0x1)<<0)
#define I2C1_IC_STATUS_ACTIVITY_MASK I2C1_IC_STATUS_ACTIVITY(ALL1)

/*IC_TXFLR Register macros*/

#define I2C1_IC_TXFLR_TXFLR(v) (((v)&0x1f)<<0)
#define I2C1_IC_TXFLR_TXFLR_MASK I2C1_IC_TXFLR_TXFLR(ALL1)

/*IC_RXFLR Register macros*/

#define I2C1_IC_RXFLR_RXFLR(v) (((v)&0x1f)<<0)
#define I2C1_IC_RXFLR_RXFLR_MASK I2C1_IC_RXFLR_RXFLR(ALL1)

/*IC_SDA_HOLD Register macros*/

#define I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD(v) (((v)&0xff)<<16)
#define I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD_MASK I2C1_IC_SDA_HOLD_IC_SDA_RX_HOLD(ALL1)
#define I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD(v) (((v)&0xffff)<<0)
#define I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD_MASK I2C1_IC_SDA_HOLD_IC_SDA_TX_HOLD(ALL1)

/*IC_TX_ABRT_SOURCE Register macros*/

#define I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(v) (((v)&0x1ff)<<23)
#define I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT_MASK I2C1_IC_TX_ABRT_SOURCE_TX_FLUSH_CNT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(v) (((v)&0x1)<<16)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_USER_ABRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(v) (((v)&0x1)<<15)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(v) (((v)&0x1)<<14)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(v) (((v)&0x1)<<13)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ARB_LOST(v) (((v)&0x1)<<12)
#define I2C1_IC_TX_ABRT_SOURCE_ARB_LOST_MASK I2C1_IC_TX_ABRT_SOURCE_ARB_LOST(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(v) (((v)&0x1)<<11)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_MASTER_DIS(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(v) (((v)&0x1)<<10)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(v) (((v)&0x1)<<9)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(v) (((v)&0x1)<<8)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(v) (((v)&0x1)<<7)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(v) (((v)&0x1)<<6)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_HS_ACKDET(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(v) (((v)&0x1)<<5)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_READ(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(v) (((v)&0x1)<<4)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(v) (((v)&0x1)<<3)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(v) (((v)&0x1)<<2)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(v) (((v)&0x1)<<1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(ALL1)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(v) (((v)&0x1)<<0)
#define I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK_MASK I2C1_IC_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(ALL1)

/*IC_SLV_DATA_NACK_ONLY Register macros*/

#define I2C1_IC_SLV_DATA_NACK_ONLY_NACK(v) (((v)&0x1)<<0)
#define I2C1_IC_SLV_DATA_NACK_ONLY_NACK_MASK I2C1_IC_SLV_DATA_NACK_ONLY_NACK(ALL1)

/*IC_DMA_CR Register macros*/

#define I2C1_IC_DMA_CR_TDMAE(v) (((v)&0x1)<<1)
#define I2C1_IC_DMA_CR_TDMAE_MASK I2C1_IC_DMA_CR_TDMAE(ALL1)
#define I2C1_IC_DMA_CR_RDMAE(v) (((v)&0x1)<<0)
#define I2C1_IC_DMA_CR_RDMAE_MASK I2C1_IC_DMA_CR_RDMAE(ALL1)

/*IC_DMA_TDLR Register macros*/

#define I2C1_IC_DMA_TDLR_DMATDL(v) (((v)&0xf)<<0)
#define I2C1_IC_DMA_TDLR_DMATDL_MASK I2C1_IC_DMA_TDLR_DMATDL(ALL1)

/*IC_DMA_RDLR Register macros*/

#define I2C1_IC_DMA_RDLR_DMARDL(v) (((v)&0xf)<<0)
#define I2C1_IC_DMA_RDLR_DMARDL_MASK I2C1_IC_DMA_RDLR_DMARDL(ALL1)

/*IC_SDA_SETUP Register macros*/

#define I2C1_IC_SDA_SETUP_SDA_SETUP(v) (((v)&0xff)<<0)
#define I2C1_IC_SDA_SETUP_SDA_SETUP_MASK I2C1_IC_SDA_SETUP_SDA_SETUP(ALL1)

/*IC_ACK_GENERAL_CALL Register macros*/

#define I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(v) (((v)&0x1)<<0)
#define I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL_MASK I2C1_IC_ACK_GENERAL_CALL_ACK_GEN_CALL(ALL1)

/*IC_ENABLE_STATUS Register macros*/

#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(v) (((v)&0x1)<<2)
#define I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST_MASK I2C1_IC_ENABLE_STATUS_SLV_RX_DATA_LOST(ALL1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(v) (((v)&0x1)<<1)
#define I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY_MASK I2C1_IC_ENABLE_STATUS_SLV_DISABLED_WHILE_BUSY(ALL1)
#define I2C1_IC_ENABLE_STATUS_IC_EN(v) (((v)&0x1)<<0)
#define I2C1_IC_ENABLE_STATUS_IC_EN_MASK I2C1_IC_ENABLE_STATUS_IC_EN(ALL1)

/*IC_FS_SPKLEN Register macros*/

#define I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN(v) (((v)&0xff)<<0)
#define I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN_MASK I2C1_IC_FS_SPKLEN_IC_FS_SPKLEN(ALL1)

/*IC_CLR_RESTART_DET Register macros*/

#define I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET(v) (((v)&0x1)<<0)
#define I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET_MASK I2C1_IC_CLR_RESTART_DET_CLR_RESTART_DET(ALL1)

/*IC_COMP_PARAM_1 Register macros*/

#define I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(v) (((v)&0xff)<<16)
#define I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH_MASK I2C1_IC_COMP_PARAM_1_TX_BUFFER_DEPTH(ALL1)
#define I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(v) (((v)&0xff)<<8)
#define I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH_MASK I2C1_IC_COMP_PARAM_1_RX_BUFFER_DEPTH(ALL1)
#define I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(v) (((v)&0x1)<<7)
#define I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS_MASK I2C1_IC_COMP_PARAM_1_ADD_ENCODED_PARAMS(ALL1)
#define I2C1_IC_COMP_PARAM_1_HAS_DMA(v) (((v)&0x1)<<6)
#define I2C1_IC_COMP_PARAM_1_HAS_DMA_MASK I2C1_IC_COMP_PARAM_1_HAS_DMA(ALL1)
#define I2C1_IC_COMP_PARAM_1_INTR_IO(v) (((v)&0x1)<<5)
#define I2C1_IC_COMP_PARAM_1_INTR_IO_MASK I2C1_IC_COMP_PARAM_1_INTR_IO(ALL1)
#define I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES(v) (((v)&0x1)<<4)
#define I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES_MASK I2C1_IC_COMP_PARAM_1_HC_COUNT_VALUES(ALL1)
#define I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE(v) (((v)&0x3)<<2)
#define I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE_MASK I2C1_IC_COMP_PARAM_1_MAX_SPEED_MODE(ALL1)
#define I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH(v) (((v)&0x3)<<0)
#define I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH_MASK I2C1_IC_COMP_PARAM_1_APB_DATA_WIDTH(ALL1)

/*IC_COMP_VERSION Register macros*/

#define I2C1_IC_COMP_VERSION_IC_COMP_VERSION(v) (((v)&0xffffffff)<<0)
#define I2C1_IC_COMP_VERSION_IC_COMP_VERSION_MASK I2C1_IC_COMP_VERSION_IC_COMP_VERSION(ALL1)

/*IC_COMP_TYPE Register macros*/

#define I2C1_IC_COMP_TYPE_IC_COMP_TYPE(v) (((v)&0xffffffff)<<0)
#define I2C1_IC_COMP_TYPE_IC_COMP_TYPE_MASK I2C1_IC_COMP_TYPE_IC_COMP_TYPE(ALL1)

#endif