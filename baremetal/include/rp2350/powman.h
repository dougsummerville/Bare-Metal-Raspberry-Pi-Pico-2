
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

#ifndef RP2350_POWMAN_H
#define RP2350_POWMAN_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t badpasswd;
		uint32_t vreg_ctrl;
		uint32_t vreg_sts;
		uint32_t vreg;
		uint32_t vreg_lp_entry;
		uint32_t vreg_lp_exit;
		uint32_t bod_ctrl;
		uint32_t bod;
		uint32_t bod_lp_entry;
		uint32_t bod_lp_exit;
		uint32_t lposc;
		uint32_t chip_reset;
		uint32_t wdsel;
		uint32_t seq_cfg;
		uint32_t state;
		uint32_t pow_fastdiv;
		uint32_t pow_delay;
		uint32_t ext_ctrl0;
		uint32_t ext_ctrl1;
		uint32_t ext_time_ref;
		uint32_t lposc_freq_khz_int;
		uint32_t lposc_freq_khz_frac;
		uint32_t xosc_freq_khz_int;
		uint32_t xosc_freq_khz_frac;
		uint32_t set_time_63to48;
		uint32_t set_time_47to32;
		uint32_t set_time_31to16;
		uint32_t set_time_15to0;
		uint32_t read_time_upper;
		uint32_t read_time_lower;
		uint32_t alarm_time_63to48;
		uint32_t alarm_time_47to32;
		uint32_t alarm_time_31to16;
		uint32_t alarm_time_15to0;
		uint32_t timer;
		uint32_t pwrup0;
		uint32_t pwrup1;
		uint32_t pwrup2;
		uint32_t pwrup3;
		uint32_t current_pwrup_req;
		uint32_t last_swcore_pwrup;
		uint32_t dbg_pwrcfg;
		uint32_t bootdis;
		uint32_t dbgconfig;
		uint32_t scratch0;
		uint32_t scratch1;
		uint32_t scratch2;
		uint32_t scratch3;
		uint32_t scratch4;
		uint32_t scratch5;
		uint32_t scratch6;
		uint32_t scratch7;
		uint32_t boot0;
		uint32_t boot1;
		uint32_t boot2;
		uint32_t boot3;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD0[964];
		uint32_t xor_badpasswd;
		uint32_t xor_vreg_ctrl;
		uint32_t xor_vreg_sts;
		uint32_t xor_vreg;
		uint32_t xor_vreg_lp_entry;
		uint32_t xor_vreg_lp_exit;
		uint32_t xor_bod_ctrl;
		uint32_t xor_bod;
		uint32_t xor_bod_lp_entry;
		uint32_t xor_bod_lp_exit;
		uint32_t xor_lposc;
		uint32_t xor_chip_reset;
		uint32_t xor_wdsel;
		uint32_t xor_seq_cfg;
		uint32_t xor_state;
		uint32_t xor_pow_fastdiv;
		uint32_t xor_pow_delay;
		uint32_t xor_ext_ctrl0;
		uint32_t xor_ext_ctrl1;
		uint32_t xor_ext_time_ref;
		uint32_t xor_lposc_freq_khz_int;
		uint32_t xor_lposc_freq_khz_frac;
		uint32_t xor_xosc_freq_khz_int;
		uint32_t xor_xosc_freq_khz_frac;
		uint32_t xor_set_time_63to48;
		uint32_t xor_set_time_47to32;
		uint32_t xor_set_time_31to16;
		uint32_t xor_set_time_15to0;
		uint32_t xor_read_time_upper;
		uint32_t xor_read_time_lower;
		uint32_t xor_alarm_time_63to48;
		uint32_t xor_alarm_time_47to32;
		uint32_t xor_alarm_time_31to16;
		uint32_t xor_alarm_time_15to0;
		uint32_t xor_timer;
		uint32_t xor_pwrup0;
		uint32_t xor_pwrup1;
		uint32_t xor_pwrup2;
		uint32_t xor_pwrup3;
		uint32_t xor_current_pwrup_req;
		uint32_t xor_last_swcore_pwrup;
		uint32_t xor_dbg_pwrcfg;
		uint32_t xor_bootdis;
		uint32_t xor_dbgconfig;
		uint32_t xor_scratch0;
		uint32_t xor_scratch1;
		uint32_t xor_scratch2;
		uint32_t xor_scratch3;
		uint32_t xor_scratch4;
		uint32_t xor_scratch5;
		uint32_t xor_scratch6;
		uint32_t xor_scratch7;
		uint32_t xor_boot0;
		uint32_t xor_boot1;
		uint32_t xor_boot2;
		uint32_t xor_boot3;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_0[964];
		uint32_t set_badpasswd;
		uint32_t set_vreg_ctrl;
		uint32_t set_vreg_sts;
		uint32_t set_vreg;
		uint32_t set_vreg_lp_entry;
		uint32_t set_vreg_lp_exit;
		uint32_t set_bod_ctrl;
		uint32_t set_bod;
		uint32_t set_bod_lp_entry;
		uint32_t set_bod_lp_exit;
		uint32_t set_lposc;
		uint32_t set_chip_reset;
		uint32_t set_wdsel;
		uint32_t set_seq_cfg;
		uint32_t set_state;
		uint32_t set_pow_fastdiv;
		uint32_t set_pow_delay;
		uint32_t set_ext_ctrl0;
		uint32_t set_ext_ctrl1;
		uint32_t set_ext_time_ref;
		uint32_t set_lposc_freq_khz_int;
		uint32_t set_lposc_freq_khz_frac;
		uint32_t set_xosc_freq_khz_int;
		uint32_t set_xosc_freq_khz_frac;
		uint32_t set_set_time_63to48;
		uint32_t set_set_time_47to32;
		uint32_t set_set_time_31to16;
		uint32_t set_set_time_15to0;
		uint32_t set_read_time_upper;
		uint32_t set_read_time_lower;
		uint32_t set_alarm_time_63to48;
		uint32_t set_alarm_time_47to32;
		uint32_t set_alarm_time_31to16;
		uint32_t set_alarm_time_15to0;
		uint32_t set_timer;
		uint32_t set_pwrup0;
		uint32_t set_pwrup1;
		uint32_t set_pwrup2;
		uint32_t set_pwrup3;
		uint32_t set_current_pwrup_req;
		uint32_t set_last_swcore_pwrup;
		uint32_t set_dbg_pwrcfg;
		uint32_t set_bootdis;
		uint32_t set_dbgconfig;
		uint32_t set_scratch0;
		uint32_t set_scratch1;
		uint32_t set_scratch2;
		uint32_t set_scratch3;
		uint32_t set_scratch4;
		uint32_t set_scratch5;
		uint32_t set_scratch6;
		uint32_t set_scratch7;
		uint32_t set_boot0;
		uint32_t set_boot1;
		uint32_t set_boot2;
		uint32_t set_boot3;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_0[964];
		uint32_t clr_badpasswd;
		uint32_t clr_vreg_ctrl;
		uint32_t clr_vreg_sts;
		uint32_t clr_vreg;
		uint32_t clr_vreg_lp_entry;
		uint32_t clr_vreg_lp_exit;
		uint32_t clr_bod_ctrl;
		uint32_t clr_bod;
		uint32_t clr_bod_lp_entry;
		uint32_t clr_bod_lp_exit;
		uint32_t clr_lposc;
		uint32_t clr_chip_reset;
		uint32_t clr_wdsel;
		uint32_t clr_seq_cfg;
		uint32_t clr_state;
		uint32_t clr_pow_fastdiv;
		uint32_t clr_pow_delay;
		uint32_t clr_ext_ctrl0;
		uint32_t clr_ext_ctrl1;
		uint32_t clr_ext_time_ref;
		uint32_t clr_lposc_freq_khz_int;
		uint32_t clr_lposc_freq_khz_frac;
		uint32_t clr_xosc_freq_khz_int;
		uint32_t clr_xosc_freq_khz_frac;
		uint32_t clr_set_time_63to48;
		uint32_t clr_set_time_47to32;
		uint32_t clr_set_time_31to16;
		uint32_t clr_set_time_15to0;
		uint32_t clr_read_time_upper;
		uint32_t clr_read_time_lower;
		uint32_t clr_alarm_time_63to48;
		uint32_t clr_alarm_time_47to32;
		uint32_t clr_alarm_time_31to16;
		uint32_t clr_alarm_time_15to0;
		uint32_t clr_timer;
		uint32_t clr_pwrup0;
		uint32_t clr_pwrup1;
		uint32_t clr_pwrup2;
		uint32_t clr_pwrup3;
		uint32_t clr_current_pwrup_req;
		uint32_t clr_last_swcore_pwrup;
		uint32_t clr_dbg_pwrcfg;
		uint32_t clr_bootdis;
		uint32_t clr_dbgconfig;
		uint32_t clr_scratch0;
		uint32_t clr_scratch1;
		uint32_t clr_scratch2;
		uint32_t clr_scratch3;
		uint32_t clr_scratch4;
		uint32_t clr_scratch5;
		uint32_t clr_scratch6;
		uint32_t clr_scratch7;
		uint32_t clr_boot0;
		uint32_t clr_boot1;
		uint32_t clr_boot2;
		uint32_t clr_boot3;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_0[964];
} POWMAN_REG_BLOCKS;

