
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

#ifndef RP2350_USB_H
#define RP2350_USB_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t addr_endp;
		uint32_t addr_endp1;
		uint32_t addr_endp2;
		uint32_t addr_endp3;
		uint32_t addr_endp4;
		uint32_t addr_endp5;
		uint32_t addr_endp6;
		uint32_t addr_endp7;
		uint32_t addr_endp8;
		uint32_t addr_endp9;
		uint32_t addr_endp10;
		uint32_t addr_endp11;
		uint32_t addr_endp12;
		uint32_t addr_endp13;
		uint32_t addr_endp14;
		uint32_t addr_endp15;
		uint32_t main_ctrl;
		uint32_t sof_wr;
		uint32_t sof_rd;
		uint32_t sie_ctrl;
		uint32_t sie_status;
		uint32_t int_ep_ctrl;
		uint32_t buff_status;
		uint32_t buff_cpu_should_handle;
		uint32_t ep_abort;
		uint32_t ep_abort_done;
		uint32_t ep_stall_arm;
		uint32_t nak_poll;
		uint32_t ep_status_stall_nak;
		uint32_t usb_muxing;
		uint32_t usb_pwr;
		uint32_t usbphy_direct;
		uint32_t usbphy_direct_override;
		uint32_t usbphy_trim;
		uint32_t linestate_tuning;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[25];
		uint32_t sof_timestamp_raw;
		uint32_t sof_timestamp_last;
		uint32_t sm_state;
		uint32_t ep_tx_error;
		uint32_t ep_rx_error;
		uint32_t dev_sm_watchdog;
		uint32_t RSVD1[954];
		uint32_t xor_addr_endp;
		uint32_t xor_addr_endp1;
		uint32_t xor_addr_endp2;
		uint32_t xor_addr_endp3;
		uint32_t xor_addr_endp4;
		uint32_t xor_addr_endp5;
		uint32_t xor_addr_endp6;
		uint32_t xor_addr_endp7;
		uint32_t xor_addr_endp8;
		uint32_t xor_addr_endp9;
		uint32_t xor_addr_endp10;
		uint32_t xor_addr_endp11;
		uint32_t xor_addr_endp12;
		uint32_t xor_addr_endp13;
		uint32_t xor_addr_endp14;
		uint32_t xor_addr_endp15;
		uint32_t xor_main_ctrl;
		uint32_t xor_sof_wr;
		uint32_t xor_sof_rd;
		uint32_t xor_sie_ctrl;
		uint32_t xor_sie_status;
		uint32_t xor_int_ep_ctrl;
		uint32_t xor_buff_status;
		uint32_t xor_buff_cpu_should_handle;
		uint32_t xor_ep_abort;
		uint32_t xor_ep_abort_done;
		uint32_t xor_ep_stall_arm;
		uint32_t xor_nak_poll;
		uint32_t xor_ep_status_stall_nak;
		uint32_t xor_usb_muxing;
		uint32_t xor_usb_pwr;
		uint32_t xor_usbphy_direct;
		uint32_t xor_usbphy_direct_override;
		uint32_t xor_usbphy_trim;
		uint32_t xor_linestate_tuning;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[25];
		uint32_t xor_sof_timestamp_raw;
		uint32_t xor_sof_timestamp_last;
		uint32_t xor_sm_state;
		uint32_t xor_ep_tx_error;
		uint32_t xor_ep_rx_error;
		uint32_t xor_dev_sm_watchdog;
		uint32_t RSVDxor_1[954];
		uint32_t set_addr_endp;
		uint32_t set_addr_endp1;
		uint32_t set_addr_endp2;
		uint32_t set_addr_endp3;
		uint32_t set_addr_endp4;
		uint32_t set_addr_endp5;
		uint32_t set_addr_endp6;
		uint32_t set_addr_endp7;
		uint32_t set_addr_endp8;
		uint32_t set_addr_endp9;
		uint32_t set_addr_endp10;
		uint32_t set_addr_endp11;
		uint32_t set_addr_endp12;
		uint32_t set_addr_endp13;
		uint32_t set_addr_endp14;
		uint32_t set_addr_endp15;
		uint32_t set_main_ctrl;
		uint32_t set_sof_wr;
		uint32_t set_sof_rd;
		uint32_t set_sie_ctrl;
		uint32_t set_sie_status;
		uint32_t set_int_ep_ctrl;
		uint32_t set_buff_status;
		uint32_t set_buff_cpu_should_handle;
		uint32_t set_ep_abort;
		uint32_t set_ep_abort_done;
		uint32_t set_ep_stall_arm;
		uint32_t set_nak_poll;
		uint32_t set_ep_status_stall_nak;
		uint32_t set_usb_muxing;
		uint32_t set_usb_pwr;
		uint32_t set_usbphy_direct;
		uint32_t set_usbphy_direct_override;
		uint32_t set_usbphy_trim;
		uint32_t set_linestate_tuning;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[25];
		uint32_t set_sof_timestamp_raw;
		uint32_t set_sof_timestamp_last;
		uint32_t set_sm_state;
		uint32_t set_ep_tx_error;
		uint32_t set_ep_rx_error;
		uint32_t set_dev_sm_watchdog;
		uint32_t RSVDset_1[954];
		uint32_t clr_addr_endp;
		uint32_t clr_addr_endp1;
		uint32_t clr_addr_endp2;
		uint32_t clr_addr_endp3;
		uint32_t clr_addr_endp4;
		uint32_t clr_addr_endp5;
		uint32_t clr_addr_endp6;
		uint32_t clr_addr_endp7;
		uint32_t clr_addr_endp8;
		uint32_t clr_addr_endp9;
		uint32_t clr_addr_endp10;
		uint32_t clr_addr_endp11;
		uint32_t clr_addr_endp12;
		uint32_t clr_addr_endp13;
		uint32_t clr_addr_endp14;
		uint32_t clr_addr_endp15;
		uint32_t clr_main_ctrl;
		uint32_t clr_sof_wr;
		uint32_t clr_sof_rd;
		uint32_t clr_sie_ctrl;
		uint32_t clr_sie_status;
		uint32_t clr_int_ep_ctrl;
		uint32_t clr_buff_status;
		uint32_t clr_buff_cpu_should_handle;
		uint32_t clr_ep_abort;
		uint32_t clr_ep_abort_done;
		uint32_t clr_ep_stall_arm;
		uint32_t clr_nak_poll;
		uint32_t clr_ep_status_stall_nak;
		uint32_t clr_usb_muxing;
		uint32_t clr_usb_pwr;
		uint32_t clr_usbphy_direct;
		uint32_t clr_usbphy_direct_override;
		uint32_t clr_usbphy_trim;
		uint32_t clr_linestate_tuning;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[25];
		uint32_t clr_sof_timestamp_raw;
		uint32_t clr_sof_timestamp_last;
		uint32_t clr_sm_state;
		uint32_t clr_ep_tx_error;
		uint32_t clr_ep_rx_error;
		uint32_t clr_dev_sm_watchdog;
		uint32_t RSVDclr_1[954];
} USBCTRL_REG_BLOCKS;
typedef struct{
		uint32_t addr_endp;
		uint32_t addr_endp1;
		uint32_t addr_endp2;
		uint32_t addr_endp3;
		uint32_t addr_endp4;
		uint32_t addr_endp5;
		uint32_t addr_endp6;
		uint32_t addr_endp7;
		uint32_t addr_endp8;
		uint32_t addr_endp9;
		uint32_t addr_endp10;
		uint32_t addr_endp11;
		uint32_t addr_endp12;
		uint32_t addr_endp13;
		uint32_t addr_endp14;
		uint32_t addr_endp15;
		uint32_t main_ctrl;
		uint32_t sof_wr;
		uint32_t sof_rd;
		uint32_t sie_ctrl;
		uint32_t sie_status;
		uint32_t int_ep_ctrl;
		uint32_t buff_status;
		uint32_t buff_cpu_should_handle;
		uint32_t ep_abort;
		uint32_t ep_abort_done;
		uint32_t ep_stall_arm;
		uint32_t nak_poll;
		uint32_t ep_status_stall_nak;
		uint32_t usb_muxing;
		uint32_t usb_pwr;
		uint32_t usbphy_direct;
		uint32_t usbphy_direct_override;
		uint32_t usbphy_trim;
		uint32_t linestate_tuning;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[25];
		uint32_t sof_timestamp_raw;
		uint32_t sof_timestamp_last;
		uint32_t sm_state;
		uint32_t ep_tx_error;
		uint32_t ep_rx_error;
		uint32_t dev_sm_watchdog;
		uint32_t RSVD1[954];
		uint32_t xor_addr_endp;
		uint32_t xor_addr_endp1;
		uint32_t xor_addr_endp2;
		uint32_t xor_addr_endp3;
		uint32_t xor_addr_endp4;
		uint32_t xor_addr_endp5;
		uint32_t xor_addr_endp6;
		uint32_t xor_addr_endp7;
		uint32_t xor_addr_endp8;
		uint32_t xor_addr_endp9;
		uint32_t xor_addr_endp10;
		uint32_t xor_addr_endp11;
		uint32_t xor_addr_endp12;
		uint32_t xor_addr_endp13;
		uint32_t xor_addr_endp14;
		uint32_t xor_addr_endp15;
		uint32_t xor_main_ctrl;
		uint32_t xor_sof_wr;
		uint32_t xor_sof_rd;
		uint32_t xor_sie_ctrl;
		uint32_t xor_sie_status;
		uint32_t xor_int_ep_ctrl;
		uint32_t xor_buff_status;
		uint32_t xor_buff_cpu_should_handle;
		uint32_t xor_ep_abort;
		uint32_t xor_ep_abort_done;
		uint32_t xor_ep_stall_arm;
		uint32_t xor_nak_poll;
		uint32_t xor_ep_status_stall_nak;
		uint32_t xor_usb_muxing;
		uint32_t xor_usb_pwr;
		uint32_t xor_usbphy_direct;
		uint32_t xor_usbphy_direct_override;
		uint32_t xor_usbphy_trim;
		uint32_t xor_linestate_tuning;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[25];
		uint32_t xor_sof_timestamp_raw;
		uint32_t xor_sof_timestamp_last;
		uint32_t xor_sm_state;
		uint32_t xor_ep_tx_error;
		uint32_t xor_ep_rx_error;
		uint32_t xor_dev_sm_watchdog;
		uint32_t RSVDxor_1[954];
		uint32_t set_addr_endp;
		uint32_t set_addr_endp1;
		uint32_t set_addr_endp2;
		uint32_t set_addr_endp3;
		uint32_t set_addr_endp4;
		uint32_t set_addr_endp5;
		uint32_t set_addr_endp6;
		uint32_t set_addr_endp7;
		uint32_t set_addr_endp8;
		uint32_t set_addr_endp9;
		uint32_t set_addr_endp10;
		uint32_t set_addr_endp11;
		uint32_t set_addr_endp12;
		uint32_t set_addr_endp13;
		uint32_t set_addr_endp14;
		uint32_t set_addr_endp15;
		uint32_t set_main_ctrl;
		uint32_t set_sof_wr;
		uint32_t set_sof_rd;
		uint32_t set_sie_ctrl;
		uint32_t set_sie_status;
		uint32_t set_int_ep_ctrl;
		uint32_t set_buff_status;
		uint32_t set_buff_cpu_should_handle;
		uint32_t set_ep_abort;
		uint32_t set_ep_abort_done;
		uint32_t set_ep_stall_arm;
		uint32_t set_nak_poll;
		uint32_t set_ep_status_stall_nak;
		uint32_t set_usb_muxing;
		uint32_t set_usb_pwr;
		uint32_t set_usbphy_direct;
		uint32_t set_usbphy_direct_override;
		uint32_t set_usbphy_trim;
		uint32_t set_linestate_tuning;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[25];
		uint32_t set_sof_timestamp_raw;
		uint32_t set_sof_timestamp_last;
		uint32_t set_sm_state;
		uint32_t set_ep_tx_error;
		uint32_t set_ep_rx_error;
		uint32_t set_dev_sm_watchdog;
		uint32_t RSVDset_1[954];
		uint32_t clr_addr_endp;
		uint32_t clr_addr_endp1;
		uint32_t clr_addr_endp2;
		uint32_t clr_addr_endp3;
		uint32_t clr_addr_endp4;
		uint32_t clr_addr_endp5;
		uint32_t clr_addr_endp6;
		uint32_t clr_addr_endp7;
		uint32_t clr_addr_endp8;
		uint32_t clr_addr_endp9;
		uint32_t clr_addr_endp10;
		uint32_t clr_addr_endp11;
		uint32_t clr_addr_endp12;
		uint32_t clr_addr_endp13;
		uint32_t clr_addr_endp14;
		uint32_t clr_addr_endp15;
		uint32_t clr_main_ctrl;
		uint32_t clr_sof_wr;
		uint32_t clr_sof_rd;
		uint32_t clr_sie_ctrl;
		uint32_t clr_sie_status;
		uint32_t clr_int_ep_ctrl;
		uint32_t clr_buff_status;
		uint32_t clr_buff_cpu_should_handle;
		uint32_t clr_ep_abort;
		uint32_t clr_ep_abort_done;
		uint32_t clr_ep_stall_arm;
		uint32_t clr_nak_poll;
		uint32_t clr_ep_status_stall_nak;
		uint32_t clr_usb_muxing;
		uint32_t clr_usb_pwr;
		uint32_t clr_usbphy_direct;
		uint32_t clr_usbphy_direct_override;
		uint32_t clr_usbphy_trim;
		uint32_t clr_linestate_tuning;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[25];
		uint32_t clr_sof_timestamp_raw;
		uint32_t clr_sof_timestamp_last;
		uint32_t clr_sm_state;
		uint32_t clr_ep_tx_error;
		uint32_t clr_ep_rx_error;
		uint32_t clr_dev_sm_watchdog;
		uint32_t RSVDclr_1[954];
} USBCTRL_DPRAM_REG_BLOCKS;
typedef struct{
		uint32_t addr_endp;
		uint32_t addr_endp1;
		uint32_t addr_endp2;
		uint32_t addr_endp3;
		uint32_t addr_endp4;
		uint32_t addr_endp5;
		uint32_t addr_endp6;
		uint32_t addr_endp7;
		uint32_t addr_endp8;
		uint32_t addr_endp9;
		uint32_t addr_endp10;
		uint32_t addr_endp11;
		uint32_t addr_endp12;
		uint32_t addr_endp13;
		uint32_t addr_endp14;
		uint32_t addr_endp15;
		uint32_t main_ctrl;
		uint32_t sof_wr;
		uint32_t sof_rd;
		uint32_t sie_ctrl;
		uint32_t sie_status;
		uint32_t int_ep_ctrl;
		uint32_t buff_status;
		uint32_t buff_cpu_should_handle;
		uint32_t ep_abort;
		uint32_t ep_abort_done;
		uint32_t ep_stall_arm;
		uint32_t nak_poll;
		uint32_t ep_status_stall_nak;
		uint32_t usb_muxing;
		uint32_t usb_pwr;
		uint32_t usbphy_direct;
		uint32_t usbphy_direct_override;
		uint32_t usbphy_trim;
		uint32_t linestate_tuning;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[25];
		uint32_t sof_timestamp_raw;
		uint32_t sof_timestamp_last;
		uint32_t sm_state;
		uint32_t ep_tx_error;
		uint32_t ep_rx_error;
		uint32_t dev_sm_watchdog;
		uint32_t RSVD1[954];
		uint32_t xor_addr_endp;
		uint32_t xor_addr_endp1;
		uint32_t xor_addr_endp2;
		uint32_t xor_addr_endp3;
		uint32_t xor_addr_endp4;
		uint32_t xor_addr_endp5;
		uint32_t xor_addr_endp6;
		uint32_t xor_addr_endp7;
		uint32_t xor_addr_endp8;
		uint32_t xor_addr_endp9;
		uint32_t xor_addr_endp10;
		uint32_t xor_addr_endp11;
		uint32_t xor_addr_endp12;
		uint32_t xor_addr_endp13;
		uint32_t xor_addr_endp14;
		uint32_t xor_addr_endp15;
		uint32_t xor_main_ctrl;
		uint32_t xor_sof_wr;
		uint32_t xor_sof_rd;
		uint32_t xor_sie_ctrl;
		uint32_t xor_sie_status;
		uint32_t xor_int_ep_ctrl;
		uint32_t xor_buff_status;
		uint32_t xor_buff_cpu_should_handle;
		uint32_t xor_ep_abort;
		uint32_t xor_ep_abort_done;
		uint32_t xor_ep_stall_arm;
		uint32_t xor_nak_poll;
		uint32_t xor_ep_status_stall_nak;
		uint32_t xor_usb_muxing;
		uint32_t xor_usb_pwr;
		uint32_t xor_usbphy_direct;
		uint32_t xor_usbphy_direct_override;
		uint32_t xor_usbphy_trim;
		uint32_t xor_linestate_tuning;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[25];
		uint32_t xor_sof_timestamp_raw;
		uint32_t xor_sof_timestamp_last;
		uint32_t xor_sm_state;
		uint32_t xor_ep_tx_error;
		uint32_t xor_ep_rx_error;
		uint32_t xor_dev_sm_watchdog;
		uint32_t RSVDxor_1[954];
		uint32_t set_addr_endp;
		uint32_t set_addr_endp1;
		uint32_t set_addr_endp2;
		uint32_t set_addr_endp3;
		uint32_t set_addr_endp4;
		uint32_t set_addr_endp5;
		uint32_t set_addr_endp6;
		uint32_t set_addr_endp7;
		uint32_t set_addr_endp8;
		uint32_t set_addr_endp9;
		uint32_t set_addr_endp10;
		uint32_t set_addr_endp11;
		uint32_t set_addr_endp12;
		uint32_t set_addr_endp13;
		uint32_t set_addr_endp14;
		uint32_t set_addr_endp15;
		uint32_t set_main_ctrl;
		uint32_t set_sof_wr;
		uint32_t set_sof_rd;
		uint32_t set_sie_ctrl;
		uint32_t set_sie_status;
		uint32_t set_int_ep_ctrl;
		uint32_t set_buff_status;
		uint32_t set_buff_cpu_should_handle;
		uint32_t set_ep_abort;
		uint32_t set_ep_abort_done;
		uint32_t set_ep_stall_arm;
		uint32_t set_nak_poll;
		uint32_t set_ep_status_stall_nak;
		uint32_t set_usb_muxing;
		uint32_t set_usb_pwr;
		uint32_t set_usbphy_direct;
		uint32_t set_usbphy_direct_override;
		uint32_t set_usbphy_trim;
		uint32_t set_linestate_tuning;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[25];
		uint32_t set_sof_timestamp_raw;
		uint32_t set_sof_timestamp_last;
		uint32_t set_sm_state;
		uint32_t set_ep_tx_error;
		uint32_t set_ep_rx_error;
		uint32_t set_dev_sm_watchdog;
		uint32_t RSVDset_1[954];
		uint32_t clr_addr_endp;
		uint32_t clr_addr_endp1;
		uint32_t clr_addr_endp2;
		uint32_t clr_addr_endp3;
		uint32_t clr_addr_endp4;
		uint32_t clr_addr_endp5;
		uint32_t clr_addr_endp6;
		uint32_t clr_addr_endp7;
		uint32_t clr_addr_endp8;
		uint32_t clr_addr_endp9;
		uint32_t clr_addr_endp10;
		uint32_t clr_addr_endp11;
		uint32_t clr_addr_endp12;
		uint32_t clr_addr_endp13;
		uint32_t clr_addr_endp14;
		uint32_t clr_addr_endp15;
		uint32_t clr_main_ctrl;
		uint32_t clr_sof_wr;
		uint32_t clr_sof_rd;
		uint32_t clr_sie_ctrl;
		uint32_t clr_sie_status;
		uint32_t clr_int_ep_ctrl;
		uint32_t clr_buff_status;
		uint32_t clr_buff_cpu_should_handle;
		uint32_t clr_ep_abort;
		uint32_t clr_ep_abort_done;
		uint32_t clr_ep_stall_arm;
		uint32_t clr_nak_poll;
		uint32_t clr_ep_status_stall_nak;
		uint32_t clr_usb_muxing;
		uint32_t clr_usb_pwr;
		uint32_t clr_usbphy_direct;
		uint32_t clr_usbphy_direct_override;
		uint32_t clr_usbphy_trim;
		uint32_t clr_linestate_tuning;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[25];
		uint32_t clr_sof_timestamp_raw;
		uint32_t clr_sof_timestamp_last;
		uint32_t clr_sm_state;
		uint32_t clr_ep_tx_error;
		uint32_t clr_ep_rx_error;
		uint32_t clr_dev_sm_watchdog;
		uint32_t RSVDclr_1[954];
} USBCTRL_REGS_REG_BLOCKS;

#define usbctrl ((USBCTRL_REG_BLOCKS volatile *)0x50100000)

#define usbctrl_dpram ((USBCTRL_DPRAM_REG_BLOCKS volatile *)0x50100000)

#define usbctrl_regs ((USBCTRL_REGS_REG_BLOCKS volatile *)0x50110000)

/*ADDR_ENDP Register macros*/

#define USBCTRL_ADDR_ENDP_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP_ENDPOINT_MASK USBCTRL_ADDR_ENDP_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP_ADDRESS_MASK USBCTRL_ADDR_ENDP_ADDRESS(ALL1)

/*ADDR_ENDP1 Register macros*/

#define USBCTRL_ADDR_ENDP1_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP1_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP1_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP1_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP1_INTEP_DIR_MASK USBCTRL_ADDR_ENDP1_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP1_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP1_ENDPOINT_MASK USBCTRL_ADDR_ENDP1_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP1_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP1_ADDRESS_MASK USBCTRL_ADDR_ENDP1_ADDRESS(ALL1)

/*ADDR_ENDP2 Register macros*/

#define USBCTRL_ADDR_ENDP2_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP2_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP2_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP2_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP2_INTEP_DIR_MASK USBCTRL_ADDR_ENDP2_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP2_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP2_ENDPOINT_MASK USBCTRL_ADDR_ENDP2_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP2_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP2_ADDRESS_MASK USBCTRL_ADDR_ENDP2_ADDRESS(ALL1)

/*ADDR_ENDP3 Register macros*/

#define USBCTRL_ADDR_ENDP3_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP3_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP3_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP3_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP3_INTEP_DIR_MASK USBCTRL_ADDR_ENDP3_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP3_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP3_ENDPOINT_MASK USBCTRL_ADDR_ENDP3_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP3_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP3_ADDRESS_MASK USBCTRL_ADDR_ENDP3_ADDRESS(ALL1)

/*ADDR_ENDP4 Register macros*/

#define USBCTRL_ADDR_ENDP4_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP4_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP4_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP4_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP4_INTEP_DIR_MASK USBCTRL_ADDR_ENDP4_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP4_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP4_ENDPOINT_MASK USBCTRL_ADDR_ENDP4_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP4_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP4_ADDRESS_MASK USBCTRL_ADDR_ENDP4_ADDRESS(ALL1)

/*ADDR_ENDP5 Register macros*/

#define USBCTRL_ADDR_ENDP5_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP5_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP5_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP5_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP5_INTEP_DIR_MASK USBCTRL_ADDR_ENDP5_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP5_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP5_ENDPOINT_MASK USBCTRL_ADDR_ENDP5_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP5_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP5_ADDRESS_MASK USBCTRL_ADDR_ENDP5_ADDRESS(ALL1)

/*ADDR_ENDP6 Register macros*/

