
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

#ifndef RP2350_M33_H
#define RP2350_M33_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t itm_stim0;
		uint32_t itm_stim1;
		uint32_t itm_stim2;
		uint32_t itm_stim3;
		uint32_t itm_stim4;
		uint32_t itm_stim5;
		uint32_t itm_stim6;
		uint32_t itm_stim7;
		uint32_t itm_stim8;
		uint32_t itm_stim9;
		uint32_t itm_stim10;
		uint32_t itm_stim11;
		uint32_t itm_stim12;
		uint32_t itm_stim13;
		uint32_t itm_stim14;
		uint32_t itm_stim15;
		uint32_t itm_stim16;
		uint32_t itm_stim17;
		uint32_t itm_stim18;
		uint32_t itm_stim19;
		uint32_t itm_stim20;
		uint32_t itm_stim21;
		uint32_t itm_stim22;
		uint32_t itm_stim23;
		uint32_t itm_stim24;
		uint32_t itm_stim25;
		uint32_t itm_stim26;
		uint32_t itm_stim27;
		uint32_t itm_stim28;
		uint32_t itm_stim29;
		uint32_t itm_stim30;
		uint32_t itm_stim31;
		uint32_t RSVD0[864];
		uint32_t itm_ter0;
		uint32_t RSVD1[15];
		uint32_t itm_tpr;
		uint32_t RSVD2[15];
		uint32_t itm_tcr;
		uint32_t RSVD3[27];
		uint32_t int_atready;
		uint32_t RSVD4;
		uint32_t int_atvalid;
		uint32_t RSVD5;
		uint32_t itm_itctrl;
		uint32_t RSVD6[46];
		uint32_t itm_devarch;
		uint32_t RSVD7[3];
		uint32_t itm_devtype;
		uint32_t itm_pidr4;
		uint32_t itm_pidr5;
		uint32_t itm_pidr6;
		uint32_t itm_pidr7;
		uint32_t itm_pidr0;
		uint32_t itm_pidr1;
		uint32_t itm_pidr2;
		uint32_t itm_pidr3;
		uint32_t itm_cidr0;
		uint32_t itm_cidr1;
		uint32_t itm_cidr2;
		uint32_t itm_cidr3;
		uint32_t dwt_ctrl;
		uint32_t dwt_cyccnt;
		uint32_t RSVD8;
		uint32_t dwt_exccnt;
		uint32_t RSVD9;
		uint32_t dwt_lsucnt;
		uint32_t dwt_foldcnt;
		uint32_t RSVD10;
		uint32_t dwt_comp0;
		uint32_t RSVD11;
		uint32_t dwt_function0;
		uint32_t RSVD12;
		uint32_t dwt_comp1;
		uint32_t RSVD13;
		uint32_t dwt_function1;
		uint32_t RSVD14;
		uint32_t dwt_comp2;
		uint32_t RSVD15;
		uint32_t dwt_function2;
		uint32_t RSVD16;
		uint32_t dwt_comp3;
		uint32_t RSVD17;
		uint32_t dwt_function3;
		uint32_t RSVD18[984];
		uint32_t dwt_devarch;
		uint32_t RSVD19[3];
		uint32_t dwt_devtype;
		uint32_t dwt_pidr4;
		uint32_t dwt_pidr5;
		uint32_t dwt_pidr6;
		uint32_t dwt_pidr7;
		uint32_t dwt_pidr0;
		uint32_t dwt_pidr1;
		uint32_t dwt_pidr2;
		uint32_t dwt_pidr3;
		uint32_t dwt_cidr0;
		uint32_t dwt_cidr1;
		uint32_t dwt_cidr2;
		uint32_t dwt_cidr3;
		uint32_t fp_ctrl;
		uint32_t fp_remap;
		uint32_t fp_comp0;
		uint32_t fp_comp1;
		uint32_t fp_comp2;
		uint32_t fp_comp3;
		uint32_t fp_comp4;
		uint32_t fp_comp5;
		uint32_t fp_comp6;
		uint32_t fp_comp7;
		uint32_t RSVD20[997];
		uint32_t fp_devarch;
		uint32_t RSVD21[3];
		uint32_t fp_devtype;
		uint32_t fp_pidr4;
		uint32_t fp_pidr5;
		uint32_t fp_pidr6;
		uint32_t fp_pidr7;
		uint32_t fp_pidr0;
		uint32_t fp_pidr1;
		uint32_t fp_pidr2;
		uint32_t fp_pidr3;
		uint32_t fp_cidr0;
		uint32_t fp_cidr1;
		uint32_t fp_cidr2;
		uint32_t fp_cidr3;
		uint32_t RSVD22[11265];
		uint32_t ictr;
		uint32_t actlr;
		uint32_t RSVD23;
		uint32_t syst_csr;
		uint32_t syst_rvr;
		uint32_t syst_cvr;
		uint32_t syst_calib;
		uint32_t RSVD24[56];
		uint32_t nvic_iser0;
		uint32_t nvic_iser1;
		uint32_t RSVD25[30];
		uint32_t nvic_icer0;
		uint32_t nvic_icer1;
		uint32_t RSVD26[30];
		uint32_t nvic_ispr0;
		uint32_t nvic_ispr1;
		uint32_t RSVD27[30];
		uint32_t nvic_icpr0;
		uint32_t nvic_icpr1;
		uint32_t RSVD28[30];
		uint32_t nvic_iabr0;
		uint32_t nvic_iabr1;
		uint32_t RSVD29[30];
		uint32_t nvic_itns0;
		uint32_t nvic_itns1;
		uint32_t RSVD30[30];
		uint32_t nvic_ipr0;
		uint32_t nvic_ipr1;
		uint32_t nvic_ipr2;
		uint32_t nvic_ipr3;
		uint32_t nvic_ipr4;
		uint32_t nvic_ipr5;
		uint32_t nvic_ipr6;
		uint32_t nvic_ipr7;
		uint32_t nvic_ipr8;
		uint32_t nvic_ipr9;
		uint32_t nvic_ipr10;
		uint32_t nvic_ipr11;
		uint32_t nvic_ipr12;
		uint32_t nvic_ipr13;
		uint32_t nvic_ipr14;
		uint32_t nvic_ipr15;
		uint32_t RSVD31[560];
		uint32_t cpuid;
		uint32_t icsr;
		uint32_t vtor;
		uint32_t aircr;
		uint32_t scr;
		uint32_t ccr;
		uint32_t shpr1;
		uint32_t shpr2;
		uint32_t shpr3;
		uint32_t shcsr;
		uint32_t cfsr;
		uint32_t hfsr;
		uint32_t dfsr;
		uint32_t mmfar;
		uint32_t bfar;
		uint32_t RSVD32;
		uint32_t id_pfr0;
		uint32_t id_pfr1;
		uint32_t id_dfr0;
		uint32_t id_afr0;
		uint32_t id_mmfr0;
		uint32_t id_mmfr1;
		uint32_t id_mmfr2;
		uint32_t id_mmfr3;
		uint32_t id_isar0;
		uint32_t id_isar1;
		uint32_t id_isar2;
		uint32_t id_isar3;
		uint32_t id_isar4;
		uint32_t id_isar5;
		uint32_t RSVD33;
		uint32_t ctr;
		uint32_t RSVD34[2];
		uint32_t cpacr;
		uint32_t nsacr;
		uint32_t mpu_type;
		uint32_t mpu_ctrl;
		uint32_t mpu_rnr;
		uint32_t mpu_rbar;
		uint32_t mpu_rlar;
		uint32_t mpu_rbar_a1;
		uint32_t mpu_rlar_a1;
		uint32_t mpu_rbar_a2;
		uint32_t mpu_rlar_a2;
		uint32_t mpu_rbar_a3;
		uint32_t mpu_rlar_a3;
		uint32_t RSVD35;
		uint32_t mpu_mair0;
		uint32_t mpu_mair1;
		uint32_t RSVD36[2];
		uint32_t sau_ctrl;
		uint32_t sau_type;
		uint32_t sau_rnr;
		uint32_t sau_rbar;
		uint32_t sau_rlar;
		uint32_t sfsr;
		uint32_t sfar;
		uint32_t RSVD37;
		uint32_t dhcsr;
		uint32_t dcrsr;
		uint32_t dcrdr;
		uint32_t demcr;
		uint32_t RSVD38[2];
		uint32_t dscsr;
		uint32_t RSVD39[61];
		uint32_t stir;
		uint32_t RSVD40[12];
		uint32_t fpccr;
		uint32_t fpcar;
		uint32_t fpdscr;
		uint32_t mvfr0;
		uint32_t mvfr1;
		uint32_t mvfr2;
		uint32_t RSVD41[28];
		uint32_t ddevarch;
		uint32_t RSVD42[3];
		uint32_t ddevtype;
		uint32_t dpidr4;
		uint32_t dpidr5;
		uint32_t dpidr6;
		uint32_t dpidr7;
		uint32_t dpidr0;
		uint32_t dpidr1;
		uint32_t dpidr2;
		uint32_t dpidr3;
		uint32_t dcidr0;
		uint32_t dcidr1;
		uint32_t dcidr2;
		uint32_t dcidr3;
		uint32_t RSVD43[51201];
		uint32_t trcprgctlr;
		uint32_t RSVD44;
		uint32_t trcstatr;
		uint32_t trcconfigr;
		uint32_t RSVD45[3];
		uint32_t trceventctl0r;
		uint32_t trceventctl1r;
		uint32_t RSVD46;
		uint32_t trcstallctlr;
		uint32_t trctsctlr;
		uint32_t trcsyncpr;
		uint32_t trcccctlr;
		uint32_t RSVD47[17];
		uint32_t trcvictlr;
		uint32_t RSVD48[47];
		uint32_t trccntrldvr0;
		uint32_t RSVD49[15];
		uint32_t trcidr8;
		uint32_t trcidr9;
		uint32_t trcidr10;
		uint32_t trcidr11;
		uint32_t trcidr12;
		uint32_t trcidr13;
		uint32_t RSVD50[10];
		uint32_t trcimspec;
		uint32_t RSVD51[7];
		uint32_t trcidr0;
		uint32_t trcidr1;
		uint32_t trcidr2;
		uint32_t trcidr3;
		uint32_t trcidr4;
		uint32_t trcidr5;
		uint32_t trcidr6;
		uint32_t trcidr7;
		uint32_t RSVD52[2];
		uint32_t trcrsctlr2;
		uint32_t trcrsctlr3;
		uint32_t RSVD53[36];
		uint32_t trcsscsr;
		uint32_t RSVD54[7];
		uint32_t trcsspcicr;
		uint32_t RSVD55[19];
		uint32_t trcpdcr;
		uint32_t trcpdsr;
		uint32_t RSVD56[755];
		uint32_t trcitatbidr;
		uint32_t RSVD57[3];
		uint32_t trcitiatbinr;
		uint32_t RSVD58;
		uint32_t trcitiatboutr;
		uint32_t RSVD59[40];
		uint32_t trcclaimset;
		uint32_t trcclaimclr;
		uint32_t RSVD60[4];
		uint32_t trcauthstatus;
		uint32_t trcdevarch;
		uint32_t RSVD61[2];
		uint32_t trcdevid;
		uint32_t trcdevtype;
		uint32_t trcpidr4;
		uint32_t trcpidr5;
		uint32_t trcpidr6;
		uint32_t trcpidr7;
		uint32_t trcpidr0;
		uint32_t trcpidr1;
		uint32_t trcpidr2;
		uint32_t trcpidr3;
		uint32_t trccidr0;
		uint32_t trccidr1;
		uint32_t trccidr2;
		uint32_t trccidr3;
		uint32_t cticontrol;
		uint32_t RSVD62[3];
		uint32_t ctiintack;
		uint32_t ctiappset;
		uint32_t ctiappclear;
		uint32_t ctiapppulse;
		uint32_t ctiinen0;
		uint32_t ctiinen1;
		uint32_t ctiinen2;
		uint32_t ctiinen3;
		uint32_t ctiinen4;
		uint32_t ctiinen5;
		uint32_t ctiinen6;
		uint32_t ctiinen7;
		uint32_t RSVD63[24];
		uint32_t ctiouten0;
		uint32_t ctiouten1;
		uint32_t ctiouten2;
		uint32_t ctiouten3;
		uint32_t ctiouten4;
		uint32_t ctiouten5;
		uint32_t ctiouten6;
		uint32_t ctiouten7;
		uint32_t RSVD64[28];
		uint32_t ctitriginstatus;
		uint32_t ctitrigoutstatus;
		uint32_t ctichinstatus;
		uint32_t RSVD65;
		uint32_t ctigate;
		uint32_t asicctl;
		uint32_t RSVD66[871];
		uint32_t itchout;
		uint32_t ittrigout;
		uint32_t RSVD67[2];
		uint32_t itchin;
		uint32_t RSVD68[2];
		uint32_t itctrl;
		uint32_t RSVD69[46];
		uint32_t devarch;
		uint32_t RSVD70[2];
		uint32_t devid;
		uint32_t devtype;
		uint32_t pidr4;
		uint32_t pidr5;
		uint32_t pidr6;
		uint32_t pidr7;
		uint32_t pidr0;
		uint32_t pidr1;
		uint32_t pidr2;
		uint32_t pidr3;
		uint32_t cidr0;
		uint32_t cidr1;
		uint32_t cidr2;
		uint32_t cidr3;
} M33_REG_BLOCKS;

#define m33 ((M33_REG_BLOCKS volatile *)0xe0000000)

/*ITM_STIM0 Register macros*/

#define M33_ITM_STIM0_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM0_STIMULUS_MASK M33_ITM_STIM0_STIMULUS(ALL1)

/*ITM_STIM1 Register macros*/

#define M33_ITM_STIM1_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM1_STIMULUS_MASK M33_ITM_STIM1_STIMULUS(ALL1)

/*ITM_STIM2 Register macros*/

#define M33_ITM_STIM2_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM2_STIMULUS_MASK M33_ITM_STIM2_STIMULUS(ALL1)

/*ITM_STIM3 Register macros*/

#define M33_ITM_STIM3_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM3_STIMULUS_MASK M33_ITM_STIM3_STIMULUS(ALL1)

/*ITM_STIM4 Register macros*/

#define M33_ITM_STIM4_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM4_STIMULUS_MASK M33_ITM_STIM4_STIMULUS(ALL1)

/*ITM_STIM5 Register macros*/

#define M33_ITM_STIM5_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM5_STIMULUS_MASK M33_ITM_STIM5_STIMULUS(ALL1)

/*ITM_STIM6 Register macros*/

#define M33_ITM_STIM6_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM6_STIMULUS_MASK M33_ITM_STIM6_STIMULUS(ALL1)

/*ITM_STIM7 Register macros*/

#define M33_ITM_STIM7_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM7_STIMULUS_MASK M33_ITM_STIM7_STIMULUS(ALL1)

/*ITM_STIM8 Register macros*/

#define M33_ITM_STIM8_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM8_STIMULUS_MASK M33_ITM_STIM8_STIMULUS(ALL1)

/*ITM_STIM9 Register macros*/

#define M33_ITM_STIM9_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM9_STIMULUS_MASK M33_ITM_STIM9_STIMULUS(ALL1)

/*ITM_STIM10 Register macros*/

#define M33_ITM_STIM10_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM10_STIMULUS_MASK M33_ITM_STIM10_STIMULUS(ALL1)

/*ITM_STIM11 Register macros*/

#define M33_ITM_STIM11_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM11_STIMULUS_MASK M33_ITM_STIM11_STIMULUS(ALL1)

/*ITM_STIM12 Register macros*/

#define M33_ITM_STIM12_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM12_STIMULUS_MASK M33_ITM_STIM12_STIMULUS(ALL1)

/*ITM_STIM13 Register macros*/

#define M33_ITM_STIM13_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM13_STIMULUS_MASK M33_ITM_STIM13_STIMULUS(ALL1)

/*ITM_STIM14 Register macros*/

#define M33_ITM_STIM14_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM14_STIMULUS_MASK M33_ITM_STIM14_STIMULUS(ALL1)

/*ITM_STIM15 Register macros*/

#define M33_ITM_STIM15_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM15_STIMULUS_MASK M33_ITM_STIM15_STIMULUS(ALL1)

/*ITM_STIM16 Register macros*/

#define M33_ITM_STIM16_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM16_STIMULUS_MASK M33_ITM_STIM16_STIMULUS(ALL1)

/*ITM_STIM17 Register macros*/

#define M33_ITM_STIM17_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM17_STIMULUS_MASK M33_ITM_STIM17_STIMULUS(ALL1)

/*ITM_STIM18 Register macros*/

#define M33_ITM_STIM18_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM18_STIMULUS_MASK M33_ITM_STIM18_STIMULUS(ALL1)

/*ITM_STIM19 Register macros*/

#define M33_ITM_STIM19_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM19_STIMULUS_MASK M33_ITM_STIM19_STIMULUS(ALL1)

/*ITM_STIM20 Register macros*/

#define M33_ITM_STIM20_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM20_STIMULUS_MASK M33_ITM_STIM20_STIMULUS(ALL1)

/*ITM_STIM21 Register macros*/

#define M33_ITM_STIM21_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM21_STIMULUS_MASK M33_ITM_STIM21_STIMULUS(ALL1)

/*ITM_STIM22 Register macros*/

#define M33_ITM_STIM22_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM22_STIMULUS_MASK M33_ITM_STIM22_STIMULUS(ALL1)

/*ITM_STIM23 Register macros*/

#define M33_ITM_STIM23_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM23_STIMULUS_MASK M33_ITM_STIM23_STIMULUS(ALL1)

/*ITM_STIM24 Register macros*/

#define M33_ITM_STIM24_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM24_STIMULUS_MASK M33_ITM_STIM24_STIMULUS(ALL1)

/*ITM_STIM25 Register macros*/

#define M33_ITM_STIM25_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM25_STIMULUS_MASK M33_ITM_STIM25_STIMULUS(ALL1)

/*ITM_STIM26 Register macros*/

#define M33_ITM_STIM26_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM26_STIMULUS_MASK M33_ITM_STIM26_STIMULUS(ALL1)

/*ITM_STIM27 Register macros*/

#define M33_ITM_STIM27_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM27_STIMULUS_MASK M33_ITM_STIM27_STIMULUS(ALL1)

/*ITM_STIM28 Register macros*/

#define M33_ITM_STIM28_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM28_STIMULUS_MASK M33_ITM_STIM28_STIMULUS(ALL1)

/*ITM_STIM29 Register macros*/

#define M33_ITM_STIM29_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM29_STIMULUS_MASK M33_ITM_STIM29_STIMULUS(ALL1)

/*ITM_STIM30 Register macros*/

#define M33_ITM_STIM30_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM30_STIMULUS_MASK M33_ITM_STIM30_STIMULUS(ALL1)

/*ITM_STIM31 Register macros*/

#define M33_ITM_STIM31_STIMULUS(v) (((v)&0xffffffff)<<0)
#define M33_ITM_STIM31_STIMULUS_MASK M33_ITM_STIM31_STIMULUS(ALL1)

/*ITM_TER0 Register macros*/

#define M33_ITM_TER0_STIMENA(v) (((v)&0xffffffff)<<0)
#define M33_ITM_TER0_STIMENA_MASK M33_ITM_TER0_STIMENA(ALL1)

/*ITM_TPR Register macros*/

#define M33_ITM_TPR_PRIVMASK(v) (((v)&0xf)<<0)
#define M33_ITM_TPR_PRIVMASK_MASK M33_ITM_TPR_PRIVMASK(ALL1)

/*ITM_TCR Register macros*/

#define M33_ITM_TCR_BUSY(v) (((v)&0x1)<<23)
#define M33_ITM_TCR_BUSY_MASK M33_ITM_TCR_BUSY(ALL1)
#define M33_ITM_TCR_TRACEBUSID(v) (((v)&0x7f)<<16)
#define M33_ITM_TCR_TRACEBUSID_MASK M33_ITM_TCR_TRACEBUSID(ALL1)
#define M33_ITM_TCR_GTSFREQ(v) (((v)&0x3)<<10)
#define M33_ITM_TCR_GTSFREQ_MASK M33_ITM_TCR_GTSFREQ(ALL1)
#define M33_ITM_TCR_TSPRESCALE(v) (((v)&0x3)<<8)
#define M33_ITM_TCR_TSPRESCALE_MASK M33_ITM_TCR_TSPRESCALE(ALL1)
#define M33_ITM_TCR_STALLENA(v) (((v)&0x1)<<5)
#define M33_ITM_TCR_STALLENA_MASK M33_ITM_TCR_STALLENA(ALL1)
#define M33_ITM_TCR_SWOENA(v) (((v)&0x1)<<4)
#define M33_ITM_TCR_SWOENA_MASK M33_ITM_TCR_SWOENA(ALL1)
#define M33_ITM_TCR_TXENA(v) (((v)&0x1)<<3)
#define M33_ITM_TCR_TXENA_MASK M33_ITM_TCR_TXENA(ALL1)
#define M33_ITM_TCR_SYNCENA(v) (((v)&0x1)<<2)
#define M33_ITM_TCR_SYNCENA_MASK M33_ITM_TCR_SYNCENA(ALL1)
#define M33_ITM_TCR_TSENA(v) (((v)&0x1)<<1)
#define M33_ITM_TCR_TSENA_MASK M33_ITM_TCR_TSENA(ALL1)
#define M33_ITM_TCR_ITMENA(v) (((v)&0x1)<<0)
#define M33_ITM_TCR_ITMENA_MASK M33_ITM_TCR_ITMENA(ALL1)