#define powman ((POWMAN_REG_BLOCKS volatile *)0x40100000)

/*BADPASSWD Register macros*/


/*VREG_CTRL Register macros*/

#define POWMAN_VREG_CTRL_RST_N(v) (((v)&0x1)<<15)
#define POWMAN_VREG_CTRL_RST_N_MASK POWMAN_VREG_CTRL_RST_N(ALL1)
#define POWMAN_VREG_CTRL_UNLOCK(v) (((v)&0x1)<<13)
#define POWMAN_VREG_CTRL_UNLOCK_MASK POWMAN_VREG_CTRL_UNLOCK(ALL1)
#define POWMAN_VREG_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_VREG_CTRL_ISOLATE_MASK POWMAN_VREG_CTRL_ISOLATE(ALL1)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(v) (((v)&0x1)<<8)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_MASK POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(ALL1)
#define POWMAN_VREG_CTRL_HT_TH(v) (((v)&0x7)<<4)
#define POWMAN_VREG_CTRL_HT_TH_MASK POWMAN_VREG_CTRL_HT_TH(ALL1)

/*VREG_STS Register macros*/

#define POWMAN_VREG_STS_VOUT_OK(v) (((v)&0x1)<<4)
#define POWMAN_VREG_STS_VOUT_OK_MASK POWMAN_VREG_STS_VOUT_OK(ALL1)
#define POWMAN_VREG_STS_STARTUP(v) (((v)&0x1)<<0)
#define POWMAN_VREG_STS_STARTUP_MASK POWMAN_VREG_STS_STARTUP(ALL1)