#define USBCTRL_ADDR_ENDP6_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP6_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP6_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP6_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP6_INTEP_DIR_MASK USBCTRL_ADDR_ENDP6_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP6_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP6_ENDPOINT_MASK USBCTRL_ADDR_ENDP6_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP6_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP6_ADDRESS_MASK USBCTRL_ADDR_ENDP6_ADDRESS(ALL1)

/*ADDR_ENDP7 Register macros*/

#define USBCTRL_ADDR_ENDP7_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP7_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP7_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP7_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP7_INTEP_DIR_MASK USBCTRL_ADDR_ENDP7_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP7_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP7_ENDPOINT_MASK USBCTRL_ADDR_ENDP7_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP7_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP7_ADDRESS_MASK USBCTRL_ADDR_ENDP7_ADDRESS(ALL1)

/*ADDR_ENDP8 Register macros*/

#define USBCTRL_ADDR_ENDP8_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP8_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP8_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP8_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP8_INTEP_DIR_MASK USBCTRL_ADDR_ENDP8_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP8_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP8_ENDPOINT_MASK USBCTRL_ADDR_ENDP8_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP8_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP8_ADDRESS_MASK USBCTRL_ADDR_ENDP8_ADDRESS(ALL1)

/*ADDR_ENDP9 Register macros*/

#define USBCTRL_ADDR_ENDP9_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP9_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP9_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP9_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP9_INTEP_DIR_MASK USBCTRL_ADDR_ENDP9_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP9_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP9_ENDPOINT_MASK USBCTRL_ADDR_ENDP9_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP9_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP9_ADDRESS_MASK USBCTRL_ADDR_ENDP9_ADDRESS(ALL1)

/*ADDR_ENDP10 Register macros*/

#define USBCTRL_ADDR_ENDP10_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP10_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP10_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP10_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP10_INTEP_DIR_MASK USBCTRL_ADDR_ENDP10_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP10_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP10_ENDPOINT_MASK USBCTRL_ADDR_ENDP10_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP10_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP10_ADDRESS_MASK USBCTRL_ADDR_ENDP10_ADDRESS(ALL1)

/*ADDR_ENDP11 Register macros*/

#define USBCTRL_ADDR_ENDP11_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP11_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP11_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP11_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP11_INTEP_DIR_MASK USBCTRL_ADDR_ENDP11_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP11_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP11_ENDPOINT_MASK USBCTRL_ADDR_ENDP11_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP11_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP11_ADDRESS_MASK USBCTRL_ADDR_ENDP11_ADDRESS(ALL1)

/*ADDR_ENDP12 Register macros*/

#define USBCTRL_ADDR_ENDP12_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP12_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP12_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP12_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP12_INTEP_DIR_MASK USBCTRL_ADDR_ENDP12_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP12_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP12_ENDPOINT_MASK USBCTRL_ADDR_ENDP12_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP12_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP12_ADDRESS_MASK USBCTRL_ADDR_ENDP12_ADDRESS(ALL1)

/*ADDR_ENDP13 Register macros*/

#define USBCTRL_ADDR_ENDP13_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP13_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP13_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP13_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP13_INTEP_DIR_MASK USBCTRL_ADDR_ENDP13_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP13_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP13_ENDPOINT_MASK USBCTRL_ADDR_ENDP13_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP13_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP13_ADDRESS_MASK USBCTRL_ADDR_ENDP13_ADDRESS(ALL1)

/*ADDR_ENDP14 Register macros*/

#define USBCTRL_ADDR_ENDP14_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP14_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP14_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP14_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP14_INTEP_DIR_MASK USBCTRL_ADDR_ENDP14_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP14_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP14_ENDPOINT_MASK USBCTRL_ADDR_ENDP14_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP14_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP14_ADDRESS_MASK USBCTRL_ADDR_ENDP14_ADDRESS(ALL1)

/*ADDR_ENDP15 Register macros*/

#define USBCTRL_ADDR_ENDP15_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_ADDR_ENDP15_INTEP_PREAMBLE_MASK USBCTRL_ADDR_ENDP15_INTEP_PREAMBLE(ALL1)
#define USBCTRL_ADDR_ENDP15_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_ADDR_ENDP15_INTEP_DIR_MASK USBCTRL_ADDR_ENDP15_INTEP_DIR(ALL1)
#define USBCTRL_ADDR_ENDP15_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_ADDR_ENDP15_ENDPOINT_MASK USBCTRL_ADDR_ENDP15_ENDPOINT(ALL1)
#define USBCTRL_ADDR_ENDP15_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_ADDR_ENDP15_ADDRESS_MASK USBCTRL_ADDR_ENDP15_ADDRESS(ALL1)

/*MAIN_CTRL Register macros*/

#define USBCTRL_MAIN_CTRL_SIM_TIMING(v) (((v)&0x1)<<31)
#define USBCTRL_MAIN_CTRL_SIM_TIMING_MASK USBCTRL_MAIN_CTRL_SIM_TIMING(ALL1)
#define USBCTRL_MAIN_CTRL_PHY_ISO(v) (((v)&0x1)<<2)
#define USBCTRL_MAIN_CTRL_PHY_ISO_MASK USBCTRL_MAIN_CTRL_PHY_ISO(ALL1)
#define USBCTRL_MAIN_CTRL_HOST_NDEVICE(v) (((v)&0x1)<<1)
#define USBCTRL_MAIN_CTRL_HOST_NDEVICE_MASK USBCTRL_MAIN_CTRL_HOST_NDEVICE(ALL1)
#define USBCTRL_MAIN_CTRL_CONTROLLER_EN(v) (((v)&0x1)<<0)
#define USBCTRL_MAIN_CTRL_CONTROLLER_EN_MASK USBCTRL_MAIN_CTRL_CONTROLLER_EN(ALL1)

/*SOF_WR Register macros*/

#define USBCTRL_SOF_WR_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_SOF_WR_COUNT_MASK USBCTRL_SOF_WR_COUNT(ALL1)

/*SOF_RD Register macros*/

#define USBCTRL_SOF_RD_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_SOF_RD_COUNT_MASK USBCTRL_SOF_RD_COUNT(ALL1)

/*SIE_CTRL Register macros*/

#define USBCTRL_SIE_CTRL_EP0_INT_STALL(v) (((v)&0x1)<<31)
#define USBCTRL_SIE_CTRL_EP0_INT_STALL_MASK USBCTRL_SIE_CTRL_EP0_INT_STALL(ALL1)
#define USBCTRL_SIE_CTRL_EP0_DOUBLE_BUF(v) (((v)&0x1)<<30)
#define USBCTRL_SIE_CTRL_EP0_DOUBLE_BUF_MASK USBCTRL_SIE_CTRL_EP0_DOUBLE_BUF(ALL1)
#define USBCTRL_SIE_CTRL_EP0_INT_1BUF(v) (((v)&0x1)<<29)
#define USBCTRL_SIE_CTRL_EP0_INT_1BUF_MASK USBCTRL_SIE_CTRL_EP0_INT_1BUF(ALL1)
#define USBCTRL_SIE_CTRL_EP0_INT_2BUF(v) (((v)&0x1)<<28)
#define USBCTRL_SIE_CTRL_EP0_INT_2BUF_MASK USBCTRL_SIE_CTRL_EP0_INT_2BUF(ALL1)
#define USBCTRL_SIE_CTRL_EP0_INT_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_SIE_CTRL_EP0_INT_NAK_MASK USBCTRL_SIE_CTRL_EP0_INT_NAK(ALL1)
#define USBCTRL_SIE_CTRL_DIRECT_EN(v) (((v)&0x1)<<26)
#define USBCTRL_SIE_CTRL_DIRECT_EN_MASK USBCTRL_SIE_CTRL_DIRECT_EN(ALL1)
#define USBCTRL_SIE_CTRL_DIRECT_DP(v) (((v)&0x1)<<25)
#define USBCTRL_SIE_CTRL_DIRECT_DP_MASK USBCTRL_SIE_CTRL_DIRECT_DP(ALL1)
#define USBCTRL_SIE_CTRL_DIRECT_DM(v) (((v)&0x1)<<24)
#define USBCTRL_SIE_CTRL_DIRECT_DM_MASK USBCTRL_SIE_CTRL_DIRECT_DM(ALL1)
#define USBCTRL_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(v) (((v)&0x1)<<19)
#define USBCTRL_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_MASK USBCTRL_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(ALL1)
#define USBCTRL_SIE_CTRL_TRANSCEIVER_PD(v) (((v)&0x1)<<18)
#define USBCTRL_SIE_CTRL_TRANSCEIVER_PD_MASK USBCTRL_SIE_CTRL_TRANSCEIVER_PD(ALL1)
#define USBCTRL_SIE_CTRL_RPU_OPT(v) (((v)&0x1)<<17)
#define USBCTRL_SIE_CTRL_RPU_OPT_MASK USBCTRL_SIE_CTRL_RPU_OPT(ALL1)
#define USBCTRL_SIE_CTRL_PULLUP_EN(v) (((v)&0x1)<<16)
#define USBCTRL_SIE_CTRL_PULLUP_EN_MASK USBCTRL_SIE_CTRL_PULLUP_EN(ALL1)
#define USBCTRL_SIE_CTRL_PULLDOWN_EN(v) (((v)&0x1)<<15)
#define USBCTRL_SIE_CTRL_PULLDOWN_EN_MASK USBCTRL_SIE_CTRL_PULLDOWN_EN(ALL1)
#define USBCTRL_SIE_CTRL_RESET_BUS(v) (((v)&0x1)<<13)
#define USBCTRL_SIE_CTRL_RESET_BUS_MASK USBCTRL_SIE_CTRL_RESET_BUS(ALL1)
#define USBCTRL_SIE_CTRL_RESUME(v) (((v)&0x1)<<12)
#define USBCTRL_SIE_CTRL_RESUME_MASK USBCTRL_SIE_CTRL_RESUME(ALL1)
#define USBCTRL_SIE_CTRL_VBUS_EN(v) (((v)&0x1)<<11)
#define USBCTRL_SIE_CTRL_VBUS_EN_MASK USBCTRL_SIE_CTRL_VBUS_EN(ALL1)
#define USBCTRL_SIE_CTRL_KEEP_ALIVE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_SIE_CTRL_KEEP_ALIVE_EN_MASK USBCTRL_SIE_CTRL_KEEP_ALIVE_EN(ALL1)
#define USBCTRL_SIE_CTRL_SOF_EN(v) (((v)&0x1)<<9)
#define USBCTRL_SIE_CTRL_SOF_EN_MASK USBCTRL_SIE_CTRL_SOF_EN(ALL1)
#define USBCTRL_SIE_CTRL_SOF_SYNC(v) (((v)&0x1)<<8)
#define USBCTRL_SIE_CTRL_SOF_SYNC_MASK USBCTRL_SIE_CTRL_SOF_SYNC(ALL1)
#define USBCTRL_SIE_CTRL_PREAMBLE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_SIE_CTRL_PREAMBLE_EN_MASK USBCTRL_SIE_CTRL_PREAMBLE_EN(ALL1)
#define USBCTRL_SIE_CTRL_STOP_TRANS(v) (((v)&0x1)<<4)
#define USBCTRL_SIE_CTRL_STOP_TRANS_MASK USBCTRL_SIE_CTRL_STOP_TRANS(ALL1)
#define USBCTRL_SIE_CTRL_RECEIVE_DATA(v) (((v)&0x1)<<3)
#define USBCTRL_SIE_CTRL_RECEIVE_DATA_MASK USBCTRL_SIE_CTRL_RECEIVE_DATA(ALL1)
#define USBCTRL_SIE_CTRL_SEND_DATA(v) (((v)&0x1)<<2)
#define USBCTRL_SIE_CTRL_SEND_DATA_MASK USBCTRL_SIE_CTRL_SEND_DATA(ALL1)
#define USBCTRL_SIE_CTRL_SEND_SETUP(v) (((v)&0x1)<<1)
#define USBCTRL_SIE_CTRL_SEND_SETUP_MASK USBCTRL_SIE_CTRL_SEND_SETUP(ALL1)
#define USBCTRL_SIE_CTRL_START_TRANS(v) (((v)&0x1)<<0)
#define USBCTRL_SIE_CTRL_START_TRANS_MASK USBCTRL_SIE_CTRL_START_TRANS(ALL1)

/*SIE_STATUS Register macros*/

#define USBCTRL_SIE_STATUS_DATA_SEQ_ERROR(v) (((v)&0x1)<<31)
#define USBCTRL_SIE_STATUS_DATA_SEQ_ERROR_MASK USBCTRL_SIE_STATUS_DATA_SEQ_ERROR(ALL1)
#define USBCTRL_SIE_STATUS_ACK_REC(v) (((v)&0x1)<<30)
#define USBCTRL_SIE_STATUS_ACK_REC_MASK USBCTRL_SIE_STATUS_ACK_REC(ALL1)
#define USBCTRL_SIE_STATUS_STALL_REC(v) (((v)&0x1)<<29)
#define USBCTRL_SIE_STATUS_STALL_REC_MASK USBCTRL_SIE_STATUS_STALL_REC(ALL1)
#define USBCTRL_SIE_STATUS_NAK_REC(v) (((v)&0x1)<<28)
#define USBCTRL_SIE_STATUS_NAK_REC_MASK USBCTRL_SIE_STATUS_NAK_REC(ALL1)
#define USBCTRL_SIE_STATUS_RX_TIMEOUT(v) (((v)&0x1)<<27)
#define USBCTRL_SIE_STATUS_RX_TIMEOUT_MASK USBCTRL_SIE_STATUS_RX_TIMEOUT(ALL1)
#define USBCTRL_SIE_STATUS_RX_OVERFLOW(v) (((v)&0x1)<<26)
#define USBCTRL_SIE_STATUS_RX_OVERFLOW_MASK USBCTRL_SIE_STATUS_RX_OVERFLOW(ALL1)
#define USBCTRL_SIE_STATUS_BIT_STUFF_ERROR(v) (((v)&0x1)<<25)
#define USBCTRL_SIE_STATUS_BIT_STUFF_ERROR_MASK USBCTRL_SIE_STATUS_BIT_STUFF_ERROR(ALL1)
#define USBCTRL_SIE_STATUS_CRC_ERROR(v) (((v)&0x1)<<24)
#define USBCTRL_SIE_STATUS_CRC_ERROR_MASK USBCTRL_SIE_STATUS_CRC_ERROR(ALL1)
#define USBCTRL_SIE_STATUS_ENDPOINT_ERROR(v) (((v)&0x1)<<23)
#define USBCTRL_SIE_STATUS_ENDPOINT_ERROR_MASK USBCTRL_SIE_STATUS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_SIE_STATUS_BUS_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_SIE_STATUS_BUS_RESET_MASK USBCTRL_SIE_STATUS_BUS_RESET(ALL1)
#define USBCTRL_SIE_STATUS_TRANS_COMPLETE(v) (((v)&0x1)<<18)
#define USBCTRL_SIE_STATUS_TRANS_COMPLETE_MASK USBCTRL_SIE_STATUS_TRANS_COMPLETE(ALL1)
#define USBCTRL_SIE_STATUS_SETUP_REC(v) (((v)&0x1)<<17)
#define USBCTRL_SIE_STATUS_SETUP_REC_MASK USBCTRL_SIE_STATUS_SETUP_REC(ALL1)
#define USBCTRL_SIE_STATUS_CONNECTED(v) (((v)&0x1)<<16)
#define USBCTRL_SIE_STATUS_CONNECTED_MASK USBCTRL_SIE_STATUS_CONNECTED(ALL1)
#define USBCTRL_SIE_STATUS_RX_SHORT_PACKET(v) (((v)&0x1)<<12)
#define USBCTRL_SIE_STATUS_RX_SHORT_PACKET_MASK USBCTRL_SIE_STATUS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_SIE_STATUS_RESUME(v) (((v)&0x1)<<11)
#define USBCTRL_SIE_STATUS_RESUME_MASK USBCTRL_SIE_STATUS_RESUME(ALL1)
#define USBCTRL_SIE_STATUS_VBUS_OVER_CURR(v) (((v)&0x1)<<10)
#define USBCTRL_SIE_STATUS_VBUS_OVER_CURR_MASK USBCTRL_SIE_STATUS_VBUS_OVER_CURR(ALL1)
#define USBCTRL_SIE_STATUS_SPEED(v) (((v)&0x3)<<8)
#define USBCTRL_SIE_STATUS_SPEED_MASK USBCTRL_SIE_STATUS_SPEED(ALL1)
#define USBCTRL_SIE_STATUS_SUSPENDED(v) (((v)&0x1)<<4)
#define USBCTRL_SIE_STATUS_SUSPENDED_MASK USBCTRL_SIE_STATUS_SUSPENDED(ALL1)
#define USBCTRL_SIE_STATUS_LINE_STATE(v) (((v)&0x3)<<2)
#define USBCTRL_SIE_STATUS_LINE_STATE_MASK USBCTRL_SIE_STATUS_LINE_STATE(ALL1)
#define USBCTRL_SIE_STATUS_VBUS_DETECTED(v) (((v)&0x1)<<0)
#define USBCTRL_SIE_STATUS_VBUS_DETECTED_MASK USBCTRL_SIE_STATUS_VBUS_DETECTED(ALL1)

/*INT_EP_CTRL Register macros*/

#define USBCTRL_INT_EP_CTRL_INT_EP_ACTIVE(v) (((v)&0x7fff)<<1)
#define USBCTRL_INT_EP_CTRL_INT_EP_ACTIVE_MASK USBCTRL_INT_EP_CTRL_INT_EP_ACTIVE(ALL1)

/*BUFF_STATUS Register macros*/

#define USBCTRL_BUFF_STATUS_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_BUFF_STATUS_EP15_OUT_MASK USBCTRL_BUFF_STATUS_EP15_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_BUFF_STATUS_EP15_IN_MASK USBCTRL_BUFF_STATUS_EP15_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_BUFF_STATUS_EP14_OUT_MASK USBCTRL_BUFF_STATUS_EP14_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_BUFF_STATUS_EP14_IN_MASK USBCTRL_BUFF_STATUS_EP14_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_BUFF_STATUS_EP13_OUT_MASK USBCTRL_BUFF_STATUS_EP13_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_BUFF_STATUS_EP13_IN_MASK USBCTRL_BUFF_STATUS_EP13_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_BUFF_STATUS_EP12_OUT_MASK USBCTRL_BUFF_STATUS_EP12_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_BUFF_STATUS_EP12_IN_MASK USBCTRL_BUFF_STATUS_EP12_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_BUFF_STATUS_EP11_OUT_MASK USBCTRL_BUFF_STATUS_EP11_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_BUFF_STATUS_EP11_IN_MASK USBCTRL_BUFF_STATUS_EP11_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_BUFF_STATUS_EP10_OUT_MASK USBCTRL_BUFF_STATUS_EP10_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_BUFF_STATUS_EP10_IN_MASK USBCTRL_BUFF_STATUS_EP10_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_BUFF_STATUS_EP9_OUT_MASK USBCTRL_BUFF_STATUS_EP9_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_BUFF_STATUS_EP9_IN_MASK USBCTRL_BUFF_STATUS_EP9_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_BUFF_STATUS_EP8_OUT_MASK USBCTRL_BUFF_STATUS_EP8_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_BUFF_STATUS_EP8_IN_MASK USBCTRL_BUFF_STATUS_EP8_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_BUFF_STATUS_EP7_OUT_MASK USBCTRL_BUFF_STATUS_EP7_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_BUFF_STATUS_EP7_IN_MASK USBCTRL_BUFF_STATUS_EP7_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_BUFF_STATUS_EP6_OUT_MASK USBCTRL_BUFF_STATUS_EP6_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_BUFF_STATUS_EP6_IN_MASK USBCTRL_BUFF_STATUS_EP6_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_BUFF_STATUS_EP5_OUT_MASK USBCTRL_BUFF_STATUS_EP5_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_BUFF_STATUS_EP5_IN_MASK USBCTRL_BUFF_STATUS_EP5_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_BUFF_STATUS_EP4_OUT_MASK USBCTRL_BUFF_STATUS_EP4_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_BUFF_STATUS_EP4_IN_MASK USBCTRL_BUFF_STATUS_EP4_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_BUFF_STATUS_EP3_OUT_MASK USBCTRL_BUFF_STATUS_EP3_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_BUFF_STATUS_EP3_IN_MASK USBCTRL_BUFF_STATUS_EP3_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_BUFF_STATUS_EP2_OUT_MASK USBCTRL_BUFF_STATUS_EP2_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_BUFF_STATUS_EP2_IN_MASK USBCTRL_BUFF_STATUS_EP2_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_BUFF_STATUS_EP1_OUT_MASK USBCTRL_BUFF_STATUS_EP1_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_BUFF_STATUS_EP1_IN_MASK USBCTRL_BUFF_STATUS_EP1_IN(ALL1)
#define USBCTRL_BUFF_STATUS_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_BUFF_STATUS_EP0_OUT_MASK USBCTRL_BUFF_STATUS_EP0_OUT(ALL1)
#define USBCTRL_BUFF_STATUS_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_BUFF_STATUS_EP0_IN_MASK USBCTRL_BUFF_STATUS_EP0_IN(ALL1)

/*BUFF_CPU_SHOULD_HANDLE Register macros*/

#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP15_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP14_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP13_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP12_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP11_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP10_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP9_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP8_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP7_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP6_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP5_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP4_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP3_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP2_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP1_IN(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(ALL1)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_IN_MASK USBCTRL_BUFF_CPU_SHOULD_HANDLE_EP0_IN(ALL1)

/*EP_ABORT Register macros*/