/*INT_ATREADY Register macros*/

#define M33_INT_ATREADY_AFVALID(v) (((v)&0x1)<<1)
#define M33_INT_ATREADY_AFVALID_MASK M33_INT_ATREADY_AFVALID(ALL1)
#define M33_INT_ATREADY_ATREADY(v) (((v)&0x1)<<0)
#define M33_INT_ATREADY_ATREADY_MASK M33_INT_ATREADY_ATREADY(ALL1)

/*INT_ATVALID Register macros*/

#define M33_INT_ATVALID_AFREADY(v) (((v)&0x1)<<1)
#define M33_INT_ATVALID_AFREADY_MASK M33_INT_ATVALID_AFREADY(ALL1)
#define M33_INT_ATVALID_ATREADY(v) (((v)&0x1)<<0)
#define M33_INT_ATVALID_ATREADY_MASK M33_INT_ATVALID_ATREADY(ALL1)

/*ITM_ITCTRL Register macros*/

#define M33_ITM_ITCTRL_IME(v) (((v)&0x1)<<0)
#define M33_ITM_ITCTRL_IME_MASK M33_ITM_ITCTRL_IME(ALL1)

/*ITM_DEVARCH Register macros*/

#define M33_ITM_DEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_ITM_DEVARCH_ARCHITECT_MASK M33_ITM_DEVARCH_ARCHITECT(ALL1)
#define M33_ITM_DEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_ITM_DEVARCH_PRESENT_MASK M33_ITM_DEVARCH_PRESENT(ALL1)
#define M33_ITM_DEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_ITM_DEVARCH_REVISION_MASK M33_ITM_DEVARCH_REVISION(ALL1)
#define M33_ITM_DEVARCH_ARCHVER(v) (((v)&0xf)<<12)
#define M33_ITM_DEVARCH_ARCHVER_MASK M33_ITM_DEVARCH_ARCHVER(ALL1)
#define M33_ITM_DEVARCH_ARCHPART(v) (((v)&0xfff)<<0)
#define M33_ITM_DEVARCH_ARCHPART_MASK M33_ITM_DEVARCH_ARCHPART(ALL1)

/*ITM_DEVTYPE Register macros*/

#define M33_ITM_DEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_ITM_DEVTYPE_SUB_MASK M33_ITM_DEVTYPE_SUB(ALL1)
#define M33_ITM_DEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_ITM_DEVTYPE_MAJOR_MASK M33_ITM_DEVTYPE_MAJOR(ALL1)

/*ITM_PIDR4 Register macros*/

#define M33_ITM_PIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_ITM_PIDR4_SIZE_MASK M33_ITM_PIDR4_SIZE(ALL1)
#define M33_ITM_PIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_ITM_PIDR4_DES_2_MASK M33_ITM_PIDR4_DES_2(ALL1)

/*ITM_PIDR5 Register macros*/


/*ITM_PIDR6 Register macros*/


/*ITM_PIDR7 Register macros*/


/*ITM_PIDR0 Register macros*/

#define M33_ITM_PIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_ITM_PIDR0_PART_0_MASK M33_ITM_PIDR0_PART_0(ALL1)

/*ITM_PIDR1 Register macros*/

#define M33_ITM_PIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_ITM_PIDR1_DES_0_MASK M33_ITM_PIDR1_DES_0(ALL1)
#define M33_ITM_PIDR1_PART_1(v) (((v)&0xf)<<0)
#define M33_ITM_PIDR1_PART_1_MASK M33_ITM_PIDR1_PART_1(ALL1)

/*ITM_PIDR2 Register macros*/

#define M33_ITM_PIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_ITM_PIDR2_REVISION_MASK M33_ITM_PIDR2_REVISION(ALL1)
#define M33_ITM_PIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_ITM_PIDR2_JEDEC_MASK M33_ITM_PIDR2_JEDEC(ALL1)
#define M33_ITM_PIDR2_DES_1(v) (((v)&0x7)<<0)
#define M33_ITM_PIDR2_DES_1_MASK M33_ITM_PIDR2_DES_1(ALL1)

/*ITM_PIDR3 Register macros*/

#define M33_ITM_PIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_ITM_PIDR3_REVAND_MASK M33_ITM_PIDR3_REVAND(ALL1)
#define M33_ITM_PIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_ITM_PIDR3_CMOD_MASK M33_ITM_PIDR3_CMOD(ALL1)

/*ITM_CIDR0 Register macros*/

#define M33_ITM_CIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_ITM_CIDR0_PRMBL_0_MASK M33_ITM_CIDR0_PRMBL_0(ALL1)

/*ITM_CIDR1 Register macros*/

#define M33_ITM_CIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_ITM_CIDR1_CLASS_MASK M33_ITM_CIDR1_CLASS(ALL1)
#define M33_ITM_CIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_ITM_CIDR1_PRMBL_1_MASK M33_ITM_CIDR1_PRMBL_1(ALL1)

/*ITM_CIDR2 Register macros*/

#define M33_ITM_CIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_ITM_CIDR2_PRMBL_2_MASK M33_ITM_CIDR2_PRMBL_2(ALL1)

/*ITM_CIDR3 Register macros*/

#define M33_ITM_CIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_ITM_CIDR3_PRMBL_3_MASK M33_ITM_CIDR3_PRMBL_3(ALL1)

/*DWT_CTRL Register macros*/

#define M33_DWT_CTRL_NUMCOMP(v) (((v)&0xf)<<28)
#define M33_DWT_CTRL_NUMCOMP_MASK M33_DWT_CTRL_NUMCOMP(ALL1)
#define M33_DWT_CTRL_NOTRCPKT(v) (((v)&0x1)<<27)
#define M33_DWT_CTRL_NOTRCPKT_MASK M33_DWT_CTRL_NOTRCPKT(ALL1)
#define M33_DWT_CTRL_NOEXTTRIG(v) (((v)&0x1)<<26)
#define M33_DWT_CTRL_NOEXTTRIG_MASK M33_DWT_CTRL_NOEXTTRIG(ALL1)
#define M33_DWT_CTRL_NOCYCCNT(v) (((v)&0x1)<<25)
#define M33_DWT_CTRL_NOCYCCNT_MASK M33_DWT_CTRL_NOCYCCNT(ALL1)
#define M33_DWT_CTRL_NOPRFCNT(v) (((v)&0x1)<<24)
#define M33_DWT_CTRL_NOPRFCNT_MASK M33_DWT_CTRL_NOPRFCNT(ALL1)
#define M33_DWT_CTRL_CYCDISS(v) (((v)&0x1)<<23)
#define M33_DWT_CTRL_CYCDISS_MASK M33_DWT_CTRL_CYCDISS(ALL1)
#define M33_DWT_CTRL_CYCEVTENA(v) (((v)&0x1)<<22)
#define M33_DWT_CTRL_CYCEVTENA_MASK M33_DWT_CTRL_CYCEVTENA(ALL1)
#define M33_DWT_CTRL_FOLDEVTENA(v) (((v)&0x1)<<21)
#define M33_DWT_CTRL_FOLDEVTENA_MASK M33_DWT_CTRL_FOLDEVTENA(ALL1)
#define M33_DWT_CTRL_LSUEVTENA(v) (((v)&0x1)<<20)
#define M33_DWT_CTRL_LSUEVTENA_MASK M33_DWT_CTRL_LSUEVTENA(ALL1)
#define M33_DWT_CTRL_SLEEPEVTENA(v) (((v)&0x1)<<19)
#define M33_DWT_CTRL_SLEEPEVTENA_MASK M33_DWT_CTRL_SLEEPEVTENA(ALL1)
#define M33_DWT_CTRL_EXCEVTENA(v) (((v)&0x1)<<18)
#define M33_DWT_CTRL_EXCEVTENA_MASK M33_DWT_CTRL_EXCEVTENA(ALL1)
#define M33_DWT_CTRL_CPIEVTENA(v) (((v)&0x1)<<17)
#define M33_DWT_CTRL_CPIEVTENA_MASK M33_DWT_CTRL_CPIEVTENA(ALL1)
#define M33_DWT_CTRL_EXTTRCENA(v) (((v)&0x1)<<16)
#define M33_DWT_CTRL_EXTTRCENA_MASK M33_DWT_CTRL_EXTTRCENA(ALL1)
#define M33_DWT_CTRL_PCSAMPLENA(v) (((v)&0x1)<<12)
#define M33_DWT_CTRL_PCSAMPLENA_MASK M33_DWT_CTRL_PCSAMPLENA(ALL1)
#define M33_DWT_CTRL_SYNCTAP(v) (((v)&0x3)<<10)
#define M33_DWT_CTRL_SYNCTAP_MASK M33_DWT_CTRL_SYNCTAP(ALL1)
#define M33_DWT_CTRL_CYCTAP(v) (((v)&0x1)<<9)
#define M33_DWT_CTRL_CYCTAP_MASK M33_DWT_CTRL_CYCTAP(ALL1)
#define M33_DWT_CTRL_POSTINIT(v) (((v)&0xf)<<5)
#define M33_DWT_CTRL_POSTINIT_MASK M33_DWT_CTRL_POSTINIT(ALL1)
#define M33_DWT_CTRL_POSTPRESET(v) (((v)&0xf)<<1)
#define M33_DWT_CTRL_POSTPRESET_MASK M33_DWT_CTRL_POSTPRESET(ALL1)
#define M33_DWT_CTRL_CYCCNTENA(v) (((v)&0x1)<<0)
#define M33_DWT_CTRL_CYCCNTENA_MASK M33_DWT_CTRL_CYCCNTENA(ALL1)

/*DWT_CYCCNT Register macros*/

#define M33_DWT_CYCCNT_CYCCNT(v) (((v)&0xffffffff)<<0)
#define M33_DWT_CYCCNT_CYCCNT_MASK M33_DWT_CYCCNT_CYCCNT(ALL1)

/*DWT_EXCCNT Register macros*/

#define M33_DWT_EXCCNT_EXCCNT(v) (((v)&0xff)<<0)
#define M33_DWT_EXCCNT_EXCCNT_MASK M33_DWT_EXCCNT_EXCCNT(ALL1)

/*DWT_LSUCNT Register macros*/

#define M33_DWT_LSUCNT_LSUCNT(v) (((v)&0xff)<<0)
#define M33_DWT_LSUCNT_LSUCNT_MASK M33_DWT_LSUCNT_LSUCNT(ALL1)

/*DWT_FOLDCNT Register macros*/

#define M33_DWT_FOLDCNT_FOLDCNT(v) (((v)&0xff)<<0)
#define M33_DWT_FOLDCNT_FOLDCNT_MASK M33_DWT_FOLDCNT_FOLDCNT(ALL1)

/*DWT_COMP0 Register macros*/


/*DWT_FUNCTION0 Register macros*/

#define M33_DWT_FUNCTION0_ID(v) (((v)&0x1f)<<27)
#define M33_DWT_FUNCTION0_ID_MASK M33_DWT_FUNCTION0_ID(ALL1)
#define M33_DWT_FUNCTION0_MATCHED(v) (((v)&0x1)<<24)
#define M33_DWT_FUNCTION0_MATCHED_MASK M33_DWT_FUNCTION0_MATCHED(ALL1)
#define M33_DWT_FUNCTION0_DATAVSIZE(v) (((v)&0x3)<<10)
#define M33_DWT_FUNCTION0_DATAVSIZE_MASK M33_DWT_FUNCTION0_DATAVSIZE(ALL1)
#define M33_DWT_FUNCTION0_ACTION(v) (((v)&0x3)<<4)
#define M33_DWT_FUNCTION0_ACTION_MASK M33_DWT_FUNCTION0_ACTION(ALL1)
#define M33_DWT_FUNCTION0_MATCH(v) (((v)&0xf)<<0)
#define M33_DWT_FUNCTION0_MATCH_MASK M33_DWT_FUNCTION0_MATCH(ALL1)

/*DWT_COMP1 Register macros*/


/*DWT_FUNCTION1 Register macros*/

#define M33_DWT_FUNCTION1_ID(v) (((v)&0x1f)<<27)
#define M33_DWT_FUNCTION1_ID_MASK M33_DWT_FUNCTION1_ID(ALL1)
#define M33_DWT_FUNCTION1_MATCHED(v) (((v)&0x1)<<24)
#define M33_DWT_FUNCTION1_MATCHED_MASK M33_DWT_FUNCTION1_MATCHED(ALL1)
#define M33_DWT_FUNCTION1_DATAVSIZE(v) (((v)&0x3)<<10)
#define M33_DWT_FUNCTION1_DATAVSIZE_MASK M33_DWT_FUNCTION1_DATAVSIZE(ALL1)
#define M33_DWT_FUNCTION1_ACTION(v) (((v)&0x3)<<4)
#define M33_DWT_FUNCTION1_ACTION_MASK M33_DWT_FUNCTION1_ACTION(ALL1)
#define M33_DWT_FUNCTION1_MATCH(v) (((v)&0xf)<<0)
#define M33_DWT_FUNCTION1_MATCH_MASK M33_DWT_FUNCTION1_MATCH(ALL1)

/*DWT_COMP2 Register macros*/


/*DWT_FUNCTION2 Register macros*/

#define M33_DWT_FUNCTION2_ID(v) (((v)&0x1f)<<27)
#define M33_DWT_FUNCTION2_ID_MASK M33_DWT_FUNCTION2_ID(ALL1)
#define M33_DWT_FUNCTION2_MATCHED(v) (((v)&0x1)<<24)
#define M33_DWT_FUNCTION2_MATCHED_MASK M33_DWT_FUNCTION2_MATCHED(ALL1)
#define M33_DWT_FUNCTION2_DATAVSIZE(v) (((v)&0x3)<<10)
#define M33_DWT_FUNCTION2_DATAVSIZE_MASK M33_DWT_FUNCTION2_DATAVSIZE(ALL1)
#define M33_DWT_FUNCTION2_ACTION(v) (((v)&0x3)<<4)
#define M33_DWT_FUNCTION2_ACTION_MASK M33_DWT_FUNCTION2_ACTION(ALL1)
#define M33_DWT_FUNCTION2_MATCH(v) (((v)&0xf)<<0)
#define M33_DWT_FUNCTION2_MATCH_MASK M33_DWT_FUNCTION2_MATCH(ALL1)

/*DWT_COMP3 Register macros*/


/*DWT_FUNCTION3 Register macros*/

#define M33_DWT_FUNCTION3_ID(v) (((v)&0x1f)<<27)
#define M33_DWT_FUNCTION3_ID_MASK M33_DWT_FUNCTION3_ID(ALL1)
#define M33_DWT_FUNCTION3_MATCHED(v) (((v)&0x1)<<24)
#define M33_DWT_FUNCTION3_MATCHED_MASK M33_DWT_FUNCTION3_MATCHED(ALL1)
#define M33_DWT_FUNCTION3_DATAVSIZE(v) (((v)&0x3)<<10)
#define M33_DWT_FUNCTION3_DATAVSIZE_MASK M33_DWT_FUNCTION3_DATAVSIZE(ALL1)
#define M33_DWT_FUNCTION3_ACTION(v) (((v)&0x3)<<4)
#define M33_DWT_FUNCTION3_ACTION_MASK M33_DWT_FUNCTION3_ACTION(ALL1)
#define M33_DWT_FUNCTION3_MATCH(v) (((v)&0xf)<<0)
#define M33_DWT_FUNCTION3_MATCH_MASK M33_DWT_FUNCTION3_MATCH(ALL1)

/*DWT_DEVARCH Register macros*/

#define M33_DWT_DEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_DWT_DEVARCH_ARCHITECT_MASK M33_DWT_DEVARCH_ARCHITECT(ALL1)
#define M33_DWT_DEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_DWT_DEVARCH_PRESENT_MASK M33_DWT_DEVARCH_PRESENT(ALL1)
#define M33_DWT_DEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_DWT_DEVARCH_REVISION_MASK M33_DWT_DEVARCH_REVISION(ALL1)
#define M33_DWT_DEVARCH_ARCHVER(v) (((v)&0xf)<<12)
#define M33_DWT_DEVARCH_ARCHVER_MASK M33_DWT_DEVARCH_ARCHVER(ALL1)
#define M33_DWT_DEVARCH_ARCHPART(v) (((v)&0xfff)<<0)
#define M33_DWT_DEVARCH_ARCHPART_MASK M33_DWT_DEVARCH_ARCHPART(ALL1)

/*DWT_DEVTYPE Register macros*/

#define M33_DWT_DEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_DWT_DEVTYPE_SUB_MASK M33_DWT_DEVTYPE_SUB(ALL1)
#define M33_DWT_DEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_DWT_DEVTYPE_MAJOR_MASK M33_DWT_DEVTYPE_MAJOR(ALL1)

/*DWT_PIDR4 Register macros*/

#define M33_DWT_PIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_DWT_PIDR4_SIZE_MASK M33_DWT_PIDR4_SIZE(ALL1)
#define M33_DWT_PIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_DWT_PIDR4_DES_2_MASK M33_DWT_PIDR4_DES_2(ALL1)

/*DWT_PIDR5 Register macros*/


/*DWT_PIDR6 Register macros*/


/*DWT_PIDR7 Register macros*/


/*DWT_PIDR0 Register macros*/

#define M33_DWT_PIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_DWT_PIDR0_PART_0_MASK M33_DWT_PIDR0_PART_0(ALL1)

/*DWT_PIDR1 Register macros*/

#define M33_DWT_PIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_DWT_PIDR1_DES_0_MASK M33_DWT_PIDR1_DES_0(ALL1)
#define M33_DWT_PIDR1_PART_1(v) (((v)&0xf)<<0)
#define M33_DWT_PIDR1_PART_1_MASK M33_DWT_PIDR1_PART_1(ALL1)

/*DWT_PIDR2 Register macros*/

#define M33_DWT_PIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_DWT_PIDR2_REVISION_MASK M33_DWT_PIDR2_REVISION(ALL1)
#define M33_DWT_PIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_DWT_PIDR2_JEDEC_MASK M33_DWT_PIDR2_JEDEC(ALL1)
#define M33_DWT_PIDR2_DES_1(v) (((v)&0x7)<<0)
#define M33_DWT_PIDR2_DES_1_MASK M33_DWT_PIDR2_DES_1(ALL1)

/*DWT_PIDR3 Register macros*/

#define M33_DWT_PIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_DWT_PIDR3_REVAND_MASK M33_DWT_PIDR3_REVAND(ALL1)
#define M33_DWT_PIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_DWT_PIDR3_CMOD_MASK M33_DWT_PIDR3_CMOD(ALL1)

/*DWT_CIDR0 Register macros*/

#define M33_DWT_CIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_DWT_CIDR0_PRMBL_0_MASK M33_DWT_CIDR0_PRMBL_0(ALL1)

/*DWT_CIDR1 Register macros*/

#define M33_DWT_CIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_DWT_CIDR1_CLASS_MASK M33_DWT_CIDR1_CLASS(ALL1)
#define M33_DWT_CIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_DWT_CIDR1_PRMBL_1_MASK M33_DWT_CIDR1_PRMBL_1(ALL1)

/*DWT_CIDR2 Register macros*/

#define M33_DWT_CIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_DWT_CIDR2_PRMBL_2_MASK M33_DWT_CIDR2_PRMBL_2(ALL1)

/*DWT_CIDR3 Register macros*/

#define M33_DWT_CIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_DWT_CIDR3_PRMBL_3_MASK M33_DWT_CIDR3_PRMBL_3(ALL1)

/*FP_CTRL Register macros*/

#define M33_FP_CTRL_REV(v) (((v)&0xf)<<28)
#define M33_FP_CTRL_REV_MASK M33_FP_CTRL_REV(ALL1)
#define M33_FP_CTRL_NUM_CODE_14_12_(v) (((v)&0x7)<<12)
#define M33_FP_CTRL_NUM_CODE_14_12__MASK M33_FP_CTRL_NUM_CODE_14_12_(ALL1)
#define M33_FP_CTRL_NUM_LIT(v) (((v)&0xf)<<8)
#define M33_FP_CTRL_NUM_LIT_MASK M33_FP_CTRL_NUM_LIT(ALL1)
#define M33_FP_CTRL_NUM_CODE_7_4_(v) (((v)&0xf)<<4)
#define M33_FP_CTRL_NUM_CODE_7_4__MASK M33_FP_CTRL_NUM_CODE_7_4_(ALL1)
#define M33_FP_CTRL_KEY(v) (((v)&0x1)<<1)
#define M33_FP_CTRL_KEY_MASK M33_FP_CTRL_KEY(ALL1)
#define M33_FP_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define M33_FP_CTRL_ENABLE_MASK M33_FP_CTRL_ENABLE(ALL1)

/*FP_REMAP Register macros*/

#define M33_FP_REMAP_RMPSPT(v) (((v)&0x1)<<29)
#define M33_FP_REMAP_RMPSPT_MASK M33_FP_REMAP_RMPSPT(ALL1)
#define M33_FP_REMAP_REMAP(v) (((v)&0xffffff)<<5)
#define M33_FP_REMAP_REMAP_MASK M33_FP_REMAP_REMAP(ALL1)

/*FP_COMP0 Register macros*/