/*VREG Register macros*/

#define POWMAN_VREG_CTRL_RST_N(v) (((v)&0x1)<<15)
#define POWMAN_VREG_CTRL_RST_N_MASK POWMAN_VREG_CTRL_RST_N(ALL1)
#define POWMAN_VREG_CTRL_UNLOCK(v) (((v)&0x1)<<13)
#define POWMAN_VREG_CTRL_UNLOCK_MASK POWMAN_VREG_CTRL_UNLOCK(ALL1)
#define POWMAN_VREG_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_VREG_CTRL_ISOLATE_MASK POWMAN_VREG_CTRL_ISOLATE(ALL1)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(v) (((v)&0x1)<<8)
#define POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT_MASK POWMAN_VREG_CTRL_DISABLE_VOLTAGE_LIMIT(ALL1)
#define POWMAN_VREG_CTRL_HT_TH(v) (((v)&0x7)<<4)
#define POWMAN_VREG_CTRL_HT_TH_MASK POWMAN_VREG_CTRL_HT_TH(ALL1)
#define POWMAN_VREG_STS_VOUT_OK(v) (((v)&0x1)<<4)
#define POWMAN_VREG_STS_VOUT_OK_MASK POWMAN_VREG_STS_VOUT_OK(ALL1)
#define POWMAN_VREG_STS_STARTUP(v) (((v)&0x1)<<0)
#define POWMAN_VREG_STS_STARTUP_MASK POWMAN_VREG_STS_STARTUP(ALL1)
#define POWMAN_VREG_UPDATE_IN_PROGRESS(v) (((v)&0x1)<<15)
#define POWMAN_VREG_UPDATE_IN_PROGRESS_MASK POWMAN_VREG_UPDATE_IN_PROGRESS(ALL1)
#define POWMAN_VREG_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_VSEL_MASK POWMAN_VREG_VSEL(ALL1)
#define POWMAN_VREG_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_HIZ_MASK POWMAN_VREG_HIZ(ALL1)
#define POWMAN_VREG_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_ENTRY_VSEL_MASK POWMAN_VREG_LP_ENTRY_VSEL(ALL1)
#define POWMAN_VREG_LP_ENTRY_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_ENTRY_MODE_MASK POWMAN_VREG_LP_ENTRY_MODE(ALL1)
#define POWMAN_VREG_LP_ENTRY_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_ENTRY_HIZ_MASK POWMAN_VREG_LP_ENTRY_HIZ(ALL1)
#define POWMAN_VREG_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_EXIT_VSEL_MASK POWMAN_VREG_LP_EXIT_VSEL(ALL1)
#define POWMAN_VREG_LP_EXIT_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_EXIT_MODE_MASK POWMAN_VREG_LP_EXIT_MODE(ALL1)
#define POWMAN_VREG_LP_EXIT_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_EXIT_HIZ_MASK POWMAN_VREG_LP_EXIT_HIZ(ALL1)

/*VREG_LP_ENTRY Register macros*/

#define POWMAN_VREG_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_ENTRY_VSEL_MASK POWMAN_VREG_LP_ENTRY_VSEL(ALL1)
#define POWMAN_VREG_LP_ENTRY_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_ENTRY_MODE_MASK POWMAN_VREG_LP_ENTRY_MODE(ALL1)
#define POWMAN_VREG_LP_ENTRY_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_ENTRY_HIZ_MASK POWMAN_VREG_LP_ENTRY_HIZ(ALL1)

/*VREG_LP_EXIT Register macros*/

#define POWMAN_VREG_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_VREG_LP_EXIT_VSEL_MASK POWMAN_VREG_LP_EXIT_VSEL(ALL1)
#define POWMAN_VREG_LP_EXIT_MODE(v) (((v)&0x1)<<2)
#define POWMAN_VREG_LP_EXIT_MODE_MASK POWMAN_VREG_LP_EXIT_MODE(ALL1)
#define POWMAN_VREG_LP_EXIT_HIZ(v) (((v)&0x1)<<1)
#define POWMAN_VREG_LP_EXIT_HIZ_MASK POWMAN_VREG_LP_EXIT_HIZ(ALL1)

/*BOD_CTRL Register macros*/

#define POWMAN_BOD_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_BOD_CTRL_ISOLATE_MASK POWMAN_BOD_CTRL_ISOLATE(ALL1)

/*BOD Register macros*/