#define USBCTRL_EP_ABORT_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_EP_ABORT_EP15_OUT_MASK USBCTRL_EP_ABORT_EP15_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_EP_ABORT_EP15_IN_MASK USBCTRL_EP_ABORT_EP15_IN(ALL1)
#define USBCTRL_EP_ABORT_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_EP_ABORT_EP14_OUT_MASK USBCTRL_EP_ABORT_EP14_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_EP_ABORT_EP14_IN_MASK USBCTRL_EP_ABORT_EP14_IN(ALL1)
#define USBCTRL_EP_ABORT_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_EP_ABORT_EP13_OUT_MASK USBCTRL_EP_ABORT_EP13_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_EP_ABORT_EP13_IN_MASK USBCTRL_EP_ABORT_EP13_IN(ALL1)
#define USBCTRL_EP_ABORT_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_EP_ABORT_EP12_OUT_MASK USBCTRL_EP_ABORT_EP12_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_EP_ABORT_EP12_IN_MASK USBCTRL_EP_ABORT_EP12_IN(ALL1)
#define USBCTRL_EP_ABORT_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_EP_ABORT_EP11_OUT_MASK USBCTRL_EP_ABORT_EP11_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_EP_ABORT_EP11_IN_MASK USBCTRL_EP_ABORT_EP11_IN(ALL1)
#define USBCTRL_EP_ABORT_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_EP_ABORT_EP10_OUT_MASK USBCTRL_EP_ABORT_EP10_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_EP_ABORT_EP10_IN_MASK USBCTRL_EP_ABORT_EP10_IN(ALL1)
#define USBCTRL_EP_ABORT_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_EP_ABORT_EP9_OUT_MASK USBCTRL_EP_ABORT_EP9_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_EP_ABORT_EP9_IN_MASK USBCTRL_EP_ABORT_EP9_IN(ALL1)
#define USBCTRL_EP_ABORT_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_EP_ABORT_EP8_OUT_MASK USBCTRL_EP_ABORT_EP8_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_EP_ABORT_EP8_IN_MASK USBCTRL_EP_ABORT_EP8_IN(ALL1)
#define USBCTRL_EP_ABORT_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_EP_ABORT_EP7_OUT_MASK USBCTRL_EP_ABORT_EP7_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_EP_ABORT_EP7_IN_MASK USBCTRL_EP_ABORT_EP7_IN(ALL1)
#define USBCTRL_EP_ABORT_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_EP_ABORT_EP6_OUT_MASK USBCTRL_EP_ABORT_EP6_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_EP_ABORT_EP6_IN_MASK USBCTRL_EP_ABORT_EP6_IN(ALL1)
#define USBCTRL_EP_ABORT_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_EP_ABORT_EP5_OUT_MASK USBCTRL_EP_ABORT_EP5_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_EP_ABORT_EP5_IN_MASK USBCTRL_EP_ABORT_EP5_IN(ALL1)
#define USBCTRL_EP_ABORT_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_EP_ABORT_EP4_OUT_MASK USBCTRL_EP_ABORT_EP4_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_EP_ABORT_EP4_IN_MASK USBCTRL_EP_ABORT_EP4_IN(ALL1)
#define USBCTRL_EP_ABORT_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_EP_ABORT_EP3_OUT_MASK USBCTRL_EP_ABORT_EP3_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_EP_ABORT_EP3_IN_MASK USBCTRL_EP_ABORT_EP3_IN(ALL1)
#define USBCTRL_EP_ABORT_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_EP_ABORT_EP2_OUT_MASK USBCTRL_EP_ABORT_EP2_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_EP_ABORT_EP2_IN_MASK USBCTRL_EP_ABORT_EP2_IN(ALL1)
#define USBCTRL_EP_ABORT_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_EP_ABORT_EP1_OUT_MASK USBCTRL_EP_ABORT_EP1_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_EP_ABORT_EP1_IN_MASK USBCTRL_EP_ABORT_EP1_IN(ALL1)
#define USBCTRL_EP_ABORT_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_EP_ABORT_EP0_OUT_MASK USBCTRL_EP_ABORT_EP0_OUT(ALL1)
#define USBCTRL_EP_ABORT_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_EP_ABORT_EP0_IN_MASK USBCTRL_EP_ABORT_EP0_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_ABORT_DONE Register macros*/

#define USBCTRL_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_STALL_ARM Register macros*/

#define USBCTRL_EP_STALL_ARM_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_EP_STALL_ARM_EP0_OUT_MASK USBCTRL_EP_STALL_ARM_EP0_OUT(ALL1)
#define USBCTRL_EP_STALL_ARM_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_EP_STALL_ARM_EP0_IN_MASK USBCTRL_EP_STALL_ARM_EP0_IN(ALL1)

/*NAK_POLL Register macros*/

#define USBCTRL_NAK_POLL_RETRY_COUNT_HI(v) (((v)&0xf)<<28)
#define USBCTRL_NAK_POLL_RETRY_COUNT_HI_MASK USBCTRL_NAK_POLL_RETRY_COUNT_HI(ALL1)
#define USBCTRL_NAK_POLL_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_NAK_POLL_EPX_STOPPED_ON_NAK_MASK USBCTRL_NAK_POLL_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_NAK_POLL_STOP_EPX_ON_NAK(v) (((v)&0x1)<<26)
#define USBCTRL_NAK_POLL_STOP_EPX_ON_NAK_MASK USBCTRL_NAK_POLL_STOP_EPX_ON_NAK(ALL1)
#define USBCTRL_NAK_POLL_DELAY_FS(v) (((v)&0x3ff)<<16)
#define USBCTRL_NAK_POLL_DELAY_FS_MASK USBCTRL_NAK_POLL_DELAY_FS(ALL1)
#define USBCTRL_NAK_POLL_RETRY_COUNT_LO(v) (((v)&0x3f)<<10)
#define USBCTRL_NAK_POLL_RETRY_COUNT_LO_MASK USBCTRL_NAK_POLL_RETRY_COUNT_LO(ALL1)
#define USBCTRL_NAK_POLL_DELAY_LS(v) (((v)&0x3ff)<<0)
#define USBCTRL_NAK_POLL_DELAY_LS_MASK USBCTRL_NAK_POLL_DELAY_LS(ALL1)

/*EP_STATUS_STALL_NAK Register macros*/

#define USBCTRL_EP_STATUS_STALL_NAK_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_EP_STATUS_STALL_NAK_EP15_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP15_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_EP_STATUS_STALL_NAK_EP15_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP15_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_EP_STATUS_STALL_NAK_EP14_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP14_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_EP_STATUS_STALL_NAK_EP14_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP14_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_EP_STATUS_STALL_NAK_EP13_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP13_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_EP_STATUS_STALL_NAK_EP13_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP13_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_EP_STATUS_STALL_NAK_EP12_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP12_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_EP_STATUS_STALL_NAK_EP12_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP12_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_EP_STATUS_STALL_NAK_EP11_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP11_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_EP_STATUS_STALL_NAK_EP11_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP11_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_EP_STATUS_STALL_NAK_EP10_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP10_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_EP_STATUS_STALL_NAK_EP10_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP10_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_EP_STATUS_STALL_NAK_EP9_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP9_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_EP_STATUS_STALL_NAK_EP9_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP9_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_EP_STATUS_STALL_NAK_EP8_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP8_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_EP_STATUS_STALL_NAK_EP8_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP8_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_EP_STATUS_STALL_NAK_EP7_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP7_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_EP_STATUS_STALL_NAK_EP7_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP7_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_EP_STATUS_STALL_NAK_EP6_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP6_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_EP_STATUS_STALL_NAK_EP6_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP6_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_EP_STATUS_STALL_NAK_EP5_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP5_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_EP_STATUS_STALL_NAK_EP5_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP5_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_EP_STATUS_STALL_NAK_EP4_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP4_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_EP_STATUS_STALL_NAK_EP4_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP4_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_EP_STATUS_STALL_NAK_EP3_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP3_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_EP_STATUS_STALL_NAK_EP3_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP3_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_EP_STATUS_STALL_NAK_EP2_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP2_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_EP_STATUS_STALL_NAK_EP2_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP2_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_EP_STATUS_STALL_NAK_EP1_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP1_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_EP_STATUS_STALL_NAK_EP1_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP1_IN(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP0_OUT_MASK USBCTRL_EP_STATUS_STALL_NAK_EP0_OUT(ALL1)
#define USBCTRL_EP_STATUS_STALL_NAK_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_EP_STATUS_STALL_NAK_EP0_IN_MASK USBCTRL_EP_STATUS_STALL_NAK_EP0_IN(ALL1)

/*USB_MUXING Register macros*/

#define USBCTRL_USB_MUXING_SWAP_DPDM(v) (((v)&0x1)<<31)
#define USBCTRL_USB_MUXING_SWAP_DPDM_MASK USBCTRL_USB_MUXING_SWAP_DPDM(ALL1)
#define USBCTRL_USB_MUXING_USBPHY_AS_GPIO(v) (((v)&0x1)<<4)
#define USBCTRL_USB_MUXING_USBPHY_AS_GPIO_MASK USBCTRL_USB_MUXING_USBPHY_AS_GPIO(ALL1)
#define USBCTRL_USB_MUXING_SOFTCON(v) (((v)&0x1)<<3)
#define USBCTRL_USB_MUXING_SOFTCON_MASK USBCTRL_USB_MUXING_SOFTCON(ALL1)
#define USBCTRL_USB_MUXING_TO_DIGITAL_PAD(v) (((v)&0x1)<<2)
#define USBCTRL_USB_MUXING_TO_DIGITAL_PAD_MASK USBCTRL_USB_MUXING_TO_DIGITAL_PAD(ALL1)
#define USBCTRL_USB_MUXING_TO_EXTPHY(v) (((v)&0x1)<<1)
#define USBCTRL_USB_MUXING_TO_EXTPHY_MASK USBCTRL_USB_MUXING_TO_EXTPHY(ALL1)
#define USBCTRL_USB_MUXING_TO_PHY(v) (((v)&0x1)<<0)
#define USBCTRL_USB_MUXING_TO_PHY_MASK USBCTRL_USB_MUXING_TO_PHY(ALL1)

/*USB_PWR Register macros*/

#define USBCTRL_USB_PWR_OVERCURR_DETECT_EN(v) (((v)&0x1)<<5)
#define USBCTRL_USB_PWR_OVERCURR_DETECT_EN_MASK USBCTRL_USB_PWR_OVERCURR_DETECT_EN(ALL1)
#define USBCTRL_USB_PWR_OVERCURR_DETECT(v) (((v)&0x1)<<4)
#define USBCTRL_USB_PWR_OVERCURR_DETECT_MASK USBCTRL_USB_PWR_OVERCURR_DETECT(ALL1)
#define USBCTRL_USB_PWR_VBUS_DETECT_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_USB_PWR_VBUS_DETECT_OVERRIDE_EN_MASK USBCTRL_USB_PWR_VBUS_DETECT_OVERRIDE_EN(ALL1)
#define USBCTRL_USB_PWR_VBUS_DETECT(v) (((v)&0x1)<<2)
#define USBCTRL_USB_PWR_VBUS_DETECT_MASK USBCTRL_USB_PWR_VBUS_DETECT(ALL1)
#define USBCTRL_USB_PWR_VBUS_EN_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_USB_PWR_VBUS_EN_OVERRIDE_EN_MASK USBCTRL_USB_PWR_VBUS_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USB_PWR_VBUS_EN(v) (((v)&0x1)<<0)
#define USBCTRL_USB_PWR_VBUS_EN_MASK USBCTRL_USB_PWR_VBUS_EN(ALL1)

/*USBPHY_DIRECT Register macros*/

#define USBCTRL_USBPHY_DIRECT_RX_DM_OVERRIDE(v) (((v)&0x1)<<25)
#define USBCTRL_USBPHY_DIRECT_RX_DM_OVERRIDE_MASK USBCTRL_USBPHY_DIRECT_RX_DM_OVERRIDE(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_DP_OVERRIDE(v) (((v)&0x1)<<24)
#define USBCTRL_USBPHY_DIRECT_RX_DP_OVERRIDE_MASK USBCTRL_USBPHY_DIRECT_RX_DP_OVERRIDE(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_DD_OVERRIDE(v) (((v)&0x1)<<23)
#define USBCTRL_USBPHY_DIRECT_RX_DD_OVERRIDE_MASK USBCTRL_USBPHY_DIRECT_RX_DD_OVERRIDE(ALL1)
#define USBCTRL_USBPHY_DIRECT_DM_OVV(v) (((v)&0x1)<<22)
#define USBCTRL_USBPHY_DIRECT_DM_OVV_MASK USBCTRL_USBPHY_DIRECT_DM_OVV(ALL1)
#define USBCTRL_USBPHY_DIRECT_DP_OVV(v) (((v)&0x1)<<21)
#define USBCTRL_USBPHY_DIRECT_DP_OVV_MASK USBCTRL_USBPHY_DIRECT_DP_OVV(ALL1)
#define USBCTRL_USBPHY_DIRECT_DM_OVCN(v) (((v)&0x1)<<20)
#define USBCTRL_USBPHY_DIRECT_DM_OVCN_MASK USBCTRL_USBPHY_DIRECT_DM_OVCN(ALL1)
#define USBCTRL_USBPHY_DIRECT_DP_OVCN(v) (((v)&0x1)<<19)
#define USBCTRL_USBPHY_DIRECT_DP_OVCN_MASK USBCTRL_USBPHY_DIRECT_DP_OVCN(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_DM(v) (((v)&0x1)<<18)
#define USBCTRL_USBPHY_DIRECT_RX_DM_MASK USBCTRL_USBPHY_DIRECT_RX_DM(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_DP(v) (((v)&0x1)<<17)
#define USBCTRL_USBPHY_DIRECT_RX_DP_MASK USBCTRL_USBPHY_DIRECT_RX_DP(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_DD(v) (((v)&0x1)<<16)
#define USBCTRL_USBPHY_DIRECT_RX_DD_MASK USBCTRL_USBPHY_DIRECT_RX_DD(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_DIFFMODE(v) (((v)&0x1)<<15)
#define USBCTRL_USBPHY_DIRECT_TX_DIFFMODE_MASK USBCTRL_USBPHY_DIRECT_TX_DIFFMODE(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_FSSLEW(v) (((v)&0x1)<<14)
#define USBCTRL_USBPHY_DIRECT_TX_FSSLEW_MASK USBCTRL_USBPHY_DIRECT_TX_FSSLEW(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_PD(v) (((v)&0x1)<<13)
#define USBCTRL_USBPHY_DIRECT_TX_PD_MASK USBCTRL_USBPHY_DIRECT_TX_PD(ALL1)
#define USBCTRL_USBPHY_DIRECT_RX_PD(v) (((v)&0x1)<<12)
#define USBCTRL_USBPHY_DIRECT_RX_PD_MASK USBCTRL_USBPHY_DIRECT_RX_PD(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_DM(v) (((v)&0x1)<<11)
#define USBCTRL_USBPHY_DIRECT_TX_DM_MASK USBCTRL_USBPHY_DIRECT_TX_DM(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_DP(v) (((v)&0x1)<<10)
#define USBCTRL_USBPHY_DIRECT_TX_DP_MASK USBCTRL_USBPHY_DIRECT_TX_DP(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_DM_OE(v) (((v)&0x1)<<9)
#define USBCTRL_USBPHY_DIRECT_TX_DM_OE_MASK USBCTRL_USBPHY_DIRECT_TX_DM_OE(ALL1)
#define USBCTRL_USBPHY_DIRECT_TX_DP_OE(v) (((v)&0x1)<<8)
#define USBCTRL_USBPHY_DIRECT_TX_DP_OE_MASK USBCTRL_USBPHY_DIRECT_TX_DP_OE(ALL1)
#define USBCTRL_USBPHY_DIRECT_DM_PULLDN_EN(v) (((v)&0x1)<<6)
#define USBCTRL_USBPHY_DIRECT_DM_PULLDN_EN_MASK USBCTRL_USBPHY_DIRECT_DM_PULLDN_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_DM_PULLUP_EN(v) (((v)&0x1)<<5)
#define USBCTRL_USBPHY_DIRECT_DM_PULLUP_EN_MASK USBCTRL_USBPHY_DIRECT_DM_PULLUP_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_DM_PULLUP_HISEL(v) (((v)&0x1)<<4)
#define USBCTRL_USBPHY_DIRECT_DM_PULLUP_HISEL_MASK USBCTRL_USBPHY_DIRECT_DM_PULLUP_HISEL(ALL1)
#define USBCTRL_USBPHY_DIRECT_DP_PULLDN_EN(v) (((v)&0x1)<<2)
#define USBCTRL_USBPHY_DIRECT_DP_PULLDN_EN_MASK USBCTRL_USBPHY_DIRECT_DP_PULLDN_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_DP_PULLUP_EN(v) (((v)&0x1)<<1)
#define USBCTRL_USBPHY_DIRECT_DP_PULLUP_EN_MASK USBCTRL_USBPHY_DIRECT_DP_PULLUP_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_DP_PULLUP_HISEL(v) (((v)&0x1)<<0)
#define USBCTRL_USBPHY_DIRECT_DP_PULLUP_HISEL_MASK USBCTRL_USBPHY_DIRECT_DP_PULLUP_HISEL(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_DIRECT_OVERRIDE Register macros*/

#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_TRIM Register macros*/

#define USBCTRL_USBPHY_TRIM_DM_PULLDN_TRIM(v) (((v)&0x1f)<<8)
#define USBCTRL_USBPHY_TRIM_DM_PULLDN_TRIM_MASK USBCTRL_USBPHY_TRIM_DM_PULLDN_TRIM(ALL1)
#define USBCTRL_USBPHY_TRIM_DP_PULLDN_TRIM(v) (((v)&0x1f)<<0)
#define USBCTRL_USBPHY_TRIM_DP_PULLDN_TRIM_MASK USBCTRL_USBPHY_TRIM_DP_PULLDN_TRIM(ALL1)

/*LINESTATE_TUNING Register macros*/

#define USBCTRL_LINESTATE_TUNING_SPARE_FIX(v) (((v)&0xf)<<8)
#define USBCTRL_LINESTATE_TUNING_SPARE_FIX_MASK USBCTRL_LINESTATE_TUNING_SPARE_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_DEV_LS_WAKE_FIX(v) (((v)&0x1)<<7)
#define USBCTRL_LINESTATE_TUNING_DEV_LS_WAKE_FIX_MASK USBCTRL_LINESTATE_TUNING_DEV_LS_WAKE_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(v) (((v)&0x1)<<6)
#define USBCTRL_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_MASK USBCTRL_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(ALL1)
#define USBCTRL_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(v) (((v)&0x1)<<5)
#define USBCTRL_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_MASK USBCTRL_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(v) (((v)&0x1)<<4)
#define USBCTRL_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_MASK USBCTRL_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(v) (((v)&0x1)<<3)
#define USBCTRL_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_MASK USBCTRL_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_MULTI_HUB_FIX(v) (((v)&0x1)<<2)
#define USBCTRL_LINESTATE_TUNING_MULTI_HUB_FIX_MASK USBCTRL_LINESTATE_TUNING_MULTI_HUB_FIX(ALL1)
#define USBCTRL_LINESTATE_TUNING_LINESTATE_DELAY(v) (((v)&0x1)<<1)
#define USBCTRL_LINESTATE_TUNING_LINESTATE_DELAY_MASK USBCTRL_LINESTATE_TUNING_LINESTATE_DELAY(ALL1)
#define USBCTRL_LINESTATE_TUNING_RCV_DELAY(v) (((v)&0x1)<<0)
#define USBCTRL_LINESTATE_TUNING_RCV_DELAY_MASK USBCTRL_LINESTATE_TUNING_RCV_DELAY(ALL1)

/*INTR Register macros*/

#define USBCTRL_INTR_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_INTR_EPX_STOPPED_ON_NAK_MASK USBCTRL_INTR_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_INTR_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_INTR_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_INTR_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_INTR_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_INTR_ENDPOINT_ERROR_MASK USBCTRL_INTR_ENDPOINT_ERROR(ALL1)
#define USBCTRL_INTR_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_INTR_RX_SHORT_PACKET_MASK USBCTRL_INTR_RX_SHORT_PACKET(ALL1)
#define USBCTRL_INTR_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_INTR_EP_STALL_NAK_MASK USBCTRL_INTR_EP_STALL_NAK(ALL1)
#define USBCTRL_INTR_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_INTR_ABORT_DONE_MASK USBCTRL_INTR_ABORT_DONE(ALL1)
#define USBCTRL_INTR_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_INTR_DEV_SOF_MASK USBCTRL_INTR_DEV_SOF(ALL1)
#define USBCTRL_INTR_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_INTR_SETUP_REQ_MASK USBCTRL_INTR_SETUP_REQ(ALL1)
#define USBCTRL_INTR_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_INTR_DEV_RESUME_FROM_HOST_MASK USBCTRL_INTR_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_INTR_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_INTR_DEV_SUSPEND_MASK USBCTRL_INTR_DEV_SUSPEND(ALL1)
#define USBCTRL_INTR_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_INTR_DEV_CONN_DIS_MASK USBCTRL_INTR_DEV_CONN_DIS(ALL1)
#define USBCTRL_INTR_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_INTR_BUS_RESET_MASK USBCTRL_INTR_BUS_RESET(ALL1)
#define USBCTRL_INTR_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_INTR_VBUS_DETECT_MASK USBCTRL_INTR_VBUS_DETECT(ALL1)
#define USBCTRL_INTR_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_INTR_STALL_MASK USBCTRL_INTR_STALL(ALL1)
#define USBCTRL_INTR_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_INTR_ERROR_CRC_MASK USBCTRL_INTR_ERROR_CRC(ALL1)
#define USBCTRL_INTR_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_INTR_ERROR_BIT_STUFF_MASK USBCTRL_INTR_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_INTR_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_INTR_ERROR_RX_OVERFLOW_MASK USBCTRL_INTR_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_INTR_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_INTR_ERROR_RX_TIMEOUT_MASK USBCTRL_INTR_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_INTR_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_INTR_ERROR_DATA_SEQ_MASK USBCTRL_INTR_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_INTR_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_INTR_BUFF_STATUS_MASK USBCTRL_INTR_BUFF_STATUS(ALL1)
#define USBCTRL_INTR_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_INTR_TRANS_COMPLETE_MASK USBCTRL_INTR_TRANS_COMPLETE(ALL1)
#define USBCTRL_INTR_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_INTR_HOST_SOF_MASK USBCTRL_INTR_HOST_SOF(ALL1)
#define USBCTRL_INTR_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_INTR_HOST_RESUME_MASK USBCTRL_INTR_HOST_RESUME(ALL1)
#define USBCTRL_INTR_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_INTR_HOST_CONN_DIS_MASK USBCTRL_INTR_HOST_CONN_DIS(ALL1)

/*INTE Register macros*/

#define USBCTRL_INTE_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_INTE_EPX_STOPPED_ON_NAK_MASK USBCTRL_INTE_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_INTE_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_INTE_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_INTE_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_INTE_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_INTE_ENDPOINT_ERROR_MASK USBCTRL_INTE_ENDPOINT_ERROR(ALL1)
#define USBCTRL_INTE_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_INTE_RX_SHORT_PACKET_MASK USBCTRL_INTE_RX_SHORT_PACKET(ALL1)
#define USBCTRL_INTE_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_INTE_EP_STALL_NAK_MASK USBCTRL_INTE_EP_STALL_NAK(ALL1)
#define USBCTRL_INTE_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_INTE_ABORT_DONE_MASK USBCTRL_INTE_ABORT_DONE(ALL1)
#define USBCTRL_INTE_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_INTE_DEV_SOF_MASK USBCTRL_INTE_DEV_SOF(ALL1)
#define USBCTRL_INTE_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_INTE_SETUP_REQ_MASK USBCTRL_INTE_SETUP_REQ(ALL1)
#define USBCTRL_INTE_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_INTE_DEV_RESUME_FROM_HOST_MASK USBCTRL_INTE_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_INTE_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_INTE_DEV_SUSPEND_MASK USBCTRL_INTE_DEV_SUSPEND(ALL1)
#define USBCTRL_INTE_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_INTE_DEV_CONN_DIS_MASK USBCTRL_INTE_DEV_CONN_DIS(ALL1)
#define USBCTRL_INTE_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_INTE_BUS_RESET_MASK USBCTRL_INTE_BUS_RESET(ALL1)
#define USBCTRL_INTE_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_INTE_VBUS_DETECT_MASK USBCTRL_INTE_VBUS_DETECT(ALL1)
#define USBCTRL_INTE_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_INTE_STALL_MASK USBCTRL_INTE_STALL(ALL1)
#define USBCTRL_INTE_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_INTE_ERROR_CRC_MASK USBCTRL_INTE_ERROR_CRC(ALL1)
#define USBCTRL_INTE_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_INTE_ERROR_BIT_STUFF_MASK USBCTRL_INTE_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_INTE_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_INTE_ERROR_RX_OVERFLOW_MASK USBCTRL_INTE_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_INTE_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_INTE_ERROR_RX_TIMEOUT_MASK USBCTRL_INTE_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_INTE_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_INTE_ERROR_DATA_SEQ_MASK USBCTRL_INTE_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_INTE_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_INTE_BUFF_STATUS_MASK USBCTRL_INTE_BUFF_STATUS(ALL1)
#define USBCTRL_INTE_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_INTE_TRANS_COMPLETE_MASK USBCTRL_INTE_TRANS_COMPLETE(ALL1)
#define USBCTRL_INTE_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_INTE_HOST_SOF_MASK USBCTRL_INTE_HOST_SOF(ALL1)
#define USBCTRL_INTE_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_INTE_HOST_RESUME_MASK USBCTRL_INTE_HOST_RESUME(ALL1)
#define USBCTRL_INTE_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_INTE_HOST_CONN_DIS_MASK USBCTRL_INTE_HOST_CONN_DIS(ALL1)