#define M33_FP_COMP0_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP0_BE_MASK M33_FP_COMP0_BE(ALL1)

/*FP_COMP1 Register macros*/

#define M33_FP_COMP1_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP1_BE_MASK M33_FP_COMP1_BE(ALL1)

/*FP_COMP2 Register macros*/

#define M33_FP_COMP2_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP2_BE_MASK M33_FP_COMP2_BE(ALL1)

/*FP_COMP3 Register macros*/

#define M33_FP_COMP3_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP3_BE_MASK M33_FP_COMP3_BE(ALL1)

/*FP_COMP4 Register macros*/

#define M33_FP_COMP4_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP4_BE_MASK M33_FP_COMP4_BE(ALL1)

/*FP_COMP5 Register macros*/

#define M33_FP_COMP5_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP5_BE_MASK M33_FP_COMP5_BE(ALL1)

/*FP_COMP6 Register macros*/

#define M33_FP_COMP6_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP6_BE_MASK M33_FP_COMP6_BE(ALL1)

/*FP_COMP7 Register macros*/

#define M33_FP_COMP7_BE(v) (((v)&0x1)<<0)
#define M33_FP_COMP7_BE_MASK M33_FP_COMP7_BE(ALL1)

/*FP_DEVARCH Register macros*/

#define M33_FP_DEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_FP_DEVARCH_ARCHITECT_MASK M33_FP_DEVARCH_ARCHITECT(ALL1)
#define M33_FP_DEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_FP_DEVARCH_PRESENT_MASK M33_FP_DEVARCH_PRESENT(ALL1)
#define M33_FP_DEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_FP_DEVARCH_REVISION_MASK M33_FP_DEVARCH_REVISION(ALL1)
#define M33_FP_DEVARCH_ARCHVER(v) (((v)&0xf)<<12)
#define M33_FP_DEVARCH_ARCHVER_MASK M33_FP_DEVARCH_ARCHVER(ALL1)
#define M33_FP_DEVARCH_ARCHPART(v) (((v)&0xfff)<<0)
#define M33_FP_DEVARCH_ARCHPART_MASK M33_FP_DEVARCH_ARCHPART(ALL1)

/*FP_DEVTYPE Register macros*/

#define M33_FP_DEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_FP_DEVTYPE_SUB_MASK M33_FP_DEVTYPE_SUB(ALL1)
#define M33_FP_DEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_FP_DEVTYPE_MAJOR_MASK M33_FP_DEVTYPE_MAJOR(ALL1)

/*FP_PIDR4 Register macros*/

#define M33_FP_PIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_FP_PIDR4_SIZE_MASK M33_FP_PIDR4_SIZE(ALL1)
#define M33_FP_PIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_FP_PIDR4_DES_2_MASK M33_FP_PIDR4_DES_2(ALL1)

/*FP_PIDR5 Register macros*/


/*FP_PIDR6 Register macros*/


/*FP_PIDR7 Register macros*/


/*FP_PIDR0 Register macros*/

#define M33_FP_PIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_FP_PIDR0_PART_0_MASK M33_FP_PIDR0_PART_0(ALL1)

/*FP_PIDR1 Register macros*/

#define M33_FP_PIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_FP_PIDR1_DES_0_MASK M33_FP_PIDR1_DES_0(ALL1)
#define M33_FP_PIDR1_PART_1(v) (((v)&0xf)<<0)
#define M33_FP_PIDR1_PART_1_MASK M33_FP_PIDR1_PART_1(ALL1)

/*FP_PIDR2 Register macros*/

#define M33_FP_PIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_FP_PIDR2_REVISION_MASK M33_FP_PIDR2_REVISION(ALL1)
#define M33_FP_PIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_FP_PIDR2_JEDEC_MASK M33_FP_PIDR2_JEDEC(ALL1)
#define M33_FP_PIDR2_DES_1(v) (((v)&0x7)<<0)
#define M33_FP_PIDR2_DES_1_MASK M33_FP_PIDR2_DES_1(ALL1)

/*FP_PIDR3 Register macros*/

#define M33_FP_PIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_FP_PIDR3_REVAND_MASK M33_FP_PIDR3_REVAND(ALL1)
#define M33_FP_PIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_FP_PIDR3_CMOD_MASK M33_FP_PIDR3_CMOD(ALL1)

/*FP_CIDR0 Register macros*/

#define M33_FP_CIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_FP_CIDR0_PRMBL_0_MASK M33_FP_CIDR0_PRMBL_0(ALL1)

/*FP_CIDR1 Register macros*/

#define M33_FP_CIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_FP_CIDR1_CLASS_MASK M33_FP_CIDR1_CLASS(ALL1)
#define M33_FP_CIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_FP_CIDR1_PRMBL_1_MASK M33_FP_CIDR1_PRMBL_1(ALL1)

/*FP_CIDR2 Register macros*/

#define M33_FP_CIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_FP_CIDR2_PRMBL_2_MASK M33_FP_CIDR2_PRMBL_2(ALL1)

/*FP_CIDR3 Register macros*/

#define M33_FP_CIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_FP_CIDR3_PRMBL_3_MASK M33_FP_CIDR3_PRMBL_3(ALL1)

/*ICTR Register macros*/

#define M33_ICTR_INTLINESNUM(v) (((v)&0xf)<<0)
#define M33_ICTR_INTLINESNUM_MASK M33_ICTR_INTLINESNUM(ALL1)

/*ACTLR Register macros*/

#define M33_ACTLR_EXTEXCLALL(v) (((v)&0x1)<<29)
#define M33_ACTLR_EXTEXCLALL_MASK M33_ACTLR_EXTEXCLALL(ALL1)
#define M33_ACTLR_DISITMATBFLUSH(v) (((v)&0x1)<<12)
#define M33_ACTLR_DISITMATBFLUSH_MASK M33_ACTLR_DISITMATBFLUSH(ALL1)
#define M33_ACTLR_FPEXCODIS(v) (((v)&0x1)<<10)
#define M33_ACTLR_FPEXCODIS_MASK M33_ACTLR_FPEXCODIS(ALL1)
#define M33_ACTLR_DISOOFP(v) (((v)&0x1)<<9)
#define M33_ACTLR_DISOOFP_MASK M33_ACTLR_DISOOFP(ALL1)
#define M33_ACTLR_DISFOLD(v) (((v)&0x1)<<2)
#define M33_ACTLR_DISFOLD_MASK M33_ACTLR_DISFOLD(ALL1)
#define M33_ACTLR_DISMCYCINT(v) (((v)&0x1)<<0)
#define M33_ACTLR_DISMCYCINT_MASK M33_ACTLR_DISMCYCINT(ALL1)

/*SYST_CSR Register macros*/

#define M33_SYST_CSR_COUNTFLAG(v) (((v)&0x1)<<16)
#define M33_SYST_CSR_COUNTFLAG_MASK M33_SYST_CSR_COUNTFLAG(ALL1)
#define M33_SYST_CSR_CLKSOURCE(v) (((v)&0x1)<<2)
#define M33_SYST_CSR_CLKSOURCE_MASK M33_SYST_CSR_CLKSOURCE(ALL1)
#define M33_SYST_CSR_TICKINT(v) (((v)&0x1)<<1)
#define M33_SYST_CSR_TICKINT_MASK M33_SYST_CSR_TICKINT(ALL1)
#define M33_SYST_CSR_ENABLE(v) (((v)&0x1)<<0)
#define M33_SYST_CSR_ENABLE_MASK M33_SYST_CSR_ENABLE(ALL1)

/*SYST_RVR Register macros*/

#define M33_SYST_RVR_RELOAD(v) (((v)&0xffffff)<<0)
#define M33_SYST_RVR_RELOAD_MASK M33_SYST_RVR_RELOAD(ALL1)

/*SYST_CVR Register macros*/

#define M33_SYST_CVR_CURRENT(v) (((v)&0xffffff)<<0)
#define M33_SYST_CVR_CURRENT_MASK M33_SYST_CVR_CURRENT(ALL1)

/*SYST_CALIB Register macros*/

#define M33_SYST_CALIB_NOREF(v) (((v)&0x1)<<31)
#define M33_SYST_CALIB_NOREF_MASK M33_SYST_CALIB_NOREF(ALL1)
#define M33_SYST_CALIB_SKEW(v) (((v)&0x1)<<30)
#define M33_SYST_CALIB_SKEW_MASK M33_SYST_CALIB_SKEW(ALL1)
#define M33_SYST_CALIB_TENMS(v) (((v)&0xffffff)<<0)
#define M33_SYST_CALIB_TENMS_MASK M33_SYST_CALIB_TENMS(ALL1)

/*NVIC_ISER0 Register macros*/

#define M33_NVIC_ISER0_SETENA(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ISER0_SETENA_MASK M33_NVIC_ISER0_SETENA(ALL1)

/*NVIC_ISER1 Register macros*/

#define M33_NVIC_ISER1_SETENA(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ISER1_SETENA_MASK M33_NVIC_ISER1_SETENA(ALL1)

/*NVIC_ICER0 Register macros*/

#define M33_NVIC_ICER0_CLRENA(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ICER0_CLRENA_MASK M33_NVIC_ICER0_CLRENA(ALL1)

/*NVIC_ICER1 Register macros*/

#define M33_NVIC_ICER1_CLRENA(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ICER1_CLRENA_MASK M33_NVIC_ICER1_CLRENA(ALL1)

/*NVIC_ISPR0 Register macros*/

#define M33_NVIC_ISPR0_SETPEND(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ISPR0_SETPEND_MASK M33_NVIC_ISPR0_SETPEND(ALL1)

/*NVIC_ISPR1 Register macros*/

#define M33_NVIC_ISPR1_SETPEND(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ISPR1_SETPEND_MASK M33_NVIC_ISPR1_SETPEND(ALL1)

/*NVIC_ICPR0 Register macros*/

#define M33_NVIC_ICPR0_CLRPEND(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ICPR0_CLRPEND_MASK M33_NVIC_ICPR0_CLRPEND(ALL1)

/*NVIC_ICPR1 Register macros*/

#define M33_NVIC_ICPR1_CLRPEND(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ICPR1_CLRPEND_MASK M33_NVIC_ICPR1_CLRPEND(ALL1)

/*NVIC_IABR0 Register macros*/

#define M33_NVIC_IABR0_ACTIVE(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_IABR0_ACTIVE_MASK M33_NVIC_IABR0_ACTIVE(ALL1)

/*NVIC_IABR1 Register macros*/

#define M33_NVIC_IABR1_ACTIVE(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_IABR1_ACTIVE_MASK M33_NVIC_IABR1_ACTIVE(ALL1)

/*NVIC_ITNS0 Register macros*/

#define M33_NVIC_ITNS0_ITNS(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ITNS0_ITNS_MASK M33_NVIC_ITNS0_ITNS(ALL1)

/*NVIC_ITNS1 Register macros*/

#define M33_NVIC_ITNS1_ITNS(v) (((v)&0xffffffff)<<0)
#define M33_NVIC_ITNS1_ITNS_MASK M33_NVIC_ITNS1_ITNS(ALL1)

/*NVIC_IPR0 Register macros*/

#define M33_NVIC_IPR0_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR0_PRI_N3_MASK M33_NVIC_IPR0_PRI_N3(ALL1)
#define M33_NVIC_IPR0_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR0_PRI_N2_MASK M33_NVIC_IPR0_PRI_N2(ALL1)
#define M33_NVIC_IPR0_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR0_PRI_N1_MASK M33_NVIC_IPR0_PRI_N1(ALL1)
#define M33_NVIC_IPR0_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR0_PRI_N0_MASK M33_NVIC_IPR0_PRI_N0(ALL1)

/*NVIC_IPR1 Register macros*/

#define M33_NVIC_IPR1_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR1_PRI_N3_MASK M33_NVIC_IPR1_PRI_N3(ALL1)
#define M33_NVIC_IPR1_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR1_PRI_N2_MASK M33_NVIC_IPR1_PRI_N2(ALL1)
#define M33_NVIC_IPR1_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR1_PRI_N1_MASK M33_NVIC_IPR1_PRI_N1(ALL1)
#define M33_NVIC_IPR1_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR1_PRI_N0_MASK M33_NVIC_IPR1_PRI_N0(ALL1)

/*NVIC_IPR2 Register macros*/

#define M33_NVIC_IPR2_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR2_PRI_N3_MASK M33_NVIC_IPR2_PRI_N3(ALL1)
#define M33_NVIC_IPR2_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR2_PRI_N2_MASK M33_NVIC_IPR2_PRI_N2(ALL1)
#define M33_NVIC_IPR2_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR2_PRI_N1_MASK M33_NVIC_IPR2_PRI_N1(ALL1)
#define M33_NVIC_IPR2_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR2_PRI_N0_MASK M33_NVIC_IPR2_PRI_N0(ALL1)

/*NVIC_IPR3 Register macros*/

#define M33_NVIC_IPR3_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR3_PRI_N3_MASK M33_NVIC_IPR3_PRI_N3(ALL1)
#define M33_NVIC_IPR3_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR3_PRI_N2_MASK M33_NVIC_IPR3_PRI_N2(ALL1)
#define M33_NVIC_IPR3_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR3_PRI_N1_MASK M33_NVIC_IPR3_PRI_N1(ALL1)
#define M33_NVIC_IPR3_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR3_PRI_N0_MASK M33_NVIC_IPR3_PRI_N0(ALL1)

/*NVIC_IPR4 Register macros*/

#define M33_NVIC_IPR4_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR4_PRI_N3_MASK M33_NVIC_IPR4_PRI_N3(ALL1)
#define M33_NVIC_IPR4_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR4_PRI_N2_MASK M33_NVIC_IPR4_PRI_N2(ALL1)
#define M33_NVIC_IPR4_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR4_PRI_N1_MASK M33_NVIC_IPR4_PRI_N1(ALL1)
#define M33_NVIC_IPR4_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR4_PRI_N0_MASK M33_NVIC_IPR4_PRI_N0(ALL1)

/*NVIC_IPR5 Register macros*/

#define M33_NVIC_IPR5_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR5_PRI_N3_MASK M33_NVIC_IPR5_PRI_N3(ALL1)
#define M33_NVIC_IPR5_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR5_PRI_N2_MASK M33_NVIC_IPR5_PRI_N2(ALL1)
#define M33_NVIC_IPR5_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR5_PRI_N1_MASK M33_NVIC_IPR5_PRI_N1(ALL1)
#define M33_NVIC_IPR5_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR5_PRI_N0_MASK M33_NVIC_IPR5_PRI_N0(ALL1)

/*NVIC_IPR6 Register macros*/

#define M33_NVIC_IPR6_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR6_PRI_N3_MASK M33_NVIC_IPR6_PRI_N3(ALL1)
#define M33_NVIC_IPR6_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR6_PRI_N2_MASK M33_NVIC_IPR6_PRI_N2(ALL1)
#define M33_NVIC_IPR6_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR6_PRI_N1_MASK M33_NVIC_IPR6_PRI_N1(ALL1)
#define M33_NVIC_IPR6_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR6_PRI_N0_MASK M33_NVIC_IPR6_PRI_N0(ALL1)

/*NVIC_IPR7 Register macros*/

#define M33_NVIC_IPR7_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR7_PRI_N3_MASK M33_NVIC_IPR7_PRI_N3(ALL1)
#define M33_NVIC_IPR7_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR7_PRI_N2_MASK M33_NVIC_IPR7_PRI_N2(ALL1)
#define M33_NVIC_IPR7_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR7_PRI_N1_MASK M33_NVIC_IPR7_PRI_N1(ALL1)
#define M33_NVIC_IPR7_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR7_PRI_N0_MASK M33_NVIC_IPR7_PRI_N0(ALL1)

/*NVIC_IPR8 Register macros*/

#define M33_NVIC_IPR8_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR8_PRI_N3_MASK M33_NVIC_IPR8_PRI_N3(ALL1)
#define M33_NVIC_IPR8_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR8_PRI_N2_MASK M33_NVIC_IPR8_PRI_N2(ALL1)
#define M33_NVIC_IPR8_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR8_PRI_N1_MASK M33_NVIC_IPR8_PRI_N1(ALL1)
#define M33_NVIC_IPR8_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR8_PRI_N0_MASK M33_NVIC_IPR8_PRI_N0(ALL1)

/*NVIC_IPR9 Register macros*/

#define M33_NVIC_IPR9_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR9_PRI_N3_MASK M33_NVIC_IPR9_PRI_N3(ALL1)
#define M33_NVIC_IPR9_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR9_PRI_N2_MASK M33_NVIC_IPR9_PRI_N2(ALL1)
#define M33_NVIC_IPR9_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR9_PRI_N1_MASK M33_NVIC_IPR9_PRI_N1(ALL1)
#define M33_NVIC_IPR9_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR9_PRI_N0_MASK M33_NVIC_IPR9_PRI_N0(ALL1)

/*NVIC_IPR10 Register macros*/

#define M33_NVIC_IPR10_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR10_PRI_N3_MASK M33_NVIC_IPR10_PRI_N3(ALL1)
#define M33_NVIC_IPR10_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR10_PRI_N2_MASK M33_NVIC_IPR10_PRI_N2(ALL1)
#define M33_NVIC_IPR10_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR10_PRI_N1_MASK M33_NVIC_IPR10_PRI_N1(ALL1)
#define M33_NVIC_IPR10_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR10_PRI_N0_MASK M33_NVIC_IPR10_PRI_N0(ALL1)

/*NVIC_IPR11 Register macros*/

#define M33_NVIC_IPR11_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR11_PRI_N3_MASK M33_NVIC_IPR11_PRI_N3(ALL1)
#define M33_NVIC_IPR11_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR11_PRI_N2_MASK M33_NVIC_IPR11_PRI_N2(ALL1)
#define M33_NVIC_IPR11_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR11_PRI_N1_MASK M33_NVIC_IPR11_PRI_N1(ALL1)
#define M33_NVIC_IPR11_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR11_PRI_N0_MASK M33_NVIC_IPR11_PRI_N0(ALL1)

/*NVIC_IPR12 Register macros*/

#define M33_NVIC_IPR12_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR12_PRI_N3_MASK M33_NVIC_IPR12_PRI_N3(ALL1)
#define M33_NVIC_IPR12_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR12_PRI_N2_MASK M33_NVIC_IPR12_PRI_N2(ALL1)
#define M33_NVIC_IPR12_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR12_PRI_N1_MASK M33_NVIC_IPR12_PRI_N1(ALL1)
#define M33_NVIC_IPR12_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR12_PRI_N0_MASK M33_NVIC_IPR12_PRI_N0(ALL1)

/*NVIC_IPR13 Register macros*/

#define M33_NVIC_IPR13_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR13_PRI_N3_MASK M33_NVIC_IPR13_PRI_N3(ALL1)
#define M33_NVIC_IPR13_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR13_PRI_N2_MASK M33_NVIC_IPR13_PRI_N2(ALL1)
#define M33_NVIC_IPR13_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR13_PRI_N1_MASK M33_NVIC_IPR13_PRI_N1(ALL1)
#define M33_NVIC_IPR13_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR13_PRI_N0_MASK M33_NVIC_IPR13_PRI_N0(ALL1)

/*NVIC_IPR14 Register macros*/

#define M33_NVIC_IPR14_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR14_PRI_N3_MASK M33_NVIC_IPR14_PRI_N3(ALL1)
#define M33_NVIC_IPR14_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR14_PRI_N2_MASK M33_NVIC_IPR14_PRI_N2(ALL1)
#define M33_NVIC_IPR14_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR14_PRI_N1_MASK M33_NVIC_IPR14_PRI_N1(ALL1)
#define M33_NVIC_IPR14_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR14_PRI_N0_MASK M33_NVIC_IPR14_PRI_N0(ALL1)

/*NVIC_IPR15 Register macros*/

#define M33_NVIC_IPR15_PRI_N3(v) (((v)&0xf)<<28)
#define M33_NVIC_IPR15_PRI_N3_MASK M33_NVIC_IPR15_PRI_N3(ALL1)
#define M33_NVIC_IPR15_PRI_N2(v) (((v)&0xf)<<20)
#define M33_NVIC_IPR15_PRI_N2_MASK M33_NVIC_IPR15_PRI_N2(ALL1)
#define M33_NVIC_IPR15_PRI_N1(v) (((v)&0xf)<<12)
#define M33_NVIC_IPR15_PRI_N1_MASK M33_NVIC_IPR15_PRI_N1(ALL1)
#define M33_NVIC_IPR15_PRI_N0(v) (((v)&0xf)<<4)
#define M33_NVIC_IPR15_PRI_N0_MASK M33_NVIC_IPR15_PRI_N0(ALL1)

/*CPUID Register macros*/

#define M33_CPUID_IMPLEMENTER(v) (((v)&0xff)<<24)
#define M33_CPUID_IMPLEMENTER_MASK M33_CPUID_IMPLEMENTER(ALL1)
#define M33_CPUID_VARIANT(v) (((v)&0xf)<<20)
#define M33_CPUID_VARIANT_MASK M33_CPUID_VARIANT(ALL1)
#define M33_CPUID_ARCHITECTURE(v) (((v)&0xf)<<16)
#define M33_CPUID_ARCHITECTURE_MASK M33_CPUID_ARCHITECTURE(ALL1)
#define M33_CPUID_PARTNO(v) (((v)&0xfff)<<4)
#define M33_CPUID_PARTNO_MASK M33_CPUID_PARTNO(ALL1)
#define M33_CPUID_REVISION(v) (((v)&0xf)<<0)
#define M33_CPUID_REVISION_MASK M33_CPUID_REVISION(ALL1)