#define POWMAN_BOD_CTRL_ISOLATE(v) (((v)&0x1)<<12)
#define POWMAN_BOD_CTRL_ISOLATE_MASK POWMAN_BOD_CTRL_ISOLATE(ALL1)
#define POWMAN_BOD_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_VSEL_MASK POWMAN_BOD_VSEL(ALL1)
#define POWMAN_BOD_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_EN_MASK POWMAN_BOD_EN(ALL1)
#define POWMAN_BOD_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_ENTRY_VSEL_MASK POWMAN_BOD_LP_ENTRY_VSEL(ALL1)
#define POWMAN_BOD_LP_ENTRY_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_ENTRY_EN_MASK POWMAN_BOD_LP_ENTRY_EN(ALL1)
#define POWMAN_BOD_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_EXIT_VSEL_MASK POWMAN_BOD_LP_EXIT_VSEL(ALL1)
#define POWMAN_BOD_LP_EXIT_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_EXIT_EN_MASK POWMAN_BOD_LP_EXIT_EN(ALL1)

/*BOD_LP_ENTRY Register macros*/

#define POWMAN_BOD_LP_ENTRY_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_ENTRY_VSEL_MASK POWMAN_BOD_LP_ENTRY_VSEL(ALL1)
#define POWMAN_BOD_LP_ENTRY_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_ENTRY_EN_MASK POWMAN_BOD_LP_ENTRY_EN(ALL1)

/*BOD_LP_EXIT Register macros*/

#define POWMAN_BOD_LP_EXIT_VSEL(v) (((v)&0x1f)<<4)
#define POWMAN_BOD_LP_EXIT_VSEL_MASK POWMAN_BOD_LP_EXIT_VSEL(ALL1)
#define POWMAN_BOD_LP_EXIT_EN(v) (((v)&0x1)<<0)
#define POWMAN_BOD_LP_EXIT_EN_MASK POWMAN_BOD_LP_EXIT_EN(ALL1)

/*LPOSC Register macros*/

#define POWMAN_LPOSC_TRIM(v) (((v)&0x3f)<<4)
#define POWMAN_LPOSC_TRIM_MASK POWMAN_LPOSC_TRIM(ALL1)
#define POWMAN_LPOSC_MODE(v) (((v)&0x3)<<0)
#define POWMAN_LPOSC_MODE_MASK POWMAN_LPOSC_MODE(ALL1)

/*CHIP_RESET Register macros*/

#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM(v) (((v)&0x1)<<28)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_RSM(ALL1)
#define POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ(v) (((v)&0x1)<<27)
#define POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ_MASK POWMAN_CHIP_RESET_HAD_HZD_SYS_RESET_REQ(ALL1)
#define POWMAN_CHIP_RESET_HAD_GLITCH_DETECT(v) (((v)&0x1)<<26)
#define POWMAN_CHIP_RESET_HAD_GLITCH_DETECT_MASK POWMAN_CHIP_RESET_HAD_GLITCH_DETECT(ALL1)
#define POWMAN_CHIP_RESET_HAD_SWCORE_PD(v) (((v)&0x1)<<25)
#define POWMAN_CHIP_RESET_HAD_SWCORE_PD_MASK POWMAN_CHIP_RESET_HAD_SWCORE_PD(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE(v) (((v)&0x1)<<24)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_SWCORE(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN(v) (((v)&0x1)<<23)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN(ALL1)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC(v) (((v)&0x1)<<22)
#define POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC_MASK POWMAN_CHIP_RESET_HAD_WATCHDOG_RESET_POWMAN_ASYNC(ALL1)
#define POWMAN_CHIP_RESET_HAD_RESCUE(v) (((v)&0x1)<<21)
#define POWMAN_CHIP_RESET_HAD_RESCUE_MASK POWMAN_CHIP_RESET_HAD_RESCUE(ALL1)
#define POWMAN_CHIP_RESET_HAD_DP_RESET_REQ(v) (((v)&0x1)<<19)
#define POWMAN_CHIP_RESET_HAD_DP_RESET_REQ_MASK POWMAN_CHIP_RESET_HAD_DP_RESET_REQ(ALL1)
#define POWMAN_CHIP_RESET_HAD_RUN_LOW(v) (((v)&0x1)<<18)
#define POWMAN_CHIP_RESET_HAD_RUN_LOW_MASK POWMAN_CHIP_RESET_HAD_RUN_LOW(ALL1)
#define POWMAN_CHIP_RESET_HAD_BOR(v) (((v)&0x1)<<17)
#define POWMAN_CHIP_RESET_HAD_BOR_MASK POWMAN_CHIP_RESET_HAD_BOR(ALL1)
#define POWMAN_CHIP_RESET_HAD_POR(v) (((v)&0x1)<<16)
#define POWMAN_CHIP_RESET_HAD_POR_MASK POWMAN_CHIP_RESET_HAD_POR(ALL1)
#define POWMAN_CHIP_RESET_RESCUE_FLAG(v) (((v)&0x1)<<4)
#define POWMAN_CHIP_RESET_RESCUE_FLAG_MASK POWMAN_CHIP_RESET_RESCUE_FLAG(ALL1)
#define POWMAN_CHIP_RESET_DOUBLE_TAP(v) (((v)&0x1)<<0)
#define POWMAN_CHIP_RESET_DOUBLE_TAP_MASK POWMAN_CHIP_RESET_DOUBLE_TAP(ALL1)

/*WDSEL Register macros*/