/*INTF Register macros*/

#define USBCTRL_INTF_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_INTF_EPX_STOPPED_ON_NAK_MASK USBCTRL_INTF_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_INTF_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_INTF_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_INTF_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_INTF_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_INTF_ENDPOINT_ERROR_MASK USBCTRL_INTF_ENDPOINT_ERROR(ALL1)
#define USBCTRL_INTF_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_INTF_RX_SHORT_PACKET_MASK USBCTRL_INTF_RX_SHORT_PACKET(ALL1)
#define USBCTRL_INTF_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_INTF_EP_STALL_NAK_MASK USBCTRL_INTF_EP_STALL_NAK(ALL1)
#define USBCTRL_INTF_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_INTF_ABORT_DONE_MASK USBCTRL_INTF_ABORT_DONE(ALL1)
#define USBCTRL_INTF_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_INTF_DEV_SOF_MASK USBCTRL_INTF_DEV_SOF(ALL1)
#define USBCTRL_INTF_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_INTF_SETUP_REQ_MASK USBCTRL_INTF_SETUP_REQ(ALL1)
#define USBCTRL_INTF_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_INTF_DEV_RESUME_FROM_HOST_MASK USBCTRL_INTF_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_INTF_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_INTF_DEV_SUSPEND_MASK USBCTRL_INTF_DEV_SUSPEND(ALL1)
#define USBCTRL_INTF_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_INTF_DEV_CONN_DIS_MASK USBCTRL_INTF_DEV_CONN_DIS(ALL1)
#define USBCTRL_INTF_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_INTF_BUS_RESET_MASK USBCTRL_INTF_BUS_RESET(ALL1)
#define USBCTRL_INTF_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_INTF_VBUS_DETECT_MASK USBCTRL_INTF_VBUS_DETECT(ALL1)
#define USBCTRL_INTF_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_INTF_STALL_MASK USBCTRL_INTF_STALL(ALL1)
#define USBCTRL_INTF_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_INTF_ERROR_CRC_MASK USBCTRL_INTF_ERROR_CRC(ALL1)
#define USBCTRL_INTF_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_INTF_ERROR_BIT_STUFF_MASK USBCTRL_INTF_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_INTF_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_INTF_ERROR_RX_OVERFLOW_MASK USBCTRL_INTF_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_INTF_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_INTF_ERROR_RX_TIMEOUT_MASK USBCTRL_INTF_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_INTF_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_INTF_ERROR_DATA_SEQ_MASK USBCTRL_INTF_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_INTF_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_INTF_BUFF_STATUS_MASK USBCTRL_INTF_BUFF_STATUS(ALL1)
#define USBCTRL_INTF_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_INTF_TRANS_COMPLETE_MASK USBCTRL_INTF_TRANS_COMPLETE(ALL1)
#define USBCTRL_INTF_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_INTF_HOST_SOF_MASK USBCTRL_INTF_HOST_SOF(ALL1)
#define USBCTRL_INTF_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_INTF_HOST_RESUME_MASK USBCTRL_INTF_HOST_RESUME(ALL1)
#define USBCTRL_INTF_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_INTF_HOST_CONN_DIS_MASK USBCTRL_INTF_HOST_CONN_DIS(ALL1)

/*INTS Register macros*/

#define USBCTRL_INTS_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_INTS_EPX_STOPPED_ON_NAK_MASK USBCTRL_INTS_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_INTS_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_INTS_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_INTS_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_INTS_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_INTS_ENDPOINT_ERROR_MASK USBCTRL_INTS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_INTS_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_INTS_RX_SHORT_PACKET_MASK USBCTRL_INTS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_INTS_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_INTS_EP_STALL_NAK_MASK USBCTRL_INTS_EP_STALL_NAK(ALL1)
#define USBCTRL_INTS_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_INTS_ABORT_DONE_MASK USBCTRL_INTS_ABORT_DONE(ALL1)
#define USBCTRL_INTS_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_INTS_DEV_SOF_MASK USBCTRL_INTS_DEV_SOF(ALL1)
#define USBCTRL_INTS_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_INTS_SETUP_REQ_MASK USBCTRL_INTS_SETUP_REQ(ALL1)
#define USBCTRL_INTS_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_INTS_DEV_RESUME_FROM_HOST_MASK USBCTRL_INTS_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_INTS_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_INTS_DEV_SUSPEND_MASK USBCTRL_INTS_DEV_SUSPEND(ALL1)
#define USBCTRL_INTS_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_INTS_DEV_CONN_DIS_MASK USBCTRL_INTS_DEV_CONN_DIS(ALL1)
#define USBCTRL_INTS_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_INTS_BUS_RESET_MASK USBCTRL_INTS_BUS_RESET(ALL1)
#define USBCTRL_INTS_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_INTS_VBUS_DETECT_MASK USBCTRL_INTS_VBUS_DETECT(ALL1)
#define USBCTRL_INTS_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_INTS_STALL_MASK USBCTRL_INTS_STALL(ALL1)
#define USBCTRL_INTS_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_INTS_ERROR_CRC_MASK USBCTRL_INTS_ERROR_CRC(ALL1)
#define USBCTRL_INTS_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_INTS_ERROR_BIT_STUFF_MASK USBCTRL_INTS_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_INTS_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_INTS_ERROR_RX_OVERFLOW_MASK USBCTRL_INTS_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_INTS_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_INTS_ERROR_RX_TIMEOUT_MASK USBCTRL_INTS_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_INTS_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_INTS_ERROR_DATA_SEQ_MASK USBCTRL_INTS_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_INTS_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_INTS_BUFF_STATUS_MASK USBCTRL_INTS_BUFF_STATUS(ALL1)
#define USBCTRL_INTS_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_INTS_TRANS_COMPLETE_MASK USBCTRL_INTS_TRANS_COMPLETE(ALL1)
#define USBCTRL_INTS_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_INTS_HOST_SOF_MASK USBCTRL_INTS_HOST_SOF(ALL1)
#define USBCTRL_INTS_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_INTS_HOST_RESUME_MASK USBCTRL_INTS_HOST_RESUME(ALL1)
#define USBCTRL_INTS_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_INTS_HOST_CONN_DIS_MASK USBCTRL_INTS_HOST_CONN_DIS(ALL1)

/*SOF_TIMESTAMP_RAW Register macros*/


/*SOF_TIMESTAMP_LAST Register macros*/


/*SM_STATE Register macros*/

#define USBCTRL_SM_STATE_RX_DASM(v) (((v)&0xf)<<8)
#define USBCTRL_SM_STATE_RX_DASM_MASK USBCTRL_SM_STATE_RX_DASM(ALL1)
#define USBCTRL_SM_STATE_BC_STATE(v) (((v)&0x7)<<5)
#define USBCTRL_SM_STATE_BC_STATE_MASK USBCTRL_SM_STATE_BC_STATE(ALL1)
#define USBCTRL_SM_STATE_STATE(v) (((v)&0x1f)<<0)
#define USBCTRL_SM_STATE_STATE_MASK USBCTRL_SM_STATE_STATE(ALL1)

/*EP_TX_ERROR Register macros*/

#define USBCTRL_EP_TX_ERROR_EP15(v) (((v)&0x3)<<30)
#define USBCTRL_EP_TX_ERROR_EP15_MASK USBCTRL_EP_TX_ERROR_EP15(ALL1)
#define USBCTRL_EP_TX_ERROR_EP14(v) (((v)&0x3)<<28)
#define USBCTRL_EP_TX_ERROR_EP14_MASK USBCTRL_EP_TX_ERROR_EP14(ALL1)
#define USBCTRL_EP_TX_ERROR_EP13(v) (((v)&0x3)<<26)
#define USBCTRL_EP_TX_ERROR_EP13_MASK USBCTRL_EP_TX_ERROR_EP13(ALL1)
#define USBCTRL_EP_TX_ERROR_EP12(v) (((v)&0x3)<<24)
#define USBCTRL_EP_TX_ERROR_EP12_MASK USBCTRL_EP_TX_ERROR_EP12(ALL1)
#define USBCTRL_EP_TX_ERROR_EP11(v) (((v)&0x3)<<22)
#define USBCTRL_EP_TX_ERROR_EP11_MASK USBCTRL_EP_TX_ERROR_EP11(ALL1)
#define USBCTRL_EP_TX_ERROR_EP10(v) (((v)&0x3)<<20)
#define USBCTRL_EP_TX_ERROR_EP10_MASK USBCTRL_EP_TX_ERROR_EP10(ALL1)
#define USBCTRL_EP_TX_ERROR_EP9(v) (((v)&0x3)<<18)
#define USBCTRL_EP_TX_ERROR_EP9_MASK USBCTRL_EP_TX_ERROR_EP9(ALL1)
#define USBCTRL_EP_TX_ERROR_EP8(v) (((v)&0x3)<<16)
#define USBCTRL_EP_TX_ERROR_EP8_MASK USBCTRL_EP_TX_ERROR_EP8(ALL1)
#define USBCTRL_EP_TX_ERROR_EP7(v) (((v)&0x3)<<14)
#define USBCTRL_EP_TX_ERROR_EP7_MASK USBCTRL_EP_TX_ERROR_EP7(ALL1)
#define USBCTRL_EP_TX_ERROR_EP6(v) (((v)&0x3)<<12)
#define USBCTRL_EP_TX_ERROR_EP6_MASK USBCTRL_EP_TX_ERROR_EP6(ALL1)
#define USBCTRL_EP_TX_ERROR_EP5(v) (((v)&0x3)<<10)
#define USBCTRL_EP_TX_ERROR_EP5_MASK USBCTRL_EP_TX_ERROR_EP5(ALL1)
#define USBCTRL_EP_TX_ERROR_EP4(v) (((v)&0x3)<<8)
#define USBCTRL_EP_TX_ERROR_EP4_MASK USBCTRL_EP_TX_ERROR_EP4(ALL1)
#define USBCTRL_EP_TX_ERROR_EP3(v) (((v)&0x3)<<6)
#define USBCTRL_EP_TX_ERROR_EP3_MASK USBCTRL_EP_TX_ERROR_EP3(ALL1)
#define USBCTRL_EP_TX_ERROR_EP2(v) (((v)&0x3)<<4)
#define USBCTRL_EP_TX_ERROR_EP2_MASK USBCTRL_EP_TX_ERROR_EP2(ALL1)
#define USBCTRL_EP_TX_ERROR_EP1(v) (((v)&0x3)<<2)
#define USBCTRL_EP_TX_ERROR_EP1_MASK USBCTRL_EP_TX_ERROR_EP1(ALL1)
#define USBCTRL_EP_TX_ERROR_EP0(v) (((v)&0x3)<<0)
#define USBCTRL_EP_TX_ERROR_EP0_MASK USBCTRL_EP_TX_ERROR_EP0(ALL1)

/*EP_RX_ERROR Register macros*/

#define USBCTRL_EP_RX_ERROR_EP15_SEQ(v) (((v)&0x1)<<31)
#define USBCTRL_EP_RX_ERROR_EP15_SEQ_MASK USBCTRL_EP_RX_ERROR_EP15_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP15_TRANSACTION(v) (((v)&0x1)<<30)
#define USBCTRL_EP_RX_ERROR_EP15_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP15_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP14_SEQ(v) (((v)&0x1)<<29)
#define USBCTRL_EP_RX_ERROR_EP14_SEQ_MASK USBCTRL_EP_RX_ERROR_EP14_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP14_TRANSACTION(v) (((v)&0x1)<<28)
#define USBCTRL_EP_RX_ERROR_EP14_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP14_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP13_SEQ(v) (((v)&0x1)<<27)
#define USBCTRL_EP_RX_ERROR_EP13_SEQ_MASK USBCTRL_EP_RX_ERROR_EP13_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP13_TRANSACTION(v) (((v)&0x1)<<26)
#define USBCTRL_EP_RX_ERROR_EP13_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP13_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP12_SEQ(v) (((v)&0x1)<<25)
#define USBCTRL_EP_RX_ERROR_EP12_SEQ_MASK USBCTRL_EP_RX_ERROR_EP12_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP12_TRANSACTION(v) (((v)&0x1)<<24)
#define USBCTRL_EP_RX_ERROR_EP12_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP12_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP11_SEQ(v) (((v)&0x1)<<23)
#define USBCTRL_EP_RX_ERROR_EP11_SEQ_MASK USBCTRL_EP_RX_ERROR_EP11_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP11_TRANSACTION(v) (((v)&0x1)<<22)
#define USBCTRL_EP_RX_ERROR_EP11_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP11_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP10_SEQ(v) (((v)&0x1)<<21)
#define USBCTRL_EP_RX_ERROR_EP10_SEQ_MASK USBCTRL_EP_RX_ERROR_EP10_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP10_TRANSACTION(v) (((v)&0x1)<<20)
#define USBCTRL_EP_RX_ERROR_EP10_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP10_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP9_SEQ(v) (((v)&0x1)<<19)
#define USBCTRL_EP_RX_ERROR_EP9_SEQ_MASK USBCTRL_EP_RX_ERROR_EP9_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP9_TRANSACTION(v) (((v)&0x1)<<18)
#define USBCTRL_EP_RX_ERROR_EP9_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP9_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP8_SEQ(v) (((v)&0x1)<<17)
#define USBCTRL_EP_RX_ERROR_EP8_SEQ_MASK USBCTRL_EP_RX_ERROR_EP8_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP8_TRANSACTION(v) (((v)&0x1)<<16)
#define USBCTRL_EP_RX_ERROR_EP8_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP8_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP7_SEQ(v) (((v)&0x1)<<15)
#define USBCTRL_EP_RX_ERROR_EP7_SEQ_MASK USBCTRL_EP_RX_ERROR_EP7_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP7_TRANSACTION(v) (((v)&0x1)<<14)
#define USBCTRL_EP_RX_ERROR_EP7_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP7_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP6_SEQ(v) (((v)&0x1)<<13)
#define USBCTRL_EP_RX_ERROR_EP6_SEQ_MASK USBCTRL_EP_RX_ERROR_EP6_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP6_TRANSACTION(v) (((v)&0x1)<<12)
#define USBCTRL_EP_RX_ERROR_EP6_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP6_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP5_SEQ(v) (((v)&0x1)<<11)
#define USBCTRL_EP_RX_ERROR_EP5_SEQ_MASK USBCTRL_EP_RX_ERROR_EP5_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP5_TRANSACTION(v) (((v)&0x1)<<10)
#define USBCTRL_EP_RX_ERROR_EP5_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP5_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP4_SEQ(v) (((v)&0x1)<<9)
#define USBCTRL_EP_RX_ERROR_EP4_SEQ_MASK USBCTRL_EP_RX_ERROR_EP4_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP4_TRANSACTION(v) (((v)&0x1)<<8)
#define USBCTRL_EP_RX_ERROR_EP4_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP4_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP3_SEQ(v) (((v)&0x1)<<7)
#define USBCTRL_EP_RX_ERROR_EP3_SEQ_MASK USBCTRL_EP_RX_ERROR_EP3_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP3_TRANSACTION(v) (((v)&0x1)<<6)
#define USBCTRL_EP_RX_ERROR_EP3_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP3_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP2_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_EP_RX_ERROR_EP2_SEQ_MASK USBCTRL_EP_RX_ERROR_EP2_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP2_TRANSACTION(v) (((v)&0x1)<<4)
#define USBCTRL_EP_RX_ERROR_EP2_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP2_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP1_SEQ(v) (((v)&0x1)<<3)
#define USBCTRL_EP_RX_ERROR_EP1_SEQ_MASK USBCTRL_EP_RX_ERROR_EP1_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP1_TRANSACTION(v) (((v)&0x1)<<2)
#define USBCTRL_EP_RX_ERROR_EP1_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP1_TRANSACTION(ALL1)
#define USBCTRL_EP_RX_ERROR_EP0_SEQ(v) (((v)&0x1)<<1)
#define USBCTRL_EP_RX_ERROR_EP0_SEQ_MASK USBCTRL_EP_RX_ERROR_EP0_SEQ(ALL1)
#define USBCTRL_EP_RX_ERROR_EP0_TRANSACTION(v) (((v)&0x1)<<0)
#define USBCTRL_EP_RX_ERROR_EP0_TRANSACTION_MASK USBCTRL_EP_RX_ERROR_EP0_TRANSACTION(ALL1)

/*DEV_SM_WATCHDOG Register macros*/

#define USBCTRL_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<20)
#define USBCTRL_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DEV_SM_WATCHDOG_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_DEV_SM_WATCHDOG_RESET_MASK USBCTRL_DEV_SM_WATCHDOG_RESET(ALL1)
#define USBCTRL_DEV_SM_WATCHDOG_ENABLE(v) (((v)&0x1)<<18)
#define USBCTRL_DEV_SM_WATCHDOG_ENABLE_MASK USBCTRL_DEV_SM_WATCHDOG_ENABLE(ALL1)
#define USBCTRL_DEV_SM_WATCHDOG_LIMIT(v) (((v)&0x3ffff)<<0)
#define USBCTRL_DEV_SM_WATCHDOG_LIMIT_MASK USBCTRL_DEV_SM_WATCHDOG_LIMIT(ALL1)

/*ADDR_ENDP Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP_ADDRESS(ALL1)

/*ADDR_ENDP1 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP1_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP1_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP1_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP1_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP1_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP1_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP1_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP1_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP1_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP1_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP1_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP1_ADDRESS(ALL1)

/*ADDR_ENDP2 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP2_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP2_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP2_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP2_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP2_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP2_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP2_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP2_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP2_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP2_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP2_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP2_ADDRESS(ALL1)

/*ADDR_ENDP3 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP3_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP3_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP3_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP3_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP3_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP3_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP3_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP3_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP3_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP3_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP3_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP3_ADDRESS(ALL1)

/*ADDR_ENDP4 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP4_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP4_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP4_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP4_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP4_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP4_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP4_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP4_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP4_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP4_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP4_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP4_ADDRESS(ALL1)

/*ADDR_ENDP5 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP5_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP5_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP5_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP5_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP5_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP5_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP5_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP5_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP5_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP5_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP5_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP5_ADDRESS(ALL1)

/*ADDR_ENDP6 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP6_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP6_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP6_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP6_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP6_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP6_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP6_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP6_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP6_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP6_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP6_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP6_ADDRESS(ALL1)

/*ADDR_ENDP7 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP7_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP7_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP7_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP7_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP7_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP7_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP7_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP7_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP7_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP7_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP7_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP7_ADDRESS(ALL1)

/*ADDR_ENDP8 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP8_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP8_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP8_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP8_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP8_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP8_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP8_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP8_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP8_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP8_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP8_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP8_ADDRESS(ALL1)

/*ADDR_ENDP9 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP9_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP9_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP9_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP9_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP9_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP9_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP9_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP9_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP9_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP9_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP9_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP9_ADDRESS(ALL1)

/*ADDR_ENDP10 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP10_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP10_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP10_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP10_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP10_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP10_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP10_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP10_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP10_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP10_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP10_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP10_ADDRESS(ALL1)

/*ADDR_ENDP11 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP11_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP11_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP11_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP11_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP11_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP11_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP11_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP11_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP11_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP11_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP11_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP11_ADDRESS(ALL1)

/*ADDR_ENDP12 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP12_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP12_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP12_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP12_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP12_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP12_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP12_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP12_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP12_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP12_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP12_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP12_ADDRESS(ALL1)

/*ADDR_ENDP13 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP13_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP13_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP13_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP13_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP13_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP13_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP13_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP13_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP13_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP13_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP13_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP13_ADDRESS(ALL1)

/*ADDR_ENDP14 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP14_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP14_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP14_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP14_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP14_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP14_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP14_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP14_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP14_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP14_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP14_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP14_ADDRESS(ALL1)

/*ADDR_ENDP15 Register macros*/

#define USBCTRL_DPRAM_ADDR_ENDP15_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_ADDR_ENDP15_INTEP_PREAMBLE_MASK USBCTRL_DPRAM_ADDR_ENDP15_INTEP_PREAMBLE(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP15_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_ADDR_ENDP15_INTEP_DIR_MASK USBCTRL_DPRAM_ADDR_ENDP15_INTEP_DIR(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP15_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_DPRAM_ADDR_ENDP15_ENDPOINT_MASK USBCTRL_DPRAM_ADDR_ENDP15_ENDPOINT(ALL1)
#define USBCTRL_DPRAM_ADDR_ENDP15_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_DPRAM_ADDR_ENDP15_ADDRESS_MASK USBCTRL_DPRAM_ADDR_ENDP15_ADDRESS(ALL1)

/*MAIN_CTRL Register macros*/

#define USBCTRL_DPRAM_MAIN_CTRL_SIM_TIMING(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_MAIN_CTRL_SIM_TIMING_MASK USBCTRL_DPRAM_MAIN_CTRL_SIM_TIMING(ALL1)
#define USBCTRL_DPRAM_MAIN_CTRL_PHY_ISO(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_MAIN_CTRL_PHY_ISO_MASK USBCTRL_DPRAM_MAIN_CTRL_PHY_ISO(ALL1)
#define USBCTRL_DPRAM_MAIN_CTRL_HOST_NDEVICE(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_MAIN_CTRL_HOST_NDEVICE_MASK USBCTRL_DPRAM_MAIN_CTRL_HOST_NDEVICE(ALL1)
#define USBCTRL_DPRAM_MAIN_CTRL_CONTROLLER_EN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_MAIN_CTRL_CONTROLLER_EN_MASK USBCTRL_DPRAM_MAIN_CTRL_CONTROLLER_EN(ALL1)

/*SOF_WR Register macros*/

#define USBCTRL_DPRAM_SOF_WR_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_DPRAM_SOF_WR_COUNT_MASK USBCTRL_DPRAM_SOF_WR_COUNT(ALL1)

/*SOF_RD Register macros*/

#define USBCTRL_DPRAM_SOF_RD_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_DPRAM_SOF_RD_COUNT_MASK USBCTRL_DPRAM_SOF_RD_COUNT(ALL1)

/*SIE_CTRL Register macros*/