/*ICSR Register macros*/

#define M33_ICSR_PENDNMISET(v) (((v)&0x1)<<31)
#define M33_ICSR_PENDNMISET_MASK M33_ICSR_PENDNMISET(ALL1)
#define M33_ICSR_PENDNMICLR(v) (((v)&0x1)<<30)
#define M33_ICSR_PENDNMICLR_MASK M33_ICSR_PENDNMICLR(ALL1)
#define M33_ICSR_PENDSVSET(v) (((v)&0x1)<<28)
#define M33_ICSR_PENDSVSET_MASK M33_ICSR_PENDSVSET(ALL1)
#define M33_ICSR_PENDSVCLR(v) (((v)&0x1)<<27)
#define M33_ICSR_PENDSVCLR_MASK M33_ICSR_PENDSVCLR(ALL1)
#define M33_ICSR_PENDSTSET(v) (((v)&0x1)<<26)
#define M33_ICSR_PENDSTSET_MASK M33_ICSR_PENDSTSET(ALL1)
#define M33_ICSR_PENDSTCLR(v) (((v)&0x1)<<25)
#define M33_ICSR_PENDSTCLR_MASK M33_ICSR_PENDSTCLR(ALL1)
#define M33_ICSR_STTNS(v) (((v)&0x1)<<24)
#define M33_ICSR_STTNS_MASK M33_ICSR_STTNS(ALL1)
#define M33_ICSR_ISRPREEMPT(v) (((v)&0x1)<<23)
#define M33_ICSR_ISRPREEMPT_MASK M33_ICSR_ISRPREEMPT(ALL1)
#define M33_ICSR_ISRPENDING(v) (((v)&0x1)<<22)
#define M33_ICSR_ISRPENDING_MASK M33_ICSR_ISRPENDING(ALL1)
#define M33_ICSR_VECTPENDING(v) (((v)&0x1ff)<<12)
#define M33_ICSR_VECTPENDING_MASK M33_ICSR_VECTPENDING(ALL1)
#define M33_ICSR_RETTOBASE(v) (((v)&0x1)<<11)
#define M33_ICSR_RETTOBASE_MASK M33_ICSR_RETTOBASE(ALL1)
#define M33_ICSR_VECTACTIVE(v) (((v)&0x1ff)<<0)
#define M33_ICSR_VECTACTIVE_MASK M33_ICSR_VECTACTIVE(ALL1)

/*VTOR Register macros*/

#define M33_VTOR_TBLOFF(v) (((v)&0x1ffffff)<<7)
#define M33_VTOR_TBLOFF_MASK M33_VTOR_TBLOFF(ALL1)

/*AIRCR Register macros*/

#define M33_AIRCR_VECTKEY(v) (((v)&0xffff)<<16)
#define M33_AIRCR_VECTKEY_MASK M33_AIRCR_VECTKEY(ALL1)
#define M33_AIRCR_ENDIANESS(v) (((v)&0x1)<<15)
#define M33_AIRCR_ENDIANESS_MASK M33_AIRCR_ENDIANESS(ALL1)
#define M33_AIRCR_PRIS(v) (((v)&0x1)<<14)
#define M33_AIRCR_PRIS_MASK M33_AIRCR_PRIS(ALL1)
#define M33_AIRCR_BFHFNMINS(v) (((v)&0x1)<<13)
#define M33_AIRCR_BFHFNMINS_MASK M33_AIRCR_BFHFNMINS(ALL1)
#define M33_AIRCR_PRIGROUP(v) (((v)&0x7)<<8)
#define M33_AIRCR_PRIGROUP_MASK M33_AIRCR_PRIGROUP(ALL1)
#define M33_AIRCR_SYSRESETREQS(v) (((v)&0x1)<<3)
#define M33_AIRCR_SYSRESETREQS_MASK M33_AIRCR_SYSRESETREQS(ALL1)
#define M33_AIRCR_SYSRESETREQ(v) (((v)&0x1)<<2)
#define M33_AIRCR_SYSRESETREQ_MASK M33_AIRCR_SYSRESETREQ(ALL1)
#define M33_AIRCR_VECTCLRACTIVE(v) (((v)&0x1)<<1)
#define M33_AIRCR_VECTCLRACTIVE_MASK M33_AIRCR_VECTCLRACTIVE(ALL1)

/*SCR Register macros*/

#define M33_SCR_SEVONPEND(v) (((v)&0x1)<<4)
#define M33_SCR_SEVONPEND_MASK M33_SCR_SEVONPEND(ALL1)
#define M33_SCR_SLEEPDEEPS(v) (((v)&0x1)<<3)
#define M33_SCR_SLEEPDEEPS_MASK M33_SCR_SLEEPDEEPS(ALL1)
#define M33_SCR_SLEEPDEEP(v) (((v)&0x1)<<2)
#define M33_SCR_SLEEPDEEP_MASK M33_SCR_SLEEPDEEP(ALL1)
#define M33_SCR_SLEEPONEXIT(v) (((v)&0x1)<<1)
#define M33_SCR_SLEEPONEXIT_MASK M33_SCR_SLEEPONEXIT(ALL1)

/*CCR Register macros*/

#define M33_CCR_BP(v) (((v)&0x1)<<18)
#define M33_CCR_BP_MASK M33_CCR_BP(ALL1)
#define M33_CCR_IC(v) (((v)&0x1)<<17)
#define M33_CCR_IC_MASK M33_CCR_IC(ALL1)
#define M33_CCR_DC(v) (((v)&0x1)<<16)
#define M33_CCR_DC_MASK M33_CCR_DC(ALL1)
#define M33_CCR_STKOFHFNMIGN(v) (((v)&0x1)<<10)
#define M33_CCR_STKOFHFNMIGN_MASK M33_CCR_STKOFHFNMIGN(ALL1)
#define M33_CCR_RES1(v) (((v)&0x1)<<9)
#define M33_CCR_RES1_MASK M33_CCR_RES1(ALL1)
#define M33_CCR_BFHFNMIGN(v) (((v)&0x1)<<8)
#define M33_CCR_BFHFNMIGN_MASK M33_CCR_BFHFNMIGN(ALL1)
#define M33_CCR_DIV_0_TRP(v) (((v)&0x1)<<4)
#define M33_CCR_DIV_0_TRP_MASK M33_CCR_DIV_0_TRP(ALL1)
#define M33_CCR_UNALIGN_TRP(v) (((v)&0x1)<<3)
#define M33_CCR_UNALIGN_TRP_MASK M33_CCR_UNALIGN_TRP(ALL1)
#define M33_CCR_USERSETMPEND(v) (((v)&0x1)<<1)
#define M33_CCR_USERSETMPEND_MASK M33_CCR_USERSETMPEND(ALL1)
#define M33_CCR_RES1_1(v) (((v)&0x1)<<0)
#define M33_CCR_RES1_1_MASK M33_CCR_RES1_1(ALL1)

/*SHPR1 Register macros*/

#define M33_SHPR1_PRI_7_3(v) (((v)&0x7)<<29)
#define M33_SHPR1_PRI_7_3_MASK M33_SHPR1_PRI_7_3(ALL1)
#define M33_SHPR1_PRI_6_3(v) (((v)&0x7)<<21)
#define M33_SHPR1_PRI_6_3_MASK M33_SHPR1_PRI_6_3(ALL1)
#define M33_SHPR1_PRI_5_3(v) (((v)&0x7)<<13)
#define M33_SHPR1_PRI_5_3_MASK M33_SHPR1_PRI_5_3(ALL1)
#define M33_SHPR1_PRI_4_3(v) (((v)&0x7)<<5)
#define M33_SHPR1_PRI_4_3_MASK M33_SHPR1_PRI_4_3(ALL1)

/*SHPR2 Register macros*/

#define M33_SHPR2_PRI_11_3(v) (((v)&0x7)<<29)
#define M33_SHPR2_PRI_11_3_MASK M33_SHPR2_PRI_11_3(ALL1)
#define M33_SHPR2_PRI_10(v) (((v)&0xff)<<16)
#define M33_SHPR2_PRI_10_MASK M33_SHPR2_PRI_10(ALL1)
#define M33_SHPR2_PRI_9(v) (((v)&0xff)<<8)
#define M33_SHPR2_PRI_9_MASK M33_SHPR2_PRI_9(ALL1)
#define M33_SHPR2_PRI_8(v) (((v)&0xff)<<0)
#define M33_SHPR2_PRI_8_MASK M33_SHPR2_PRI_8(ALL1)

/*SHPR3 Register macros*/

#define M33_SHPR3_PRI_15_3(v) (((v)&0x7)<<29)
#define M33_SHPR3_PRI_15_3_MASK M33_SHPR3_PRI_15_3(ALL1)
#define M33_SHPR3_PRI_14_3(v) (((v)&0x7)<<21)
#define M33_SHPR3_PRI_14_3_MASK M33_SHPR3_PRI_14_3(ALL1)
#define M33_SHPR3_PRI_13(v) (((v)&0xff)<<8)
#define M33_SHPR3_PRI_13_MASK M33_SHPR3_PRI_13(ALL1)
#define M33_SHPR3_PRI_12_3(v) (((v)&0x7)<<5)
#define M33_SHPR3_PRI_12_3_MASK M33_SHPR3_PRI_12_3(ALL1)

/*SHCSR Register macros*/

#define M33_SHCSR_HARDFAULTPENDED(v) (((v)&0x1)<<21)
#define M33_SHCSR_HARDFAULTPENDED_MASK M33_SHCSR_HARDFAULTPENDED(ALL1)
#define M33_SHCSR_SECUREFAULTPENDED(v) (((v)&0x1)<<20)
#define M33_SHCSR_SECUREFAULTPENDED_MASK M33_SHCSR_SECUREFAULTPENDED(ALL1)
#define M33_SHCSR_SECUREFAULTENA(v) (((v)&0x1)<<19)
#define M33_SHCSR_SECUREFAULTENA_MASK M33_SHCSR_SECUREFAULTENA(ALL1)
#define M33_SHCSR_USGFAULTENA(v) (((v)&0x1)<<18)
#define M33_SHCSR_USGFAULTENA_MASK M33_SHCSR_USGFAULTENA(ALL1)
#define M33_SHCSR_BUSFAULTENA(v) (((v)&0x1)<<17)
#define M33_SHCSR_BUSFAULTENA_MASK M33_SHCSR_BUSFAULTENA(ALL1)
#define M33_SHCSR_MEMFAULTENA(v) (((v)&0x1)<<16)
#define M33_SHCSR_MEMFAULTENA_MASK M33_SHCSR_MEMFAULTENA(ALL1)
#define M33_SHCSR_SVCALLPENDED(v) (((v)&0x1)<<15)
#define M33_SHCSR_SVCALLPENDED_MASK M33_SHCSR_SVCALLPENDED(ALL1)
#define M33_SHCSR_BUSFAULTPENDED(v) (((v)&0x1)<<14)
#define M33_SHCSR_BUSFAULTPENDED_MASK M33_SHCSR_BUSFAULTPENDED(ALL1)
#define M33_SHCSR_MEMFAULTPENDED(v) (((v)&0x1)<<13)
#define M33_SHCSR_MEMFAULTPENDED_MASK M33_SHCSR_MEMFAULTPENDED(ALL1)
#define M33_SHCSR_USGFAULTPENDED(v) (((v)&0x1)<<12)
#define M33_SHCSR_USGFAULTPENDED_MASK M33_SHCSR_USGFAULTPENDED(ALL1)
#define M33_SHCSR_SYSTICKACT(v) (((v)&0x1)<<11)
#define M33_SHCSR_SYSTICKACT_MASK M33_SHCSR_SYSTICKACT(ALL1)
#define M33_SHCSR_PENDSVACT(v) (((v)&0x1)<<10)
#define M33_SHCSR_PENDSVACT_MASK M33_SHCSR_PENDSVACT(ALL1)
#define M33_SHCSR_MONITORACT(v) (((v)&0x1)<<8)
#define M33_SHCSR_MONITORACT_MASK M33_SHCSR_MONITORACT(ALL1)
#define M33_SHCSR_SVCALLACT(v) (((v)&0x1)<<7)
#define M33_SHCSR_SVCALLACT_MASK M33_SHCSR_SVCALLACT(ALL1)
#define M33_SHCSR_NMIACT(v) (((v)&0x1)<<5)
#define M33_SHCSR_NMIACT_MASK M33_SHCSR_NMIACT(ALL1)
#define M33_SHCSR_SECUREFAULTACT(v) (((v)&0x1)<<4)
#define M33_SHCSR_SECUREFAULTACT_MASK M33_SHCSR_SECUREFAULTACT(ALL1)
#define M33_SHCSR_USGFAULTACT(v) (((v)&0x1)<<3)
#define M33_SHCSR_USGFAULTACT_MASK M33_SHCSR_USGFAULTACT(ALL1)
#define M33_SHCSR_HARDFAULTACT(v) (((v)&0x1)<<2)
#define M33_SHCSR_HARDFAULTACT_MASK M33_SHCSR_HARDFAULTACT(ALL1)
#define M33_SHCSR_BUSFAULTACT(v) (((v)&0x1)<<1)
#define M33_SHCSR_BUSFAULTACT_MASK M33_SHCSR_BUSFAULTACT(ALL1)
#define M33_SHCSR_MEMFAULTACT(v) (((v)&0x1)<<0)
#define M33_SHCSR_MEMFAULTACT_MASK M33_SHCSR_MEMFAULTACT(ALL1)

/*CFSR Register macros*/

#define M33_CFSR_UFSR_DIVBYZERO(v) (((v)&0x1)<<25)
#define M33_CFSR_UFSR_DIVBYZERO_MASK M33_CFSR_UFSR_DIVBYZERO(ALL1)
#define M33_CFSR_UFSR_UNALIGNED(v) (((v)&0x1)<<24)
#define M33_CFSR_UFSR_UNALIGNED_MASK M33_CFSR_UFSR_UNALIGNED(ALL1)
#define M33_CFSR_UFSR_STKOF(v) (((v)&0x1)<<20)
#define M33_CFSR_UFSR_STKOF_MASK M33_CFSR_UFSR_STKOF(ALL1)
#define M33_CFSR_UFSR_NOCP(v) (((v)&0x1)<<19)
#define M33_CFSR_UFSR_NOCP_MASK M33_CFSR_UFSR_NOCP(ALL1)
#define M33_CFSR_UFSR_INVPC(v) (((v)&0x1)<<18)
#define M33_CFSR_UFSR_INVPC_MASK M33_CFSR_UFSR_INVPC(ALL1)
#define M33_CFSR_UFSR_INVSTATE(v) (((v)&0x1)<<17)
#define M33_CFSR_UFSR_INVSTATE_MASK M33_CFSR_UFSR_INVSTATE(ALL1)
#define M33_CFSR_UFSR_UNDEFINSTR(v) (((v)&0x1)<<16)
#define M33_CFSR_UFSR_UNDEFINSTR_MASK M33_CFSR_UFSR_UNDEFINSTR(ALL1)
#define M33_CFSR_BFSR_BFARVALID(v) (((v)&0x1)<<15)
#define M33_CFSR_BFSR_BFARVALID_MASK M33_CFSR_BFSR_BFARVALID(ALL1)
#define M33_CFSR_BFSR_LSPERR(v) (((v)&0x1)<<13)
#define M33_CFSR_BFSR_LSPERR_MASK M33_CFSR_BFSR_LSPERR(ALL1)
#define M33_CFSR_BFSR_STKERR(v) (((v)&0x1)<<12)
#define M33_CFSR_BFSR_STKERR_MASK M33_CFSR_BFSR_STKERR(ALL1)
#define M33_CFSR_BFSR_UNSTKERR(v) (((v)&0x1)<<11)
#define M33_CFSR_BFSR_UNSTKERR_MASK M33_CFSR_BFSR_UNSTKERR(ALL1)
#define M33_CFSR_BFSR_IMPRECISERR(v) (((v)&0x1)<<10)
#define M33_CFSR_BFSR_IMPRECISERR_MASK M33_CFSR_BFSR_IMPRECISERR(ALL1)
#define M33_CFSR_BFSR_PRECISERR(v) (((v)&0x1)<<9)
#define M33_CFSR_BFSR_PRECISERR_MASK M33_CFSR_BFSR_PRECISERR(ALL1)
#define M33_CFSR_BFSR_IBUSERR(v) (((v)&0x1)<<8)
#define M33_CFSR_BFSR_IBUSERR_MASK M33_CFSR_BFSR_IBUSERR(ALL1)
#define M33_CFSR_MMFSR(v) (((v)&0xff)<<0)
#define M33_CFSR_MMFSR_MASK M33_CFSR_MMFSR(ALL1)

/*HFSR Register macros*/

#define M33_HFSR_DEBUGEVT(v) (((v)&0x1)<<31)
#define M33_HFSR_DEBUGEVT_MASK M33_HFSR_DEBUGEVT(ALL1)
#define M33_HFSR_FORCED(v) (((v)&0x1)<<30)
#define M33_HFSR_FORCED_MASK M33_HFSR_FORCED(ALL1)
#define M33_HFSR_VECTTBL(v) (((v)&0x1)<<1)
#define M33_HFSR_VECTTBL_MASK M33_HFSR_VECTTBL(ALL1)

/*DFSR Register macros*/

#define M33_DFSR_EXTERNAL(v) (((v)&0x1)<<4)
#define M33_DFSR_EXTERNAL_MASK M33_DFSR_EXTERNAL(ALL1)
#define M33_DFSR_VCATCH(v) (((v)&0x1)<<3)
#define M33_DFSR_VCATCH_MASK M33_DFSR_VCATCH(ALL1)
#define M33_DFSR_DWTTRAP(v) (((v)&0x1)<<2)
#define M33_DFSR_DWTTRAP_MASK M33_DFSR_DWTTRAP(ALL1)
#define M33_DFSR_BKPT(v) (((v)&0x1)<<1)
#define M33_DFSR_BKPT_MASK M33_DFSR_BKPT(ALL1)
#define M33_DFSR_HALTED(v) (((v)&0x1)<<0)
#define M33_DFSR_HALTED_MASK M33_DFSR_HALTED(ALL1)

/*MMFAR Register macros*/

#define M33_MMFAR_ADDRESS(v) (((v)&0xffffffff)<<0)
#define M33_MMFAR_ADDRESS_MASK M33_MMFAR_ADDRESS(ALL1)

/*BFAR Register macros*/

#define M33_BFAR_ADDRESS(v) (((v)&0xffffffff)<<0)
#define M33_BFAR_ADDRESS_MASK M33_BFAR_ADDRESS(ALL1)

/*ID_PFR0 Register macros*/

#define M33_ID_PFR0_STATE1(v) (((v)&0xf)<<4)
#define M33_ID_PFR0_STATE1_MASK M33_ID_PFR0_STATE1(ALL1)
#define M33_ID_PFR0_STATE0(v) (((v)&0xf)<<0)
#define M33_ID_PFR0_STATE0_MASK M33_ID_PFR0_STATE0(ALL1)

/*ID_PFR1 Register macros*/

#define M33_ID_PFR1_MPROGMOD(v) (((v)&0xf)<<8)
#define M33_ID_PFR1_MPROGMOD_MASK M33_ID_PFR1_MPROGMOD(ALL1)
#define M33_ID_PFR1_SECURITY(v) (((v)&0xf)<<4)
#define M33_ID_PFR1_SECURITY_MASK M33_ID_PFR1_SECURITY(ALL1)

/*ID_DFR0 Register macros*/

#define M33_ID_DFR0_MPROFDBG(v) (((v)&0xf)<<20)
#define M33_ID_DFR0_MPROFDBG_MASK M33_ID_DFR0_MPROFDBG(ALL1)

/*ID_AFR0 Register macros*/

#define M33_ID_AFR0_IMPDEF3(v) (((v)&0xf)<<12)
#define M33_ID_AFR0_IMPDEF3_MASK M33_ID_AFR0_IMPDEF3(ALL1)
#define M33_ID_AFR0_IMPDEF2(v) (((v)&0xf)<<8)
#define M33_ID_AFR0_IMPDEF2_MASK M33_ID_AFR0_IMPDEF2(ALL1)
#define M33_ID_AFR0_IMPDEF1(v) (((v)&0xf)<<4)
#define M33_ID_AFR0_IMPDEF1_MASK M33_ID_AFR0_IMPDEF1(ALL1)
#define M33_ID_AFR0_IMPDEF0(v) (((v)&0xf)<<0)
#define M33_ID_AFR0_IMPDEF0_MASK M33_ID_AFR0_IMPDEF0(ALL1)

/*ID_MMFR0 Register macros*/