#define POWMAN_WDSEL_RESET_RSM(v) (((v)&0x1)<<12)
#define POWMAN_WDSEL_RESET_RSM_MASK POWMAN_WDSEL_RESET_RSM(ALL1)
#define POWMAN_WDSEL_RESET_SWCORE(v) (((v)&0x1)<<8)
#define POWMAN_WDSEL_RESET_SWCORE_MASK POWMAN_WDSEL_RESET_SWCORE(ALL1)
#define POWMAN_WDSEL_RESET_POWMAN(v) (((v)&0x1)<<4)
#define POWMAN_WDSEL_RESET_POWMAN_MASK POWMAN_WDSEL_RESET_POWMAN(ALL1)
#define POWMAN_WDSEL_RESET_POWMAN_ASYNC(v) (((v)&0x1)<<0)
#define POWMAN_WDSEL_RESET_POWMAN_ASYNC_MASK POWMAN_WDSEL_RESET_POWMAN_ASYNC(ALL1)

/*SEQ_CFG Register macros*/

#define POWMAN_SEQ_CFG_USING_FAST_POWCK(v) (((v)&0x1)<<20)
#define POWMAN_SEQ_CFG_USING_FAST_POWCK_MASK POWMAN_SEQ_CFG_USING_FAST_POWCK(ALL1)
#define POWMAN_SEQ_CFG_USING_BOD_LP(v) (((v)&0x1)<<17)
#define POWMAN_SEQ_CFG_USING_BOD_LP_MASK POWMAN_SEQ_CFG_USING_BOD_LP(ALL1)
#define POWMAN_SEQ_CFG_USING_VREG_LP(v) (((v)&0x1)<<16)
#define POWMAN_SEQ_CFG_USING_VREG_LP_MASK POWMAN_SEQ_CFG_USING_VREG_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_FAST_POWCK(v) (((v)&0x1)<<12)
#define POWMAN_SEQ_CFG_USE_FAST_POWCK_MASK POWMAN_SEQ_CFG_USE_FAST_POWCK(ALL1)
#define POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP(v) (((v)&0x1)<<8)
#define POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP_MASK POWMAN_SEQ_CFG_RUN_LPOSC_IN_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_BOD_HP(v) (((v)&0x1)<<7)
#define POWMAN_SEQ_CFG_USE_BOD_HP_MASK POWMAN_SEQ_CFG_USE_BOD_HP(ALL1)
#define POWMAN_SEQ_CFG_USE_BOD_LP(v) (((v)&0x1)<<6)
#define POWMAN_SEQ_CFG_USE_BOD_LP_MASK POWMAN_SEQ_CFG_USE_BOD_LP(ALL1)
#define POWMAN_SEQ_CFG_USE_VREG_HP(v) (((v)&0x1)<<5)
#define POWMAN_SEQ_CFG_USE_VREG_HP_MASK POWMAN_SEQ_CFG_USE_VREG_HP(ALL1)
#define POWMAN_SEQ_CFG_USE_VREG_LP(v) (((v)&0x1)<<4)
#define POWMAN_SEQ_CFG_USE_VREG_LP_MASK POWMAN_SEQ_CFG_USE_VREG_LP(ALL1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM0(v) (((v)&0x1)<<1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM0_MASK POWMAN_SEQ_CFG_HW_PWRUP_SRAM0(ALL1)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM1(v) (((v)&0x1)<<0)
#define POWMAN_SEQ_CFG_HW_PWRUP_SRAM1_MASK POWMAN_SEQ_CFG_HW_PWRUP_SRAM1(ALL1)

/*STATE Register macros*/

#define POWMAN_STATE_CHANGING(v) (((v)&0x1)<<13)
#define POWMAN_STATE_CHANGING_MASK POWMAN_STATE_CHANGING(ALL1)
#define POWMAN_STATE_WAITING(v) (((v)&0x1)<<12)
#define POWMAN_STATE_WAITING_MASK POWMAN_STATE_WAITING(ALL1)
#define POWMAN_STATE_BAD_HW_REQ(v) (((v)&0x1)<<11)
#define POWMAN_STATE_BAD_HW_REQ_MASK POWMAN_STATE_BAD_HW_REQ(ALL1)
#define POWMAN_STATE_BAD_SW_REQ(v) (((v)&0x1)<<10)
#define POWMAN_STATE_BAD_SW_REQ_MASK POWMAN_STATE_BAD_SW_REQ(ALL1)
#define POWMAN_STATE_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<9)
#define POWMAN_STATE_PWRUP_WHILE_WAITING_MASK POWMAN_STATE_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_STATE_REQ_IGNORED(v) (((v)&0x1)<<8)
#define POWMAN_STATE_REQ_IGNORED_MASK POWMAN_STATE_REQ_IGNORED(ALL1)
#define POWMAN_STATE_REQ(v) (((v)&0xf)<<4)
#define POWMAN_STATE_REQ_MASK POWMAN_STATE_REQ(ALL1)
#define POWMAN_STATE_CURRENT(v) (((v)&0xf)<<0)
#define POWMAN_STATE_CURRENT_MASK POWMAN_STATE_CURRENT(ALL1)

/*POW_FASTDIV Register macros*/


/*POW_DELAY Register macros*/