#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_STALL(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_STALL_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_INT_STALL(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_DOUBLE_BUF(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_DOUBLE_BUF_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_DOUBLE_BUF(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_1BUF(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_1BUF_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_INT_1BUF(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_2BUF(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_2BUF_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_INT_2BUF(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_INT_NAK_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_INT_NAK(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_EN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_EN_MASK USBCTRL_DPRAM_SIE_CTRL_DIRECT_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_DP(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_DP_MASK USBCTRL_DPRAM_SIE_CTRL_DIRECT_DP(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_DM(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_SIE_CTRL_DIRECT_DM_MASK USBCTRL_DPRAM_SIE_CTRL_DIRECT_DM(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_MASK USBCTRL_DPRAM_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_TRANSCEIVER_PD(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_SIE_CTRL_TRANSCEIVER_PD_MASK USBCTRL_DPRAM_SIE_CTRL_TRANSCEIVER_PD(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_RPU_OPT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_SIE_CTRL_RPU_OPT_MASK USBCTRL_DPRAM_SIE_CTRL_RPU_OPT(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_PULLUP_EN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_SIE_CTRL_PULLUP_EN_MASK USBCTRL_DPRAM_SIE_CTRL_PULLUP_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_PULLDOWN_EN(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_SIE_CTRL_PULLDOWN_EN_MASK USBCTRL_DPRAM_SIE_CTRL_PULLDOWN_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_RESET_BUS(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_SIE_CTRL_RESET_BUS_MASK USBCTRL_DPRAM_SIE_CTRL_RESET_BUS(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_RESUME(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_SIE_CTRL_RESUME_MASK USBCTRL_DPRAM_SIE_CTRL_RESUME(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_VBUS_EN(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_SIE_CTRL_VBUS_EN_MASK USBCTRL_DPRAM_SIE_CTRL_VBUS_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_KEEP_ALIVE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_SIE_CTRL_KEEP_ALIVE_EN_MASK USBCTRL_DPRAM_SIE_CTRL_KEEP_ALIVE_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_SOF_EN(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_SIE_CTRL_SOF_EN_MASK USBCTRL_DPRAM_SIE_CTRL_SOF_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_SOF_SYNC(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_SIE_CTRL_SOF_SYNC_MASK USBCTRL_DPRAM_SIE_CTRL_SOF_SYNC(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_PREAMBLE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_SIE_CTRL_PREAMBLE_EN_MASK USBCTRL_DPRAM_SIE_CTRL_PREAMBLE_EN(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_STOP_TRANS(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_SIE_CTRL_STOP_TRANS_MASK USBCTRL_DPRAM_SIE_CTRL_STOP_TRANS(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_RECEIVE_DATA(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_SIE_CTRL_RECEIVE_DATA_MASK USBCTRL_DPRAM_SIE_CTRL_RECEIVE_DATA(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_SEND_DATA(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_SIE_CTRL_SEND_DATA_MASK USBCTRL_DPRAM_SIE_CTRL_SEND_DATA(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_SEND_SETUP(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_SIE_CTRL_SEND_SETUP_MASK USBCTRL_DPRAM_SIE_CTRL_SEND_SETUP(ALL1)
#define USBCTRL_DPRAM_SIE_CTRL_START_TRANS(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_SIE_CTRL_START_TRANS_MASK USBCTRL_DPRAM_SIE_CTRL_START_TRANS(ALL1)

/*SIE_STATUS Register macros*/

#define USBCTRL_DPRAM_SIE_STATUS_DATA_SEQ_ERROR(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_SIE_STATUS_DATA_SEQ_ERROR_MASK USBCTRL_DPRAM_SIE_STATUS_DATA_SEQ_ERROR(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_ACK_REC(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_SIE_STATUS_ACK_REC_MASK USBCTRL_DPRAM_SIE_STATUS_ACK_REC(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_STALL_REC(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_SIE_STATUS_STALL_REC_MASK USBCTRL_DPRAM_SIE_STATUS_STALL_REC(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_NAK_REC(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_SIE_STATUS_NAK_REC_MASK USBCTRL_DPRAM_SIE_STATUS_NAK_REC(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_RX_TIMEOUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_SIE_STATUS_RX_TIMEOUT_MASK USBCTRL_DPRAM_SIE_STATUS_RX_TIMEOUT(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_RX_OVERFLOW(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_SIE_STATUS_RX_OVERFLOW_MASK USBCTRL_DPRAM_SIE_STATUS_RX_OVERFLOW(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_BIT_STUFF_ERROR(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_SIE_STATUS_BIT_STUFF_ERROR_MASK USBCTRL_DPRAM_SIE_STATUS_BIT_STUFF_ERROR(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_CRC_ERROR(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_SIE_STATUS_CRC_ERROR_MASK USBCTRL_DPRAM_SIE_STATUS_CRC_ERROR(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_ENDPOINT_ERROR(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_SIE_STATUS_ENDPOINT_ERROR_MASK USBCTRL_DPRAM_SIE_STATUS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_BUS_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_SIE_STATUS_BUS_RESET_MASK USBCTRL_DPRAM_SIE_STATUS_BUS_RESET(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_TRANS_COMPLETE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_SIE_STATUS_TRANS_COMPLETE_MASK USBCTRL_DPRAM_SIE_STATUS_TRANS_COMPLETE(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_SETUP_REC(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_SIE_STATUS_SETUP_REC_MASK USBCTRL_DPRAM_SIE_STATUS_SETUP_REC(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_CONNECTED(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_SIE_STATUS_CONNECTED_MASK USBCTRL_DPRAM_SIE_STATUS_CONNECTED(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_RX_SHORT_PACKET(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_SIE_STATUS_RX_SHORT_PACKET_MASK USBCTRL_DPRAM_SIE_STATUS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_RESUME(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_SIE_STATUS_RESUME_MASK USBCTRL_DPRAM_SIE_STATUS_RESUME(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_VBUS_OVER_CURR(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_SIE_STATUS_VBUS_OVER_CURR_MASK USBCTRL_DPRAM_SIE_STATUS_VBUS_OVER_CURR(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_SPEED(v) (((v)&0x3)<<8)
#define USBCTRL_DPRAM_SIE_STATUS_SPEED_MASK USBCTRL_DPRAM_SIE_STATUS_SPEED(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_SUSPENDED(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_SIE_STATUS_SUSPENDED_MASK USBCTRL_DPRAM_SIE_STATUS_SUSPENDED(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_LINE_STATE(v) (((v)&0x3)<<2)
#define USBCTRL_DPRAM_SIE_STATUS_LINE_STATE_MASK USBCTRL_DPRAM_SIE_STATUS_LINE_STATE(ALL1)
#define USBCTRL_DPRAM_SIE_STATUS_VBUS_DETECTED(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_SIE_STATUS_VBUS_DETECTED_MASK USBCTRL_DPRAM_SIE_STATUS_VBUS_DETECTED(ALL1)

/*INT_EP_CTRL Register macros*/

#define USBCTRL_DPRAM_INT_EP_CTRL_INT_EP_ACTIVE(v) (((v)&0x7fff)<<1)
#define USBCTRL_DPRAM_INT_EP_CTRL_INT_EP_ACTIVE_MASK USBCTRL_DPRAM_INT_EP_CTRL_INT_EP_ACTIVE(ALL1)

/*BUFF_STATUS Register macros*/

#define USBCTRL_DPRAM_BUFF_STATUS_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_BUFF_STATUS_EP15_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_BUFF_STATUS_EP15_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP15_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_BUFF_STATUS_EP14_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_BUFF_STATUS_EP14_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP14_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_BUFF_STATUS_EP13_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_BUFF_STATUS_EP13_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP13_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_BUFF_STATUS_EP12_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_BUFF_STATUS_EP12_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP12_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_BUFF_STATUS_EP11_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_BUFF_STATUS_EP11_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP11_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_BUFF_STATUS_EP10_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_BUFF_STATUS_EP10_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP10_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_BUFF_STATUS_EP9_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_BUFF_STATUS_EP9_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP9_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_BUFF_STATUS_EP8_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_BUFF_STATUS_EP8_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP8_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_BUFF_STATUS_EP7_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_BUFF_STATUS_EP7_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP7_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_BUFF_STATUS_EP6_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_BUFF_STATUS_EP6_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP6_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_BUFF_STATUS_EP5_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_BUFF_STATUS_EP5_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP5_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_BUFF_STATUS_EP4_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_BUFF_STATUS_EP4_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP4_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_BUFF_STATUS_EP3_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_BUFF_STATUS_EP3_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP3_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_BUFF_STATUS_EP2_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_BUFF_STATUS_EP2_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP2_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_BUFF_STATUS_EP1_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_BUFF_STATUS_EP1_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP1_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP0_OUT_MASK USBCTRL_DPRAM_BUFF_STATUS_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_STATUS_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_BUFF_STATUS_EP0_IN_MASK USBCTRL_DPRAM_BUFF_STATUS_EP0_IN(ALL1)

/*BUFF_CPU_SHOULD_HANDLE Register macros*/

#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP15_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP14_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP13_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP12_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP11_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP10_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP9_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP8_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP7_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP6_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP5_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP4_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP3_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP2_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP1_IN(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_IN_MASK USBCTRL_DPRAM_BUFF_CPU_SHOULD_HANDLE_EP0_IN(ALL1)

/*EP_ABORT Register macros*/

#define USBCTRL_DPRAM_EP_ABORT_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_EP_ABORT_EP15_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_EP_ABORT_EP15_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP15_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_EP_ABORT_EP14_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_EP_ABORT_EP14_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP14_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_EP_ABORT_EP13_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_EP_ABORT_EP13_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP13_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_EP_ABORT_EP12_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_EP_ABORT_EP12_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP12_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_EP_ABORT_EP11_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_EP_ABORT_EP11_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP11_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_EP_ABORT_EP10_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_EP_ABORT_EP10_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP10_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_EP_ABORT_EP9_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_EP_ABORT_EP9_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP9_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_EP_ABORT_EP8_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_EP_ABORT_EP8_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP8_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_EP_ABORT_EP7_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_EP_ABORT_EP7_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP7_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_EP_ABORT_EP6_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_EP_ABORT_EP6_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP6_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_EP_ABORT_EP5_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_EP_ABORT_EP5_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP5_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_EP_ABORT_EP4_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_EP_ABORT_EP4_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP4_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_EP_ABORT_EP3_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_EP_ABORT_EP3_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP3_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_EP_ABORT_EP2_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_EP_ABORT_EP2_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP2_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_EP_ABORT_EP1_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_EP_ABORT_EP1_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP1_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_ABORT_EP0_OUT_MASK USBCTRL_DPRAM_EP_ABORT_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_ABORT_EP0_IN_MASK USBCTRL_DPRAM_EP_ABORT_EP0_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_ABORT_DONE Register macros*/

#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_DPRAM_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_STALL_ARM Register macros*/

#define USBCTRL_DPRAM_EP_STALL_ARM_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_STALL_ARM_EP0_OUT_MASK USBCTRL_DPRAM_EP_STALL_ARM_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STALL_ARM_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_STALL_ARM_EP0_IN_MASK USBCTRL_DPRAM_EP_STALL_ARM_EP0_IN(ALL1)

/*NAK_POLL Register macros*/

#define USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_HI(v) (((v)&0xf)<<28)
#define USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_HI_MASK USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_HI(ALL1)
#define USBCTRL_DPRAM_NAK_POLL_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_NAK_POLL_EPX_STOPPED_ON_NAK_MASK USBCTRL_DPRAM_NAK_POLL_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_DPRAM_NAK_POLL_STOP_EPX_ON_NAK(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_NAK_POLL_STOP_EPX_ON_NAK_MASK USBCTRL_DPRAM_NAK_POLL_STOP_EPX_ON_NAK(ALL1)
#define USBCTRL_DPRAM_NAK_POLL_DELAY_FS(v) (((v)&0x3ff)<<16)
#define USBCTRL_DPRAM_NAK_POLL_DELAY_FS_MASK USBCTRL_DPRAM_NAK_POLL_DELAY_FS(ALL1)
#define USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_LO(v) (((v)&0x3f)<<10)
#define USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_LO_MASK USBCTRL_DPRAM_NAK_POLL_RETRY_COUNT_LO(ALL1)
#define USBCTRL_DPRAM_NAK_POLL_DELAY_LS(v) (((v)&0x3ff)<<0)
#define USBCTRL_DPRAM_NAK_POLL_DELAY_LS_MASK USBCTRL_DPRAM_NAK_POLL_DELAY_LS(ALL1)

/*EP_STATUS_STALL_NAK Register macros*/

#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP15_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP14_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP13_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP12_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP11_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP10_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP9_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP8_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP7_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP6_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP5_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP4_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP3_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP2_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP1_IN(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_OUT_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_OUT(ALL1)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_IN_MASK USBCTRL_DPRAM_EP_STATUS_STALL_NAK_EP0_IN(ALL1)

/*USB_MUXING Register macros*/

#define USBCTRL_DPRAM_USB_MUXING_SWAP_DPDM(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_USB_MUXING_SWAP_DPDM_MASK USBCTRL_DPRAM_USB_MUXING_SWAP_DPDM(ALL1)
#define USBCTRL_DPRAM_USB_MUXING_USBPHY_AS_GPIO(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_USB_MUXING_USBPHY_AS_GPIO_MASK USBCTRL_DPRAM_USB_MUXING_USBPHY_AS_GPIO(ALL1)
#define USBCTRL_DPRAM_USB_MUXING_SOFTCON(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_USB_MUXING_SOFTCON_MASK USBCTRL_DPRAM_USB_MUXING_SOFTCON(ALL1)
#define USBCTRL_DPRAM_USB_MUXING_TO_DIGITAL_PAD(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_USB_MUXING_TO_DIGITAL_PAD_MASK USBCTRL_DPRAM_USB_MUXING_TO_DIGITAL_PAD(ALL1)
#define USBCTRL_DPRAM_USB_MUXING_TO_EXTPHY(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_USB_MUXING_TO_EXTPHY_MASK USBCTRL_DPRAM_USB_MUXING_TO_EXTPHY(ALL1)
#define USBCTRL_DPRAM_USB_MUXING_TO_PHY(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_USB_MUXING_TO_PHY_MASK USBCTRL_DPRAM_USB_MUXING_TO_PHY(ALL1)

/*USB_PWR Register macros*/

#define USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT_EN(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT_EN_MASK USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT_EN(ALL1)
#define USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT_MASK USBCTRL_DPRAM_USB_PWR_OVERCURR_DETECT(ALL1)
#define USBCTRL_DPRAM_USB_PWR_VBUS_DETECT_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_USB_PWR_VBUS_DETECT_OVERRIDE_EN_MASK USBCTRL_DPRAM_USB_PWR_VBUS_DETECT_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USB_PWR_VBUS_DETECT(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_USB_PWR_VBUS_DETECT_MASK USBCTRL_DPRAM_USB_PWR_VBUS_DETECT(ALL1)
#define USBCTRL_DPRAM_USB_PWR_VBUS_EN_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_USB_PWR_VBUS_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USB_PWR_VBUS_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USB_PWR_VBUS_EN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_USB_PWR_VBUS_EN_MASK USBCTRL_DPRAM_USB_PWR_VBUS_EN(ALL1)

/*USBPHY_DIRECT Register macros*/

#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM_OVERRIDE(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM_OVERRIDE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM_OVERRIDE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP_OVERRIDE(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP_OVERRIDE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP_OVERRIDE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD_OVERRIDE(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD_OVERRIDE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD_OVERRIDE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVV(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVV_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVV(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVV(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVV_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVV(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVCN(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVCN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DM_OVCN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVCN(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVCN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DP_OVCN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DM(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DP(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_DD(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DIFFMODE(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DIFFMODE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_DIFFMODE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_FSSLEW(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_FSSLEW_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_FSSLEW(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_PD(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_PD_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_PD(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_PD(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_USBPHY_DIRECT_RX_PD_MASK USBCTRL_DPRAM_USBPHY_DIRECT_RX_PD(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM_OE(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM_OE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_DM_OE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP_OE(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP_OE_MASK USBCTRL_DPRAM_USBPHY_DIRECT_TX_DP_OE(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLDN_EN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLDN_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLDN_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_EN(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_HISEL(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_HISEL_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DM_PULLUP_HISEL(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLDN_EN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLDN_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLDN_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_EN(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_HISEL(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_HISEL_MASK USBCTRL_DPRAM_USBPHY_DIRECT_DP_PULLUP_HISEL(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_DIRECT_OVERRIDE Register macros*/

#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_DPRAM_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_TRIM Register macros*/

#define USBCTRL_DPRAM_USBPHY_TRIM_DM_PULLDN_TRIM(v) (((v)&0x1f)<<8)
#define USBCTRL_DPRAM_USBPHY_TRIM_DM_PULLDN_TRIM_MASK USBCTRL_DPRAM_USBPHY_TRIM_DM_PULLDN_TRIM(ALL1)
#define USBCTRL_DPRAM_USBPHY_TRIM_DP_PULLDN_TRIM(v) (((v)&0x1f)<<0)
#define USBCTRL_DPRAM_USBPHY_TRIM_DP_PULLDN_TRIM_MASK USBCTRL_DPRAM_USBPHY_TRIM_DP_PULLDN_TRIM(ALL1)

/*LINESTATE_TUNING Register macros*/

#define USBCTRL_DPRAM_LINESTATE_TUNING_SPARE_FIX(v) (((v)&0xf)<<8)
#define USBCTRL_DPRAM_LINESTATE_TUNING_SPARE_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_SPARE_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_LS_WAKE_FIX(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_LS_WAKE_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_DEV_LS_WAKE_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_MASK USBCTRL_DPRAM_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_MULTI_HUB_FIX(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_LINESTATE_TUNING_MULTI_HUB_FIX_MASK USBCTRL_DPRAM_LINESTATE_TUNING_MULTI_HUB_FIX(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_LINESTATE_DELAY(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_LINESTATE_DELAY_MASK USBCTRL_DPRAM_LINESTATE_TUNING_LINESTATE_DELAY(ALL1)
#define USBCTRL_DPRAM_LINESTATE_TUNING_RCV_DELAY(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_LINESTATE_TUNING_RCV_DELAY_MASK USBCTRL_DPRAM_LINESTATE_TUNING_RCV_DELAY(ALL1)

/*INTR Register macros*/

#define USBCTRL_DPRAM_INTR_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_INTR_EPX_STOPPED_ON_NAK_MASK USBCTRL_DPRAM_INTR_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_DPRAM_INTR_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_INTR_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DPRAM_INTR_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DPRAM_INTR_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_INTR_ENDPOINT_ERROR_MASK USBCTRL_DPRAM_INTR_ENDPOINT_ERROR(ALL1)
#define USBCTRL_DPRAM_INTR_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_INTR_RX_SHORT_PACKET_MASK USBCTRL_DPRAM_INTR_RX_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_INTR_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_INTR_EP_STALL_NAK_MASK USBCTRL_DPRAM_INTR_EP_STALL_NAK(ALL1)
#define USBCTRL_DPRAM_INTR_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_INTR_ABORT_DONE_MASK USBCTRL_DPRAM_INTR_ABORT_DONE(ALL1)
#define USBCTRL_DPRAM_INTR_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_INTR_DEV_SOF_MASK USBCTRL_DPRAM_INTR_DEV_SOF(ALL1)
#define USBCTRL_DPRAM_INTR_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_INTR_SETUP_REQ_MASK USBCTRL_DPRAM_INTR_SETUP_REQ(ALL1)
#define USBCTRL_DPRAM_INTR_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_INTR_DEV_RESUME_FROM_HOST_MASK USBCTRL_DPRAM_INTR_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_DPRAM_INTR_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_INTR_DEV_SUSPEND_MASK USBCTRL_DPRAM_INTR_DEV_SUSPEND(ALL1)
#define USBCTRL_DPRAM_INTR_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_INTR_DEV_CONN_DIS_MASK USBCTRL_DPRAM_INTR_DEV_CONN_DIS(ALL1)
#define USBCTRL_DPRAM_INTR_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_INTR_BUS_RESET_MASK USBCTRL_DPRAM_INTR_BUS_RESET(ALL1)
#define USBCTRL_DPRAM_INTR_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_INTR_VBUS_DETECT_MASK USBCTRL_DPRAM_INTR_VBUS_DETECT(ALL1)
#define USBCTRL_DPRAM_INTR_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_INTR_STALL_MASK USBCTRL_DPRAM_INTR_STALL(ALL1)
#define USBCTRL_DPRAM_INTR_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_INTR_ERROR_CRC_MASK USBCTRL_DPRAM_INTR_ERROR_CRC(ALL1)
#define USBCTRL_DPRAM_INTR_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_INTR_ERROR_BIT_STUFF_MASK USBCTRL_DPRAM_INTR_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_DPRAM_INTR_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_INTR_ERROR_RX_OVERFLOW_MASK USBCTRL_DPRAM_INTR_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_DPRAM_INTR_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_INTR_ERROR_RX_TIMEOUT_MASK USBCTRL_DPRAM_INTR_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_DPRAM_INTR_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_INTR_ERROR_DATA_SEQ_MASK USBCTRL_DPRAM_INTR_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_DPRAM_INTR_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_INTR_BUFF_STATUS_MASK USBCTRL_DPRAM_INTR_BUFF_STATUS(ALL1)
#define USBCTRL_DPRAM_INTR_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_INTR_TRANS_COMPLETE_MASK USBCTRL_DPRAM_INTR_TRANS_COMPLETE(ALL1)
#define USBCTRL_DPRAM_INTR_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_INTR_HOST_SOF_MASK USBCTRL_DPRAM_INTR_HOST_SOF(ALL1)
#define USBCTRL_DPRAM_INTR_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_INTR_HOST_RESUME_MASK USBCTRL_DPRAM_INTR_HOST_RESUME(ALL1)
#define USBCTRL_DPRAM_INTR_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_INTR_HOST_CONN_DIS_MASK USBCTRL_DPRAM_INTR_HOST_CONN_DIS(ALL1)

/*INTE Register macros*/

#define USBCTRL_DPRAM_INTE_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_INTE_EPX_STOPPED_ON_NAK_MASK USBCTRL_DPRAM_INTE_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_DPRAM_INTE_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_INTE_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DPRAM_INTE_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DPRAM_INTE_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_INTE_ENDPOINT_ERROR_MASK USBCTRL_DPRAM_INTE_ENDPOINT_ERROR(ALL1)
#define USBCTRL_DPRAM_INTE_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_INTE_RX_SHORT_PACKET_MASK USBCTRL_DPRAM_INTE_RX_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_INTE_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_INTE_EP_STALL_NAK_MASK USBCTRL_DPRAM_INTE_EP_STALL_NAK(ALL1)
#define USBCTRL_DPRAM_INTE_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_INTE_ABORT_DONE_MASK USBCTRL_DPRAM_INTE_ABORT_DONE(ALL1)
#define USBCTRL_DPRAM_INTE_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_INTE_DEV_SOF_MASK USBCTRL_DPRAM_INTE_DEV_SOF(ALL1)
#define USBCTRL_DPRAM_INTE_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_INTE_SETUP_REQ_MASK USBCTRL_DPRAM_INTE_SETUP_REQ(ALL1)
#define USBCTRL_DPRAM_INTE_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_INTE_DEV_RESUME_FROM_HOST_MASK USBCTRL_DPRAM_INTE_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_DPRAM_INTE_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_INTE_DEV_SUSPEND_MASK USBCTRL_DPRAM_INTE_DEV_SUSPEND(ALL1)
#define USBCTRL_DPRAM_INTE_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_INTE_DEV_CONN_DIS_MASK USBCTRL_DPRAM_INTE_DEV_CONN_DIS(ALL1)
#define USBCTRL_DPRAM_INTE_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_INTE_BUS_RESET_MASK USBCTRL_DPRAM_INTE_BUS_RESET(ALL1)
#define USBCTRL_DPRAM_INTE_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_INTE_VBUS_DETECT_MASK USBCTRL_DPRAM_INTE_VBUS_DETECT(ALL1)
#define USBCTRL_DPRAM_INTE_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_INTE_STALL_MASK USBCTRL_DPRAM_INTE_STALL(ALL1)
#define USBCTRL_DPRAM_INTE_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_INTE_ERROR_CRC_MASK USBCTRL_DPRAM_INTE_ERROR_CRC(ALL1)
#define USBCTRL_DPRAM_INTE_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_INTE_ERROR_BIT_STUFF_MASK USBCTRL_DPRAM_INTE_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_DPRAM_INTE_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_INTE_ERROR_RX_OVERFLOW_MASK USBCTRL_DPRAM_INTE_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_DPRAM_INTE_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_INTE_ERROR_RX_TIMEOUT_MASK USBCTRL_DPRAM_INTE_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_DPRAM_INTE_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_INTE_ERROR_DATA_SEQ_MASK USBCTRL_DPRAM_INTE_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_DPRAM_INTE_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_INTE_BUFF_STATUS_MASK USBCTRL_DPRAM_INTE_BUFF_STATUS(ALL1)
#define USBCTRL_DPRAM_INTE_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_INTE_TRANS_COMPLETE_MASK USBCTRL_DPRAM_INTE_TRANS_COMPLETE(ALL1)
#define USBCTRL_DPRAM_INTE_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_INTE_HOST_SOF_MASK USBCTRL_DPRAM_INTE_HOST_SOF(ALL1)
#define USBCTRL_DPRAM_INTE_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_INTE_HOST_RESUME_MASK USBCTRL_DPRAM_INTE_HOST_RESUME(ALL1)
#define USBCTRL_DPRAM_INTE_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_INTE_HOST_CONN_DIS_MASK USBCTRL_DPRAM_INTE_HOST_CONN_DIS(ALL1)