#define M33_ID_MMFR0_AUXREG(v) (((v)&0xf)<<20)
#define M33_ID_MMFR0_AUXREG_MASK M33_ID_MMFR0_AUXREG(ALL1)
#define M33_ID_MMFR0_TCM(v) (((v)&0xf)<<16)
#define M33_ID_MMFR0_TCM_MASK M33_ID_MMFR0_TCM(ALL1)
#define M33_ID_MMFR0_SHARELVL(v) (((v)&0xf)<<12)
#define M33_ID_MMFR0_SHARELVL_MASK M33_ID_MMFR0_SHARELVL(ALL1)
#define M33_ID_MMFR0_OUTERSHR(v) (((v)&0xf)<<8)
#define M33_ID_MMFR0_OUTERSHR_MASK M33_ID_MMFR0_OUTERSHR(ALL1)
#define M33_ID_MMFR0_PMSA(v) (((v)&0xf)<<4)
#define M33_ID_MMFR0_PMSA_MASK M33_ID_MMFR0_PMSA(ALL1)

/*ID_MMFR1 Register macros*/


/*ID_MMFR2 Register macros*/

#define M33_ID_MMFR2_WFISTALL(v) (((v)&0xf)<<24)
#define M33_ID_MMFR2_WFISTALL_MASK M33_ID_MMFR2_WFISTALL(ALL1)

/*ID_MMFR3 Register macros*/

#define M33_ID_MMFR3_BPMAINT(v) (((v)&0xf)<<8)
#define M33_ID_MMFR3_BPMAINT_MASK M33_ID_MMFR3_BPMAINT(ALL1)
#define M33_ID_MMFR3_CMAINTSW(v) (((v)&0xf)<<4)
#define M33_ID_MMFR3_CMAINTSW_MASK M33_ID_MMFR3_CMAINTSW(ALL1)
#define M33_ID_MMFR3_CMAINTVA(v) (((v)&0xf)<<0)
#define M33_ID_MMFR3_CMAINTVA_MASK M33_ID_MMFR3_CMAINTVA(ALL1)

/*ID_ISAR0 Register macros*/

#define M33_ID_ISAR0_DIVIDE(v) (((v)&0xf)<<24)
#define M33_ID_ISAR0_DIVIDE_MASK M33_ID_ISAR0_DIVIDE(ALL1)
#define M33_ID_ISAR0_DEBUG(v) (((v)&0xf)<<20)
#define M33_ID_ISAR0_DEBUG_MASK M33_ID_ISAR0_DEBUG(ALL1)
#define M33_ID_ISAR0_COPROC(v) (((v)&0xf)<<16)
#define M33_ID_ISAR0_COPROC_MASK M33_ID_ISAR0_COPROC(ALL1)
#define M33_ID_ISAR0_CMPBRANCH(v) (((v)&0xf)<<12)
#define M33_ID_ISAR0_CMPBRANCH_MASK M33_ID_ISAR0_CMPBRANCH(ALL1)
#define M33_ID_ISAR0_BITFIELD(v) (((v)&0xf)<<8)
#define M33_ID_ISAR0_BITFIELD_MASK M33_ID_ISAR0_BITFIELD(ALL1)
#define M33_ID_ISAR0_BITCOUNT(v) (((v)&0xf)<<4)
#define M33_ID_ISAR0_BITCOUNT_MASK M33_ID_ISAR0_BITCOUNT(ALL1)

/*ID_ISAR1 Register macros*/

#define M33_ID_ISAR1_INTERWORK(v) (((v)&0xf)<<24)
#define M33_ID_ISAR1_INTERWORK_MASK M33_ID_ISAR1_INTERWORK(ALL1)
#define M33_ID_ISAR1_IMMEDIATE(v) (((v)&0xf)<<20)
#define M33_ID_ISAR1_IMMEDIATE_MASK M33_ID_ISAR1_IMMEDIATE(ALL1)
#define M33_ID_ISAR1_IFTHEN(v) (((v)&0xf)<<16)
#define M33_ID_ISAR1_IFTHEN_MASK M33_ID_ISAR1_IFTHEN(ALL1)
#define M33_ID_ISAR1_EXTEND(v) (((v)&0xf)<<12)
#define M33_ID_ISAR1_EXTEND_MASK M33_ID_ISAR1_EXTEND(ALL1)

/*ID_ISAR2 Register macros*/

#define M33_ID_ISAR2_REVERSAL(v) (((v)&0xf)<<28)
#define M33_ID_ISAR2_REVERSAL_MASK M33_ID_ISAR2_REVERSAL(ALL1)
#define M33_ID_ISAR2_MULTU(v) (((v)&0xf)<<20)
#define M33_ID_ISAR2_MULTU_MASK M33_ID_ISAR2_MULTU(ALL1)
#define M33_ID_ISAR2_MULTS(v) (((v)&0xf)<<16)
#define M33_ID_ISAR2_MULTS_MASK M33_ID_ISAR2_MULTS(ALL1)
#define M33_ID_ISAR2_MULT(v) (((v)&0xf)<<12)
#define M33_ID_ISAR2_MULT_MASK M33_ID_ISAR2_MULT(ALL1)
#define M33_ID_ISAR2_MULTIACCESSINT(v) (((v)&0xf)<<8)
#define M33_ID_ISAR2_MULTIACCESSINT_MASK M33_ID_ISAR2_MULTIACCESSINT(ALL1)
#define M33_ID_ISAR2_MEMHINT(v) (((v)&0xf)<<4)
#define M33_ID_ISAR2_MEMHINT_MASK M33_ID_ISAR2_MEMHINT(ALL1)
#define M33_ID_ISAR2_LOADSTORE(v) (((v)&0xf)<<0)
#define M33_ID_ISAR2_LOADSTORE_MASK M33_ID_ISAR2_LOADSTORE(ALL1)

/*ID_ISAR3 Register macros*/

#define M33_ID_ISAR3_TRUENOP(v) (((v)&0xf)<<24)
#define M33_ID_ISAR3_TRUENOP_MASK M33_ID_ISAR3_TRUENOP(ALL1)
#define M33_ID_ISAR3_T32COPY(v) (((v)&0xf)<<20)
#define M33_ID_ISAR3_T32COPY_MASK M33_ID_ISAR3_T32COPY(ALL1)
#define M33_ID_ISAR3_TABBRANCH(v) (((v)&0xf)<<16)
#define M33_ID_ISAR3_TABBRANCH_MASK M33_ID_ISAR3_TABBRANCH(ALL1)
#define M33_ID_ISAR3_SYNCHPRIM(v) (((v)&0xf)<<12)
#define M33_ID_ISAR3_SYNCHPRIM_MASK M33_ID_ISAR3_SYNCHPRIM(ALL1)
#define M33_ID_ISAR3_SVC(v) (((v)&0xf)<<8)
#define M33_ID_ISAR3_SVC_MASK M33_ID_ISAR3_SVC(ALL1)
#define M33_ID_ISAR3_SIMD(v) (((v)&0xf)<<4)
#define M33_ID_ISAR3_SIMD_MASK M33_ID_ISAR3_SIMD(ALL1)
#define M33_ID_ISAR3_SATURATE(v) (((v)&0xf)<<0)
#define M33_ID_ISAR3_SATURATE_MASK M33_ID_ISAR3_SATURATE(ALL1)

/*ID_ISAR4 Register macros*/

#define M33_ID_ISAR4_PSR_M(v) (((v)&0xf)<<24)
#define M33_ID_ISAR4_PSR_M_MASK M33_ID_ISAR4_PSR_M(ALL1)
#define M33_ID_ISAR4_SYNCPRIM_FRAC(v) (((v)&0xf)<<20)
#define M33_ID_ISAR4_SYNCPRIM_FRAC_MASK M33_ID_ISAR4_SYNCPRIM_FRAC(ALL1)
#define M33_ID_ISAR4_BARRIER(v) (((v)&0xf)<<16)
#define M33_ID_ISAR4_BARRIER_MASK M33_ID_ISAR4_BARRIER(ALL1)
#define M33_ID_ISAR4_WRITEBACK(v) (((v)&0xf)<<8)
#define M33_ID_ISAR4_WRITEBACK_MASK M33_ID_ISAR4_WRITEBACK(ALL1)
#define M33_ID_ISAR4_WITHSHIFTS(v) (((v)&0xf)<<4)
#define M33_ID_ISAR4_WITHSHIFTS_MASK M33_ID_ISAR4_WITHSHIFTS(ALL1)
#define M33_ID_ISAR4_UNPRIV(v) (((v)&0xf)<<0)
#define M33_ID_ISAR4_UNPRIV_MASK M33_ID_ISAR4_UNPRIV(ALL1)

/*ID_ISAR5 Register macros*/


/*CTR Register macros*/

#define M33_CTR_RES1(v) (((v)&0x1)<<31)
#define M33_CTR_RES1_MASK M33_CTR_RES1(ALL1)
#define M33_CTR_CWG(v) (((v)&0xf)<<24)
#define M33_CTR_CWG_MASK M33_CTR_CWG(ALL1)
#define M33_CTR_ERG(v) (((v)&0xf)<<20)
#define M33_CTR_ERG_MASK M33_CTR_ERG(ALL1)
#define M33_CTR_DMINLINE(v) (((v)&0xf)<<16)
#define M33_CTR_DMINLINE_MASK M33_CTR_DMINLINE(ALL1)
#define M33_CTR_RES1_1(v) (((v)&0x3)<<14)
#define M33_CTR_RES1_1_MASK M33_CTR_RES1_1(ALL1)
#define M33_CTR_IMINLINE(v) (((v)&0xf)<<0)
#define M33_CTR_IMINLINE_MASK M33_CTR_IMINLINE(ALL1)

/*CPACR Register macros*/

#define M33_CPACR_CP11(v) (((v)&0x3)<<22)
#define M33_CPACR_CP11_MASK M33_CPACR_CP11(ALL1)
#define M33_CPACR_CP10(v) (((v)&0x3)<<20)
#define M33_CPACR_CP10_MASK M33_CPACR_CP10(ALL1)
#define M33_CPACR_CP7(v) (((v)&0x3)<<14)
#define M33_CPACR_CP7_MASK M33_CPACR_CP7(ALL1)
#define M33_CPACR_CP6(v) (((v)&0x3)<<12)
#define M33_CPACR_CP6_MASK M33_CPACR_CP6(ALL1)
#define M33_CPACR_CP5(v) (((v)&0x3)<<10)
#define M33_CPACR_CP5_MASK M33_CPACR_CP5(ALL1)
#define M33_CPACR_CP4(v) (((v)&0x3)<<8)
#define M33_CPACR_CP4_MASK M33_CPACR_CP4(ALL1)
#define M33_CPACR_CP3(v) (((v)&0x3)<<6)
#define M33_CPACR_CP3_MASK M33_CPACR_CP3(ALL1)
#define M33_CPACR_CP2(v) (((v)&0x3)<<4)
#define M33_CPACR_CP2_MASK M33_CPACR_CP2(ALL1)
#define M33_CPACR_CP1(v) (((v)&0x3)<<2)
#define M33_CPACR_CP1_MASK M33_CPACR_CP1(ALL1)
#define M33_CPACR_CP0(v) (((v)&0x3)<<0)
#define M33_CPACR_CP0_MASK M33_CPACR_CP0(ALL1)

/*NSACR Register macros*/

#define M33_NSACR_CP11(v) (((v)&0x1)<<11)
#define M33_NSACR_CP11_MASK M33_NSACR_CP11(ALL1)
#define M33_NSACR_CP10(v) (((v)&0x1)<<10)
#define M33_NSACR_CP10_MASK M33_NSACR_CP10(ALL1)
#define M33_NSACR_CP7(v) (((v)&0x1)<<7)
#define M33_NSACR_CP7_MASK M33_NSACR_CP7(ALL1)
#define M33_NSACR_CP6(v) (((v)&0x1)<<6)
#define M33_NSACR_CP6_MASK M33_NSACR_CP6(ALL1)
#define M33_NSACR_CP5(v) (((v)&0x1)<<5)
#define M33_NSACR_CP5_MASK M33_NSACR_CP5(ALL1)
#define M33_NSACR_CP4(v) (((v)&0x1)<<4)
#define M33_NSACR_CP4_MASK M33_NSACR_CP4(ALL1)
#define M33_NSACR_CP3(v) (((v)&0x1)<<3)
#define M33_NSACR_CP3_MASK M33_NSACR_CP3(ALL1)
#define M33_NSACR_CP2(v) (((v)&0x1)<<2)
#define M33_NSACR_CP2_MASK M33_NSACR_CP2(ALL1)
#define M33_NSACR_CP1(v) (((v)&0x1)<<1)
#define M33_NSACR_CP1_MASK M33_NSACR_CP1(ALL1)
#define M33_NSACR_CP0(v) (((v)&0x1)<<0)
#define M33_NSACR_CP0_MASK M33_NSACR_CP0(ALL1)

/*MPU_TYPE Register macros*/

#define M33_MPU_TYPE_DREGION(v) (((v)&0xff)<<8)
#define M33_MPU_TYPE_DREGION_MASK M33_MPU_TYPE_DREGION(ALL1)
#define M33_MPU_TYPE_SEPARATE(v) (((v)&0x1)<<0)
#define M33_MPU_TYPE_SEPARATE_MASK M33_MPU_TYPE_SEPARATE(ALL1)

/*MPU_CTRL Register macros*/

#define M33_MPU_CTRL_PRIVDEFENA(v) (((v)&0x1)<<2)
#define M33_MPU_CTRL_PRIVDEFENA_MASK M33_MPU_CTRL_PRIVDEFENA(ALL1)
#define M33_MPU_CTRL_HFNMIENA(v) (((v)&0x1)<<1)
#define M33_MPU_CTRL_HFNMIENA_MASK M33_MPU_CTRL_HFNMIENA(ALL1)
#define M33_MPU_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define M33_MPU_CTRL_ENABLE_MASK M33_MPU_CTRL_ENABLE(ALL1)

/*MPU_RNR Register macros*/

#define M33_MPU_RNR_REGION(v) (((v)&0x7)<<0)
#define M33_MPU_RNR_REGION_MASK M33_MPU_RNR_REGION(ALL1)

/*MPU_RBAR Register macros*/

#define M33_MPU_RBAR_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_BASE_MASK M33_MPU_RBAR_BASE(ALL1)
#define M33_MPU_RBAR_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_SH_MASK M33_MPU_RBAR_SH(ALL1)
#define M33_MPU_RBAR_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_AP_MASK M33_MPU_RBAR_AP(ALL1)
#define M33_MPU_RBAR_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_XN_MASK M33_MPU_RBAR_XN(ALL1)
#define M33_MPU_RBAR_A1_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A1_BASE_MASK M33_MPU_RBAR_A1_BASE(ALL1)
#define M33_MPU_RBAR_A1_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A1_SH_MASK M33_MPU_RBAR_A1_SH(ALL1)
#define M33_MPU_RBAR_A1_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A1_AP_MASK M33_MPU_RBAR_A1_AP(ALL1)
#define M33_MPU_RBAR_A1_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A1_XN_MASK M33_MPU_RBAR_A1_XN(ALL1)
#define M33_MPU_RBAR_A2_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A2_BASE_MASK M33_MPU_RBAR_A2_BASE(ALL1)
#define M33_MPU_RBAR_A2_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A2_SH_MASK M33_MPU_RBAR_A2_SH(ALL1)
#define M33_MPU_RBAR_A2_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A2_AP_MASK M33_MPU_RBAR_A2_AP(ALL1)
#define M33_MPU_RBAR_A2_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A2_XN_MASK M33_MPU_RBAR_A2_XN(ALL1)
#define M33_MPU_RBAR_A3_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A3_BASE_MASK M33_MPU_RBAR_A3_BASE(ALL1)
#define M33_MPU_RBAR_A3_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A3_SH_MASK M33_MPU_RBAR_A3_SH(ALL1)
#define M33_MPU_RBAR_A3_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A3_AP_MASK M33_MPU_RBAR_A3_AP(ALL1)
#define M33_MPU_RBAR_A3_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A3_XN_MASK M33_MPU_RBAR_A3_XN(ALL1)

/*MPU_RLAR Register macros*/

#define M33_MPU_RLAR_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_LIMIT_MASK M33_MPU_RLAR_LIMIT(ALL1)
#define M33_MPU_RLAR_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_ATTRINDX_MASK M33_MPU_RLAR_ATTRINDX(ALL1)
#define M33_MPU_RLAR_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_EN_MASK M33_MPU_RLAR_EN(ALL1)
#define M33_MPU_RLAR_A1_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A1_LIMIT_MASK M33_MPU_RLAR_A1_LIMIT(ALL1)
#define M33_MPU_RLAR_A1_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A1_ATTRINDX_MASK M33_MPU_RLAR_A1_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A1_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A1_EN_MASK M33_MPU_RLAR_A1_EN(ALL1)
#define M33_MPU_RLAR_A2_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A2_LIMIT_MASK M33_MPU_RLAR_A2_LIMIT(ALL1)
#define M33_MPU_RLAR_A2_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A2_ATTRINDX_MASK M33_MPU_RLAR_A2_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A2_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A2_EN_MASK M33_MPU_RLAR_A2_EN(ALL1)
#define M33_MPU_RLAR_A3_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A3_LIMIT_MASK M33_MPU_RLAR_A3_LIMIT(ALL1)
#define M33_MPU_RLAR_A3_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A3_ATTRINDX_MASK M33_MPU_RLAR_A3_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A3_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A3_EN_MASK M33_MPU_RLAR_A3_EN(ALL1)

/*MPU_RBAR_A1 Register macros*/

#define M33_MPU_RBAR_A1_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A1_BASE_MASK M33_MPU_RBAR_A1_BASE(ALL1)
#define M33_MPU_RBAR_A1_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A1_SH_MASK M33_MPU_RBAR_A1_SH(ALL1)
#define M33_MPU_RBAR_A1_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A1_AP_MASK M33_MPU_RBAR_A1_AP(ALL1)
#define M33_MPU_RBAR_A1_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A1_XN_MASK M33_MPU_RBAR_A1_XN(ALL1)

/*MPU_RLAR_A1 Register macros*/

#define M33_MPU_RLAR_A1_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A1_LIMIT_MASK M33_MPU_RLAR_A1_LIMIT(ALL1)
#define M33_MPU_RLAR_A1_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A1_ATTRINDX_MASK M33_MPU_RLAR_A1_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A1_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A1_EN_MASK M33_MPU_RLAR_A1_EN(ALL1)

/*MPU_RBAR_A2 Register macros*/

#define M33_MPU_RBAR_A2_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A2_BASE_MASK M33_MPU_RBAR_A2_BASE(ALL1)
#define M33_MPU_RBAR_A2_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A2_SH_MASK M33_MPU_RBAR_A2_SH(ALL1)
#define M33_MPU_RBAR_A2_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A2_AP_MASK M33_MPU_RBAR_A2_AP(ALL1)
#define M33_MPU_RBAR_A2_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A2_XN_MASK M33_MPU_RBAR_A2_XN(ALL1)

/*MPU_RLAR_A2 Register macros*/

#define M33_MPU_RLAR_A2_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A2_LIMIT_MASK M33_MPU_RLAR_A2_LIMIT(ALL1)
#define M33_MPU_RLAR_A2_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A2_ATTRINDX_MASK M33_MPU_RLAR_A2_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A2_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A2_EN_MASK M33_MPU_RLAR_A2_EN(ALL1)

/*MPU_RBAR_A3 Register macros*/

#define M33_MPU_RBAR_A3_BASE(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RBAR_A3_BASE_MASK M33_MPU_RBAR_A3_BASE(ALL1)
#define M33_MPU_RBAR_A3_SH(v) (((v)&0x3)<<3)
#define M33_MPU_RBAR_A3_SH_MASK M33_MPU_RBAR_A3_SH(ALL1)
#define M33_MPU_RBAR_A3_AP(v) (((v)&0x3)<<1)
#define M33_MPU_RBAR_A3_AP_MASK M33_MPU_RBAR_A3_AP(ALL1)
#define M33_MPU_RBAR_A3_XN(v) (((v)&0x1)<<0)
#define M33_MPU_RBAR_A3_XN_MASK M33_MPU_RBAR_A3_XN(ALL1)

/*MPU_RLAR_A3 Register macros*/

#define M33_MPU_RLAR_A3_LIMIT(v) (((v)&0x7ffffff)<<5)
#define M33_MPU_RLAR_A3_LIMIT_MASK M33_MPU_RLAR_A3_LIMIT(ALL1)
#define M33_MPU_RLAR_A3_ATTRINDX(v) (((v)&0x7)<<1)
#define M33_MPU_RLAR_A3_ATTRINDX_MASK M33_MPU_RLAR_A3_ATTRINDX(ALL1)
#define M33_MPU_RLAR_A3_EN(v) (((v)&0x1)<<0)
#define M33_MPU_RLAR_A3_EN_MASK M33_MPU_RLAR_A3_EN(ALL1)

/*MPU_MAIR0 Register macros*/

#define M33_MPU_MAIR0_ATTR3(v) (((v)&0xff)<<24)
#define M33_MPU_MAIR0_ATTR3_MASK M33_MPU_MAIR0_ATTR3(ALL1)
#define M33_MPU_MAIR0_ATTR2(v) (((v)&0xff)<<16)
#define M33_MPU_MAIR0_ATTR2_MASK M33_MPU_MAIR0_ATTR2(ALL1)
#define M33_MPU_MAIR0_ATTR1(v) (((v)&0xff)<<8)
#define M33_MPU_MAIR0_ATTR1_MASK M33_MPU_MAIR0_ATTR1(ALL1)
#define M33_MPU_MAIR0_ATTR0(v) (((v)&0xff)<<0)
#define M33_MPU_MAIR0_ATTR0_MASK M33_MPU_MAIR0_ATTR0(ALL1)