#define POWMAN_POW_DELAY_SRAM_STEP(v) (((v)&0xff)<<8)
#define POWMAN_POW_DELAY_SRAM_STEP_MASK POWMAN_POW_DELAY_SRAM_STEP(ALL1)
#define POWMAN_POW_DELAY_XIP_STEP(v) (((v)&0xf)<<4)
#define POWMAN_POW_DELAY_XIP_STEP_MASK POWMAN_POW_DELAY_XIP_STEP(ALL1)
#define POWMAN_POW_DELAY_SWCORE_STEP(v) (((v)&0xf)<<0)
#define POWMAN_POW_DELAY_SWCORE_STEP_MASK POWMAN_POW_DELAY_SWCORE_STEP(ALL1)

/*EXT_CTRL0 Register macros*/

#define POWMAN_EXT_CTRL0_LP_EXIT_STATE(v) (((v)&0x1)<<14)
#define POWMAN_EXT_CTRL0_LP_EXIT_STATE_MASK POWMAN_EXT_CTRL0_LP_EXIT_STATE(ALL1)
#define POWMAN_EXT_CTRL0_LP_ENTRY_STATE(v) (((v)&0x1)<<13)
#define POWMAN_EXT_CTRL0_LP_ENTRY_STATE_MASK POWMAN_EXT_CTRL0_LP_ENTRY_STATE(ALL1)
#define POWMAN_EXT_CTRL0_INIT_STATE(v) (((v)&0x1)<<12)
#define POWMAN_EXT_CTRL0_INIT_STATE_MASK POWMAN_EXT_CTRL0_INIT_STATE(ALL1)
#define POWMAN_EXT_CTRL0_INIT(v) (((v)&0x1)<<8)
#define POWMAN_EXT_CTRL0_INIT_MASK POWMAN_EXT_CTRL0_INIT(ALL1)
#define POWMAN_EXT_CTRL0_GPIO_SELECT(v) (((v)&0x3f)<<0)
#define POWMAN_EXT_CTRL0_GPIO_SELECT_MASK POWMAN_EXT_CTRL0_GPIO_SELECT(ALL1)

/*EXT_CTRL1 Register macros*/

#define POWMAN_EXT_CTRL1_LP_EXIT_STATE(v) (((v)&0x1)<<14)
#define POWMAN_EXT_CTRL1_LP_EXIT_STATE_MASK POWMAN_EXT_CTRL1_LP_EXIT_STATE(ALL1)
#define POWMAN_EXT_CTRL1_LP_ENTRY_STATE(v) (((v)&0x1)<<13)
#define POWMAN_EXT_CTRL1_LP_ENTRY_STATE_MASK POWMAN_EXT_CTRL1_LP_ENTRY_STATE(ALL1)
#define POWMAN_EXT_CTRL1_INIT_STATE(v) (((v)&0x1)<<12)
#define POWMAN_EXT_CTRL1_INIT_STATE_MASK POWMAN_EXT_CTRL1_INIT_STATE(ALL1)
#define POWMAN_EXT_CTRL1_INIT(v) (((v)&0x1)<<8)
#define POWMAN_EXT_CTRL1_INIT_MASK POWMAN_EXT_CTRL1_INIT(ALL1)
#define POWMAN_EXT_CTRL1_GPIO_SELECT(v) (((v)&0x3f)<<0)
#define POWMAN_EXT_CTRL1_GPIO_SELECT_MASK POWMAN_EXT_CTRL1_GPIO_SELECT(ALL1)

/*EXT_TIME_REF Register macros*/

#define POWMAN_EXT_TIME_REF_DRIVE_LPCK(v) (((v)&0x1)<<4)
#define POWMAN_EXT_TIME_REF_DRIVE_LPCK_MASK POWMAN_EXT_TIME_REF_DRIVE_LPCK(ALL1)
#define POWMAN_EXT_TIME_REF_SOURCE_SEL(v) (((v)&0x3)<<0)
#define POWMAN_EXT_TIME_REF_SOURCE_SEL_MASK POWMAN_EXT_TIME_REF_SOURCE_SEL(ALL1)

/*LPOSC_FREQ_KHZ_INT Register macros*/


/*LPOSC_FREQ_KHZ_FRAC Register macros*/


/*XOSC_FREQ_KHZ_INT Register macros*/


/*XOSC_FREQ_KHZ_FRAC Register macros*/


/*SET_TIME_63TO48 Register macros*/


/*SET_TIME_47TO32 Register macros*/


/*SET_TIME_31TO16 Register macros*/


/*SET_TIME_15TO0 Register macros*/


/*READ_TIME_UPPER Register macros*/


/*READ_TIME_LOWER Register macros*/


/*ALARM_TIME_63TO48 Register macros*/


/*ALARM_TIME_47TO32 Register macros*/


/*ALARM_TIME_31TO16 Register macros*/


/*ALARM_TIME_15TO0 Register macros*/


/*TIMER Register macros*/