/*INTF Register macros*/

#define USBCTRL_DPRAM_INTF_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_INTF_EPX_STOPPED_ON_NAK_MASK USBCTRL_DPRAM_INTF_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_DPRAM_INTF_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_INTF_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DPRAM_INTF_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DPRAM_INTF_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_INTF_ENDPOINT_ERROR_MASK USBCTRL_DPRAM_INTF_ENDPOINT_ERROR(ALL1)
#define USBCTRL_DPRAM_INTF_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_INTF_RX_SHORT_PACKET_MASK USBCTRL_DPRAM_INTF_RX_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_INTF_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_INTF_EP_STALL_NAK_MASK USBCTRL_DPRAM_INTF_EP_STALL_NAK(ALL1)
#define USBCTRL_DPRAM_INTF_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_INTF_ABORT_DONE_MASK USBCTRL_DPRAM_INTF_ABORT_DONE(ALL1)
#define USBCTRL_DPRAM_INTF_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_INTF_DEV_SOF_MASK USBCTRL_DPRAM_INTF_DEV_SOF(ALL1)
#define USBCTRL_DPRAM_INTF_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_INTF_SETUP_REQ_MASK USBCTRL_DPRAM_INTF_SETUP_REQ(ALL1)
#define USBCTRL_DPRAM_INTF_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_INTF_DEV_RESUME_FROM_HOST_MASK USBCTRL_DPRAM_INTF_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_DPRAM_INTF_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_INTF_DEV_SUSPEND_MASK USBCTRL_DPRAM_INTF_DEV_SUSPEND(ALL1)
#define USBCTRL_DPRAM_INTF_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_INTF_DEV_CONN_DIS_MASK USBCTRL_DPRAM_INTF_DEV_CONN_DIS(ALL1)
#define USBCTRL_DPRAM_INTF_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_INTF_BUS_RESET_MASK USBCTRL_DPRAM_INTF_BUS_RESET(ALL1)
#define USBCTRL_DPRAM_INTF_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_INTF_VBUS_DETECT_MASK USBCTRL_DPRAM_INTF_VBUS_DETECT(ALL1)
#define USBCTRL_DPRAM_INTF_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_INTF_STALL_MASK USBCTRL_DPRAM_INTF_STALL(ALL1)
#define USBCTRL_DPRAM_INTF_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_INTF_ERROR_CRC_MASK USBCTRL_DPRAM_INTF_ERROR_CRC(ALL1)
#define USBCTRL_DPRAM_INTF_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_INTF_ERROR_BIT_STUFF_MASK USBCTRL_DPRAM_INTF_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_DPRAM_INTF_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_INTF_ERROR_RX_OVERFLOW_MASK USBCTRL_DPRAM_INTF_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_DPRAM_INTF_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_INTF_ERROR_RX_TIMEOUT_MASK USBCTRL_DPRAM_INTF_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_DPRAM_INTF_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_INTF_ERROR_DATA_SEQ_MASK USBCTRL_DPRAM_INTF_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_DPRAM_INTF_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_INTF_BUFF_STATUS_MASK USBCTRL_DPRAM_INTF_BUFF_STATUS(ALL1)
#define USBCTRL_DPRAM_INTF_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_INTF_TRANS_COMPLETE_MASK USBCTRL_DPRAM_INTF_TRANS_COMPLETE(ALL1)
#define USBCTRL_DPRAM_INTF_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_INTF_HOST_SOF_MASK USBCTRL_DPRAM_INTF_HOST_SOF(ALL1)
#define USBCTRL_DPRAM_INTF_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_INTF_HOST_RESUME_MASK USBCTRL_DPRAM_INTF_HOST_RESUME(ALL1)
#define USBCTRL_DPRAM_INTF_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_INTF_HOST_CONN_DIS_MASK USBCTRL_DPRAM_INTF_HOST_CONN_DIS(ALL1)

/*INTS Register macros*/

#define USBCTRL_DPRAM_INTS_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_INTS_EPX_STOPPED_ON_NAK_MASK USBCTRL_DPRAM_INTS_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_DPRAM_INTS_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_INTS_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DPRAM_INTS_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DPRAM_INTS_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_INTS_ENDPOINT_ERROR_MASK USBCTRL_DPRAM_INTS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_DPRAM_INTS_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_INTS_RX_SHORT_PACKET_MASK USBCTRL_DPRAM_INTS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_DPRAM_INTS_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_INTS_EP_STALL_NAK_MASK USBCTRL_DPRAM_INTS_EP_STALL_NAK(ALL1)
#define USBCTRL_DPRAM_INTS_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_INTS_ABORT_DONE_MASK USBCTRL_DPRAM_INTS_ABORT_DONE(ALL1)
#define USBCTRL_DPRAM_INTS_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_INTS_DEV_SOF_MASK USBCTRL_DPRAM_INTS_DEV_SOF(ALL1)
#define USBCTRL_DPRAM_INTS_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_INTS_SETUP_REQ_MASK USBCTRL_DPRAM_INTS_SETUP_REQ(ALL1)
#define USBCTRL_DPRAM_INTS_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_INTS_DEV_RESUME_FROM_HOST_MASK USBCTRL_DPRAM_INTS_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_DPRAM_INTS_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_INTS_DEV_SUSPEND_MASK USBCTRL_DPRAM_INTS_DEV_SUSPEND(ALL1)
#define USBCTRL_DPRAM_INTS_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_INTS_DEV_CONN_DIS_MASK USBCTRL_DPRAM_INTS_DEV_CONN_DIS(ALL1)
#define USBCTRL_DPRAM_INTS_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_INTS_BUS_RESET_MASK USBCTRL_DPRAM_INTS_BUS_RESET(ALL1)
#define USBCTRL_DPRAM_INTS_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_INTS_VBUS_DETECT_MASK USBCTRL_DPRAM_INTS_VBUS_DETECT(ALL1)
#define USBCTRL_DPRAM_INTS_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_INTS_STALL_MASK USBCTRL_DPRAM_INTS_STALL(ALL1)
#define USBCTRL_DPRAM_INTS_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_INTS_ERROR_CRC_MASK USBCTRL_DPRAM_INTS_ERROR_CRC(ALL1)
#define USBCTRL_DPRAM_INTS_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_INTS_ERROR_BIT_STUFF_MASK USBCTRL_DPRAM_INTS_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_DPRAM_INTS_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_INTS_ERROR_RX_OVERFLOW_MASK USBCTRL_DPRAM_INTS_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_DPRAM_INTS_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_INTS_ERROR_RX_TIMEOUT_MASK USBCTRL_DPRAM_INTS_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_DPRAM_INTS_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_INTS_ERROR_DATA_SEQ_MASK USBCTRL_DPRAM_INTS_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_DPRAM_INTS_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_INTS_BUFF_STATUS_MASK USBCTRL_DPRAM_INTS_BUFF_STATUS(ALL1)
#define USBCTRL_DPRAM_INTS_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_INTS_TRANS_COMPLETE_MASK USBCTRL_DPRAM_INTS_TRANS_COMPLETE(ALL1)
#define USBCTRL_DPRAM_INTS_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_INTS_HOST_SOF_MASK USBCTRL_DPRAM_INTS_HOST_SOF(ALL1)
#define USBCTRL_DPRAM_INTS_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_INTS_HOST_RESUME_MASK USBCTRL_DPRAM_INTS_HOST_RESUME(ALL1)
#define USBCTRL_DPRAM_INTS_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_INTS_HOST_CONN_DIS_MASK USBCTRL_DPRAM_INTS_HOST_CONN_DIS(ALL1)

/*SOF_TIMESTAMP_RAW Register macros*/


/*SOF_TIMESTAMP_LAST Register macros*/


/*SM_STATE Register macros*/

#define USBCTRL_DPRAM_SM_STATE_RX_DASM(v) (((v)&0xf)<<8)
#define USBCTRL_DPRAM_SM_STATE_RX_DASM_MASK USBCTRL_DPRAM_SM_STATE_RX_DASM(ALL1)
#define USBCTRL_DPRAM_SM_STATE_BC_STATE(v) (((v)&0x7)<<5)
#define USBCTRL_DPRAM_SM_STATE_BC_STATE_MASK USBCTRL_DPRAM_SM_STATE_BC_STATE(ALL1)
#define USBCTRL_DPRAM_SM_STATE_STATE(v) (((v)&0x1f)<<0)
#define USBCTRL_DPRAM_SM_STATE_STATE_MASK USBCTRL_DPRAM_SM_STATE_STATE(ALL1)

/*EP_TX_ERROR Register macros*/

#define USBCTRL_DPRAM_EP_TX_ERROR_EP15(v) (((v)&0x3)<<30)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP15_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP15(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP14(v) (((v)&0x3)<<28)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP14_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP14(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP13(v) (((v)&0x3)<<26)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP13_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP13(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP12(v) (((v)&0x3)<<24)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP12_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP12(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP11(v) (((v)&0x3)<<22)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP11_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP11(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP10(v) (((v)&0x3)<<20)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP10_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP10(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP9(v) (((v)&0x3)<<18)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP9_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP9(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP8(v) (((v)&0x3)<<16)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP8_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP8(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP7(v) (((v)&0x3)<<14)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP7_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP7(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP6(v) (((v)&0x3)<<12)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP6_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP6(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP5(v) (((v)&0x3)<<10)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP5_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP5(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP4(v) (((v)&0x3)<<8)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP4_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP4(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP3(v) (((v)&0x3)<<6)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP3_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP3(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP2(v) (((v)&0x3)<<4)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP2_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP2(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP1(v) (((v)&0x3)<<2)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP1_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP1(ALL1)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP0(v) (((v)&0x3)<<0)
#define USBCTRL_DPRAM_EP_TX_ERROR_EP0_MASK USBCTRL_DPRAM_EP_TX_ERROR_EP0(ALL1)

/*EP_RX_ERROR Register macros*/

#define USBCTRL_DPRAM_EP_RX_ERROR_EP15_SEQ(v) (((v)&0x1)<<31)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP15_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP15_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP15_TRANSACTION(v) (((v)&0x1)<<30)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP15_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP15_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP14_SEQ(v) (((v)&0x1)<<29)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP14_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP14_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP14_TRANSACTION(v) (((v)&0x1)<<28)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP14_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP14_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP13_SEQ(v) (((v)&0x1)<<27)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP13_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP13_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP13_TRANSACTION(v) (((v)&0x1)<<26)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP13_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP13_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP12_SEQ(v) (((v)&0x1)<<25)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP12_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP12_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP12_TRANSACTION(v) (((v)&0x1)<<24)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP12_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP12_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP11_SEQ(v) (((v)&0x1)<<23)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP11_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP11_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP11_TRANSACTION(v) (((v)&0x1)<<22)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP11_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP11_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP10_SEQ(v) (((v)&0x1)<<21)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP10_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP10_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP10_TRANSACTION(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP10_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP10_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP9_SEQ(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP9_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP9_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP9_TRANSACTION(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP9_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP9_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP8_SEQ(v) (((v)&0x1)<<17)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP8_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP8_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP8_TRANSACTION(v) (((v)&0x1)<<16)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP8_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP8_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP7_SEQ(v) (((v)&0x1)<<15)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP7_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP7_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP7_TRANSACTION(v) (((v)&0x1)<<14)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP7_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP7_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP6_SEQ(v) (((v)&0x1)<<13)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP6_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP6_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP6_TRANSACTION(v) (((v)&0x1)<<12)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP6_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP6_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP5_SEQ(v) (((v)&0x1)<<11)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP5_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP5_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP5_TRANSACTION(v) (((v)&0x1)<<10)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP5_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP5_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP4_SEQ(v) (((v)&0x1)<<9)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP4_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP4_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP4_TRANSACTION(v) (((v)&0x1)<<8)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP4_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP4_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP3_SEQ(v) (((v)&0x1)<<7)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP3_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP3_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP3_TRANSACTION(v) (((v)&0x1)<<6)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP3_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP3_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP2_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP2_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP2_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP2_TRANSACTION(v) (((v)&0x1)<<4)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP2_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP2_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP1_SEQ(v) (((v)&0x1)<<3)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP1_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP1_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP1_TRANSACTION(v) (((v)&0x1)<<2)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP1_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP1_TRANSACTION(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP0_SEQ(v) (((v)&0x1)<<1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP0_SEQ_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP0_SEQ(ALL1)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP0_TRANSACTION(v) (((v)&0x1)<<0)
#define USBCTRL_DPRAM_EP_RX_ERROR_EP0_TRANSACTION_MASK USBCTRL_DPRAM_EP_RX_ERROR_EP0_TRANSACTION(ALL1)

/*DEV_SM_WATCHDOG Register macros*/

#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<20)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_DPRAM_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_RESET_MASK USBCTRL_DPRAM_DEV_SM_WATCHDOG_RESET(ALL1)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_ENABLE(v) (((v)&0x1)<<18)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_ENABLE_MASK USBCTRL_DPRAM_DEV_SM_WATCHDOG_ENABLE(ALL1)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_LIMIT(v) (((v)&0x3ffff)<<0)
#define USBCTRL_DPRAM_DEV_SM_WATCHDOG_LIMIT_MASK USBCTRL_DPRAM_DEV_SM_WATCHDOG_LIMIT(ALL1)

/*ADDR_ENDP Register macros*/

#define USBCTRL_REGS_ADDR_ENDP_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP_ADDRESS(ALL1)

/*ADDR_ENDP1 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP1_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP1_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP1_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP1_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP1_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP1_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP1_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP1_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP1_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP1_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP1_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP1_ADDRESS(ALL1)

/*ADDR_ENDP2 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP2_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP2_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP2_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP2_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP2_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP2_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP2_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP2_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP2_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP2_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP2_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP2_ADDRESS(ALL1)

/*ADDR_ENDP3 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP3_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP3_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP3_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP3_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP3_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP3_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP3_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP3_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP3_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP3_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP3_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP3_ADDRESS(ALL1)

/*ADDR_ENDP4 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP4_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP4_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP4_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP4_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP4_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP4_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP4_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP4_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP4_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP4_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP4_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP4_ADDRESS(ALL1)

/*ADDR_ENDP5 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP5_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP5_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP5_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP5_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP5_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP5_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP5_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP5_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP5_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP5_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP5_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP5_ADDRESS(ALL1)

/*ADDR_ENDP6 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP6_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP6_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP6_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP6_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP6_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP6_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP6_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP6_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP6_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP6_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP6_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP6_ADDRESS(ALL1)

/*ADDR_ENDP7 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP7_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP7_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP7_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP7_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP7_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP7_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP7_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP7_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP7_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP7_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP7_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP7_ADDRESS(ALL1)

/*ADDR_ENDP8 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP8_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP8_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP8_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP8_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP8_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP8_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP8_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP8_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP8_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP8_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP8_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP8_ADDRESS(ALL1)

/*ADDR_ENDP9 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP9_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP9_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP9_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP9_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP9_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP9_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP9_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP9_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP9_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP9_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP9_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP9_ADDRESS(ALL1)

/*ADDR_ENDP10 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP10_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP10_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP10_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP10_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP10_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP10_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP10_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP10_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP10_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP10_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP10_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP10_ADDRESS(ALL1)

/*ADDR_ENDP11 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP11_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP11_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP11_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP11_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP11_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP11_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP11_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP11_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP11_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP11_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP11_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP11_ADDRESS(ALL1)

/*ADDR_ENDP12 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP12_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP12_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP12_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP12_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP12_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP12_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP12_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP12_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP12_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP12_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP12_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP12_ADDRESS(ALL1)

/*ADDR_ENDP13 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP13_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP13_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP13_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP13_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP13_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP13_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP13_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP13_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP13_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP13_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP13_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP13_ADDRESS(ALL1)

/*ADDR_ENDP14 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP14_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP14_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP14_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP14_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP14_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP14_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP14_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP14_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP14_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP14_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP14_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP14_ADDRESS(ALL1)

/*ADDR_ENDP15 Register macros*/

#define USBCTRL_REGS_ADDR_ENDP15_INTEP_PREAMBLE(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_ADDR_ENDP15_INTEP_PREAMBLE_MASK USBCTRL_REGS_ADDR_ENDP15_INTEP_PREAMBLE(ALL1)
#define USBCTRL_REGS_ADDR_ENDP15_INTEP_DIR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_ADDR_ENDP15_INTEP_DIR_MASK USBCTRL_REGS_ADDR_ENDP15_INTEP_DIR(ALL1)
#define USBCTRL_REGS_ADDR_ENDP15_ENDPOINT(v) (((v)&0xf)<<16)
#define USBCTRL_REGS_ADDR_ENDP15_ENDPOINT_MASK USBCTRL_REGS_ADDR_ENDP15_ENDPOINT(ALL1)
#define USBCTRL_REGS_ADDR_ENDP15_ADDRESS(v) (((v)&0x7f)<<0)
#define USBCTRL_REGS_ADDR_ENDP15_ADDRESS_MASK USBCTRL_REGS_ADDR_ENDP15_ADDRESS(ALL1)

/*MAIN_CTRL Register macros*/

#define USBCTRL_REGS_MAIN_CTRL_SIM_TIMING(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_MAIN_CTRL_SIM_TIMING_MASK USBCTRL_REGS_MAIN_CTRL_SIM_TIMING(ALL1)
#define USBCTRL_REGS_MAIN_CTRL_PHY_ISO(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_MAIN_CTRL_PHY_ISO_MASK USBCTRL_REGS_MAIN_CTRL_PHY_ISO(ALL1)
#define USBCTRL_REGS_MAIN_CTRL_HOST_NDEVICE(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_MAIN_CTRL_HOST_NDEVICE_MASK USBCTRL_REGS_MAIN_CTRL_HOST_NDEVICE(ALL1)
#define USBCTRL_REGS_MAIN_CTRL_CONTROLLER_EN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_MAIN_CTRL_CONTROLLER_EN_MASK USBCTRL_REGS_MAIN_CTRL_CONTROLLER_EN(ALL1)

/*SOF_WR Register macros*/

#define USBCTRL_REGS_SOF_WR_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_REGS_SOF_WR_COUNT_MASK USBCTRL_REGS_SOF_WR_COUNT(ALL1)

/*SOF_RD Register macros*/

#define USBCTRL_REGS_SOF_RD_COUNT(v) (((v)&0x7ff)<<0)
#define USBCTRL_REGS_SOF_RD_COUNT_MASK USBCTRL_REGS_SOF_RD_COUNT(ALL1)

/*SIE_CTRL Register macros*/

#define USBCTRL_REGS_SIE_CTRL_EP0_INT_STALL(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_STALL_MASK USBCTRL_REGS_SIE_CTRL_EP0_INT_STALL(ALL1)
#define USBCTRL_REGS_SIE_CTRL_EP0_DOUBLE_BUF(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_SIE_CTRL_EP0_DOUBLE_BUF_MASK USBCTRL_REGS_SIE_CTRL_EP0_DOUBLE_BUF(ALL1)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_1BUF(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_1BUF_MASK USBCTRL_REGS_SIE_CTRL_EP0_INT_1BUF(ALL1)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_2BUF(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_2BUF_MASK USBCTRL_REGS_SIE_CTRL_EP0_INT_2BUF(ALL1)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_SIE_CTRL_EP0_INT_NAK_MASK USBCTRL_REGS_SIE_CTRL_EP0_INT_NAK(ALL1)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_EN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_EN_MASK USBCTRL_REGS_SIE_CTRL_DIRECT_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_DP(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_DP_MASK USBCTRL_REGS_SIE_CTRL_DIRECT_DP(ALL1)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_DM(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_SIE_CTRL_DIRECT_DM_MASK USBCTRL_REGS_SIE_CTRL_DIRECT_DM(ALL1)
#define USBCTRL_REGS_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET_MASK USBCTRL_REGS_SIE_CTRL_EP0_STOP_ON_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_SIE_CTRL_TRANSCEIVER_PD(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_SIE_CTRL_TRANSCEIVER_PD_MASK USBCTRL_REGS_SIE_CTRL_TRANSCEIVER_PD(ALL1)
#define USBCTRL_REGS_SIE_CTRL_RPU_OPT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_SIE_CTRL_RPU_OPT_MASK USBCTRL_REGS_SIE_CTRL_RPU_OPT(ALL1)
#define USBCTRL_REGS_SIE_CTRL_PULLUP_EN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_SIE_CTRL_PULLUP_EN_MASK USBCTRL_REGS_SIE_CTRL_PULLUP_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_PULLDOWN_EN(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_SIE_CTRL_PULLDOWN_EN_MASK USBCTRL_REGS_SIE_CTRL_PULLDOWN_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_RESET_BUS(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_SIE_CTRL_RESET_BUS_MASK USBCTRL_REGS_SIE_CTRL_RESET_BUS(ALL1)
#define USBCTRL_REGS_SIE_CTRL_RESUME(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_SIE_CTRL_RESUME_MASK USBCTRL_REGS_SIE_CTRL_RESUME(ALL1)
#define USBCTRL_REGS_SIE_CTRL_VBUS_EN(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_SIE_CTRL_VBUS_EN_MASK USBCTRL_REGS_SIE_CTRL_VBUS_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_KEEP_ALIVE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_SIE_CTRL_KEEP_ALIVE_EN_MASK USBCTRL_REGS_SIE_CTRL_KEEP_ALIVE_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_SOF_EN(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_SIE_CTRL_SOF_EN_MASK USBCTRL_REGS_SIE_CTRL_SOF_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_SOF_SYNC(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_SIE_CTRL_SOF_SYNC_MASK USBCTRL_REGS_SIE_CTRL_SOF_SYNC(ALL1)
#define USBCTRL_REGS_SIE_CTRL_PREAMBLE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_SIE_CTRL_PREAMBLE_EN_MASK USBCTRL_REGS_SIE_CTRL_PREAMBLE_EN(ALL1)
#define USBCTRL_REGS_SIE_CTRL_STOP_TRANS(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_SIE_CTRL_STOP_TRANS_MASK USBCTRL_REGS_SIE_CTRL_STOP_TRANS(ALL1)
#define USBCTRL_REGS_SIE_CTRL_RECEIVE_DATA(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_SIE_CTRL_RECEIVE_DATA_MASK USBCTRL_REGS_SIE_CTRL_RECEIVE_DATA(ALL1)
#define USBCTRL_REGS_SIE_CTRL_SEND_DATA(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_SIE_CTRL_SEND_DATA_MASK USBCTRL_REGS_SIE_CTRL_SEND_DATA(ALL1)
#define USBCTRL_REGS_SIE_CTRL_SEND_SETUP(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_SIE_CTRL_SEND_SETUP_MASK USBCTRL_REGS_SIE_CTRL_SEND_SETUP(ALL1)
#define USBCTRL_REGS_SIE_CTRL_START_TRANS(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_SIE_CTRL_START_TRANS_MASK USBCTRL_REGS_SIE_CTRL_START_TRANS(ALL1)