/*MPU_MAIR1 Register macros*/

#define M33_MPU_MAIR1_ATTR7(v) (((v)&0xff)<<24)
#define M33_MPU_MAIR1_ATTR7_MASK M33_MPU_MAIR1_ATTR7(ALL1)
#define M33_MPU_MAIR1_ATTR6(v) (((v)&0xff)<<16)
#define M33_MPU_MAIR1_ATTR6_MASK M33_MPU_MAIR1_ATTR6(ALL1)
#define M33_MPU_MAIR1_ATTR5(v) (((v)&0xff)<<8)
#define M33_MPU_MAIR1_ATTR5_MASK M33_MPU_MAIR1_ATTR5(ALL1)
#define M33_MPU_MAIR1_ATTR4(v) (((v)&0xff)<<0)
#define M33_MPU_MAIR1_ATTR4_MASK M33_MPU_MAIR1_ATTR4(ALL1)

/*SAU_CTRL Register macros*/

#define M33_SAU_CTRL_ALLNS(v) (((v)&0x1)<<1)
#define M33_SAU_CTRL_ALLNS_MASK M33_SAU_CTRL_ALLNS(ALL1)
#define M33_SAU_CTRL_ENABLE(v) (((v)&0x1)<<0)
#define M33_SAU_CTRL_ENABLE_MASK M33_SAU_CTRL_ENABLE(ALL1)

/*SAU_TYPE Register macros*/

#define M33_SAU_TYPE_SREGION(v) (((v)&0xff)<<0)
#define M33_SAU_TYPE_SREGION_MASK M33_SAU_TYPE_SREGION(ALL1)

/*SAU_RNR Register macros*/

#define M33_SAU_RNR_REGION(v) (((v)&0xff)<<0)
#define M33_SAU_RNR_REGION_MASK M33_SAU_RNR_REGION(ALL1)

/*SAU_RBAR Register macros*/

#define M33_SAU_RBAR_BADDR(v) (((v)&0x7ffffff)<<5)
#define M33_SAU_RBAR_BADDR_MASK M33_SAU_RBAR_BADDR(ALL1)

/*SAU_RLAR Register macros*/

#define M33_SAU_RLAR_LADDR(v) (((v)&0x7ffffff)<<5)
#define M33_SAU_RLAR_LADDR_MASK M33_SAU_RLAR_LADDR(ALL1)
#define M33_SAU_RLAR_NSC(v) (((v)&0x1)<<1)
#define M33_SAU_RLAR_NSC_MASK M33_SAU_RLAR_NSC(ALL1)
#define M33_SAU_RLAR_ENABLE(v) (((v)&0x1)<<0)
#define M33_SAU_RLAR_ENABLE_MASK M33_SAU_RLAR_ENABLE(ALL1)

/*SFSR Register macros*/

#define M33_SFSR_LSERR(v) (((v)&0x1)<<7)
#define M33_SFSR_LSERR_MASK M33_SFSR_LSERR(ALL1)
#define M33_SFSR_SFARVALID(v) (((v)&0x1)<<6)
#define M33_SFSR_SFARVALID_MASK M33_SFSR_SFARVALID(ALL1)
#define M33_SFSR_LSPERR(v) (((v)&0x1)<<5)
#define M33_SFSR_LSPERR_MASK M33_SFSR_LSPERR(ALL1)
#define M33_SFSR_INVTRAN(v) (((v)&0x1)<<4)
#define M33_SFSR_INVTRAN_MASK M33_SFSR_INVTRAN(ALL1)
#define M33_SFSR_AUVIOL(v) (((v)&0x1)<<3)
#define M33_SFSR_AUVIOL_MASK M33_SFSR_AUVIOL(ALL1)
#define M33_SFSR_INVER(v) (((v)&0x1)<<2)
#define M33_SFSR_INVER_MASK M33_SFSR_INVER(ALL1)
#define M33_SFSR_INVIS(v) (((v)&0x1)<<1)
#define M33_SFSR_INVIS_MASK M33_SFSR_INVIS(ALL1)
#define M33_SFSR_INVEP(v) (((v)&0x1)<<0)
#define M33_SFSR_INVEP_MASK M33_SFSR_INVEP(ALL1)

/*SFAR Register macros*/

#define M33_SFAR_ADDRESS(v) (((v)&0xffffffff)<<0)
#define M33_SFAR_ADDRESS_MASK M33_SFAR_ADDRESS(ALL1)

/*DHCSR Register macros*/

#define M33_DHCSR_S_RESTART_ST(v) (((v)&0x1)<<26)
#define M33_DHCSR_S_RESTART_ST_MASK M33_DHCSR_S_RESTART_ST(ALL1)
#define M33_DHCSR_S_RESET_ST(v) (((v)&0x1)<<25)
#define M33_DHCSR_S_RESET_ST_MASK M33_DHCSR_S_RESET_ST(ALL1)
#define M33_DHCSR_S_RETIRE_ST(v) (((v)&0x1)<<24)
#define M33_DHCSR_S_RETIRE_ST_MASK M33_DHCSR_S_RETIRE_ST(ALL1)
#define M33_DHCSR_S_SDE(v) (((v)&0x1)<<20)
#define M33_DHCSR_S_SDE_MASK M33_DHCSR_S_SDE(ALL1)
#define M33_DHCSR_S_LOCKUP(v) (((v)&0x1)<<19)
#define M33_DHCSR_S_LOCKUP_MASK M33_DHCSR_S_LOCKUP(ALL1)
#define M33_DHCSR_S_SLEEP(v) (((v)&0x1)<<18)
#define M33_DHCSR_S_SLEEP_MASK M33_DHCSR_S_SLEEP(ALL1)
#define M33_DHCSR_S_HALT(v) (((v)&0x1)<<17)
#define M33_DHCSR_S_HALT_MASK M33_DHCSR_S_HALT(ALL1)
#define M33_DHCSR_S_REGRDY(v) (((v)&0x1)<<16)
#define M33_DHCSR_S_REGRDY_MASK M33_DHCSR_S_REGRDY(ALL1)
#define M33_DHCSR_C_SNAPSTALL(v) (((v)&0x1)<<5)
#define M33_DHCSR_C_SNAPSTALL_MASK M33_DHCSR_C_SNAPSTALL(ALL1)
#define M33_DHCSR_C_MASKINTS(v) (((v)&0x1)<<3)
#define M33_DHCSR_C_MASKINTS_MASK M33_DHCSR_C_MASKINTS(ALL1)
#define M33_DHCSR_C_STEP(v) (((v)&0x1)<<2)
#define M33_DHCSR_C_STEP_MASK M33_DHCSR_C_STEP(ALL1)
#define M33_DHCSR_C_HALT(v) (((v)&0x1)<<1)
#define M33_DHCSR_C_HALT_MASK M33_DHCSR_C_HALT(ALL1)
#define M33_DHCSR_C_DEBUGEN(v) (((v)&0x1)<<0)
#define M33_DHCSR_C_DEBUGEN_MASK M33_DHCSR_C_DEBUGEN(ALL1)

/*DCRSR Register macros*/

#define M33_DCRSR_REGWNR(v) (((v)&0x1)<<16)
#define M33_DCRSR_REGWNR_MASK M33_DCRSR_REGWNR(ALL1)
#define M33_DCRSR_REGSEL(v) (((v)&0x7f)<<0)
#define M33_DCRSR_REGSEL_MASK M33_DCRSR_REGSEL(ALL1)

/*DCRDR Register macros*/

#define M33_DCRDR_DBGTMP(v) (((v)&0xffffffff)<<0)
#define M33_DCRDR_DBGTMP_MASK M33_DCRDR_DBGTMP(ALL1)

/*DEMCR Register macros*/

#define M33_DEMCR_TRCENA(v) (((v)&0x1)<<24)
#define M33_DEMCR_TRCENA_MASK M33_DEMCR_TRCENA(ALL1)
#define M33_DEMCR_SDME(v) (((v)&0x1)<<20)
#define M33_DEMCR_SDME_MASK M33_DEMCR_SDME(ALL1)
#define M33_DEMCR_MON_REQ(v) (((v)&0x1)<<19)
#define M33_DEMCR_MON_REQ_MASK M33_DEMCR_MON_REQ(ALL1)
#define M33_DEMCR_MON_STEP(v) (((v)&0x1)<<18)
#define M33_DEMCR_MON_STEP_MASK M33_DEMCR_MON_STEP(ALL1)
#define M33_DEMCR_MON_PEND(v) (((v)&0x1)<<17)
#define M33_DEMCR_MON_PEND_MASK M33_DEMCR_MON_PEND(ALL1)
#define M33_DEMCR_MON_EN(v) (((v)&0x1)<<16)
#define M33_DEMCR_MON_EN_MASK M33_DEMCR_MON_EN(ALL1)
#define M33_DEMCR_VC_SFERR(v) (((v)&0x1)<<11)
#define M33_DEMCR_VC_SFERR_MASK M33_DEMCR_VC_SFERR(ALL1)
#define M33_DEMCR_VC_HARDERR(v) (((v)&0x1)<<10)
#define M33_DEMCR_VC_HARDERR_MASK M33_DEMCR_VC_HARDERR(ALL1)
#define M33_DEMCR_VC_INTERR(v) (((v)&0x1)<<9)
#define M33_DEMCR_VC_INTERR_MASK M33_DEMCR_VC_INTERR(ALL1)
#define M33_DEMCR_VC_BUSERR(v) (((v)&0x1)<<8)
#define M33_DEMCR_VC_BUSERR_MASK M33_DEMCR_VC_BUSERR(ALL1)
#define M33_DEMCR_VC_STATERR(v) (((v)&0x1)<<7)
#define M33_DEMCR_VC_STATERR_MASK M33_DEMCR_VC_STATERR(ALL1)
#define M33_DEMCR_VC_CHKERR(v) (((v)&0x1)<<6)
#define M33_DEMCR_VC_CHKERR_MASK M33_DEMCR_VC_CHKERR(ALL1)
#define M33_DEMCR_VC_NOCPERR(v) (((v)&0x1)<<5)
#define M33_DEMCR_VC_NOCPERR_MASK M33_DEMCR_VC_NOCPERR(ALL1)
#define M33_DEMCR_VC_MMERR(v) (((v)&0x1)<<4)
#define M33_DEMCR_VC_MMERR_MASK M33_DEMCR_VC_MMERR(ALL1)
#define M33_DEMCR_VC_CORERESET(v) (((v)&0x1)<<0)
#define M33_DEMCR_VC_CORERESET_MASK M33_DEMCR_VC_CORERESET(ALL1)

/*DSCSR Register macros*/

#define M33_DSCSR_CDSKEY(v) (((v)&0x1)<<17)
#define M33_DSCSR_CDSKEY_MASK M33_DSCSR_CDSKEY(ALL1)
#define M33_DSCSR_CDS(v) (((v)&0x1)<<16)
#define M33_DSCSR_CDS_MASK M33_DSCSR_CDS(ALL1)
#define M33_DSCSR_SBRSEL(v) (((v)&0x1)<<1)
#define M33_DSCSR_SBRSEL_MASK M33_DSCSR_SBRSEL(ALL1)
#define M33_DSCSR_SBRSELEN(v) (((v)&0x1)<<0)
#define M33_DSCSR_SBRSELEN_MASK M33_DSCSR_SBRSELEN(ALL1)

/*STIR Register macros*/

#define M33_STIR_INTID(v) (((v)&0x1ff)<<0)
#define M33_STIR_INTID_MASK M33_STIR_INTID(ALL1)

/*FPCCR Register macros*/

#define M33_FPCCR_ASPEN(v) (((v)&0x1)<<31)
#define M33_FPCCR_ASPEN_MASK M33_FPCCR_ASPEN(ALL1)
#define M33_FPCCR_LSPEN(v) (((v)&0x1)<<30)
#define M33_FPCCR_LSPEN_MASK M33_FPCCR_LSPEN(ALL1)
#define M33_FPCCR_LSPENS(v) (((v)&0x1)<<29)
#define M33_FPCCR_LSPENS_MASK M33_FPCCR_LSPENS(ALL1)
#define M33_FPCCR_CLRONRET(v) (((v)&0x1)<<28)
#define M33_FPCCR_CLRONRET_MASK M33_FPCCR_CLRONRET(ALL1)
#define M33_FPCCR_CLRONRETS(v) (((v)&0x1)<<27)
#define M33_FPCCR_CLRONRETS_MASK M33_FPCCR_CLRONRETS(ALL1)
#define M33_FPCCR_TS(v) (((v)&0x1)<<26)
#define M33_FPCCR_TS_MASK M33_FPCCR_TS(ALL1)
#define M33_FPCCR_UFRDY(v) (((v)&0x1)<<10)
#define M33_FPCCR_UFRDY_MASK M33_FPCCR_UFRDY(ALL1)
#define M33_FPCCR_SPLIMVIOL(v) (((v)&0x1)<<9)
#define M33_FPCCR_SPLIMVIOL_MASK M33_FPCCR_SPLIMVIOL(ALL1)
#define M33_FPCCR_MONRDY(v) (((v)&0x1)<<8)
#define M33_FPCCR_MONRDY_MASK M33_FPCCR_MONRDY(ALL1)
#define M33_FPCCR_SFRDY(v) (((v)&0x1)<<7)
#define M33_FPCCR_SFRDY_MASK M33_FPCCR_SFRDY(ALL1)
#define M33_FPCCR_BFRDY(v) (((v)&0x1)<<6)
#define M33_FPCCR_BFRDY_MASK M33_FPCCR_BFRDY(ALL1)
#define M33_FPCCR_MMRDY(v) (((v)&0x1)<<5)
#define M33_FPCCR_MMRDY_MASK M33_FPCCR_MMRDY(ALL1)
#define M33_FPCCR_HFRDY(v) (((v)&0x1)<<4)
#define M33_FPCCR_HFRDY_MASK M33_FPCCR_HFRDY(ALL1)
#define M33_FPCCR_THREAD(v) (((v)&0x1)<<3)
#define M33_FPCCR_THREAD_MASK M33_FPCCR_THREAD(ALL1)
#define M33_FPCCR_S(v) (((v)&0x1)<<2)
#define M33_FPCCR_S_MASK M33_FPCCR_S(ALL1)
#define M33_FPCCR_USER(v) (((v)&0x1)<<1)
#define M33_FPCCR_USER_MASK M33_FPCCR_USER(ALL1)
#define M33_FPCCR_LSPACT(v) (((v)&0x1)<<0)
#define M33_FPCCR_LSPACT_MASK M33_FPCCR_LSPACT(ALL1)

/*FPCAR Register macros*/

#define M33_FPCAR_ADDRESS(v) (((v)&0x1fffffff)<<3)
#define M33_FPCAR_ADDRESS_MASK M33_FPCAR_ADDRESS(ALL1)

/*FPDSCR Register macros*/

#define M33_FPDSCR_AHP(v) (((v)&0x1)<<26)
#define M33_FPDSCR_AHP_MASK M33_FPDSCR_AHP(ALL1)
#define M33_FPDSCR_DN(v) (((v)&0x1)<<25)
#define M33_FPDSCR_DN_MASK M33_FPDSCR_DN(ALL1)
#define M33_FPDSCR_FZ(v) (((v)&0x1)<<24)
#define M33_FPDSCR_FZ_MASK M33_FPDSCR_FZ(ALL1)
#define M33_FPDSCR_RMODE(v) (((v)&0x3)<<22)
#define M33_FPDSCR_RMODE_MASK M33_FPDSCR_RMODE(ALL1)

/*MVFR0 Register macros*/

#define M33_MVFR0_FPROUND(v) (((v)&0xf)<<28)
#define M33_MVFR0_FPROUND_MASK M33_MVFR0_FPROUND(ALL1)
#define M33_MVFR0_FPSQRT(v) (((v)&0xf)<<20)
#define M33_MVFR0_FPSQRT_MASK M33_MVFR0_FPSQRT(ALL1)
#define M33_MVFR0_FPDIVIDE(v) (((v)&0xf)<<16)
#define M33_MVFR0_FPDIVIDE_MASK M33_MVFR0_FPDIVIDE(ALL1)
#define M33_MVFR0_FPDP(v) (((v)&0xf)<<8)
#define M33_MVFR0_FPDP_MASK M33_MVFR0_FPDP(ALL1)
#define M33_MVFR0_FPSP(v) (((v)&0xf)<<4)
#define M33_MVFR0_FPSP_MASK M33_MVFR0_FPSP(ALL1)
#define M33_MVFR0_SIMDREG(v) (((v)&0xf)<<0)
#define M33_MVFR0_SIMDREG_MASK M33_MVFR0_SIMDREG(ALL1)

/*MVFR1 Register macros*/

#define M33_MVFR1_FMAC(v) (((v)&0xf)<<28)
#define M33_MVFR1_FMAC_MASK M33_MVFR1_FMAC(ALL1)
#define M33_MVFR1_FPHP(v) (((v)&0xf)<<24)
#define M33_MVFR1_FPHP_MASK M33_MVFR1_FPHP(ALL1)
#define M33_MVFR1_FPDNAN(v) (((v)&0xf)<<4)
#define M33_MVFR1_FPDNAN_MASK M33_MVFR1_FPDNAN(ALL1)
#define M33_MVFR1_FPFTZ(v) (((v)&0xf)<<0)
#define M33_MVFR1_FPFTZ_MASK M33_MVFR1_FPFTZ(ALL1)

/*MVFR2 Register macros*/

#define M33_MVFR2_FPMISC(v) (((v)&0xf)<<4)
#define M33_MVFR2_FPMISC_MASK M33_MVFR2_FPMISC(ALL1)

/*DDEVARCH Register macros*/

#define M33_DDEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_DDEVARCH_ARCHITECT_MASK M33_DDEVARCH_ARCHITECT(ALL1)
#define M33_DDEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_DDEVARCH_PRESENT_MASK M33_DDEVARCH_PRESENT(ALL1)
#define M33_DDEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_DDEVARCH_REVISION_MASK M33_DDEVARCH_REVISION(ALL1)
#define M33_DDEVARCH_ARCHVER(v) (((v)&0xf)<<12)
#define M33_DDEVARCH_ARCHVER_MASK M33_DDEVARCH_ARCHVER(ALL1)
#define M33_DDEVARCH_ARCHPART(v) (((v)&0xfff)<<0)
#define M33_DDEVARCH_ARCHPART_MASK M33_DDEVARCH_ARCHPART(ALL1)

/*DDEVTYPE Register macros*/

#define M33_DDEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_DDEVTYPE_SUB_MASK M33_DDEVTYPE_SUB(ALL1)
#define M33_DDEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_DDEVTYPE_MAJOR_MASK M33_DDEVTYPE_MAJOR(ALL1)

/*DPIDR4 Register macros*/

#define M33_DPIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_DPIDR4_SIZE_MASK M33_DPIDR4_SIZE(ALL1)
#define M33_DPIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_DPIDR4_DES_2_MASK M33_DPIDR4_DES_2(ALL1)

/*DPIDR5 Register macros*/


/*DPIDR6 Register macros*/


/*DPIDR7 Register macros*/


/*DPIDR0 Register macros*/

#define M33_DPIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_DPIDR0_PART_0_MASK M33_DPIDR0_PART_0(ALL1)

/*DPIDR1 Register macros*/

#define M33_DPIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_DPIDR1_DES_0_MASK M33_DPIDR1_DES_0(ALL1)
#define M33_DPIDR1_PART_1(v) (((v)&0xf)<<0)
#define M33_DPIDR1_PART_1_MASK M33_DPIDR1_PART_1(ALL1)

/*DPIDR2 Register macros*/

#define M33_DPIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_DPIDR2_REVISION_MASK M33_DPIDR2_REVISION(ALL1)
#define M33_DPIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_DPIDR2_JEDEC_MASK M33_DPIDR2_JEDEC(ALL1)
#define M33_DPIDR2_DES_1(v) (((v)&0x7)<<0)
#define M33_DPIDR2_DES_1_MASK M33_DPIDR2_DES_1(ALL1)

/*DPIDR3 Register macros*/

#define M33_DPIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_DPIDR3_REVAND_MASK M33_DPIDR3_REVAND(ALL1)
#define M33_DPIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_DPIDR3_CMOD_MASK M33_DPIDR3_CMOD(ALL1)

/*DCIDR0 Register macros*/

#define M33_DCIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_DCIDR0_PRMBL_0_MASK M33_DCIDR0_PRMBL_0(ALL1)

/*DCIDR1 Register macros*/

#define M33_DCIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_DCIDR1_CLASS_MASK M33_DCIDR1_CLASS(ALL1)
#define M33_DCIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_DCIDR1_PRMBL_1_MASK M33_DCIDR1_PRMBL_1(ALL1)

/*DCIDR2 Register macros*/

#define M33_DCIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_DCIDR2_PRMBL_2_MASK M33_DCIDR2_PRMBL_2(ALL1)

/*DCIDR3 Register macros*/

#define M33_DCIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_DCIDR3_PRMBL_3_MASK M33_DCIDR3_PRMBL_3(ALL1)

/*TRCPRGCTLR Register macros*/

#define M33_TRCPRGCTLR_EN(v) (((v)&0x1)<<0)
#define M33_TRCPRGCTLR_EN_MASK M33_TRCPRGCTLR_EN(ALL1)

/*TRCSTATR Register macros*/