#define POWMAN_TIMER_USING_GPIO_1HZ(v) (((v)&0x1)<<19)
#define POWMAN_TIMER_USING_GPIO_1HZ_MASK POWMAN_TIMER_USING_GPIO_1HZ(ALL1)
#define POWMAN_TIMER_USING_GPIO_1KHZ(v) (((v)&0x1)<<18)
#define POWMAN_TIMER_USING_GPIO_1KHZ_MASK POWMAN_TIMER_USING_GPIO_1KHZ(ALL1)
#define POWMAN_TIMER_USING_LPOSC(v) (((v)&0x1)<<17)
#define POWMAN_TIMER_USING_LPOSC_MASK POWMAN_TIMER_USING_LPOSC(ALL1)
#define POWMAN_TIMER_USING_XOSC(v) (((v)&0x1)<<16)
#define POWMAN_TIMER_USING_XOSC_MASK POWMAN_TIMER_USING_XOSC(ALL1)
#define POWMAN_TIMER_USE_GPIO_1HZ(v) (((v)&0x1)<<13)
#define POWMAN_TIMER_USE_GPIO_1HZ_MASK POWMAN_TIMER_USE_GPIO_1HZ(ALL1)
#define POWMAN_TIMER_USE_GPIO_1KHZ(v) (((v)&0x1)<<10)
#define POWMAN_TIMER_USE_GPIO_1KHZ_MASK POWMAN_TIMER_USE_GPIO_1KHZ(ALL1)
#define POWMAN_TIMER_USE_XOSC(v) (((v)&0x1)<<9)
#define POWMAN_TIMER_USE_XOSC_MASK POWMAN_TIMER_USE_XOSC(ALL1)
#define POWMAN_TIMER_USE_LPOSC(v) (((v)&0x1)<<8)
#define POWMAN_TIMER_USE_LPOSC_MASK POWMAN_TIMER_USE_LPOSC(ALL1)
#define POWMAN_TIMER_ALARM(v) (((v)&0x1)<<6)
#define POWMAN_TIMER_ALARM_MASK POWMAN_TIMER_ALARM(ALL1)
#define POWMAN_TIMER_PWRUP_ON_ALARM(v) (((v)&0x1)<<5)
#define POWMAN_TIMER_PWRUP_ON_ALARM_MASK POWMAN_TIMER_PWRUP_ON_ALARM(ALL1)
#define POWMAN_TIMER_ALARM_ENAB(v) (((v)&0x1)<<4)
#define POWMAN_TIMER_ALARM_ENAB_MASK POWMAN_TIMER_ALARM_ENAB(ALL1)
#define POWMAN_TIMER_CLEAR(v) (((v)&0x1)<<2)
#define POWMAN_TIMER_CLEAR_MASK POWMAN_TIMER_CLEAR(ALL1)
#define POWMAN_TIMER_RUN(v) (((v)&0x1)<<1)
#define POWMAN_TIMER_RUN_MASK POWMAN_TIMER_RUN(ALL1)
#define POWMAN_TIMER_NONSEC_WRITE(v) (((v)&0x1)<<0)
#define POWMAN_TIMER_NONSEC_WRITE_MASK POWMAN_TIMER_NONSEC_WRITE(ALL1)

/*PWRUP0 Register macros*/

#define POWMAN_PWRUP0_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP0_RAW_STATUS_MASK POWMAN_PWRUP0_RAW_STATUS(ALL1)
#define POWMAN_PWRUP0_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP0_STATUS_MASK POWMAN_PWRUP0_STATUS(ALL1)
#define POWMAN_PWRUP0_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP0_MODE_MASK POWMAN_PWRUP0_MODE(ALL1)
#define POWMAN_PWRUP0_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP0_DIRECTION_MASK POWMAN_PWRUP0_DIRECTION(ALL1)
#define POWMAN_PWRUP0_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP0_ENABLE_MASK POWMAN_PWRUP0_ENABLE(ALL1)
#define POWMAN_PWRUP0_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP0_SOURCE_MASK POWMAN_PWRUP0_SOURCE(ALL1)

/*PWRUP1 Register macros*/

#define POWMAN_PWRUP1_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP1_RAW_STATUS_MASK POWMAN_PWRUP1_RAW_STATUS(ALL1)
#define POWMAN_PWRUP1_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP1_STATUS_MASK POWMAN_PWRUP1_STATUS(ALL1)
#define POWMAN_PWRUP1_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP1_MODE_MASK POWMAN_PWRUP1_MODE(ALL1)
#define POWMAN_PWRUP1_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP1_DIRECTION_MASK POWMAN_PWRUP1_DIRECTION(ALL1)
#define POWMAN_PWRUP1_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP1_ENABLE_MASK POWMAN_PWRUP1_ENABLE(ALL1)
#define POWMAN_PWRUP1_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP1_SOURCE_MASK POWMAN_PWRUP1_SOURCE(ALL1)

/*PWRUP2 Register macros*/

#define POWMAN_PWRUP2_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP2_RAW_STATUS_MASK POWMAN_PWRUP2_RAW_STATUS(ALL1)
#define POWMAN_PWRUP2_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP2_STATUS_MASK POWMAN_PWRUP2_STATUS(ALL1)
#define POWMAN_PWRUP2_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP2_MODE_MASK POWMAN_PWRUP2_MODE(ALL1)
#define POWMAN_PWRUP2_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP2_DIRECTION_MASK POWMAN_PWRUP2_DIRECTION(ALL1)
#define POWMAN_PWRUP2_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP2_ENABLE_MASK POWMAN_PWRUP2_ENABLE(ALL1)
#define POWMAN_PWRUP2_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP2_SOURCE_MASK POWMAN_PWRUP2_SOURCE(ALL1)

/*PWRUP3 Register macros*/