/*SIE_STATUS Register macros*/

#define USBCTRL_REGS_SIE_STATUS_DATA_SEQ_ERROR(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_SIE_STATUS_DATA_SEQ_ERROR_MASK USBCTRL_REGS_SIE_STATUS_DATA_SEQ_ERROR(ALL1)
#define USBCTRL_REGS_SIE_STATUS_ACK_REC(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_SIE_STATUS_ACK_REC_MASK USBCTRL_REGS_SIE_STATUS_ACK_REC(ALL1)
#define USBCTRL_REGS_SIE_STATUS_STALL_REC(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_SIE_STATUS_STALL_REC_MASK USBCTRL_REGS_SIE_STATUS_STALL_REC(ALL1)
#define USBCTRL_REGS_SIE_STATUS_NAK_REC(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_SIE_STATUS_NAK_REC_MASK USBCTRL_REGS_SIE_STATUS_NAK_REC(ALL1)
#define USBCTRL_REGS_SIE_STATUS_RX_TIMEOUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_SIE_STATUS_RX_TIMEOUT_MASK USBCTRL_REGS_SIE_STATUS_RX_TIMEOUT(ALL1)
#define USBCTRL_REGS_SIE_STATUS_RX_OVERFLOW(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_SIE_STATUS_RX_OVERFLOW_MASK USBCTRL_REGS_SIE_STATUS_RX_OVERFLOW(ALL1)
#define USBCTRL_REGS_SIE_STATUS_BIT_STUFF_ERROR(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_SIE_STATUS_BIT_STUFF_ERROR_MASK USBCTRL_REGS_SIE_STATUS_BIT_STUFF_ERROR(ALL1)
#define USBCTRL_REGS_SIE_STATUS_CRC_ERROR(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_SIE_STATUS_CRC_ERROR_MASK USBCTRL_REGS_SIE_STATUS_CRC_ERROR(ALL1)
#define USBCTRL_REGS_SIE_STATUS_ENDPOINT_ERROR(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_SIE_STATUS_ENDPOINT_ERROR_MASK USBCTRL_REGS_SIE_STATUS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_REGS_SIE_STATUS_BUS_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_SIE_STATUS_BUS_RESET_MASK USBCTRL_REGS_SIE_STATUS_BUS_RESET(ALL1)
#define USBCTRL_REGS_SIE_STATUS_TRANS_COMPLETE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_SIE_STATUS_TRANS_COMPLETE_MASK USBCTRL_REGS_SIE_STATUS_TRANS_COMPLETE(ALL1)
#define USBCTRL_REGS_SIE_STATUS_SETUP_REC(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_SIE_STATUS_SETUP_REC_MASK USBCTRL_REGS_SIE_STATUS_SETUP_REC(ALL1)
#define USBCTRL_REGS_SIE_STATUS_CONNECTED(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_SIE_STATUS_CONNECTED_MASK USBCTRL_REGS_SIE_STATUS_CONNECTED(ALL1)
#define USBCTRL_REGS_SIE_STATUS_RX_SHORT_PACKET(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_SIE_STATUS_RX_SHORT_PACKET_MASK USBCTRL_REGS_SIE_STATUS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_SIE_STATUS_RESUME(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_SIE_STATUS_RESUME_MASK USBCTRL_REGS_SIE_STATUS_RESUME(ALL1)
#define USBCTRL_REGS_SIE_STATUS_VBUS_OVER_CURR(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_SIE_STATUS_VBUS_OVER_CURR_MASK USBCTRL_REGS_SIE_STATUS_VBUS_OVER_CURR(ALL1)
#define USBCTRL_REGS_SIE_STATUS_SPEED(v) (((v)&0x3)<<8)
#define USBCTRL_REGS_SIE_STATUS_SPEED_MASK USBCTRL_REGS_SIE_STATUS_SPEED(ALL1)
#define USBCTRL_REGS_SIE_STATUS_SUSPENDED(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_SIE_STATUS_SUSPENDED_MASK USBCTRL_REGS_SIE_STATUS_SUSPENDED(ALL1)
#define USBCTRL_REGS_SIE_STATUS_LINE_STATE(v) (((v)&0x3)<<2)
#define USBCTRL_REGS_SIE_STATUS_LINE_STATE_MASK USBCTRL_REGS_SIE_STATUS_LINE_STATE(ALL1)
#define USBCTRL_REGS_SIE_STATUS_VBUS_DETECTED(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_SIE_STATUS_VBUS_DETECTED_MASK USBCTRL_REGS_SIE_STATUS_VBUS_DETECTED(ALL1)

/*INT_EP_CTRL Register macros*/

#define USBCTRL_REGS_INT_EP_CTRL_INT_EP_ACTIVE(v) (((v)&0x7fff)<<1)
#define USBCTRL_REGS_INT_EP_CTRL_INT_EP_ACTIVE_MASK USBCTRL_REGS_INT_EP_CTRL_INT_EP_ACTIVE(ALL1)

/*BUFF_STATUS Register macros*/

#define USBCTRL_REGS_BUFF_STATUS_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_BUFF_STATUS_EP15_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP15_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_BUFF_STATUS_EP15_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP15_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_BUFF_STATUS_EP14_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP14_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_BUFF_STATUS_EP14_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP14_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_BUFF_STATUS_EP13_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP13_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_BUFF_STATUS_EP13_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP13_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_BUFF_STATUS_EP12_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP12_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_BUFF_STATUS_EP12_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP12_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_BUFF_STATUS_EP11_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP11_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_BUFF_STATUS_EP11_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP11_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_BUFF_STATUS_EP10_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP10_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_BUFF_STATUS_EP10_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP10_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_BUFF_STATUS_EP9_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP9_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_BUFF_STATUS_EP9_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP9_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_BUFF_STATUS_EP8_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP8_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_BUFF_STATUS_EP8_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP8_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_BUFF_STATUS_EP7_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP7_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_BUFF_STATUS_EP7_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP7_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_BUFF_STATUS_EP6_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP6_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_BUFF_STATUS_EP6_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP6_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_BUFF_STATUS_EP5_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP5_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_BUFF_STATUS_EP5_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP5_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_BUFF_STATUS_EP4_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP4_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_BUFF_STATUS_EP4_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP4_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_BUFF_STATUS_EP3_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP3_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_BUFF_STATUS_EP3_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP3_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_BUFF_STATUS_EP2_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP2_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_BUFF_STATUS_EP2_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP2_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_BUFF_STATUS_EP1_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP1_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_BUFF_STATUS_EP1_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP1_IN(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_BUFF_STATUS_EP0_OUT_MASK USBCTRL_REGS_BUFF_STATUS_EP0_OUT(ALL1)
#define USBCTRL_REGS_BUFF_STATUS_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_BUFF_STATUS_EP0_IN_MASK USBCTRL_REGS_BUFF_STATUS_EP0_IN(ALL1)

/*BUFF_CPU_SHOULD_HANDLE Register macros*/

#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP15_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP14_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP13_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP12_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP11_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP10_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP9_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP8_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP7_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP6_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP5_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP4_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP3_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP2_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP1_IN(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_OUT_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_OUT(ALL1)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_IN_MASK USBCTRL_REGS_BUFF_CPU_SHOULD_HANDLE_EP0_IN(ALL1)

/*EP_ABORT Register macros*/

#define USBCTRL_REGS_EP_ABORT_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_EP_ABORT_EP15_OUT_MASK USBCTRL_REGS_EP_ABORT_EP15_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_EP_ABORT_EP15_IN_MASK USBCTRL_REGS_EP_ABORT_EP15_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_EP_ABORT_EP14_OUT_MASK USBCTRL_REGS_EP_ABORT_EP14_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_EP_ABORT_EP14_IN_MASK USBCTRL_REGS_EP_ABORT_EP14_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_EP_ABORT_EP13_OUT_MASK USBCTRL_REGS_EP_ABORT_EP13_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_EP_ABORT_EP13_IN_MASK USBCTRL_REGS_EP_ABORT_EP13_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_EP_ABORT_EP12_OUT_MASK USBCTRL_REGS_EP_ABORT_EP12_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_EP_ABORT_EP12_IN_MASK USBCTRL_REGS_EP_ABORT_EP12_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_EP_ABORT_EP11_OUT_MASK USBCTRL_REGS_EP_ABORT_EP11_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_EP_ABORT_EP11_IN_MASK USBCTRL_REGS_EP_ABORT_EP11_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_EP_ABORT_EP10_OUT_MASK USBCTRL_REGS_EP_ABORT_EP10_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_EP_ABORT_EP10_IN_MASK USBCTRL_REGS_EP_ABORT_EP10_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_EP_ABORT_EP9_OUT_MASK USBCTRL_REGS_EP_ABORT_EP9_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_EP_ABORT_EP9_IN_MASK USBCTRL_REGS_EP_ABORT_EP9_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_EP_ABORT_EP8_OUT_MASK USBCTRL_REGS_EP_ABORT_EP8_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_EP_ABORT_EP8_IN_MASK USBCTRL_REGS_EP_ABORT_EP8_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_EP_ABORT_EP7_OUT_MASK USBCTRL_REGS_EP_ABORT_EP7_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_EP_ABORT_EP7_IN_MASK USBCTRL_REGS_EP_ABORT_EP7_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_EP_ABORT_EP6_OUT_MASK USBCTRL_REGS_EP_ABORT_EP6_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_EP_ABORT_EP6_IN_MASK USBCTRL_REGS_EP_ABORT_EP6_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_EP_ABORT_EP5_OUT_MASK USBCTRL_REGS_EP_ABORT_EP5_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_EP_ABORT_EP5_IN_MASK USBCTRL_REGS_EP_ABORT_EP5_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_EP_ABORT_EP4_OUT_MASK USBCTRL_REGS_EP_ABORT_EP4_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_EP_ABORT_EP4_IN_MASK USBCTRL_REGS_EP_ABORT_EP4_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_EP_ABORT_EP3_OUT_MASK USBCTRL_REGS_EP_ABORT_EP3_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_EP_ABORT_EP3_IN_MASK USBCTRL_REGS_EP_ABORT_EP3_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_EP_ABORT_EP2_OUT_MASK USBCTRL_REGS_EP_ABORT_EP2_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_EP_ABORT_EP2_IN_MASK USBCTRL_REGS_EP_ABORT_EP2_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_EP_ABORT_EP1_OUT_MASK USBCTRL_REGS_EP_ABORT_EP1_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_EP_ABORT_EP1_IN_MASK USBCTRL_REGS_EP_ABORT_EP1_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_ABORT_EP0_OUT_MASK USBCTRL_REGS_EP_ABORT_EP0_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_ABORT_EP0_IN_MASK USBCTRL_REGS_EP_ABORT_EP0_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_ABORT_DONE Register macros*/

#define USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP15_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_EP_ABORT_DONE_EP15_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP15_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP14_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_EP_ABORT_DONE_EP14_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP14_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP13_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_EP_ABORT_DONE_EP13_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP13_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP12_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_EP_ABORT_DONE_EP12_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP12_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP11_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_EP_ABORT_DONE_EP11_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP11_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP10_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_EP_ABORT_DONE_EP10_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP10_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP9_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_EP_ABORT_DONE_EP9_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP9_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP8_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_EP_ABORT_DONE_EP8_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP8_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP7_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_EP_ABORT_DONE_EP7_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP7_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP6_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_EP_ABORT_DONE_EP6_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP6_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP5_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_EP_ABORT_DONE_EP5_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP5_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP4_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_EP_ABORT_DONE_EP4_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP4_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP3_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_EP_ABORT_DONE_EP3_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP3_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP2_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_EP_ABORT_DONE_EP2_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP2_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP1_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_EP_ABORT_DONE_EP1_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP1_IN(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT_MASK USBCTRL_REGS_EP_ABORT_DONE_EP0_OUT(ALL1)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_ABORT_DONE_EP0_IN_MASK USBCTRL_REGS_EP_ABORT_DONE_EP0_IN(ALL1)

/*EP_STALL_ARM Register macros*/

#define USBCTRL_REGS_EP_STALL_ARM_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_STALL_ARM_EP0_OUT_MASK USBCTRL_REGS_EP_STALL_ARM_EP0_OUT(ALL1)
#define USBCTRL_REGS_EP_STALL_ARM_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_STALL_ARM_EP0_IN_MASK USBCTRL_REGS_EP_STALL_ARM_EP0_IN(ALL1)

/*NAK_POLL Register macros*/

#define USBCTRL_REGS_NAK_POLL_RETRY_COUNT_HI(v) (((v)&0xf)<<28)
#define USBCTRL_REGS_NAK_POLL_RETRY_COUNT_HI_MASK USBCTRL_REGS_NAK_POLL_RETRY_COUNT_HI(ALL1)
#define USBCTRL_REGS_NAK_POLL_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_NAK_POLL_EPX_STOPPED_ON_NAK_MASK USBCTRL_REGS_NAK_POLL_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_REGS_NAK_POLL_STOP_EPX_ON_NAK(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_NAK_POLL_STOP_EPX_ON_NAK_MASK USBCTRL_REGS_NAK_POLL_STOP_EPX_ON_NAK(ALL1)
#define USBCTRL_REGS_NAK_POLL_DELAY_FS(v) (((v)&0x3ff)<<16)
#define USBCTRL_REGS_NAK_POLL_DELAY_FS_MASK USBCTRL_REGS_NAK_POLL_DELAY_FS(ALL1)
#define USBCTRL_REGS_NAK_POLL_RETRY_COUNT_LO(v) (((v)&0x3f)<<10)
#define USBCTRL_REGS_NAK_POLL_RETRY_COUNT_LO_MASK USBCTRL_REGS_NAK_POLL_RETRY_COUNT_LO(ALL1)
#define USBCTRL_REGS_NAK_POLL_DELAY_LS(v) (((v)&0x3ff)<<0)
#define USBCTRL_REGS_NAK_POLL_DELAY_LS_MASK USBCTRL_REGS_NAK_POLL_DELAY_LS(ALL1)

/*EP_STATUS_STALL_NAK Register macros*/

#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_OUT(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_IN(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP15_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_OUT(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_IN(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP14_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_OUT(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_IN(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP13_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_OUT(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_IN(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP12_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_OUT(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_IN(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP11_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_OUT(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_IN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP10_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_OUT(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_IN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP9_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_OUT(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_IN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP8_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_OUT(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_IN(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP7_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_OUT(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_IN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP6_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_OUT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_IN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP5_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_OUT(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_IN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP4_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_OUT(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_IN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP3_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_OUT(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_IN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP2_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_OUT(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_IN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP1_IN(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_OUT(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_OUT_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_OUT(ALL1)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_IN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_IN_MASK USBCTRL_REGS_EP_STATUS_STALL_NAK_EP0_IN(ALL1)

/*USB_MUXING Register macros*/

#define USBCTRL_REGS_USB_MUXING_SWAP_DPDM(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_USB_MUXING_SWAP_DPDM_MASK USBCTRL_REGS_USB_MUXING_SWAP_DPDM(ALL1)
#define USBCTRL_REGS_USB_MUXING_USBPHY_AS_GPIO(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_USB_MUXING_USBPHY_AS_GPIO_MASK USBCTRL_REGS_USB_MUXING_USBPHY_AS_GPIO(ALL1)
#define USBCTRL_REGS_USB_MUXING_SOFTCON(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_USB_MUXING_SOFTCON_MASK USBCTRL_REGS_USB_MUXING_SOFTCON(ALL1)
#define USBCTRL_REGS_USB_MUXING_TO_DIGITAL_PAD(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_USB_MUXING_TO_DIGITAL_PAD_MASK USBCTRL_REGS_USB_MUXING_TO_DIGITAL_PAD(ALL1)
#define USBCTRL_REGS_USB_MUXING_TO_EXTPHY(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_USB_MUXING_TO_EXTPHY_MASK USBCTRL_REGS_USB_MUXING_TO_EXTPHY(ALL1)
#define USBCTRL_REGS_USB_MUXING_TO_PHY(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_USB_MUXING_TO_PHY_MASK USBCTRL_REGS_USB_MUXING_TO_PHY(ALL1)

/*USB_PWR Register macros*/

#define USBCTRL_REGS_USB_PWR_OVERCURR_DETECT_EN(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_USB_PWR_OVERCURR_DETECT_EN_MASK USBCTRL_REGS_USB_PWR_OVERCURR_DETECT_EN(ALL1)
#define USBCTRL_REGS_USB_PWR_OVERCURR_DETECT(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_USB_PWR_OVERCURR_DETECT_MASK USBCTRL_REGS_USB_PWR_OVERCURR_DETECT(ALL1)
#define USBCTRL_REGS_USB_PWR_VBUS_DETECT_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_USB_PWR_VBUS_DETECT_OVERRIDE_EN_MASK USBCTRL_REGS_USB_PWR_VBUS_DETECT_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USB_PWR_VBUS_DETECT(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_USB_PWR_VBUS_DETECT_MASK USBCTRL_REGS_USB_PWR_VBUS_DETECT(ALL1)
#define USBCTRL_REGS_USB_PWR_VBUS_EN_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_USB_PWR_VBUS_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USB_PWR_VBUS_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USB_PWR_VBUS_EN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_USB_PWR_VBUS_EN_MASK USBCTRL_REGS_USB_PWR_VBUS_EN(ALL1)

/*USBPHY_DIRECT Register macros*/

#define USBCTRL_REGS_USBPHY_DIRECT_RX_DM_OVERRIDE(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DM_OVERRIDE_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DM_OVERRIDE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DP_OVERRIDE(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DP_OVERRIDE_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DP_OVERRIDE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DD_OVERRIDE(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DD_OVERRIDE_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DD_OVERRIDE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_OVV(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_OVV_MASK USBCTRL_REGS_USBPHY_DIRECT_DM_OVV(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_OVV(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_OVV_MASK USBCTRL_REGS_USBPHY_DIRECT_DP_OVV(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_OVCN(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_OVCN_MASK USBCTRL_REGS_USBPHY_DIRECT_DM_OVCN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_OVCN(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_OVCN_MASK USBCTRL_REGS_USBPHY_DIRECT_DP_OVCN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DM(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DM_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DM(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DP(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DP_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DP(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DD(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_DD_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_DD(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DIFFMODE(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DIFFMODE_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_DIFFMODE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_FSSLEW(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_FSSLEW_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_FSSLEW(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_PD(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_PD_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_PD(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_PD(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_USBPHY_DIRECT_RX_PD_MASK USBCTRL_REGS_USBPHY_DIRECT_RX_PD(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DM(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DM_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_DM(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DP(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DP_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_DP(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DM_OE(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DM_OE_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_DM_OE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DP_OE(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_USBPHY_DIRECT_TX_DP_OE_MASK USBCTRL_REGS_USBPHY_DIRECT_TX_DP_OE(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLDN_EN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLDN_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_DM_PULLDN_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_EN(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_HISEL(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_HISEL_MASK USBCTRL_REGS_USBPHY_DIRECT_DM_PULLUP_HISEL(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLDN_EN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLDN_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_DP_PULLDN_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_EN(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_HISEL(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_HISEL_MASK USBCTRL_REGS_USBPHY_DIRECT_DP_PULLUP_HISEL(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_DIRECT_OVERRIDE Register macros*/

#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_DD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DIFFMODE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_FSSLEW_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_RX_PD_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DM_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_TX_DP_OE_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLDN_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_EN_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DM_PULLUP_HISEL_OVERRIDE_EN(ALL1)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN_MASK USBCTRL_REGS_USBPHY_DIRECT_OVERRIDE_DP_PULLUP_HISEL_OVERRIDE_EN(ALL1)

/*USBPHY_TRIM Register macros*/

#define USBCTRL_REGS_USBPHY_TRIM_DM_PULLDN_TRIM(v) (((v)&0x1f)<<8)
#define USBCTRL_REGS_USBPHY_TRIM_DM_PULLDN_TRIM_MASK USBCTRL_REGS_USBPHY_TRIM_DM_PULLDN_TRIM(ALL1)
#define USBCTRL_REGS_USBPHY_TRIM_DP_PULLDN_TRIM(v) (((v)&0x1f)<<0)
#define USBCTRL_REGS_USBPHY_TRIM_DP_PULLDN_TRIM_MASK USBCTRL_REGS_USBPHY_TRIM_DP_PULLDN_TRIM(ALL1)

/*LINESTATE_TUNING Register macros*/

#define USBCTRL_REGS_LINESTATE_TUNING_SPARE_FIX(v) (((v)&0xf)<<8)
#define USBCTRL_REGS_LINESTATE_TUNING_SPARE_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_SPARE_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_LS_WAKE_FIX(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_LS_WAKE_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_DEV_LS_WAKE_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE_MASK USBCTRL_REGS_LINESTATE_TUNING_DEV_RX_ERR_QUIESCE(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_CHATTER_SE0_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_SIE_RX_BITSTUFF_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_DEV_BUFF_CONTROL_DOUBLE_READ_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_MULTI_HUB_FIX(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_LINESTATE_TUNING_MULTI_HUB_FIX_MASK USBCTRL_REGS_LINESTATE_TUNING_MULTI_HUB_FIX(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_LINESTATE_DELAY(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_LINESTATE_TUNING_LINESTATE_DELAY_MASK USBCTRL_REGS_LINESTATE_TUNING_LINESTATE_DELAY(ALL1)
#define USBCTRL_REGS_LINESTATE_TUNING_RCV_DELAY(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_LINESTATE_TUNING_RCV_DELAY_MASK USBCTRL_REGS_LINESTATE_TUNING_RCV_DELAY(ALL1)

/*INTR Register macros*/