#define M33_TRCSTATR_PMSTABLE(v) (((v)&0x1)<<1)
#define M33_TRCSTATR_PMSTABLE_MASK M33_TRCSTATR_PMSTABLE(ALL1)
#define M33_TRCSTATR_IDLE(v) (((v)&0x1)<<0)
#define M33_TRCSTATR_IDLE_MASK M33_TRCSTATR_IDLE(ALL1)

/*TRCCONFIGR Register macros*/

#define M33_TRCCONFIGR_RS(v) (((v)&0x1)<<12)
#define M33_TRCCONFIGR_RS_MASK M33_TRCCONFIGR_RS(ALL1)
#define M33_TRCCONFIGR_TS(v) (((v)&0x1)<<11)
#define M33_TRCCONFIGR_TS_MASK M33_TRCCONFIGR_TS(ALL1)
#define M33_TRCCONFIGR_COND(v) (((v)&0x3f)<<5)
#define M33_TRCCONFIGR_COND_MASK M33_TRCCONFIGR_COND(ALL1)
#define M33_TRCCONFIGR_CCI(v) (((v)&0x1)<<4)
#define M33_TRCCONFIGR_CCI_MASK M33_TRCCONFIGR_CCI(ALL1)
#define M33_TRCCONFIGR_BB(v) (((v)&0x1)<<3)
#define M33_TRCCONFIGR_BB_MASK M33_TRCCONFIGR_BB(ALL1)

/*TRCEVENTCTL0R Register macros*/

#define M33_TRCEVENTCTL0R_TYPE1(v) (((v)&0x1)<<15)
#define M33_TRCEVENTCTL0R_TYPE1_MASK M33_TRCEVENTCTL0R_TYPE1(ALL1)
#define M33_TRCEVENTCTL0R_SEL1(v) (((v)&0x7)<<8)
#define M33_TRCEVENTCTL0R_SEL1_MASK M33_TRCEVENTCTL0R_SEL1(ALL1)
#define M33_TRCEVENTCTL0R_TYPE0(v) (((v)&0x1)<<7)
#define M33_TRCEVENTCTL0R_TYPE0_MASK M33_TRCEVENTCTL0R_TYPE0(ALL1)
#define M33_TRCEVENTCTL0R_SEL0(v) (((v)&0x7)<<0)
#define M33_TRCEVENTCTL0R_SEL0_MASK M33_TRCEVENTCTL0R_SEL0(ALL1)

/*TRCEVENTCTL1R Register macros*/

#define M33_TRCEVENTCTL1R_LPOVERRIDE(v) (((v)&0x1)<<12)
#define M33_TRCEVENTCTL1R_LPOVERRIDE_MASK M33_TRCEVENTCTL1R_LPOVERRIDE(ALL1)
#define M33_TRCEVENTCTL1R_ATB(v) (((v)&0x1)<<11)
#define M33_TRCEVENTCTL1R_ATB_MASK M33_TRCEVENTCTL1R_ATB(ALL1)
#define M33_TRCEVENTCTL1R_INSTEN1(v) (((v)&0x1)<<1)
#define M33_TRCEVENTCTL1R_INSTEN1_MASK M33_TRCEVENTCTL1R_INSTEN1(ALL1)
#define M33_TRCEVENTCTL1R_INSTEN0(v) (((v)&0x1)<<0)
#define M33_TRCEVENTCTL1R_INSTEN0_MASK M33_TRCEVENTCTL1R_INSTEN0(ALL1)

/*TRCSTALLCTLR Register macros*/

#define M33_TRCSTALLCTLR_INSTPRIORITY(v) (((v)&0x1)<<10)
#define M33_TRCSTALLCTLR_INSTPRIORITY_MASK M33_TRCSTALLCTLR_INSTPRIORITY(ALL1)
#define M33_TRCSTALLCTLR_ISTALL(v) (((v)&0x1)<<8)
#define M33_TRCSTALLCTLR_ISTALL_MASK M33_TRCSTALLCTLR_ISTALL(ALL1)
#define M33_TRCSTALLCTLR_LEVEL(v) (((v)&0x3)<<2)
#define M33_TRCSTALLCTLR_LEVEL_MASK M33_TRCSTALLCTLR_LEVEL(ALL1)

/*TRCTSCTLR Register macros*/

#define M33_TRCTSCTLR_TYPE0(v) (((v)&0x1)<<7)
#define M33_TRCTSCTLR_TYPE0_MASK M33_TRCTSCTLR_TYPE0(ALL1)
#define M33_TRCTSCTLR_SEL0(v) (((v)&0x3)<<0)
#define M33_TRCTSCTLR_SEL0_MASK M33_TRCTSCTLR_SEL0(ALL1)

/*TRCSYNCPR Register macros*/

#define M33_TRCSYNCPR_PERIOD(v) (((v)&0x1f)<<0)
#define M33_TRCSYNCPR_PERIOD_MASK M33_TRCSYNCPR_PERIOD(ALL1)

/*TRCCCCTLR Register macros*/

#define M33_TRCCCCTLR_THRESHOLD(v) (((v)&0xfff)<<0)
#define M33_TRCCCCTLR_THRESHOLD_MASK M33_TRCCCCTLR_THRESHOLD(ALL1)

/*TRCVICTLR Register macros*/

#define M33_TRCVICTLR_EXLEVEL_S3(v) (((v)&0x1)<<19)
#define M33_TRCVICTLR_EXLEVEL_S3_MASK M33_TRCVICTLR_EXLEVEL_S3(ALL1)
#define M33_TRCVICTLR_EXLEVEL_S0(v) (((v)&0x1)<<16)
#define M33_TRCVICTLR_EXLEVEL_S0_MASK M33_TRCVICTLR_EXLEVEL_S0(ALL1)
#define M33_TRCVICTLR_TRCERR(v) (((v)&0x1)<<11)
#define M33_TRCVICTLR_TRCERR_MASK M33_TRCVICTLR_TRCERR(ALL1)
#define M33_TRCVICTLR_TRCRESET(v) (((v)&0x1)<<10)
#define M33_TRCVICTLR_TRCRESET_MASK M33_TRCVICTLR_TRCRESET(ALL1)
#define M33_TRCVICTLR_SSSTATUS(v) (((v)&0x1)<<9)
#define M33_TRCVICTLR_SSSTATUS_MASK M33_TRCVICTLR_SSSTATUS(ALL1)
#define M33_TRCVICTLR_TYPE0(v) (((v)&0x1)<<7)
#define M33_TRCVICTLR_TYPE0_MASK M33_TRCVICTLR_TYPE0(ALL1)
#define M33_TRCVICTLR_SEL0(v) (((v)&0x3)<<0)
#define M33_TRCVICTLR_SEL0_MASK M33_TRCVICTLR_SEL0(ALL1)

/*TRCCNTRLDVR0 Register macros*/

#define M33_TRCCNTRLDVR0_VALUE(v) (((v)&0xffff)<<0)
#define M33_TRCCNTRLDVR0_VALUE_MASK M33_TRCCNTRLDVR0_VALUE(ALL1)

/*TRCIDR8 Register macros*/

#define M33_TRCIDR8_MAXSPEC(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR8_MAXSPEC_MASK M33_TRCIDR8_MAXSPEC(ALL1)

/*TRCIDR9 Register macros*/

#define M33_TRCIDR9_NUMP0KEY(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR9_NUMP0KEY_MASK M33_TRCIDR9_NUMP0KEY(ALL1)

/*TRCIDR10 Register macros*/

#define M33_TRCIDR10_NUMP1KEY(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR10_NUMP1KEY_MASK M33_TRCIDR10_NUMP1KEY(ALL1)

/*TRCIDR11 Register macros*/

#define M33_TRCIDR11_NUMP1SPC(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR11_NUMP1SPC_MASK M33_TRCIDR11_NUMP1SPC(ALL1)

/*TRCIDR12 Register macros*/

#define M33_TRCIDR12_NUMCONDKEY(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR12_NUMCONDKEY_MASK M33_TRCIDR12_NUMCONDKEY(ALL1)

/*TRCIDR13 Register macros*/

#define M33_TRCIDR13_NUMCONDSPC(v) (((v)&0xffffffff)<<0)
#define M33_TRCIDR13_NUMCONDSPC_MASK M33_TRCIDR13_NUMCONDSPC(ALL1)

/*TRCIMSPEC Register macros*/

#define M33_TRCIMSPEC_SUPPORT(v) (((v)&0xf)<<0)
#define M33_TRCIMSPEC_SUPPORT_MASK M33_TRCIMSPEC_SUPPORT(ALL1)

/*TRCIDR0 Register macros*/

#define M33_TRCIDR0_COMMOPT(v) (((v)&0x1)<<29)
#define M33_TRCIDR0_COMMOPT_MASK M33_TRCIDR0_COMMOPT(ALL1)
#define M33_TRCIDR0_TSSIZE(v) (((v)&0x1f)<<24)
#define M33_TRCIDR0_TSSIZE_MASK M33_TRCIDR0_TSSIZE(ALL1)
#define M33_TRCIDR0_TRCEXDATA(v) (((v)&0x1)<<17)
#define M33_TRCIDR0_TRCEXDATA_MASK M33_TRCIDR0_TRCEXDATA(ALL1)
#define M33_TRCIDR0_QSUPP(v) (((v)&0x3)<<15)
#define M33_TRCIDR0_QSUPP_MASK M33_TRCIDR0_QSUPP(ALL1)
#define M33_TRCIDR0_QFILT(v) (((v)&0x1)<<14)
#define M33_TRCIDR0_QFILT_MASK M33_TRCIDR0_QFILT(ALL1)
#define M33_TRCIDR0_CONDTYPE(v) (((v)&0x3)<<12)
#define M33_TRCIDR0_CONDTYPE_MASK M33_TRCIDR0_CONDTYPE(ALL1)
#define M33_TRCIDR0_NUMEVENT(v) (((v)&0x3)<<10)
#define M33_TRCIDR0_NUMEVENT_MASK M33_TRCIDR0_NUMEVENT(ALL1)
#define M33_TRCIDR0_RETSTACK(v) (((v)&0x1)<<9)
#define M33_TRCIDR0_RETSTACK_MASK M33_TRCIDR0_RETSTACK(ALL1)
#define M33_TRCIDR0_TRCCCI(v) (((v)&0x1)<<7)
#define M33_TRCIDR0_TRCCCI_MASK M33_TRCIDR0_TRCCCI(ALL1)
#define M33_TRCIDR0_TRCCOND(v) (((v)&0x1)<<6)
#define M33_TRCIDR0_TRCCOND_MASK M33_TRCIDR0_TRCCOND(ALL1)
#define M33_TRCIDR0_TRCBB(v) (((v)&0x1)<<5)
#define M33_TRCIDR0_TRCBB_MASK M33_TRCIDR0_TRCBB(ALL1)
#define M33_TRCIDR0_TRCDATA(v) (((v)&0x3)<<3)
#define M33_TRCIDR0_TRCDATA_MASK M33_TRCIDR0_TRCDATA(ALL1)
#define M33_TRCIDR0_INSTP0(v) (((v)&0x3)<<1)
#define M33_TRCIDR0_INSTP0_MASK M33_TRCIDR0_INSTP0(ALL1)
#define M33_TRCIDR0_RES1(v) (((v)&0x1)<<0)
#define M33_TRCIDR0_RES1_MASK M33_TRCIDR0_RES1(ALL1)

/*TRCIDR1 Register macros*/

#define M33_TRCIDR1_DESIGNER(v) (((v)&0xff)<<24)
#define M33_TRCIDR1_DESIGNER_MASK M33_TRCIDR1_DESIGNER(ALL1)
#define M33_TRCIDR1_RES1(v) (((v)&0xf)<<12)
#define M33_TRCIDR1_RES1_MASK M33_TRCIDR1_RES1(ALL1)
#define M33_TRCIDR1_TRCARCHMAJ(v) (((v)&0xf)<<8)
#define M33_TRCIDR1_TRCARCHMAJ_MASK M33_TRCIDR1_TRCARCHMAJ(ALL1)
#define M33_TRCIDR1_TRCARCHMIN(v) (((v)&0xf)<<4)
#define M33_TRCIDR1_TRCARCHMIN_MASK M33_TRCIDR1_TRCARCHMIN(ALL1)
#define M33_TRCIDR1_REVISION(v) (((v)&0xf)<<0)
#define M33_TRCIDR1_REVISION_MASK M33_TRCIDR1_REVISION(ALL1)

/*TRCIDR2 Register macros*/

#define M33_TRCIDR2_CCSIZE(v) (((v)&0xf)<<25)
#define M33_TRCIDR2_CCSIZE_MASK M33_TRCIDR2_CCSIZE(ALL1)
#define M33_TRCIDR2_DVSIZE(v) (((v)&0x1f)<<20)
#define M33_TRCIDR2_DVSIZE_MASK M33_TRCIDR2_DVSIZE(ALL1)
#define M33_TRCIDR2_DASIZE(v) (((v)&0x1f)<<15)
#define M33_TRCIDR2_DASIZE_MASK M33_TRCIDR2_DASIZE(ALL1)
#define M33_TRCIDR2_VMIDSIZE(v) (((v)&0x1f)<<10)
#define M33_TRCIDR2_VMIDSIZE_MASK M33_TRCIDR2_VMIDSIZE(ALL1)
#define M33_TRCIDR2_CIDSIZE(v) (((v)&0x1f)<<5)
#define M33_TRCIDR2_CIDSIZE_MASK M33_TRCIDR2_CIDSIZE(ALL1)
#define M33_TRCIDR2_IASIZE(v) (((v)&0x1f)<<0)
#define M33_TRCIDR2_IASIZE_MASK M33_TRCIDR2_IASIZE(ALL1)

/*TRCIDR3 Register macros*/

#define M33_TRCIDR3_NOOVERFLOW(v) (((v)&0x1)<<31)
#define M33_TRCIDR3_NOOVERFLOW_MASK M33_TRCIDR3_NOOVERFLOW(ALL1)
#define M33_TRCIDR3_NUMPROC(v) (((v)&0x7)<<28)
#define M33_TRCIDR3_NUMPROC_MASK M33_TRCIDR3_NUMPROC(ALL1)
#define M33_TRCIDR3_SYSSTALL(v) (((v)&0x1)<<27)
#define M33_TRCIDR3_SYSSTALL_MASK M33_TRCIDR3_SYSSTALL(ALL1)
#define M33_TRCIDR3_STALLCTL(v) (((v)&0x1)<<26)
#define M33_TRCIDR3_STALLCTL_MASK M33_TRCIDR3_STALLCTL(ALL1)
#define M33_TRCIDR3_SYNCPR(v) (((v)&0x1)<<25)
#define M33_TRCIDR3_SYNCPR_MASK M33_TRCIDR3_SYNCPR(ALL1)
#define M33_TRCIDR3_TRCERR(v) (((v)&0x1)<<24)
#define M33_TRCIDR3_TRCERR_MASK M33_TRCIDR3_TRCERR(ALL1)
#define M33_TRCIDR3_EXLEVEL_NS(v) (((v)&0xf)<<20)
#define M33_TRCIDR3_EXLEVEL_NS_MASK M33_TRCIDR3_EXLEVEL_NS(ALL1)
#define M33_TRCIDR3_EXLEVEL_S(v) (((v)&0xf)<<16)
#define M33_TRCIDR3_EXLEVEL_S_MASK M33_TRCIDR3_EXLEVEL_S(ALL1)
#define M33_TRCIDR3_CCITMIN(v) (((v)&0xfff)<<0)
#define M33_TRCIDR3_CCITMIN_MASK M33_TRCIDR3_CCITMIN(ALL1)

/*TRCIDR4 Register macros*/

#define M33_TRCIDR4_NUMVMIDC(v) (((v)&0xf)<<28)
#define M33_TRCIDR4_NUMVMIDC_MASK M33_TRCIDR4_NUMVMIDC(ALL1)
#define M33_TRCIDR4_NUMCIDC(v) (((v)&0xf)<<24)
#define M33_TRCIDR4_NUMCIDC_MASK M33_TRCIDR4_NUMCIDC(ALL1)
#define M33_TRCIDR4_NUMSSCC(v) (((v)&0xf)<<20)
#define M33_TRCIDR4_NUMSSCC_MASK M33_TRCIDR4_NUMSSCC(ALL1)
#define M33_TRCIDR4_NUMRSPAIR(v) (((v)&0xf)<<16)
#define M33_TRCIDR4_NUMRSPAIR_MASK M33_TRCIDR4_NUMRSPAIR(ALL1)
#define M33_TRCIDR4_NUMPC(v) (((v)&0xf)<<12)
#define M33_TRCIDR4_NUMPC_MASK M33_TRCIDR4_NUMPC(ALL1)
#define M33_TRCIDR4_SUPPDAC(v) (((v)&0x1)<<8)
#define M33_TRCIDR4_SUPPDAC_MASK M33_TRCIDR4_SUPPDAC(ALL1)
#define M33_TRCIDR4_NUMDVC(v) (((v)&0xf)<<4)
#define M33_TRCIDR4_NUMDVC_MASK M33_TRCIDR4_NUMDVC(ALL1)
#define M33_TRCIDR4_NUMACPAIRS(v) (((v)&0xf)<<0)
#define M33_TRCIDR4_NUMACPAIRS_MASK M33_TRCIDR4_NUMACPAIRS(ALL1)

/*TRCIDR5 Register macros*/

#define M33_TRCIDR5_REDFUNCNTR(v) (((v)&0x1)<<31)
#define M33_TRCIDR5_REDFUNCNTR_MASK M33_TRCIDR5_REDFUNCNTR(ALL1)
#define M33_TRCIDR5_NUMCNTR(v) (((v)&0x7)<<28)
#define M33_TRCIDR5_NUMCNTR_MASK M33_TRCIDR5_NUMCNTR(ALL1)
#define M33_TRCIDR5_NUMSEQSTATE(v) (((v)&0x7)<<25)
#define M33_TRCIDR5_NUMSEQSTATE_MASK M33_TRCIDR5_NUMSEQSTATE(ALL1)
#define M33_TRCIDR5_LPOVERRIDE(v) (((v)&0x1)<<23)
#define M33_TRCIDR5_LPOVERRIDE_MASK M33_TRCIDR5_LPOVERRIDE(ALL1)
#define M33_TRCIDR5_ATBTRIG(v) (((v)&0x1)<<22)
#define M33_TRCIDR5_ATBTRIG_MASK M33_TRCIDR5_ATBTRIG(ALL1)
#define M33_TRCIDR5_TRACEIDSIZE(v) (((v)&0x3f)<<16)
#define M33_TRCIDR5_TRACEIDSIZE_MASK M33_TRCIDR5_TRACEIDSIZE(ALL1)
#define M33_TRCIDR5_NUMEXTINSEL(v) (((v)&0x7)<<9)
#define M33_TRCIDR5_NUMEXTINSEL_MASK M33_TRCIDR5_NUMEXTINSEL(ALL1)
#define M33_TRCIDR5_NUMEXTIN(v) (((v)&0x1ff)<<0)
#define M33_TRCIDR5_NUMEXTIN_MASK M33_TRCIDR5_NUMEXTIN(ALL1)

/*TRCIDR6 Register macros*/


/*TRCIDR7 Register macros*/


/*TRCRSCTLR2 Register macros*/

#define M33_TRCRSCTLR2_PAIRINV(v) (((v)&0x1)<<21)
#define M33_TRCRSCTLR2_PAIRINV_MASK M33_TRCRSCTLR2_PAIRINV(ALL1)
#define M33_TRCRSCTLR2_INV(v) (((v)&0x1)<<20)
#define M33_TRCRSCTLR2_INV_MASK M33_TRCRSCTLR2_INV(ALL1)
#define M33_TRCRSCTLR2_GROUP(v) (((v)&0x7)<<16)
#define M33_TRCRSCTLR2_GROUP_MASK M33_TRCRSCTLR2_GROUP(ALL1)
#define M33_TRCRSCTLR2_SELECT(v) (((v)&0xff)<<0)
#define M33_TRCRSCTLR2_SELECT_MASK M33_TRCRSCTLR2_SELECT(ALL1)

/*TRCRSCTLR3 Register macros*/

#define M33_TRCRSCTLR3_PAIRINV(v) (((v)&0x1)<<21)
#define M33_TRCRSCTLR3_PAIRINV_MASK M33_TRCRSCTLR3_PAIRINV(ALL1)
#define M33_TRCRSCTLR3_INV(v) (((v)&0x1)<<20)
#define M33_TRCRSCTLR3_INV_MASK M33_TRCRSCTLR3_INV(ALL1)
#define M33_TRCRSCTLR3_GROUP(v) (((v)&0x7)<<16)
#define M33_TRCRSCTLR3_GROUP_MASK M33_TRCRSCTLR3_GROUP(ALL1)
#define M33_TRCRSCTLR3_SELECT(v) (((v)&0xff)<<0)
#define M33_TRCRSCTLR3_SELECT_MASK M33_TRCRSCTLR3_SELECT(ALL1)

/*TRCSSCSR Register macros*/