#define POWMAN_PWRUP3_RAW_STATUS(v) (((v)&0x1)<<10)
#define POWMAN_PWRUP3_RAW_STATUS_MASK POWMAN_PWRUP3_RAW_STATUS(ALL1)
#define POWMAN_PWRUP3_STATUS(v) (((v)&0x1)<<9)
#define POWMAN_PWRUP3_STATUS_MASK POWMAN_PWRUP3_STATUS(ALL1)
#define POWMAN_PWRUP3_MODE(v) (((v)&0x1)<<8)
#define POWMAN_PWRUP3_MODE_MASK POWMAN_PWRUP3_MODE(ALL1)
#define POWMAN_PWRUP3_DIRECTION(v) (((v)&0x1)<<7)
#define POWMAN_PWRUP3_DIRECTION_MASK POWMAN_PWRUP3_DIRECTION(ALL1)
#define POWMAN_PWRUP3_ENABLE(v) (((v)&0x1)<<6)
#define POWMAN_PWRUP3_ENABLE_MASK POWMAN_PWRUP3_ENABLE(ALL1)
#define POWMAN_PWRUP3_SOURCE(v) (((v)&0x3f)<<0)
#define POWMAN_PWRUP3_SOURCE_MASK POWMAN_PWRUP3_SOURCE(ALL1)

/*CURRENT_PWRUP_REQ Register macros*/


/*LAST_SWCORE_PWRUP Register macros*/


/*DBG_PWRCFG Register macros*/

#define POWMAN_DBG_PWRCFG_IGNORE(v) (((v)&0x1)<<0)
#define POWMAN_DBG_PWRCFG_IGNORE_MASK POWMAN_DBG_PWRCFG_IGNORE(ALL1)

/*BOOTDIS Register macros*/

#define POWMAN_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define POWMAN_BOOTDIS_NEXT_MASK POWMAN_BOOTDIS_NEXT(ALL1)
#define POWMAN_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define POWMAN_BOOTDIS_NOW_MASK POWMAN_BOOTDIS_NOW(ALL1)

/*DBGCONFIG Register macros*/

#define POWMAN_DBGCONFIG_DP_INSTID(v) (((v)&0xf)<<0)
#define POWMAN_DBGCONFIG_DP_INSTID_MASK POWMAN_DBGCONFIG_DP_INSTID(ALL1)

/*SCRATCH0 Register macros*/


/*SCRATCH1 Register macros*/


/*SCRATCH2 Register macros*/


/*SCRATCH3 Register macros*/


/*SCRATCH4 Register macros*/


/*SCRATCH5 Register macros*/


/*SCRATCH6 Register macros*/


/*SCRATCH7 Register macros*/


/*BOOT0 Register macros*/


/*BOOT1 Register macros*/


/*BOOT2 Register macros*/


/*BOOT3 Register macros*/


/*INTR Register macros*/

#define POWMAN_INTR_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTR_PWRUP_WHILE_WAITING_MASK POWMAN_INTR_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTR_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTR_STATE_REQ_IGNORED_MASK POWMAN_INTR_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTR_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTR_TIMER_MASK POWMAN_INTR_TIMER(ALL1)
#define POWMAN_INTR_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTR_VREG_OUTPUT_LOW_MASK POWMAN_INTR_VREG_OUTPUT_LOW(ALL1)

/*INTE Register macros*/

#define POWMAN_INTE_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTE_PWRUP_WHILE_WAITING_MASK POWMAN_INTE_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTE_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTE_STATE_REQ_IGNORED_MASK POWMAN_INTE_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTE_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTE_TIMER_MASK POWMAN_INTE_TIMER(ALL1)
#define POWMAN_INTE_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTE_VREG_OUTPUT_LOW_MASK POWMAN_INTE_VREG_OUTPUT_LOW(ALL1)

/*INTF Register macros*/

#define POWMAN_INTF_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTF_PWRUP_WHILE_WAITING_MASK POWMAN_INTF_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTF_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTF_STATE_REQ_IGNORED_MASK POWMAN_INTF_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTF_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTF_TIMER_MASK POWMAN_INTF_TIMER(ALL1)
#define POWMAN_INTF_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTF_VREG_OUTPUT_LOW_MASK POWMAN_INTF_VREG_OUTPUT_LOW(ALL1)

/*INTS Register macros*/

#define POWMAN_INTS_PWRUP_WHILE_WAITING(v) (((v)&0x1)<<3)
#define POWMAN_INTS_PWRUP_WHILE_WAITING_MASK POWMAN_INTS_PWRUP_WHILE_WAITING(ALL1)
#define POWMAN_INTS_STATE_REQ_IGNORED(v) (((v)&0x1)<<2)
#define POWMAN_INTS_STATE_REQ_IGNORED_MASK POWMAN_INTS_STATE_REQ_IGNORED(ALL1)
#define POWMAN_INTS_TIMER(v) (((v)&0x1)<<1)
#define POWMAN_INTS_TIMER_MASK POWMAN_INTS_TIMER(ALL1)
#define POWMAN_INTS_VREG_OUTPUT_LOW(v) (((v)&0x1)<<0)
#define POWMAN_INTS_VREG_OUTPUT_LOW_MASK POWMAN_INTS_VREG_OUTPUT_LOW(ALL1)

#endif