#define USBCTRL_REGS_INTR_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_INTR_EPX_STOPPED_ON_NAK_MASK USBCTRL_REGS_INTR_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_REGS_INTR_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_INTR_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_REGS_INTR_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_REGS_INTR_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_INTR_ENDPOINT_ERROR_MASK USBCTRL_REGS_INTR_ENDPOINT_ERROR(ALL1)
#define USBCTRL_REGS_INTR_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_INTR_RX_SHORT_PACKET_MASK USBCTRL_REGS_INTR_RX_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_INTR_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_INTR_EP_STALL_NAK_MASK USBCTRL_REGS_INTR_EP_STALL_NAK(ALL1)
#define USBCTRL_REGS_INTR_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_INTR_ABORT_DONE_MASK USBCTRL_REGS_INTR_ABORT_DONE(ALL1)
#define USBCTRL_REGS_INTR_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_INTR_DEV_SOF_MASK USBCTRL_REGS_INTR_DEV_SOF(ALL1)
#define USBCTRL_REGS_INTR_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_INTR_SETUP_REQ_MASK USBCTRL_REGS_INTR_SETUP_REQ(ALL1)
#define USBCTRL_REGS_INTR_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_INTR_DEV_RESUME_FROM_HOST_MASK USBCTRL_REGS_INTR_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_REGS_INTR_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_INTR_DEV_SUSPEND_MASK USBCTRL_REGS_INTR_DEV_SUSPEND(ALL1)
#define USBCTRL_REGS_INTR_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_INTR_DEV_CONN_DIS_MASK USBCTRL_REGS_INTR_DEV_CONN_DIS(ALL1)
#define USBCTRL_REGS_INTR_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_INTR_BUS_RESET_MASK USBCTRL_REGS_INTR_BUS_RESET(ALL1)
#define USBCTRL_REGS_INTR_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_INTR_VBUS_DETECT_MASK USBCTRL_REGS_INTR_VBUS_DETECT(ALL1)
#define USBCTRL_REGS_INTR_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_INTR_STALL_MASK USBCTRL_REGS_INTR_STALL(ALL1)
#define USBCTRL_REGS_INTR_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_INTR_ERROR_CRC_MASK USBCTRL_REGS_INTR_ERROR_CRC(ALL1)
#define USBCTRL_REGS_INTR_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_INTR_ERROR_BIT_STUFF_MASK USBCTRL_REGS_INTR_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_REGS_INTR_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_INTR_ERROR_RX_OVERFLOW_MASK USBCTRL_REGS_INTR_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_REGS_INTR_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_INTR_ERROR_RX_TIMEOUT_MASK USBCTRL_REGS_INTR_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_REGS_INTR_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_INTR_ERROR_DATA_SEQ_MASK USBCTRL_REGS_INTR_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_REGS_INTR_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_INTR_BUFF_STATUS_MASK USBCTRL_REGS_INTR_BUFF_STATUS(ALL1)
#define USBCTRL_REGS_INTR_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_INTR_TRANS_COMPLETE_MASK USBCTRL_REGS_INTR_TRANS_COMPLETE(ALL1)
#define USBCTRL_REGS_INTR_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_INTR_HOST_SOF_MASK USBCTRL_REGS_INTR_HOST_SOF(ALL1)
#define USBCTRL_REGS_INTR_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_INTR_HOST_RESUME_MASK USBCTRL_REGS_INTR_HOST_RESUME(ALL1)
#define USBCTRL_REGS_INTR_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_INTR_HOST_CONN_DIS_MASK USBCTRL_REGS_INTR_HOST_CONN_DIS(ALL1)

/*INTE Register macros*/

#define USBCTRL_REGS_INTE_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_INTE_EPX_STOPPED_ON_NAK_MASK USBCTRL_REGS_INTE_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_REGS_INTE_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_INTE_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_REGS_INTE_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_REGS_INTE_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_INTE_ENDPOINT_ERROR_MASK USBCTRL_REGS_INTE_ENDPOINT_ERROR(ALL1)
#define USBCTRL_REGS_INTE_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_INTE_RX_SHORT_PACKET_MASK USBCTRL_REGS_INTE_RX_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_INTE_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_INTE_EP_STALL_NAK_MASK USBCTRL_REGS_INTE_EP_STALL_NAK(ALL1)
#define USBCTRL_REGS_INTE_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_INTE_ABORT_DONE_MASK USBCTRL_REGS_INTE_ABORT_DONE(ALL1)
#define USBCTRL_REGS_INTE_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_INTE_DEV_SOF_MASK USBCTRL_REGS_INTE_DEV_SOF(ALL1)
#define USBCTRL_REGS_INTE_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_INTE_SETUP_REQ_MASK USBCTRL_REGS_INTE_SETUP_REQ(ALL1)
#define USBCTRL_REGS_INTE_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_INTE_DEV_RESUME_FROM_HOST_MASK USBCTRL_REGS_INTE_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_REGS_INTE_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_INTE_DEV_SUSPEND_MASK USBCTRL_REGS_INTE_DEV_SUSPEND(ALL1)
#define USBCTRL_REGS_INTE_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_INTE_DEV_CONN_DIS_MASK USBCTRL_REGS_INTE_DEV_CONN_DIS(ALL1)
#define USBCTRL_REGS_INTE_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_INTE_BUS_RESET_MASK USBCTRL_REGS_INTE_BUS_RESET(ALL1)
#define USBCTRL_REGS_INTE_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_INTE_VBUS_DETECT_MASK USBCTRL_REGS_INTE_VBUS_DETECT(ALL1)
#define USBCTRL_REGS_INTE_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_INTE_STALL_MASK USBCTRL_REGS_INTE_STALL(ALL1)
#define USBCTRL_REGS_INTE_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_INTE_ERROR_CRC_MASK USBCTRL_REGS_INTE_ERROR_CRC(ALL1)
#define USBCTRL_REGS_INTE_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_INTE_ERROR_BIT_STUFF_MASK USBCTRL_REGS_INTE_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_REGS_INTE_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_INTE_ERROR_RX_OVERFLOW_MASK USBCTRL_REGS_INTE_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_REGS_INTE_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_INTE_ERROR_RX_TIMEOUT_MASK USBCTRL_REGS_INTE_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_REGS_INTE_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_INTE_ERROR_DATA_SEQ_MASK USBCTRL_REGS_INTE_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_REGS_INTE_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_INTE_BUFF_STATUS_MASK USBCTRL_REGS_INTE_BUFF_STATUS(ALL1)
#define USBCTRL_REGS_INTE_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_INTE_TRANS_COMPLETE_MASK USBCTRL_REGS_INTE_TRANS_COMPLETE(ALL1)
#define USBCTRL_REGS_INTE_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_INTE_HOST_SOF_MASK USBCTRL_REGS_INTE_HOST_SOF(ALL1)
#define USBCTRL_REGS_INTE_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_INTE_HOST_RESUME_MASK USBCTRL_REGS_INTE_HOST_RESUME(ALL1)
#define USBCTRL_REGS_INTE_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_INTE_HOST_CONN_DIS_MASK USBCTRL_REGS_INTE_HOST_CONN_DIS(ALL1)

/*INTF Register macros*/

#define USBCTRL_REGS_INTF_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_INTF_EPX_STOPPED_ON_NAK_MASK USBCTRL_REGS_INTF_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_REGS_INTF_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_INTF_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_REGS_INTF_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_REGS_INTF_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_INTF_ENDPOINT_ERROR_MASK USBCTRL_REGS_INTF_ENDPOINT_ERROR(ALL1)
#define USBCTRL_REGS_INTF_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_INTF_RX_SHORT_PACKET_MASK USBCTRL_REGS_INTF_RX_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_INTF_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_INTF_EP_STALL_NAK_MASK USBCTRL_REGS_INTF_EP_STALL_NAK(ALL1)
#define USBCTRL_REGS_INTF_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_INTF_ABORT_DONE_MASK USBCTRL_REGS_INTF_ABORT_DONE(ALL1)
#define USBCTRL_REGS_INTF_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_INTF_DEV_SOF_MASK USBCTRL_REGS_INTF_DEV_SOF(ALL1)
#define USBCTRL_REGS_INTF_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_INTF_SETUP_REQ_MASK USBCTRL_REGS_INTF_SETUP_REQ(ALL1)
#define USBCTRL_REGS_INTF_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_INTF_DEV_RESUME_FROM_HOST_MASK USBCTRL_REGS_INTF_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_REGS_INTF_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_INTF_DEV_SUSPEND_MASK USBCTRL_REGS_INTF_DEV_SUSPEND(ALL1)
#define USBCTRL_REGS_INTF_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_INTF_DEV_CONN_DIS_MASK USBCTRL_REGS_INTF_DEV_CONN_DIS(ALL1)
#define USBCTRL_REGS_INTF_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_INTF_BUS_RESET_MASK USBCTRL_REGS_INTF_BUS_RESET(ALL1)
#define USBCTRL_REGS_INTF_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_INTF_VBUS_DETECT_MASK USBCTRL_REGS_INTF_VBUS_DETECT(ALL1)
#define USBCTRL_REGS_INTF_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_INTF_STALL_MASK USBCTRL_REGS_INTF_STALL(ALL1)
#define USBCTRL_REGS_INTF_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_INTF_ERROR_CRC_MASK USBCTRL_REGS_INTF_ERROR_CRC(ALL1)
#define USBCTRL_REGS_INTF_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_INTF_ERROR_BIT_STUFF_MASK USBCTRL_REGS_INTF_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_REGS_INTF_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_INTF_ERROR_RX_OVERFLOW_MASK USBCTRL_REGS_INTF_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_REGS_INTF_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_INTF_ERROR_RX_TIMEOUT_MASK USBCTRL_REGS_INTF_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_REGS_INTF_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_INTF_ERROR_DATA_SEQ_MASK USBCTRL_REGS_INTF_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_REGS_INTF_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_INTF_BUFF_STATUS_MASK USBCTRL_REGS_INTF_BUFF_STATUS(ALL1)
#define USBCTRL_REGS_INTF_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_INTF_TRANS_COMPLETE_MASK USBCTRL_REGS_INTF_TRANS_COMPLETE(ALL1)
#define USBCTRL_REGS_INTF_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_INTF_HOST_SOF_MASK USBCTRL_REGS_INTF_HOST_SOF(ALL1)
#define USBCTRL_REGS_INTF_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_INTF_HOST_RESUME_MASK USBCTRL_REGS_INTF_HOST_RESUME(ALL1)
#define USBCTRL_REGS_INTF_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_INTF_HOST_CONN_DIS_MASK USBCTRL_REGS_INTF_HOST_CONN_DIS(ALL1)

/*INTS Register macros*/

#define USBCTRL_REGS_INTS_EPX_STOPPED_ON_NAK(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_INTS_EPX_STOPPED_ON_NAK_MASK USBCTRL_REGS_INTS_EPX_STOPPED_ON_NAK(ALL1)
#define USBCTRL_REGS_INTS_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_INTS_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_REGS_INTS_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_REGS_INTS_ENDPOINT_ERROR(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_INTS_ENDPOINT_ERROR_MASK USBCTRL_REGS_INTS_ENDPOINT_ERROR(ALL1)
#define USBCTRL_REGS_INTS_RX_SHORT_PACKET(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_INTS_RX_SHORT_PACKET_MASK USBCTRL_REGS_INTS_RX_SHORT_PACKET(ALL1)
#define USBCTRL_REGS_INTS_EP_STALL_NAK(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_INTS_EP_STALL_NAK_MASK USBCTRL_REGS_INTS_EP_STALL_NAK(ALL1)
#define USBCTRL_REGS_INTS_ABORT_DONE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_INTS_ABORT_DONE_MASK USBCTRL_REGS_INTS_ABORT_DONE(ALL1)
#define USBCTRL_REGS_INTS_DEV_SOF(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_INTS_DEV_SOF_MASK USBCTRL_REGS_INTS_DEV_SOF(ALL1)
#define USBCTRL_REGS_INTS_SETUP_REQ(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_INTS_SETUP_REQ_MASK USBCTRL_REGS_INTS_SETUP_REQ(ALL1)
#define USBCTRL_REGS_INTS_DEV_RESUME_FROM_HOST(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_INTS_DEV_RESUME_FROM_HOST_MASK USBCTRL_REGS_INTS_DEV_RESUME_FROM_HOST(ALL1)
#define USBCTRL_REGS_INTS_DEV_SUSPEND(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_INTS_DEV_SUSPEND_MASK USBCTRL_REGS_INTS_DEV_SUSPEND(ALL1)
#define USBCTRL_REGS_INTS_DEV_CONN_DIS(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_INTS_DEV_CONN_DIS_MASK USBCTRL_REGS_INTS_DEV_CONN_DIS(ALL1)
#define USBCTRL_REGS_INTS_BUS_RESET(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_INTS_BUS_RESET_MASK USBCTRL_REGS_INTS_BUS_RESET(ALL1)
#define USBCTRL_REGS_INTS_VBUS_DETECT(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_INTS_VBUS_DETECT_MASK USBCTRL_REGS_INTS_VBUS_DETECT(ALL1)
#define USBCTRL_REGS_INTS_STALL(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_INTS_STALL_MASK USBCTRL_REGS_INTS_STALL(ALL1)
#define USBCTRL_REGS_INTS_ERROR_CRC(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_INTS_ERROR_CRC_MASK USBCTRL_REGS_INTS_ERROR_CRC(ALL1)
#define USBCTRL_REGS_INTS_ERROR_BIT_STUFF(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_INTS_ERROR_BIT_STUFF_MASK USBCTRL_REGS_INTS_ERROR_BIT_STUFF(ALL1)
#define USBCTRL_REGS_INTS_ERROR_RX_OVERFLOW(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_INTS_ERROR_RX_OVERFLOW_MASK USBCTRL_REGS_INTS_ERROR_RX_OVERFLOW(ALL1)
#define USBCTRL_REGS_INTS_ERROR_RX_TIMEOUT(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_INTS_ERROR_RX_TIMEOUT_MASK USBCTRL_REGS_INTS_ERROR_RX_TIMEOUT(ALL1)
#define USBCTRL_REGS_INTS_ERROR_DATA_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_INTS_ERROR_DATA_SEQ_MASK USBCTRL_REGS_INTS_ERROR_DATA_SEQ(ALL1)
#define USBCTRL_REGS_INTS_BUFF_STATUS(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_INTS_BUFF_STATUS_MASK USBCTRL_REGS_INTS_BUFF_STATUS(ALL1)
#define USBCTRL_REGS_INTS_TRANS_COMPLETE(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_INTS_TRANS_COMPLETE_MASK USBCTRL_REGS_INTS_TRANS_COMPLETE(ALL1)
#define USBCTRL_REGS_INTS_HOST_SOF(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_INTS_HOST_SOF_MASK USBCTRL_REGS_INTS_HOST_SOF(ALL1)
#define USBCTRL_REGS_INTS_HOST_RESUME(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_INTS_HOST_RESUME_MASK USBCTRL_REGS_INTS_HOST_RESUME(ALL1)
#define USBCTRL_REGS_INTS_HOST_CONN_DIS(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_INTS_HOST_CONN_DIS_MASK USBCTRL_REGS_INTS_HOST_CONN_DIS(ALL1)

/*SOF_TIMESTAMP_RAW Register macros*/


/*SOF_TIMESTAMP_LAST Register macros*/


/*SM_STATE Register macros*/

#define USBCTRL_REGS_SM_STATE_RX_DASM(v) (((v)&0xf)<<8)
#define USBCTRL_REGS_SM_STATE_RX_DASM_MASK USBCTRL_REGS_SM_STATE_RX_DASM(ALL1)
#define USBCTRL_REGS_SM_STATE_BC_STATE(v) (((v)&0x7)<<5)
#define USBCTRL_REGS_SM_STATE_BC_STATE_MASK USBCTRL_REGS_SM_STATE_BC_STATE(ALL1)
#define USBCTRL_REGS_SM_STATE_STATE(v) (((v)&0x1f)<<0)
#define USBCTRL_REGS_SM_STATE_STATE_MASK USBCTRL_REGS_SM_STATE_STATE(ALL1)

/*EP_TX_ERROR Register macros*/

#define USBCTRL_REGS_EP_TX_ERROR_EP15(v) (((v)&0x3)<<30)
#define USBCTRL_REGS_EP_TX_ERROR_EP15_MASK USBCTRL_REGS_EP_TX_ERROR_EP15(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP14(v) (((v)&0x3)<<28)
#define USBCTRL_REGS_EP_TX_ERROR_EP14_MASK USBCTRL_REGS_EP_TX_ERROR_EP14(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP13(v) (((v)&0x3)<<26)
#define USBCTRL_REGS_EP_TX_ERROR_EP13_MASK USBCTRL_REGS_EP_TX_ERROR_EP13(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP12(v) (((v)&0x3)<<24)
#define USBCTRL_REGS_EP_TX_ERROR_EP12_MASK USBCTRL_REGS_EP_TX_ERROR_EP12(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP11(v) (((v)&0x3)<<22)
#define USBCTRL_REGS_EP_TX_ERROR_EP11_MASK USBCTRL_REGS_EP_TX_ERROR_EP11(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP10(v) (((v)&0x3)<<20)
#define USBCTRL_REGS_EP_TX_ERROR_EP10_MASK USBCTRL_REGS_EP_TX_ERROR_EP10(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP9(v) (((v)&0x3)<<18)
#define USBCTRL_REGS_EP_TX_ERROR_EP9_MASK USBCTRL_REGS_EP_TX_ERROR_EP9(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP8(v) (((v)&0x3)<<16)
#define USBCTRL_REGS_EP_TX_ERROR_EP8_MASK USBCTRL_REGS_EP_TX_ERROR_EP8(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP7(v) (((v)&0x3)<<14)
#define USBCTRL_REGS_EP_TX_ERROR_EP7_MASK USBCTRL_REGS_EP_TX_ERROR_EP7(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP6(v) (((v)&0x3)<<12)
#define USBCTRL_REGS_EP_TX_ERROR_EP6_MASK USBCTRL_REGS_EP_TX_ERROR_EP6(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP5(v) (((v)&0x3)<<10)
#define USBCTRL_REGS_EP_TX_ERROR_EP5_MASK USBCTRL_REGS_EP_TX_ERROR_EP5(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP4(v) (((v)&0x3)<<8)
#define USBCTRL_REGS_EP_TX_ERROR_EP4_MASK USBCTRL_REGS_EP_TX_ERROR_EP4(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP3(v) (((v)&0x3)<<6)
#define USBCTRL_REGS_EP_TX_ERROR_EP3_MASK USBCTRL_REGS_EP_TX_ERROR_EP3(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP2(v) (((v)&0x3)<<4)
#define USBCTRL_REGS_EP_TX_ERROR_EP2_MASK USBCTRL_REGS_EP_TX_ERROR_EP2(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP1(v) (((v)&0x3)<<2)
#define USBCTRL_REGS_EP_TX_ERROR_EP1_MASK USBCTRL_REGS_EP_TX_ERROR_EP1(ALL1)
#define USBCTRL_REGS_EP_TX_ERROR_EP0(v) (((v)&0x3)<<0)
#define USBCTRL_REGS_EP_TX_ERROR_EP0_MASK USBCTRL_REGS_EP_TX_ERROR_EP0(ALL1)

/*EP_RX_ERROR Register macros*/

#define USBCTRL_REGS_EP_RX_ERROR_EP15_SEQ(v) (((v)&0x1)<<31)
#define USBCTRL_REGS_EP_RX_ERROR_EP15_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP15_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP15_TRANSACTION(v) (((v)&0x1)<<30)
#define USBCTRL_REGS_EP_RX_ERROR_EP15_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP15_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP14_SEQ(v) (((v)&0x1)<<29)
#define USBCTRL_REGS_EP_RX_ERROR_EP14_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP14_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP14_TRANSACTION(v) (((v)&0x1)<<28)
#define USBCTRL_REGS_EP_RX_ERROR_EP14_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP14_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP13_SEQ(v) (((v)&0x1)<<27)
#define USBCTRL_REGS_EP_RX_ERROR_EP13_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP13_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP13_TRANSACTION(v) (((v)&0x1)<<26)
#define USBCTRL_REGS_EP_RX_ERROR_EP13_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP13_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP12_SEQ(v) (((v)&0x1)<<25)
#define USBCTRL_REGS_EP_RX_ERROR_EP12_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP12_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP12_TRANSACTION(v) (((v)&0x1)<<24)
#define USBCTRL_REGS_EP_RX_ERROR_EP12_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP12_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP11_SEQ(v) (((v)&0x1)<<23)
#define USBCTRL_REGS_EP_RX_ERROR_EP11_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP11_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP11_TRANSACTION(v) (((v)&0x1)<<22)
#define USBCTRL_REGS_EP_RX_ERROR_EP11_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP11_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP10_SEQ(v) (((v)&0x1)<<21)
#define USBCTRL_REGS_EP_RX_ERROR_EP10_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP10_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP10_TRANSACTION(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_EP_RX_ERROR_EP10_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP10_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP9_SEQ(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_EP_RX_ERROR_EP9_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP9_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP9_TRANSACTION(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_EP_RX_ERROR_EP9_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP9_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP8_SEQ(v) (((v)&0x1)<<17)
#define USBCTRL_REGS_EP_RX_ERROR_EP8_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP8_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP8_TRANSACTION(v) (((v)&0x1)<<16)
#define USBCTRL_REGS_EP_RX_ERROR_EP8_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP8_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP7_SEQ(v) (((v)&0x1)<<15)
#define USBCTRL_REGS_EP_RX_ERROR_EP7_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP7_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP7_TRANSACTION(v) (((v)&0x1)<<14)
#define USBCTRL_REGS_EP_RX_ERROR_EP7_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP7_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP6_SEQ(v) (((v)&0x1)<<13)
#define USBCTRL_REGS_EP_RX_ERROR_EP6_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP6_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP6_TRANSACTION(v) (((v)&0x1)<<12)
#define USBCTRL_REGS_EP_RX_ERROR_EP6_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP6_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP5_SEQ(v) (((v)&0x1)<<11)
#define USBCTRL_REGS_EP_RX_ERROR_EP5_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP5_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP5_TRANSACTION(v) (((v)&0x1)<<10)
#define USBCTRL_REGS_EP_RX_ERROR_EP5_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP5_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP4_SEQ(v) (((v)&0x1)<<9)
#define USBCTRL_REGS_EP_RX_ERROR_EP4_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP4_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP4_TRANSACTION(v) (((v)&0x1)<<8)
#define USBCTRL_REGS_EP_RX_ERROR_EP4_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP4_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP3_SEQ(v) (((v)&0x1)<<7)
#define USBCTRL_REGS_EP_RX_ERROR_EP3_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP3_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP3_TRANSACTION(v) (((v)&0x1)<<6)
#define USBCTRL_REGS_EP_RX_ERROR_EP3_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP3_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP2_SEQ(v) (((v)&0x1)<<5)
#define USBCTRL_REGS_EP_RX_ERROR_EP2_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP2_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP2_TRANSACTION(v) (((v)&0x1)<<4)
#define USBCTRL_REGS_EP_RX_ERROR_EP2_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP2_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP1_SEQ(v) (((v)&0x1)<<3)
#define USBCTRL_REGS_EP_RX_ERROR_EP1_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP1_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP1_TRANSACTION(v) (((v)&0x1)<<2)
#define USBCTRL_REGS_EP_RX_ERROR_EP1_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP1_TRANSACTION(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP0_SEQ(v) (((v)&0x1)<<1)
#define USBCTRL_REGS_EP_RX_ERROR_EP0_SEQ_MASK USBCTRL_REGS_EP_RX_ERROR_EP0_SEQ(ALL1)
#define USBCTRL_REGS_EP_RX_ERROR_EP0_TRANSACTION(v) (((v)&0x1)<<0)
#define USBCTRL_REGS_EP_RX_ERROR_EP0_TRANSACTION_MASK USBCTRL_REGS_EP_RX_ERROR_EP0_TRANSACTION(ALL1)

/*DEV_SM_WATCHDOG Register macros*/

#define USBCTRL_REGS_DEV_SM_WATCHDOG_FIRED(v) (((v)&0x1)<<20)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_FIRED_MASK USBCTRL_REGS_DEV_SM_WATCHDOG_FIRED(ALL1)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_RESET(v) (((v)&0x1)<<19)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_RESET_MASK USBCTRL_REGS_DEV_SM_WATCHDOG_RESET(ALL1)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_ENABLE(v) (((v)&0x1)<<18)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_ENABLE_MASK USBCTRL_REGS_DEV_SM_WATCHDOG_ENABLE(ALL1)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_LIMIT(v) (((v)&0x3ffff)<<0)
#define USBCTRL_REGS_DEV_SM_WATCHDOG_LIMIT_MASK USBCTRL_REGS_DEV_SM_WATCHDOG_LIMIT(ALL1)

#endif