#define M33_TRCSSCSR_STATUS(v) (((v)&0x1)<<31)
#define M33_TRCSSCSR_STATUS_MASK M33_TRCSSCSR_STATUS(ALL1)
#define M33_TRCSSCSR_PC(v) (((v)&0x1)<<3)
#define M33_TRCSSCSR_PC_MASK M33_TRCSSCSR_PC(ALL1)
#define M33_TRCSSCSR_DV(v) (((v)&0x1)<<2)
#define M33_TRCSSCSR_DV_MASK M33_TRCSSCSR_DV(ALL1)
#define M33_TRCSSCSR_DA(v) (((v)&0x1)<<1)
#define M33_TRCSSCSR_DA_MASK M33_TRCSSCSR_DA(ALL1)
#define M33_TRCSSCSR_INST(v) (((v)&0x1)<<0)
#define M33_TRCSSCSR_INST_MASK M33_TRCSSCSR_INST(ALL1)

/*TRCSSPCICR Register macros*/

#define M33_TRCSSPCICR_PC(v) (((v)&0xf)<<0)
#define M33_TRCSSPCICR_PC_MASK M33_TRCSSPCICR_PC(ALL1)

/*TRCPDCR Register macros*/

#define M33_TRCPDCR_PU(v) (((v)&0x1)<<3)
#define M33_TRCPDCR_PU_MASK M33_TRCPDCR_PU(ALL1)

/*TRCPDSR Register macros*/

#define M33_TRCPDSR_OSLK(v) (((v)&0x1)<<5)
#define M33_TRCPDSR_OSLK_MASK M33_TRCPDSR_OSLK(ALL1)
#define M33_TRCPDSR_STICKYPD(v) (((v)&0x1)<<1)
#define M33_TRCPDSR_STICKYPD_MASK M33_TRCPDSR_STICKYPD(ALL1)
#define M33_TRCPDSR_POWER(v) (((v)&0x1)<<0)
#define M33_TRCPDSR_POWER_MASK M33_TRCPDSR_POWER(ALL1)

/*TRCITATBIDR Register macros*/

#define M33_TRCITATBIDR_ID(v) (((v)&0x7f)<<0)
#define M33_TRCITATBIDR_ID_MASK M33_TRCITATBIDR_ID(ALL1)

/*TRCITIATBINR Register macros*/

#define M33_TRCITIATBINR_AFVALIDM(v) (((v)&0x1)<<1)
#define M33_TRCITIATBINR_AFVALIDM_MASK M33_TRCITIATBINR_AFVALIDM(ALL1)
#define M33_TRCITIATBINR_ATREADYM(v) (((v)&0x1)<<0)
#define M33_TRCITIATBINR_ATREADYM_MASK M33_TRCITIATBINR_ATREADYM(ALL1)

/*TRCITIATBOUTR Register macros*/

#define M33_TRCITIATBOUTR_AFREADY(v) (((v)&0x1)<<1)
#define M33_TRCITIATBOUTR_AFREADY_MASK M33_TRCITIATBOUTR_AFREADY(ALL1)
#define M33_TRCITIATBOUTR_ATVALID(v) (((v)&0x1)<<0)
#define M33_TRCITIATBOUTR_ATVALID_MASK M33_TRCITIATBOUTR_ATVALID(ALL1)

/*TRCCLAIMSET Register macros*/

#define M33_TRCCLAIMSET_SET3(v) (((v)&0x1)<<3)
#define M33_TRCCLAIMSET_SET3_MASK M33_TRCCLAIMSET_SET3(ALL1)
#define M33_TRCCLAIMSET_SET2(v) (((v)&0x1)<<2)
#define M33_TRCCLAIMSET_SET2_MASK M33_TRCCLAIMSET_SET2(ALL1)
#define M33_TRCCLAIMSET_SET1(v) (((v)&0x1)<<1)
#define M33_TRCCLAIMSET_SET1_MASK M33_TRCCLAIMSET_SET1(ALL1)
#define M33_TRCCLAIMSET_SET0(v) (((v)&0x1)<<0)
#define M33_TRCCLAIMSET_SET0_MASK M33_TRCCLAIMSET_SET0(ALL1)

/*TRCCLAIMCLR Register macros*/

#define M33_TRCCLAIMCLR_CLR3(v) (((v)&0x1)<<3)
#define M33_TRCCLAIMCLR_CLR3_MASK M33_TRCCLAIMCLR_CLR3(ALL1)
#define M33_TRCCLAIMCLR_CLR2(v) (((v)&0x1)<<2)
#define M33_TRCCLAIMCLR_CLR2_MASK M33_TRCCLAIMCLR_CLR2(ALL1)
#define M33_TRCCLAIMCLR_CLR1(v) (((v)&0x1)<<1)
#define M33_TRCCLAIMCLR_CLR1_MASK M33_TRCCLAIMCLR_CLR1(ALL1)
#define M33_TRCCLAIMCLR_CLR0(v) (((v)&0x1)<<0)
#define M33_TRCCLAIMCLR_CLR0_MASK M33_TRCCLAIMCLR_CLR0(ALL1)

/*TRCAUTHSTATUS Register macros*/

#define M33_TRCAUTHSTATUS_SNID(v) (((v)&0x3)<<6)
#define M33_TRCAUTHSTATUS_SNID_MASK M33_TRCAUTHSTATUS_SNID(ALL1)
#define M33_TRCAUTHSTATUS_SID(v) (((v)&0x3)<<4)
#define M33_TRCAUTHSTATUS_SID_MASK M33_TRCAUTHSTATUS_SID(ALL1)
#define M33_TRCAUTHSTATUS_NSNID(v) (((v)&0x3)<<2)
#define M33_TRCAUTHSTATUS_NSNID_MASK M33_TRCAUTHSTATUS_NSNID(ALL1)
#define M33_TRCAUTHSTATUS_NSID(v) (((v)&0x3)<<0)
#define M33_TRCAUTHSTATUS_NSID_MASK M33_TRCAUTHSTATUS_NSID(ALL1)

/*TRCDEVARCH Register macros*/

#define M33_TRCDEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_TRCDEVARCH_ARCHITECT_MASK M33_TRCDEVARCH_ARCHITECT(ALL1)
#define M33_TRCDEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_TRCDEVARCH_PRESENT_MASK M33_TRCDEVARCH_PRESENT(ALL1)
#define M33_TRCDEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_TRCDEVARCH_REVISION_MASK M33_TRCDEVARCH_REVISION(ALL1)
#define M33_TRCDEVARCH_ARCHID(v) (((v)&0xffff)<<0)
#define M33_TRCDEVARCH_ARCHID_MASK M33_TRCDEVARCH_ARCHID(ALL1)

/*TRCDEVID Register macros*/


/*TRCDEVTYPE Register macros*/

#define M33_TRCDEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_TRCDEVTYPE_SUB_MASK M33_TRCDEVTYPE_SUB(ALL1)
#define M33_TRCDEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_TRCDEVTYPE_MAJOR_MASK M33_TRCDEVTYPE_MAJOR(ALL1)

/*TRCPIDR4 Register macros*/

#define M33_TRCPIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_TRCPIDR4_SIZE_MASK M33_TRCPIDR4_SIZE(ALL1)
#define M33_TRCPIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_TRCPIDR4_DES_2_MASK M33_TRCPIDR4_DES_2(ALL1)

/*TRCPIDR5 Register macros*/


/*TRCPIDR6 Register macros*/


/*TRCPIDR7 Register macros*/


/*TRCPIDR0 Register macros*/

#define M33_TRCPIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_TRCPIDR0_PART_0_MASK M33_TRCPIDR0_PART_0(ALL1)

/*TRCPIDR1 Register macros*/

#define M33_TRCPIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_TRCPIDR1_DES_0_MASK M33_TRCPIDR1_DES_0(ALL1)
#define M33_TRCPIDR1_PART_0(v) (((v)&0xf)<<0)
#define M33_TRCPIDR1_PART_0_MASK M33_TRCPIDR1_PART_0(ALL1)

/*TRCPIDR2 Register macros*/

#define M33_TRCPIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_TRCPIDR2_REVISION_MASK M33_TRCPIDR2_REVISION(ALL1)
#define M33_TRCPIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_TRCPIDR2_JEDEC_MASK M33_TRCPIDR2_JEDEC(ALL1)
#define M33_TRCPIDR2_DES_0(v) (((v)&0x7)<<0)
#define M33_TRCPIDR2_DES_0_MASK M33_TRCPIDR2_DES_0(ALL1)

/*TRCPIDR3 Register macros*/

#define M33_TRCPIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_TRCPIDR3_REVAND_MASK M33_TRCPIDR3_REVAND(ALL1)
#define M33_TRCPIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_TRCPIDR3_CMOD_MASK M33_TRCPIDR3_CMOD(ALL1)

/*TRCCIDR0 Register macros*/

#define M33_TRCCIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_TRCCIDR0_PRMBL_0_MASK M33_TRCCIDR0_PRMBL_0(ALL1)

/*TRCCIDR1 Register macros*/

#define M33_TRCCIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_TRCCIDR1_CLASS_MASK M33_TRCCIDR1_CLASS(ALL1)
#define M33_TRCCIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_TRCCIDR1_PRMBL_1_MASK M33_TRCCIDR1_PRMBL_1(ALL1)

/*TRCCIDR2 Register macros*/

#define M33_TRCCIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_TRCCIDR2_PRMBL_2_MASK M33_TRCCIDR2_PRMBL_2(ALL1)

/*TRCCIDR3 Register macros*/

#define M33_TRCCIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_TRCCIDR3_PRMBL_3_MASK M33_TRCCIDR3_PRMBL_3(ALL1)

/*CTICONTROL Register macros*/

#define M33_CTICONTROL_GLBEN(v) (((v)&0x1)<<0)
#define M33_CTICONTROL_GLBEN_MASK M33_CTICONTROL_GLBEN(ALL1)

/*CTIINTACK Register macros*/

#define M33_CTIINTACK_INTACK(v) (((v)&0xff)<<0)
#define M33_CTIINTACK_INTACK_MASK M33_CTIINTACK_INTACK(ALL1)

/*CTIAPPSET Register macros*/

#define M33_CTIAPPSET_APPSET(v) (((v)&0xf)<<0)
#define M33_CTIAPPSET_APPSET_MASK M33_CTIAPPSET_APPSET(ALL1)

/*CTIAPPCLEAR Register macros*/

#define M33_CTIAPPCLEAR_APPCLEAR(v) (((v)&0xf)<<0)
#define M33_CTIAPPCLEAR_APPCLEAR_MASK M33_CTIAPPCLEAR_APPCLEAR(ALL1)

/*CTIAPPPULSE Register macros*/

#define M33_CTIAPPPULSE_APPULSE(v) (((v)&0xf)<<0)
#define M33_CTIAPPPULSE_APPULSE_MASK M33_CTIAPPPULSE_APPULSE(ALL1)

/*CTIINEN0 Register macros*/

#define M33_CTIINEN0_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN0_TRIGINEN_MASK M33_CTIINEN0_TRIGINEN(ALL1)

/*CTIINEN1 Register macros*/

#define M33_CTIINEN1_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN1_TRIGINEN_MASK M33_CTIINEN1_TRIGINEN(ALL1)

/*CTIINEN2 Register macros*/

#define M33_CTIINEN2_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN2_TRIGINEN_MASK M33_CTIINEN2_TRIGINEN(ALL1)

/*CTIINEN3 Register macros*/

#define M33_CTIINEN3_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN3_TRIGINEN_MASK M33_CTIINEN3_TRIGINEN(ALL1)

/*CTIINEN4 Register macros*/

#define M33_CTIINEN4_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN4_TRIGINEN_MASK M33_CTIINEN4_TRIGINEN(ALL1)

/*CTIINEN5 Register macros*/

#define M33_CTIINEN5_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN5_TRIGINEN_MASK M33_CTIINEN5_TRIGINEN(ALL1)

/*CTIINEN6 Register macros*/

#define M33_CTIINEN6_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN6_TRIGINEN_MASK M33_CTIINEN6_TRIGINEN(ALL1)

/*CTIINEN7 Register macros*/

#define M33_CTIINEN7_TRIGINEN(v) (((v)&0xf)<<0)
#define M33_CTIINEN7_TRIGINEN_MASK M33_CTIINEN7_TRIGINEN(ALL1)

/*CTIOUTEN0 Register macros*/

#define M33_CTIOUTEN0_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN0_TRIGOUTEN_MASK M33_CTIOUTEN0_TRIGOUTEN(ALL1)

/*CTIOUTEN1 Register macros*/

#define M33_CTIOUTEN1_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN1_TRIGOUTEN_MASK M33_CTIOUTEN1_TRIGOUTEN(ALL1)

/*CTIOUTEN2 Register macros*/

#define M33_CTIOUTEN2_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN2_TRIGOUTEN_MASK M33_CTIOUTEN2_TRIGOUTEN(ALL1)

/*CTIOUTEN3 Register macros*/

#define M33_CTIOUTEN3_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN3_TRIGOUTEN_MASK M33_CTIOUTEN3_TRIGOUTEN(ALL1)

/*CTIOUTEN4 Register macros*/

#define M33_CTIOUTEN4_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN4_TRIGOUTEN_MASK M33_CTIOUTEN4_TRIGOUTEN(ALL1)

/*CTIOUTEN5 Register macros*/

#define M33_CTIOUTEN5_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN5_TRIGOUTEN_MASK M33_CTIOUTEN5_TRIGOUTEN(ALL1)

/*CTIOUTEN6 Register macros*/

#define M33_CTIOUTEN6_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN6_TRIGOUTEN_MASK M33_CTIOUTEN6_TRIGOUTEN(ALL1)

/*CTIOUTEN7 Register macros*/

#define M33_CTIOUTEN7_TRIGOUTEN(v) (((v)&0xf)<<0)
#define M33_CTIOUTEN7_TRIGOUTEN_MASK M33_CTIOUTEN7_TRIGOUTEN(ALL1)

/*CTITRIGINSTATUS Register macros*/

#define M33_CTITRIGINSTATUS_TRIGINSTATUS(v) (((v)&0xff)<<0)
#define M33_CTITRIGINSTATUS_TRIGINSTATUS_MASK M33_CTITRIGINSTATUS_TRIGINSTATUS(ALL1)

/*CTITRIGOUTSTATUS Register macros*/

#define M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS(v) (((v)&0xff)<<0)
#define M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS_MASK M33_CTITRIGOUTSTATUS_TRIGOUTSTATUS(ALL1)

/*CTICHINSTATUS Register macros*/

#define M33_CTICHINSTATUS_CTICHOUTSTATUS(v) (((v)&0xf)<<0)
#define M33_CTICHINSTATUS_CTICHOUTSTATUS_MASK M33_CTICHINSTATUS_CTICHOUTSTATUS(ALL1)

/*CTIGATE Register macros*/

#define M33_CTIGATE_CTIGATEEN3(v) (((v)&0x1)<<3)
#define M33_CTIGATE_CTIGATEEN3_MASK M33_CTIGATE_CTIGATEEN3(ALL1)
#define M33_CTIGATE_CTIGATEEN2(v) (((v)&0x1)<<2)
#define M33_CTIGATE_CTIGATEEN2_MASK M33_CTIGATE_CTIGATEEN2(ALL1)
#define M33_CTIGATE_CTIGATEEN1(v) (((v)&0x1)<<1)
#define M33_CTIGATE_CTIGATEEN1_MASK M33_CTIGATE_CTIGATEEN1(ALL1)
#define M33_CTIGATE_CTIGATEEN0(v) (((v)&0x1)<<0)
#define M33_CTIGATE_CTIGATEEN0_MASK M33_CTIGATE_CTIGATEEN0(ALL1)

/*ASICCTL Register macros*/


/*ITCHOUT Register macros*/

#define M33_ITCHOUT_CTCHOUT(v) (((v)&0xf)<<0)
#define M33_ITCHOUT_CTCHOUT_MASK M33_ITCHOUT_CTCHOUT(ALL1)

/*ITTRIGOUT Register macros*/

#define M33_ITTRIGOUT_CTTRIGOUT(v) (((v)&0xff)<<0)
#define M33_ITTRIGOUT_CTTRIGOUT_MASK M33_ITTRIGOUT_CTTRIGOUT(ALL1)

/*ITCHIN Register macros*/

#define M33_ITCHIN_CTCHIN(v) (((v)&0xf)<<0)
#define M33_ITCHIN_CTCHIN_MASK M33_ITCHIN_CTCHIN(ALL1)

/*ITCTRL Register macros*/

#define M33_ITCTRL_IME(v) (((v)&0x1)<<0)
#define M33_ITCTRL_IME_MASK M33_ITCTRL_IME(ALL1)

/*DEVARCH Register macros*/

#define M33_DEVARCH_ARCHITECT(v) (((v)&0x7ff)<<21)
#define M33_DEVARCH_ARCHITECT_MASK M33_DEVARCH_ARCHITECT(ALL1)
#define M33_DEVARCH_PRESENT(v) (((v)&0x1)<<20)
#define M33_DEVARCH_PRESENT_MASK M33_DEVARCH_PRESENT(ALL1)
#define M33_DEVARCH_REVISION(v) (((v)&0xf)<<16)
#define M33_DEVARCH_REVISION_MASK M33_DEVARCH_REVISION(ALL1)
#define M33_DEVARCH_ARCHID(v) (((v)&0xffff)<<0)
#define M33_DEVARCH_ARCHID_MASK M33_DEVARCH_ARCHID(ALL1)

/*DEVID Register macros*/

#define M33_DEVID_NUMCH(v) (((v)&0xf)<<16)
#define M33_DEVID_NUMCH_MASK M33_DEVID_NUMCH(ALL1)
#define M33_DEVID_NUMTRIG(v) (((v)&0xff)<<8)
#define M33_DEVID_NUMTRIG_MASK M33_DEVID_NUMTRIG(ALL1)
#define M33_DEVID_EXTMUXNUM(v) (((v)&0x1f)<<0)
#define M33_DEVID_EXTMUXNUM_MASK M33_DEVID_EXTMUXNUM(ALL1)

/*DEVTYPE Register macros*/

#define M33_DEVTYPE_SUB(v) (((v)&0xf)<<4)
#define M33_DEVTYPE_SUB_MASK M33_DEVTYPE_SUB(ALL1)
#define M33_DEVTYPE_MAJOR(v) (((v)&0xf)<<0)
#define M33_DEVTYPE_MAJOR_MASK M33_DEVTYPE_MAJOR(ALL1)

/*PIDR4 Register macros*/

#define M33_PIDR4_SIZE(v) (((v)&0xf)<<4)
#define M33_PIDR4_SIZE_MASK M33_PIDR4_SIZE(ALL1)
#define M33_PIDR4_DES_2(v) (((v)&0xf)<<0)
#define M33_PIDR4_DES_2_MASK M33_PIDR4_DES_2(ALL1)

/*PIDR5 Register macros*/


/*PIDR6 Register macros*/


/*PIDR7 Register macros*/


/*PIDR0 Register macros*/

#define M33_PIDR0_PART_0(v) (((v)&0xff)<<0)
#define M33_PIDR0_PART_0_MASK M33_PIDR0_PART_0(ALL1)

/*PIDR1 Register macros*/

#define M33_PIDR1_DES_0(v) (((v)&0xf)<<4)
#define M33_PIDR1_DES_0_MASK M33_PIDR1_DES_0(ALL1)
#define M33_PIDR1_PART_1(v) (((v)&0xf)<<0)
#define M33_PIDR1_PART_1_MASK M33_PIDR1_PART_1(ALL1)

/*PIDR2 Register macros*/

#define M33_PIDR2_REVISION(v) (((v)&0xf)<<4)
#define M33_PIDR2_REVISION_MASK M33_PIDR2_REVISION(ALL1)
#define M33_PIDR2_JEDEC(v) (((v)&0x1)<<3)
#define M33_PIDR2_JEDEC_MASK M33_PIDR2_JEDEC(ALL1)
#define M33_PIDR2_DES_1(v) (((v)&0x7)<<0)
#define M33_PIDR2_DES_1_MASK M33_PIDR2_DES_1(ALL1)

/*PIDR3 Register macros*/

#define M33_PIDR3_REVAND(v) (((v)&0xf)<<4)
#define M33_PIDR3_REVAND_MASK M33_PIDR3_REVAND(ALL1)
#define M33_PIDR3_CMOD(v) (((v)&0xf)<<0)
#define M33_PIDR3_CMOD_MASK M33_PIDR3_CMOD(ALL1)

/*CIDR0 Register macros*/

#define M33_CIDR0_PRMBL_0(v) (((v)&0xff)<<0)
#define M33_CIDR0_PRMBL_0_MASK M33_CIDR0_PRMBL_0(ALL1)

/*CIDR1 Register macros*/

#define M33_CIDR1_CLASS(v) (((v)&0xf)<<4)
#define M33_CIDR1_CLASS_MASK M33_CIDR1_CLASS(ALL1)
#define M33_CIDR1_PRMBL_1(v) (((v)&0xf)<<0)
#define M33_CIDR1_PRMBL_1_MASK M33_CIDR1_PRMBL_1(ALL1)

/*CIDR2 Register macros*/

#define M33_CIDR2_PRMBL_2(v) (((v)&0xff)<<0)
#define M33_CIDR2_PRMBL_2_MASK M33_CIDR2_PRMBL_2(ALL1)

/*CIDR3 Register macros*/

#define M33_CIDR3_PRMBL_3(v) (((v)&0xff)<<0)
#define M33_CIDR3_PRMBL_3_MASK M33_CIDR3_PRMBL_3(ALL1)

#endif
