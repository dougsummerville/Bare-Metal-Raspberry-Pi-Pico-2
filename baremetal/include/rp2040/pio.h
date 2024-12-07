
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

#ifndef RP2040_PIO_H
#define RP2040_PIO_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t ctrl;
		uint32_t fstat;
		uint32_t fdebug;
		uint32_t flevel;
		uint32_t txf0;
		uint32_t txf1;
		uint32_t txf2;
		uint32_t txf3;
		uint32_t rxf0;
		uint32_t rxf1;
		uint32_t rxf2;
		uint32_t rxf3;
		uint32_t irq;
		uint32_t irq_force;
		uint32_t input_sync_bypass;
		uint32_t dbg_padout;
		uint32_t dbg_padoe;
		uint32_t dbg_cfginfo;
		uint32_t instr_mem0;
		uint32_t instr_mem1;
		uint32_t instr_mem2;
		uint32_t instr_mem3;
		uint32_t instr_mem4;
		uint32_t instr_mem5;
		uint32_t instr_mem6;
		uint32_t instr_mem7;
		uint32_t instr_mem8;
		uint32_t instr_mem9;
		uint32_t instr_mem10;
		uint32_t instr_mem11;
		uint32_t instr_mem12;
		uint32_t instr_mem13;
		uint32_t instr_mem14;
		uint32_t instr_mem15;
		uint32_t instr_mem16;
		uint32_t instr_mem17;
		uint32_t instr_mem18;
		uint32_t instr_mem19;
		uint32_t instr_mem20;
		uint32_t instr_mem21;
		uint32_t instr_mem22;
		uint32_t instr_mem23;
		uint32_t instr_mem24;
		uint32_t instr_mem25;
		uint32_t instr_mem26;
		uint32_t instr_mem27;
		uint32_t instr_mem28;
		uint32_t instr_mem29;
		uint32_t instr_mem30;
		uint32_t instr_mem31;
		uint32_t sm0_clkdiv;
		uint32_t sm0_execctrl;
		uint32_t sm0_shiftctrl;
		uint32_t sm0_addr;
		uint32_t sm0_instr;
		uint32_t sm0_pinctrl;
		uint32_t sm1_clkdiv;
		uint32_t sm1_execctrl;
		uint32_t sm1_shiftctrl;
		uint32_t sm1_addr;
		uint32_t sm1_instr;
		uint32_t sm1_pinctrl;
		uint32_t sm2_clkdiv;
		uint32_t sm2_execctrl;
		uint32_t sm2_shiftctrl;
		uint32_t sm2_addr;
		uint32_t sm2_instr;
		uint32_t sm2_pinctrl;
		uint32_t sm3_clkdiv;
		uint32_t sm3_execctrl;
		uint32_t sm3_shiftctrl;
		uint32_t sm3_addr;
		uint32_t sm3_instr;
		uint32_t sm3_pinctrl;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[943];
		uint32_t xor_ctrl;
		uint32_t xor_fstat;
		uint32_t xor_fdebug;
		uint32_t xor_flevel;
		uint32_t xor_txf0;
		uint32_t xor_txf1;
		uint32_t xor_txf2;
		uint32_t xor_txf3;
		uint32_t xor_rxf0;
		uint32_t xor_rxf1;
		uint32_t xor_rxf2;
		uint32_t xor_rxf3;
		uint32_t xor_irq;
		uint32_t xor_irq_force;
		uint32_t xor_input_sync_bypass;
		uint32_t xor_dbg_padout;
		uint32_t xor_dbg_padoe;
		uint32_t xor_dbg_cfginfo;
		uint32_t xor_instr_mem0;
		uint32_t xor_instr_mem1;
		uint32_t xor_instr_mem2;
		uint32_t xor_instr_mem3;
		uint32_t xor_instr_mem4;
		uint32_t xor_instr_mem5;
		uint32_t xor_instr_mem6;
		uint32_t xor_instr_mem7;
		uint32_t xor_instr_mem8;
		uint32_t xor_instr_mem9;
		uint32_t xor_instr_mem10;
		uint32_t xor_instr_mem11;
		uint32_t xor_instr_mem12;
		uint32_t xor_instr_mem13;
		uint32_t xor_instr_mem14;
		uint32_t xor_instr_mem15;
		uint32_t xor_instr_mem16;
		uint32_t xor_instr_mem17;
		uint32_t xor_instr_mem18;
		uint32_t xor_instr_mem19;
		uint32_t xor_instr_mem20;
		uint32_t xor_instr_mem21;
		uint32_t xor_instr_mem22;
		uint32_t xor_instr_mem23;
		uint32_t xor_instr_mem24;
		uint32_t xor_instr_mem25;
		uint32_t xor_instr_mem26;
		uint32_t xor_instr_mem27;
		uint32_t xor_instr_mem28;
		uint32_t xor_instr_mem29;
		uint32_t xor_instr_mem30;
		uint32_t xor_instr_mem31;
		uint32_t xor_sm0_clkdiv;
		uint32_t xor_sm0_execctrl;
		uint32_t xor_sm0_shiftctrl;
		uint32_t xor_sm0_addr;
		uint32_t xor_sm0_instr;
		uint32_t xor_sm0_pinctrl;
		uint32_t xor_sm1_clkdiv;
		uint32_t xor_sm1_execctrl;
		uint32_t xor_sm1_shiftctrl;
		uint32_t xor_sm1_addr;
		uint32_t xor_sm1_instr;
		uint32_t xor_sm1_pinctrl;
		uint32_t xor_sm2_clkdiv;
		uint32_t xor_sm2_execctrl;
		uint32_t xor_sm2_shiftctrl;
		uint32_t xor_sm2_addr;
		uint32_t xor_sm2_instr;
		uint32_t xor_sm2_pinctrl;
		uint32_t xor_sm3_clkdiv;
		uint32_t xor_sm3_execctrl;
		uint32_t xor_sm3_shiftctrl;
		uint32_t xor_sm3_addr;
		uint32_t xor_sm3_instr;
		uint32_t xor_sm3_pinctrl;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[943];
		uint32_t set_ctrl;
		uint32_t set_fstat;
		uint32_t set_fdebug;
		uint32_t set_flevel;
		uint32_t set_txf0;
		uint32_t set_txf1;
		uint32_t set_txf2;
		uint32_t set_txf3;
		uint32_t set_rxf0;
		uint32_t set_rxf1;
		uint32_t set_rxf2;
		uint32_t set_rxf3;
		uint32_t set_irq;
		uint32_t set_irq_force;
		uint32_t set_input_sync_bypass;
		uint32_t set_dbg_padout;
		uint32_t set_dbg_padoe;
		uint32_t set_dbg_cfginfo;
		uint32_t set_instr_mem0;
		uint32_t set_instr_mem1;
		uint32_t set_instr_mem2;
		uint32_t set_instr_mem3;
		uint32_t set_instr_mem4;
		uint32_t set_instr_mem5;
		uint32_t set_instr_mem6;
		uint32_t set_instr_mem7;
		uint32_t set_instr_mem8;
		uint32_t set_instr_mem9;
		uint32_t set_instr_mem10;
		uint32_t set_instr_mem11;
		uint32_t set_instr_mem12;
		uint32_t set_instr_mem13;
		uint32_t set_instr_mem14;
		uint32_t set_instr_mem15;
		uint32_t set_instr_mem16;
		uint32_t set_instr_mem17;
		uint32_t set_instr_mem18;
		uint32_t set_instr_mem19;
		uint32_t set_instr_mem20;
		uint32_t set_instr_mem21;
		uint32_t set_instr_mem22;
		uint32_t set_instr_mem23;
		uint32_t set_instr_mem24;
		uint32_t set_instr_mem25;
		uint32_t set_instr_mem26;
		uint32_t set_instr_mem27;
		uint32_t set_instr_mem28;
		uint32_t set_instr_mem29;
		uint32_t set_instr_mem30;
		uint32_t set_instr_mem31;
		uint32_t set_sm0_clkdiv;
		uint32_t set_sm0_execctrl;
		uint32_t set_sm0_shiftctrl;
		uint32_t set_sm0_addr;
		uint32_t set_sm0_instr;
		uint32_t set_sm0_pinctrl;
		uint32_t set_sm1_clkdiv;
		uint32_t set_sm1_execctrl;
		uint32_t set_sm1_shiftctrl;
		uint32_t set_sm1_addr;
		uint32_t set_sm1_instr;
		uint32_t set_sm1_pinctrl;
		uint32_t set_sm2_clkdiv;
		uint32_t set_sm2_execctrl;
		uint32_t set_sm2_shiftctrl;
		uint32_t set_sm2_addr;
		uint32_t set_sm2_instr;
		uint32_t set_sm2_pinctrl;
		uint32_t set_sm3_clkdiv;
		uint32_t set_sm3_execctrl;
		uint32_t set_sm3_shiftctrl;
		uint32_t set_sm3_addr;
		uint32_t set_sm3_instr;
		uint32_t set_sm3_pinctrl;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[943];
		uint32_t clr_ctrl;
		uint32_t clr_fstat;
		uint32_t clr_fdebug;
		uint32_t clr_flevel;
		uint32_t clr_txf0;
		uint32_t clr_txf1;
		uint32_t clr_txf2;
		uint32_t clr_txf3;
		uint32_t clr_rxf0;
		uint32_t clr_rxf1;
		uint32_t clr_rxf2;
		uint32_t clr_rxf3;
		uint32_t clr_irq;
		uint32_t clr_irq_force;
		uint32_t clr_input_sync_bypass;
		uint32_t clr_dbg_padout;
		uint32_t clr_dbg_padoe;
		uint32_t clr_dbg_cfginfo;
		uint32_t clr_instr_mem0;
		uint32_t clr_instr_mem1;
		uint32_t clr_instr_mem2;
		uint32_t clr_instr_mem3;
		uint32_t clr_instr_mem4;
		uint32_t clr_instr_mem5;
		uint32_t clr_instr_mem6;
		uint32_t clr_instr_mem7;
		uint32_t clr_instr_mem8;
		uint32_t clr_instr_mem9;
		uint32_t clr_instr_mem10;
		uint32_t clr_instr_mem11;
		uint32_t clr_instr_mem12;
		uint32_t clr_instr_mem13;
		uint32_t clr_instr_mem14;
		uint32_t clr_instr_mem15;
		uint32_t clr_instr_mem16;
		uint32_t clr_instr_mem17;
		uint32_t clr_instr_mem18;
		uint32_t clr_instr_mem19;
		uint32_t clr_instr_mem20;
		uint32_t clr_instr_mem21;
		uint32_t clr_instr_mem22;
		uint32_t clr_instr_mem23;
		uint32_t clr_instr_mem24;
		uint32_t clr_instr_mem25;
		uint32_t clr_instr_mem26;
		uint32_t clr_instr_mem27;
		uint32_t clr_instr_mem28;
		uint32_t clr_instr_mem29;
		uint32_t clr_instr_mem30;
		uint32_t clr_instr_mem31;
		uint32_t clr_sm0_clkdiv;
		uint32_t clr_sm0_execctrl;
		uint32_t clr_sm0_shiftctrl;
		uint32_t clr_sm0_addr;
		uint32_t clr_sm0_instr;
		uint32_t clr_sm0_pinctrl;
		uint32_t clr_sm1_clkdiv;
		uint32_t clr_sm1_execctrl;
		uint32_t clr_sm1_shiftctrl;
		uint32_t clr_sm1_addr;
		uint32_t clr_sm1_instr;
		uint32_t clr_sm1_pinctrl;
		uint32_t clr_sm2_clkdiv;
		uint32_t clr_sm2_execctrl;
		uint32_t clr_sm2_shiftctrl;
		uint32_t clr_sm2_addr;
		uint32_t clr_sm2_instr;
		uint32_t clr_sm2_pinctrl;
		uint32_t clr_sm3_clkdiv;
		uint32_t clr_sm3_execctrl;
		uint32_t clr_sm3_shiftctrl;
		uint32_t clr_sm3_addr;
		uint32_t clr_sm3_instr;
		uint32_t clr_sm3_pinctrl;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[943];
} PIO0_REG_BLOCKS;
typedef struct{
		uint32_t ctrl;
		uint32_t fstat;
		uint32_t fdebug;
		uint32_t flevel;
		uint32_t txf0;
		uint32_t txf1;
		uint32_t txf2;
		uint32_t txf3;
		uint32_t rxf0;
		uint32_t rxf1;
		uint32_t rxf2;
		uint32_t rxf3;
		uint32_t irq;
		uint32_t irq_force;
		uint32_t input_sync_bypass;
		uint32_t dbg_padout;
		uint32_t dbg_padoe;
		uint32_t dbg_cfginfo;
		uint32_t instr_mem0;
		uint32_t instr_mem1;
		uint32_t instr_mem2;
		uint32_t instr_mem3;
		uint32_t instr_mem4;
		uint32_t instr_mem5;
		uint32_t instr_mem6;
		uint32_t instr_mem7;
		uint32_t instr_mem8;
		uint32_t instr_mem9;
		uint32_t instr_mem10;
		uint32_t instr_mem11;
		uint32_t instr_mem12;
		uint32_t instr_mem13;
		uint32_t instr_mem14;
		uint32_t instr_mem15;
		uint32_t instr_mem16;
		uint32_t instr_mem17;
		uint32_t instr_mem18;
		uint32_t instr_mem19;
		uint32_t instr_mem20;
		uint32_t instr_mem21;
		uint32_t instr_mem22;
		uint32_t instr_mem23;
		uint32_t instr_mem24;
		uint32_t instr_mem25;
		uint32_t instr_mem26;
		uint32_t instr_mem27;
		uint32_t instr_mem28;
		uint32_t instr_mem29;
		uint32_t instr_mem30;
		uint32_t instr_mem31;
		uint32_t sm0_clkdiv;
		uint32_t sm0_execctrl;
		uint32_t sm0_shiftctrl;
		uint32_t sm0_addr;
		uint32_t sm0_instr;
		uint32_t sm0_pinctrl;
		uint32_t sm1_clkdiv;
		uint32_t sm1_execctrl;
		uint32_t sm1_shiftctrl;
		uint32_t sm1_addr;
		uint32_t sm1_instr;
		uint32_t sm1_pinctrl;
		uint32_t sm2_clkdiv;
		uint32_t sm2_execctrl;
		uint32_t sm2_shiftctrl;
		uint32_t sm2_addr;
		uint32_t sm2_instr;
		uint32_t sm2_pinctrl;
		uint32_t sm3_clkdiv;
		uint32_t sm3_execctrl;
		uint32_t sm3_shiftctrl;
		uint32_t sm3_addr;
		uint32_t sm3_instr;
		uint32_t sm3_pinctrl;
		uint32_t intr;
		uint32_t irq0_inte;
		uint32_t irq0_intf;
		uint32_t irq0_ints;
		uint32_t irq1_inte;
		uint32_t irq1_intf;
		uint32_t irq1_ints;
		uint32_t RSVD0[943];
		uint32_t xor_ctrl;
		uint32_t xor_fstat;
		uint32_t xor_fdebug;
		uint32_t xor_flevel;
		uint32_t xor_txf0;
		uint32_t xor_txf1;
		uint32_t xor_txf2;
		uint32_t xor_txf3;
		uint32_t xor_rxf0;
		uint32_t xor_rxf1;
		uint32_t xor_rxf2;
		uint32_t xor_rxf3;
		uint32_t xor_irq;
		uint32_t xor_irq_force;
		uint32_t xor_input_sync_bypass;
		uint32_t xor_dbg_padout;
		uint32_t xor_dbg_padoe;
		uint32_t xor_dbg_cfginfo;
		uint32_t xor_instr_mem0;
		uint32_t xor_instr_mem1;
		uint32_t xor_instr_mem2;
		uint32_t xor_instr_mem3;
		uint32_t xor_instr_mem4;
		uint32_t xor_instr_mem5;
		uint32_t xor_instr_mem6;
		uint32_t xor_instr_mem7;
		uint32_t xor_instr_mem8;
		uint32_t xor_instr_mem9;
		uint32_t xor_instr_mem10;
		uint32_t xor_instr_mem11;
		uint32_t xor_instr_mem12;
		uint32_t xor_instr_mem13;
		uint32_t xor_instr_mem14;
		uint32_t xor_instr_mem15;
		uint32_t xor_instr_mem16;
		uint32_t xor_instr_mem17;
		uint32_t xor_instr_mem18;
		uint32_t xor_instr_mem19;
		uint32_t xor_instr_mem20;
		uint32_t xor_instr_mem21;
		uint32_t xor_instr_mem22;
		uint32_t xor_instr_mem23;
		uint32_t xor_instr_mem24;
		uint32_t xor_instr_mem25;
		uint32_t xor_instr_mem26;
		uint32_t xor_instr_mem27;
		uint32_t xor_instr_mem28;
		uint32_t xor_instr_mem29;
		uint32_t xor_instr_mem30;
		uint32_t xor_instr_mem31;
		uint32_t xor_sm0_clkdiv;
		uint32_t xor_sm0_execctrl;
		uint32_t xor_sm0_shiftctrl;
		uint32_t xor_sm0_addr;
		uint32_t xor_sm0_instr;
		uint32_t xor_sm0_pinctrl;
		uint32_t xor_sm1_clkdiv;
		uint32_t xor_sm1_execctrl;
		uint32_t xor_sm1_shiftctrl;
		uint32_t xor_sm1_addr;
		uint32_t xor_sm1_instr;
		uint32_t xor_sm1_pinctrl;
		uint32_t xor_sm2_clkdiv;
		uint32_t xor_sm2_execctrl;
		uint32_t xor_sm2_shiftctrl;
		uint32_t xor_sm2_addr;
		uint32_t xor_sm2_instr;
		uint32_t xor_sm2_pinctrl;
		uint32_t xor_sm3_clkdiv;
		uint32_t xor_sm3_execctrl;
		uint32_t xor_sm3_shiftctrl;
		uint32_t xor_sm3_addr;
		uint32_t xor_sm3_instr;
		uint32_t xor_sm3_pinctrl;
		uint32_t xor_intr;
		uint32_t xor_irq0_inte;
		uint32_t xor_irq0_intf;
		uint32_t xor_irq0_ints;
		uint32_t xor_irq1_inte;
		uint32_t xor_irq1_intf;
		uint32_t xor_irq1_ints;
		uint32_t RSVDxor_0[943];
		uint32_t set_ctrl;
		uint32_t set_fstat;
		uint32_t set_fdebug;
		uint32_t set_flevel;
		uint32_t set_txf0;
		uint32_t set_txf1;
		uint32_t set_txf2;
		uint32_t set_txf3;
		uint32_t set_rxf0;
		uint32_t set_rxf1;
		uint32_t set_rxf2;
		uint32_t set_rxf3;
		uint32_t set_irq;
		uint32_t set_irq_force;
		uint32_t set_input_sync_bypass;
		uint32_t set_dbg_padout;
		uint32_t set_dbg_padoe;
		uint32_t set_dbg_cfginfo;
		uint32_t set_instr_mem0;
		uint32_t set_instr_mem1;
		uint32_t set_instr_mem2;
		uint32_t set_instr_mem3;
		uint32_t set_instr_mem4;
		uint32_t set_instr_mem5;
		uint32_t set_instr_mem6;
		uint32_t set_instr_mem7;
		uint32_t set_instr_mem8;
		uint32_t set_instr_mem9;
		uint32_t set_instr_mem10;
		uint32_t set_instr_mem11;
		uint32_t set_instr_mem12;
		uint32_t set_instr_mem13;
		uint32_t set_instr_mem14;
		uint32_t set_instr_mem15;
		uint32_t set_instr_mem16;
		uint32_t set_instr_mem17;
		uint32_t set_instr_mem18;
		uint32_t set_instr_mem19;
		uint32_t set_instr_mem20;
		uint32_t set_instr_mem21;
		uint32_t set_instr_mem22;
		uint32_t set_instr_mem23;
		uint32_t set_instr_mem24;
		uint32_t set_instr_mem25;
		uint32_t set_instr_mem26;
		uint32_t set_instr_mem27;
		uint32_t set_instr_mem28;
		uint32_t set_instr_mem29;
		uint32_t set_instr_mem30;
		uint32_t set_instr_mem31;
		uint32_t set_sm0_clkdiv;
		uint32_t set_sm0_execctrl;
		uint32_t set_sm0_shiftctrl;
		uint32_t set_sm0_addr;
		uint32_t set_sm0_instr;
		uint32_t set_sm0_pinctrl;
		uint32_t set_sm1_clkdiv;
		uint32_t set_sm1_execctrl;
		uint32_t set_sm1_shiftctrl;
		uint32_t set_sm1_addr;
		uint32_t set_sm1_instr;
		uint32_t set_sm1_pinctrl;
		uint32_t set_sm2_clkdiv;
		uint32_t set_sm2_execctrl;
		uint32_t set_sm2_shiftctrl;
		uint32_t set_sm2_addr;
		uint32_t set_sm2_instr;
		uint32_t set_sm2_pinctrl;
		uint32_t set_sm3_clkdiv;
		uint32_t set_sm3_execctrl;
		uint32_t set_sm3_shiftctrl;
		uint32_t set_sm3_addr;
		uint32_t set_sm3_instr;
		uint32_t set_sm3_pinctrl;
		uint32_t set_intr;
		uint32_t set_irq0_inte;
		uint32_t set_irq0_intf;
		uint32_t set_irq0_ints;
		uint32_t set_irq1_inte;
		uint32_t set_irq1_intf;
		uint32_t set_irq1_ints;
		uint32_t RSVDset_0[943];
		uint32_t clr_ctrl;
		uint32_t clr_fstat;
		uint32_t clr_fdebug;
		uint32_t clr_flevel;
		uint32_t clr_txf0;
		uint32_t clr_txf1;
		uint32_t clr_txf2;
		uint32_t clr_txf3;
		uint32_t clr_rxf0;
		uint32_t clr_rxf1;
		uint32_t clr_rxf2;
		uint32_t clr_rxf3;
		uint32_t clr_irq;
		uint32_t clr_irq_force;
		uint32_t clr_input_sync_bypass;
		uint32_t clr_dbg_padout;
		uint32_t clr_dbg_padoe;
		uint32_t clr_dbg_cfginfo;
		uint32_t clr_instr_mem0;
		uint32_t clr_instr_mem1;
		uint32_t clr_instr_mem2;
		uint32_t clr_instr_mem3;
		uint32_t clr_instr_mem4;
		uint32_t clr_instr_mem5;
		uint32_t clr_instr_mem6;
		uint32_t clr_instr_mem7;
		uint32_t clr_instr_mem8;
		uint32_t clr_instr_mem9;
		uint32_t clr_instr_mem10;
		uint32_t clr_instr_mem11;
		uint32_t clr_instr_mem12;
		uint32_t clr_instr_mem13;
		uint32_t clr_instr_mem14;
		uint32_t clr_instr_mem15;
		uint32_t clr_instr_mem16;
		uint32_t clr_instr_mem17;
		uint32_t clr_instr_mem18;
		uint32_t clr_instr_mem19;
		uint32_t clr_instr_mem20;
		uint32_t clr_instr_mem21;
		uint32_t clr_instr_mem22;
		uint32_t clr_instr_mem23;
		uint32_t clr_instr_mem24;
		uint32_t clr_instr_mem25;
		uint32_t clr_instr_mem26;
		uint32_t clr_instr_mem27;
		uint32_t clr_instr_mem28;
		uint32_t clr_instr_mem29;
		uint32_t clr_instr_mem30;
		uint32_t clr_instr_mem31;
		uint32_t clr_sm0_clkdiv;
		uint32_t clr_sm0_execctrl;
		uint32_t clr_sm0_shiftctrl;
		uint32_t clr_sm0_addr;
		uint32_t clr_sm0_instr;
		uint32_t clr_sm0_pinctrl;
		uint32_t clr_sm1_clkdiv;
		uint32_t clr_sm1_execctrl;
		uint32_t clr_sm1_shiftctrl;
		uint32_t clr_sm1_addr;
		uint32_t clr_sm1_instr;
		uint32_t clr_sm1_pinctrl;
		uint32_t clr_sm2_clkdiv;
		uint32_t clr_sm2_execctrl;
		uint32_t clr_sm2_shiftctrl;
		uint32_t clr_sm2_addr;
		uint32_t clr_sm2_instr;
		uint32_t clr_sm2_pinctrl;
		uint32_t clr_sm3_clkdiv;
		uint32_t clr_sm3_execctrl;
		uint32_t clr_sm3_shiftctrl;
		uint32_t clr_sm3_addr;
		uint32_t clr_sm3_instr;
		uint32_t clr_sm3_pinctrl;
		uint32_t clr_intr;
		uint32_t clr_irq0_inte;
		uint32_t clr_irq0_intf;
		uint32_t clr_irq0_ints;
		uint32_t clr_irq1_inte;
		uint32_t clr_irq1_intf;
		uint32_t clr_irq1_ints;
		uint32_t RSVDclr_0[943];
} PIO1_REG_BLOCKS;

#define pio0 ((PIO0_REG_BLOCKS volatile *)0x50200000)

#define pio1 ((PIO1_REG_BLOCKS volatile *)0x50300000)

/*CTRL Register macros*/

#define PIO0_CTRL_CLKDIV_RESTART(v) (((v)&0xf)<<8)
#define PIO0_CTRL_CLKDIV_RESTART_MASK PIO0_CTRL_CLKDIV_RESTART(ALL1)
#define PIO0_CTRL_SM_RESTART(v) (((v)&0xf)<<4)
#define PIO0_CTRL_SM_RESTART_MASK PIO0_CTRL_SM_RESTART(ALL1)
#define PIO0_CTRL_SM_ENABLE(v) (((v)&0xf)<<0)
#define PIO0_CTRL_SM_ENABLE_MASK PIO0_CTRL_SM_ENABLE(ALL1)

/*FSTAT Register macros*/

#define PIO0_FSTAT_TXEMPTY(v) (((v)&0xf)<<24)
#define PIO0_FSTAT_TXEMPTY_MASK PIO0_FSTAT_TXEMPTY(ALL1)
#define PIO0_FSTAT_TXFULL(v) (((v)&0xf)<<16)
#define PIO0_FSTAT_TXFULL_MASK PIO0_FSTAT_TXFULL(ALL1)
#define PIO0_FSTAT_RXEMPTY(v) (((v)&0xf)<<8)
#define PIO0_FSTAT_RXEMPTY_MASK PIO0_FSTAT_RXEMPTY(ALL1)
#define PIO0_FSTAT_RXFULL(v) (((v)&0xf)<<0)
#define PIO0_FSTAT_RXFULL_MASK PIO0_FSTAT_RXFULL(ALL1)

/*FDEBUG Register macros*/

#define PIO0_FDEBUG_TXSTALL(v) (((v)&0xf)<<24)
#define PIO0_FDEBUG_TXSTALL_MASK PIO0_FDEBUG_TXSTALL(ALL1)
#define PIO0_FDEBUG_TXOVER(v) (((v)&0xf)<<16)
#define PIO0_FDEBUG_TXOVER_MASK PIO0_FDEBUG_TXOVER(ALL1)
#define PIO0_FDEBUG_RXUNDER(v) (((v)&0xf)<<8)
#define PIO0_FDEBUG_RXUNDER_MASK PIO0_FDEBUG_RXUNDER(ALL1)
#define PIO0_FDEBUG_RXSTALL(v) (((v)&0xf)<<0)
#define PIO0_FDEBUG_RXSTALL_MASK PIO0_FDEBUG_RXSTALL(ALL1)

/*FLEVEL Register macros*/

#define PIO0_FLEVEL_RX3(v) (((v)&0xf)<<28)
#define PIO0_FLEVEL_RX3_MASK PIO0_FLEVEL_RX3(ALL1)
#define PIO0_FLEVEL_TX3(v) (((v)&0xf)<<24)
#define PIO0_FLEVEL_TX3_MASK PIO0_FLEVEL_TX3(ALL1)
#define PIO0_FLEVEL_RX2(v) (((v)&0xf)<<20)
#define PIO0_FLEVEL_RX2_MASK PIO0_FLEVEL_RX2(ALL1)
#define PIO0_FLEVEL_TX2(v) (((v)&0xf)<<16)
#define PIO0_FLEVEL_TX2_MASK PIO0_FLEVEL_TX2(ALL1)
#define PIO0_FLEVEL_RX1(v) (((v)&0xf)<<12)
#define PIO0_FLEVEL_RX1_MASK PIO0_FLEVEL_RX1(ALL1)
#define PIO0_FLEVEL_TX1(v) (((v)&0xf)<<8)
#define PIO0_FLEVEL_TX1_MASK PIO0_FLEVEL_TX1(ALL1)
#define PIO0_FLEVEL_RX0(v) (((v)&0xf)<<4)
#define PIO0_FLEVEL_RX0_MASK PIO0_FLEVEL_RX0(ALL1)
#define PIO0_FLEVEL_TX0(v) (((v)&0xf)<<0)
#define PIO0_FLEVEL_TX0_MASK PIO0_FLEVEL_TX0(ALL1)

/*TXF0 Register macros*/


/*TXF1 Register macros*/


/*TXF2 Register macros*/


/*TXF3 Register macros*/


/*RXF0 Register macros*/


/*RXF1 Register macros*/


/*RXF2 Register macros*/


/*RXF3 Register macros*/


/*IRQ Register macros*/


/*IRQ_FORCE Register macros*/


/*INPUT_SYNC_BYPASS Register macros*/


/*DBG_PADOUT Register macros*/


/*DBG_PADOE Register macros*/


/*DBG_CFGINFO Register macros*/

#define PIO0_DBG_CFGINFO_IMEM_SIZE(v) (((v)&0x3f)<<16)
#define PIO0_DBG_CFGINFO_IMEM_SIZE_MASK PIO0_DBG_CFGINFO_IMEM_SIZE(ALL1)
#define PIO0_DBG_CFGINFO_SM_COUNT(v) (((v)&0xf)<<8)
#define PIO0_DBG_CFGINFO_SM_COUNT_MASK PIO0_DBG_CFGINFO_SM_COUNT(ALL1)
#define PIO0_DBG_CFGINFO_FIFO_DEPTH(v) (((v)&0x3f)<<0)
#define PIO0_DBG_CFGINFO_FIFO_DEPTH_MASK PIO0_DBG_CFGINFO_FIFO_DEPTH(ALL1)

/*INSTR_MEM0 Register macros*/


/*INSTR_MEM1 Register macros*/


/*INSTR_MEM2 Register macros*/


/*INSTR_MEM3 Register macros*/


/*INSTR_MEM4 Register macros*/


/*INSTR_MEM5 Register macros*/


/*INSTR_MEM6 Register macros*/


/*INSTR_MEM7 Register macros*/


/*INSTR_MEM8 Register macros*/


/*INSTR_MEM9 Register macros*/


/*INSTR_MEM10 Register macros*/


/*INSTR_MEM11 Register macros*/


/*INSTR_MEM12 Register macros*/


/*INSTR_MEM13 Register macros*/


/*INSTR_MEM14 Register macros*/


/*INSTR_MEM15 Register macros*/


/*INSTR_MEM16 Register macros*/


/*INSTR_MEM17 Register macros*/


/*INSTR_MEM18 Register macros*/


/*INSTR_MEM19 Register macros*/


/*INSTR_MEM20 Register macros*/


/*INSTR_MEM21 Register macros*/


/*INSTR_MEM22 Register macros*/


/*INSTR_MEM23 Register macros*/


/*INSTR_MEM24 Register macros*/


/*INSTR_MEM25 Register macros*/


/*INSTR_MEM26 Register macros*/


/*INSTR_MEM27 Register macros*/


/*INSTR_MEM28 Register macros*/


/*INSTR_MEM29 Register macros*/


/*INSTR_MEM30 Register macros*/


/*INSTR_MEM31 Register macros*/


/*SM0_CLKDIV Register macros*/

#define PIO0_SM0_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM0_CLKDIV_INT_MASK PIO0_SM0_CLKDIV_INT(ALL1)
#define PIO0_SM0_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM0_CLKDIV_FRAC_MASK PIO0_SM0_CLKDIV_FRAC(ALL1)

/*SM0_EXECCTRL Register macros*/

#define PIO0_SM0_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM0_EXECCTRL_EXEC_STALLED_MASK PIO0_SM0_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM0_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM0_EXECCTRL_SIDE_EN_MASK PIO0_SM0_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM0_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM0_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM0_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM0_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM0_EXECCTRL_JMP_PIN_MASK PIO0_SM0_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM0_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM0_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM0_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM0_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM0_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM0_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM0_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM0_EXECCTRL_OUT_STICKY_MASK PIO0_SM0_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM0_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM0_EXECCTRL_WRAP_TOP_MASK PIO0_SM0_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM0_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM0_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM0_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM0_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO0_SM0_EXECCTRL_STATUS_SEL_MASK PIO0_SM0_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM0_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO0_SM0_EXECCTRL_STATUS_N_MASK PIO0_SM0_EXECCTRL_STATUS_N(ALL1)

/*SM0_SHIFTCTRL Register macros*/

#define PIO0_SM0_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM0_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM0_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM0_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM0_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM0_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM0_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM0_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM0_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM0_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM0_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM0_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM0_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM0_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM0_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM0_SHIFTCTRL_AUTOPULL_MASK PIO0_SM0_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM0_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM0_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM0_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM0_ADDR Register macros*/


/*SM0_INSTR Register macros*/


/*SM0_PINCTRL Register macros*/

#define PIO0_SM0_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM0_PINCTRL_SIDESET_COUNT_MASK PIO0_SM0_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM0_PINCTRL_SET_COUNT_MASK PIO0_SM0_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM0_PINCTRL_OUT_COUNT_MASK PIO0_SM0_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM0_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM0_PINCTRL_IN_BASE_MASK PIO0_SM0_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM0_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM0_PINCTRL_SIDESET_BASE_MASK PIO0_SM0_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM0_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM0_PINCTRL_SET_BASE_MASK PIO0_SM0_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM0_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM0_PINCTRL_OUT_BASE_MASK PIO0_SM0_PINCTRL_OUT_BASE(ALL1)

/*SM1_CLKDIV Register macros*/

#define PIO0_SM1_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM1_CLKDIV_INT_MASK PIO0_SM1_CLKDIV_INT(ALL1)
#define PIO0_SM1_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM1_CLKDIV_FRAC_MASK PIO0_SM1_CLKDIV_FRAC(ALL1)

/*SM1_EXECCTRL Register macros*/

#define PIO0_SM1_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM1_EXECCTRL_EXEC_STALLED_MASK PIO0_SM1_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM1_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM1_EXECCTRL_SIDE_EN_MASK PIO0_SM1_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM1_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM1_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM1_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM1_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM1_EXECCTRL_JMP_PIN_MASK PIO0_SM1_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM1_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM1_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM1_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM1_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM1_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM1_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM1_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM1_EXECCTRL_OUT_STICKY_MASK PIO0_SM1_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM1_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM1_EXECCTRL_WRAP_TOP_MASK PIO0_SM1_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM1_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM1_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM1_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM1_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO0_SM1_EXECCTRL_STATUS_SEL_MASK PIO0_SM1_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM1_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO0_SM1_EXECCTRL_STATUS_N_MASK PIO0_SM1_EXECCTRL_STATUS_N(ALL1)

/*SM1_SHIFTCTRL Register macros*/

#define PIO0_SM1_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM1_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM1_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM1_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM1_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM1_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM1_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM1_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM1_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM1_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM1_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM1_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM1_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM1_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM1_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM1_SHIFTCTRL_AUTOPULL_MASK PIO0_SM1_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM1_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM1_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM1_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM1_ADDR Register macros*/


/*SM1_INSTR Register macros*/


/*SM1_PINCTRL Register macros*/

#define PIO0_SM1_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM1_PINCTRL_SIDESET_COUNT_MASK PIO0_SM1_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM1_PINCTRL_SET_COUNT_MASK PIO0_SM1_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM1_PINCTRL_OUT_COUNT_MASK PIO0_SM1_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM1_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM1_PINCTRL_IN_BASE_MASK PIO0_SM1_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM1_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM1_PINCTRL_SIDESET_BASE_MASK PIO0_SM1_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM1_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM1_PINCTRL_SET_BASE_MASK PIO0_SM1_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM1_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM1_PINCTRL_OUT_BASE_MASK PIO0_SM1_PINCTRL_OUT_BASE(ALL1)

/*SM2_CLKDIV Register macros*/

#define PIO0_SM2_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM2_CLKDIV_INT_MASK PIO0_SM2_CLKDIV_INT(ALL1)
#define PIO0_SM2_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM2_CLKDIV_FRAC_MASK PIO0_SM2_CLKDIV_FRAC(ALL1)

/*SM2_EXECCTRL Register macros*/

#define PIO0_SM2_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM2_EXECCTRL_EXEC_STALLED_MASK PIO0_SM2_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM2_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM2_EXECCTRL_SIDE_EN_MASK PIO0_SM2_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM2_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM2_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM2_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM2_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM2_EXECCTRL_JMP_PIN_MASK PIO0_SM2_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM2_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM2_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM2_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM2_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM2_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM2_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM2_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM2_EXECCTRL_OUT_STICKY_MASK PIO0_SM2_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM2_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM2_EXECCTRL_WRAP_TOP_MASK PIO0_SM2_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM2_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM2_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM2_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM2_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO0_SM2_EXECCTRL_STATUS_SEL_MASK PIO0_SM2_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM2_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO0_SM2_EXECCTRL_STATUS_N_MASK PIO0_SM2_EXECCTRL_STATUS_N(ALL1)

/*SM2_SHIFTCTRL Register macros*/

#define PIO0_SM2_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM2_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM2_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM2_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM2_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM2_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM2_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM2_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM2_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM2_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM2_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM2_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM2_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM2_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM2_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM2_SHIFTCTRL_AUTOPULL_MASK PIO0_SM2_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM2_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM2_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM2_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM2_ADDR Register macros*/


/*SM2_INSTR Register macros*/


/*SM2_PINCTRL Register macros*/

#define PIO0_SM2_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM2_PINCTRL_SIDESET_COUNT_MASK PIO0_SM2_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM2_PINCTRL_SET_COUNT_MASK PIO0_SM2_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM2_PINCTRL_OUT_COUNT_MASK PIO0_SM2_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM2_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM2_PINCTRL_IN_BASE_MASK PIO0_SM2_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM2_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM2_PINCTRL_SIDESET_BASE_MASK PIO0_SM2_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM2_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM2_PINCTRL_SET_BASE_MASK PIO0_SM2_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM2_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM2_PINCTRL_OUT_BASE_MASK PIO0_SM2_PINCTRL_OUT_BASE(ALL1)

/*SM3_CLKDIV Register macros*/

#define PIO0_SM3_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO0_SM3_CLKDIV_INT_MASK PIO0_SM3_CLKDIV_INT(ALL1)
#define PIO0_SM3_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO0_SM3_CLKDIV_FRAC_MASK PIO0_SM3_CLKDIV_FRAC(ALL1)

/*SM3_EXECCTRL Register macros*/

#define PIO0_SM3_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO0_SM3_EXECCTRL_EXEC_STALLED_MASK PIO0_SM3_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO0_SM3_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO0_SM3_EXECCTRL_SIDE_EN_MASK PIO0_SM3_EXECCTRL_SIDE_EN(ALL1)
#define PIO0_SM3_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO0_SM3_EXECCTRL_SIDE_PINDIR_MASK PIO0_SM3_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO0_SM3_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO0_SM3_EXECCTRL_JMP_PIN_MASK PIO0_SM3_EXECCTRL_JMP_PIN(ALL1)
#define PIO0_SM3_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO0_SM3_EXECCTRL_OUT_EN_SEL_MASK PIO0_SM3_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO0_SM3_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO0_SM3_EXECCTRL_INLINE_OUT_EN_MASK PIO0_SM3_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO0_SM3_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO0_SM3_EXECCTRL_OUT_STICKY_MASK PIO0_SM3_EXECCTRL_OUT_STICKY(ALL1)
#define PIO0_SM3_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO0_SM3_EXECCTRL_WRAP_TOP_MASK PIO0_SM3_EXECCTRL_WRAP_TOP(ALL1)
#define PIO0_SM3_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO0_SM3_EXECCTRL_WRAP_BOTTOM_MASK PIO0_SM3_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO0_SM3_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO0_SM3_EXECCTRL_STATUS_SEL_MASK PIO0_SM3_EXECCTRL_STATUS_SEL(ALL1)
#define PIO0_SM3_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO0_SM3_EXECCTRL_STATUS_N_MASK PIO0_SM3_EXECCTRL_STATUS_N(ALL1)

/*SM3_SHIFTCTRL Register macros*/

#define PIO0_SM3_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO0_SM3_SHIFTCTRL_FJOIN_RX_MASK PIO0_SM3_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO0_SM3_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO0_SM3_SHIFTCTRL_FJOIN_TX_MASK PIO0_SM3_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO0_SM3_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO0_SM3_SHIFTCTRL_PULL_THRESH_MASK PIO0_SM3_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO0_SM3_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO0_SM3_SHIFTCTRL_PUSH_THRESH_MASK PIO0_SM3_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO0_SM3_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR_MASK PIO0_SM3_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO0_SM3_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO0_SM3_SHIFTCTRL_AUTOPULL_MASK PIO0_SM3_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO0_SM3_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO0_SM3_SHIFTCTRL_AUTOPUSH_MASK PIO0_SM3_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM3_ADDR Register macros*/


/*SM3_INSTR Register macros*/


/*SM3_PINCTRL Register macros*/

#define PIO0_SM3_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO0_SM3_PINCTRL_SIDESET_COUNT_MASK PIO0_SM3_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO0_SM3_PINCTRL_SET_COUNT_MASK PIO0_SM3_PINCTRL_SET_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO0_SM3_PINCTRL_OUT_COUNT_MASK PIO0_SM3_PINCTRL_OUT_COUNT(ALL1)
#define PIO0_SM3_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO0_SM3_PINCTRL_IN_BASE_MASK PIO0_SM3_PINCTRL_IN_BASE(ALL1)
#define PIO0_SM3_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO0_SM3_PINCTRL_SIDESET_BASE_MASK PIO0_SM3_PINCTRL_SIDESET_BASE(ALL1)
#define PIO0_SM3_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO0_SM3_PINCTRL_SET_BASE_MASK PIO0_SM3_PINCTRL_SET_BASE(ALL1)
#define PIO0_SM3_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO0_SM3_PINCTRL_OUT_BASE_MASK PIO0_SM3_PINCTRL_OUT_BASE(ALL1)

/*INTR Register macros*/

#define PIO0_INTR_SM3(v) (((v)&0x1)<<11)
#define PIO0_INTR_SM3_MASK PIO0_INTR_SM3(ALL1)
#define PIO0_INTR_SM2(v) (((v)&0x1)<<10)
#define PIO0_INTR_SM2_MASK PIO0_INTR_SM2(ALL1)
#define PIO0_INTR_SM1(v) (((v)&0x1)<<9)
#define PIO0_INTR_SM1_MASK PIO0_INTR_SM1(ALL1)
#define PIO0_INTR_SM0(v) (((v)&0x1)<<8)
#define PIO0_INTR_SM0_MASK PIO0_INTR_SM0(ALL1)
#define PIO0_INTR_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_INTR_SM3_TXNFULL_MASK PIO0_INTR_SM3_TXNFULL(ALL1)
#define PIO0_INTR_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_INTR_SM2_TXNFULL_MASK PIO0_INTR_SM2_TXNFULL(ALL1)
#define PIO0_INTR_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_INTR_SM1_TXNFULL_MASK PIO0_INTR_SM1_TXNFULL(ALL1)
#define PIO0_INTR_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_INTR_SM0_TXNFULL_MASK PIO0_INTR_SM0_TXNFULL(ALL1)
#define PIO0_INTR_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_INTR_SM3_RXNEMPTY_MASK PIO0_INTR_SM3_RXNEMPTY(ALL1)
#define PIO0_INTR_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_INTR_SM2_RXNEMPTY_MASK PIO0_INTR_SM2_RXNEMPTY(ALL1)
#define PIO0_INTR_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_INTR_SM1_RXNEMPTY_MASK PIO0_INTR_SM1_RXNEMPTY(ALL1)
#define PIO0_INTR_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_INTR_SM0_RXNEMPTY_MASK PIO0_INTR_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTE Register macros*/

#define PIO0_IRQ0_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTE_SM3_MASK PIO0_IRQ0_INTE_SM3(ALL1)
#define PIO0_IRQ0_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTE_SM2_MASK PIO0_IRQ0_INTE_SM2(ALL1)
#define PIO0_IRQ0_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTE_SM1_MASK PIO0_IRQ0_INTE_SM1(ALL1)
#define PIO0_IRQ0_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTE_SM0_MASK PIO0_IRQ0_INTE_SM0(ALL1)
#define PIO0_IRQ0_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTE_SM3_TXNFULL_MASK PIO0_IRQ0_INTE_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTE_SM2_TXNFULL_MASK PIO0_IRQ0_INTE_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTE_SM1_TXNFULL_MASK PIO0_IRQ0_INTE_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTE_SM0_TXNFULL_MASK PIO0_IRQ0_INTE_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTE_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTE_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTE_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTE_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTF Register macros*/

#define PIO0_IRQ0_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTF_SM3_MASK PIO0_IRQ0_INTF_SM3(ALL1)
#define PIO0_IRQ0_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTF_SM2_MASK PIO0_IRQ0_INTF_SM2(ALL1)
#define PIO0_IRQ0_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTF_SM1_MASK PIO0_IRQ0_INTF_SM1(ALL1)
#define PIO0_IRQ0_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTF_SM0_MASK PIO0_IRQ0_INTF_SM0(ALL1)
#define PIO0_IRQ0_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTF_SM3_TXNFULL_MASK PIO0_IRQ0_INTF_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTF_SM2_TXNFULL_MASK PIO0_IRQ0_INTF_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTF_SM1_TXNFULL_MASK PIO0_IRQ0_INTF_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTF_SM0_TXNFULL_MASK PIO0_IRQ0_INTF_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTF_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTF_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTF_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTF_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTS Register macros*/

#define PIO0_IRQ0_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ0_INTS_SM3_MASK PIO0_IRQ0_INTS_SM3(ALL1)
#define PIO0_IRQ0_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ0_INTS_SM2_MASK PIO0_IRQ0_INTS_SM2(ALL1)
#define PIO0_IRQ0_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ0_INTS_SM1_MASK PIO0_IRQ0_INTS_SM1(ALL1)
#define PIO0_IRQ0_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ0_INTS_SM0_MASK PIO0_IRQ0_INTS_SM0(ALL1)
#define PIO0_IRQ0_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ0_INTS_SM3_TXNFULL_MASK PIO0_IRQ0_INTS_SM3_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ0_INTS_SM2_TXNFULL_MASK PIO0_IRQ0_INTS_SM2_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ0_INTS_SM1_TXNFULL_MASK PIO0_IRQ0_INTS_SM1_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ0_INTS_SM0_TXNFULL_MASK PIO0_IRQ0_INTS_SM0_TXNFULL(ALL1)
#define PIO0_IRQ0_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ0_INTS_SM3_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ0_INTS_SM2_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ0_INTS_SM1_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ0_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ0_INTS_SM0_RXNEMPTY_MASK PIO0_IRQ0_INTS_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTE Register macros*/

#define PIO0_IRQ1_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTE_SM3_MASK PIO0_IRQ1_INTE_SM3(ALL1)
#define PIO0_IRQ1_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTE_SM2_MASK PIO0_IRQ1_INTE_SM2(ALL1)
#define PIO0_IRQ1_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTE_SM1_MASK PIO0_IRQ1_INTE_SM1(ALL1)
#define PIO0_IRQ1_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTE_SM0_MASK PIO0_IRQ1_INTE_SM0(ALL1)
#define PIO0_IRQ1_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTE_SM3_TXNFULL_MASK PIO0_IRQ1_INTE_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTE_SM2_TXNFULL_MASK PIO0_IRQ1_INTE_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTE_SM1_TXNFULL_MASK PIO0_IRQ1_INTE_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTE_SM0_TXNFULL_MASK PIO0_IRQ1_INTE_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTE_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTE_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTE_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTE_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTF Register macros*/

#define PIO0_IRQ1_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTF_SM3_MASK PIO0_IRQ1_INTF_SM3(ALL1)
#define PIO0_IRQ1_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTF_SM2_MASK PIO0_IRQ1_INTF_SM2(ALL1)
#define PIO0_IRQ1_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTF_SM1_MASK PIO0_IRQ1_INTF_SM1(ALL1)
#define PIO0_IRQ1_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTF_SM0_MASK PIO0_IRQ1_INTF_SM0(ALL1)
#define PIO0_IRQ1_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTF_SM3_TXNFULL_MASK PIO0_IRQ1_INTF_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTF_SM2_TXNFULL_MASK PIO0_IRQ1_INTF_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTF_SM1_TXNFULL_MASK PIO0_IRQ1_INTF_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTF_SM0_TXNFULL_MASK PIO0_IRQ1_INTF_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTF_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTF_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTF_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTF_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTS Register macros*/

#define PIO0_IRQ1_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO0_IRQ1_INTS_SM3_MASK PIO0_IRQ1_INTS_SM3(ALL1)
#define PIO0_IRQ1_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO0_IRQ1_INTS_SM2_MASK PIO0_IRQ1_INTS_SM2(ALL1)
#define PIO0_IRQ1_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO0_IRQ1_INTS_SM1_MASK PIO0_IRQ1_INTS_SM1(ALL1)
#define PIO0_IRQ1_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO0_IRQ1_INTS_SM0_MASK PIO0_IRQ1_INTS_SM0(ALL1)
#define PIO0_IRQ1_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO0_IRQ1_INTS_SM3_TXNFULL_MASK PIO0_IRQ1_INTS_SM3_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO0_IRQ1_INTS_SM2_TXNFULL_MASK PIO0_IRQ1_INTS_SM2_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO0_IRQ1_INTS_SM1_TXNFULL_MASK PIO0_IRQ1_INTS_SM1_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO0_IRQ1_INTS_SM0_TXNFULL_MASK PIO0_IRQ1_INTS_SM0_TXNFULL(ALL1)
#define PIO0_IRQ1_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO0_IRQ1_INTS_SM3_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM3_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO0_IRQ1_INTS_SM2_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM2_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO0_IRQ1_INTS_SM1_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM1_RXNEMPTY(ALL1)
#define PIO0_IRQ1_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO0_IRQ1_INTS_SM0_RXNEMPTY_MASK PIO0_IRQ1_INTS_SM0_RXNEMPTY(ALL1)

/*CTRL Register macros*/

#define PIO1_CTRL_CLKDIV_RESTART(v) (((v)&0xf)<<8)
#define PIO1_CTRL_CLKDIV_RESTART_MASK PIO1_CTRL_CLKDIV_RESTART(ALL1)
#define PIO1_CTRL_SM_RESTART(v) (((v)&0xf)<<4)
#define PIO1_CTRL_SM_RESTART_MASK PIO1_CTRL_SM_RESTART(ALL1)
#define PIO1_CTRL_SM_ENABLE(v) (((v)&0xf)<<0)
#define PIO1_CTRL_SM_ENABLE_MASK PIO1_CTRL_SM_ENABLE(ALL1)

/*FSTAT Register macros*/

#define PIO1_FSTAT_TXEMPTY(v) (((v)&0xf)<<24)
#define PIO1_FSTAT_TXEMPTY_MASK PIO1_FSTAT_TXEMPTY(ALL1)
#define PIO1_FSTAT_TXFULL(v) (((v)&0xf)<<16)
#define PIO1_FSTAT_TXFULL_MASK PIO1_FSTAT_TXFULL(ALL1)
#define PIO1_FSTAT_RXEMPTY(v) (((v)&0xf)<<8)
#define PIO1_FSTAT_RXEMPTY_MASK PIO1_FSTAT_RXEMPTY(ALL1)
#define PIO1_FSTAT_RXFULL(v) (((v)&0xf)<<0)
#define PIO1_FSTAT_RXFULL_MASK PIO1_FSTAT_RXFULL(ALL1)

/*FDEBUG Register macros*/

#define PIO1_FDEBUG_TXSTALL(v) (((v)&0xf)<<24)
#define PIO1_FDEBUG_TXSTALL_MASK PIO1_FDEBUG_TXSTALL(ALL1)
#define PIO1_FDEBUG_TXOVER(v) (((v)&0xf)<<16)
#define PIO1_FDEBUG_TXOVER_MASK PIO1_FDEBUG_TXOVER(ALL1)
#define PIO1_FDEBUG_RXUNDER(v) (((v)&0xf)<<8)
#define PIO1_FDEBUG_RXUNDER_MASK PIO1_FDEBUG_RXUNDER(ALL1)
#define PIO1_FDEBUG_RXSTALL(v) (((v)&0xf)<<0)
#define PIO1_FDEBUG_RXSTALL_MASK PIO1_FDEBUG_RXSTALL(ALL1)

/*FLEVEL Register macros*/

#define PIO1_FLEVEL_RX3(v) (((v)&0xf)<<28)
#define PIO1_FLEVEL_RX3_MASK PIO1_FLEVEL_RX3(ALL1)
#define PIO1_FLEVEL_TX3(v) (((v)&0xf)<<24)
#define PIO1_FLEVEL_TX3_MASK PIO1_FLEVEL_TX3(ALL1)
#define PIO1_FLEVEL_RX2(v) (((v)&0xf)<<20)
#define PIO1_FLEVEL_RX2_MASK PIO1_FLEVEL_RX2(ALL1)
#define PIO1_FLEVEL_TX2(v) (((v)&0xf)<<16)
#define PIO1_FLEVEL_TX2_MASK PIO1_FLEVEL_TX2(ALL1)
#define PIO1_FLEVEL_RX1(v) (((v)&0xf)<<12)
#define PIO1_FLEVEL_RX1_MASK PIO1_FLEVEL_RX1(ALL1)
#define PIO1_FLEVEL_TX1(v) (((v)&0xf)<<8)
#define PIO1_FLEVEL_TX1_MASK PIO1_FLEVEL_TX1(ALL1)
#define PIO1_FLEVEL_RX0(v) (((v)&0xf)<<4)
#define PIO1_FLEVEL_RX0_MASK PIO1_FLEVEL_RX0(ALL1)
#define PIO1_FLEVEL_TX0(v) (((v)&0xf)<<0)
#define PIO1_FLEVEL_TX0_MASK PIO1_FLEVEL_TX0(ALL1)

/*TXF0 Register macros*/


/*TXF1 Register macros*/


/*TXF2 Register macros*/


/*TXF3 Register macros*/


/*RXF0 Register macros*/


/*RXF1 Register macros*/


/*RXF2 Register macros*/


/*RXF3 Register macros*/


/*IRQ Register macros*/


/*IRQ_FORCE Register macros*/


/*INPUT_SYNC_BYPASS Register macros*/


/*DBG_PADOUT Register macros*/


/*DBG_PADOE Register macros*/


/*DBG_CFGINFO Register macros*/

#define PIO1_DBG_CFGINFO_IMEM_SIZE(v) (((v)&0x3f)<<16)
#define PIO1_DBG_CFGINFO_IMEM_SIZE_MASK PIO1_DBG_CFGINFO_IMEM_SIZE(ALL1)
#define PIO1_DBG_CFGINFO_SM_COUNT(v) (((v)&0xf)<<8)
#define PIO1_DBG_CFGINFO_SM_COUNT_MASK PIO1_DBG_CFGINFO_SM_COUNT(ALL1)
#define PIO1_DBG_CFGINFO_FIFO_DEPTH(v) (((v)&0x3f)<<0)
#define PIO1_DBG_CFGINFO_FIFO_DEPTH_MASK PIO1_DBG_CFGINFO_FIFO_DEPTH(ALL1)

/*INSTR_MEM0 Register macros*/


/*INSTR_MEM1 Register macros*/


/*INSTR_MEM2 Register macros*/


/*INSTR_MEM3 Register macros*/


/*INSTR_MEM4 Register macros*/


/*INSTR_MEM5 Register macros*/


/*INSTR_MEM6 Register macros*/


/*INSTR_MEM7 Register macros*/


/*INSTR_MEM8 Register macros*/


/*INSTR_MEM9 Register macros*/


/*INSTR_MEM10 Register macros*/


/*INSTR_MEM11 Register macros*/


/*INSTR_MEM12 Register macros*/


/*INSTR_MEM13 Register macros*/


/*INSTR_MEM14 Register macros*/


/*INSTR_MEM15 Register macros*/


/*INSTR_MEM16 Register macros*/


/*INSTR_MEM17 Register macros*/


/*INSTR_MEM18 Register macros*/


/*INSTR_MEM19 Register macros*/


/*INSTR_MEM20 Register macros*/


/*INSTR_MEM21 Register macros*/


/*INSTR_MEM22 Register macros*/


/*INSTR_MEM23 Register macros*/


/*INSTR_MEM24 Register macros*/


/*INSTR_MEM25 Register macros*/


/*INSTR_MEM26 Register macros*/


/*INSTR_MEM27 Register macros*/


/*INSTR_MEM28 Register macros*/


/*INSTR_MEM29 Register macros*/


/*INSTR_MEM30 Register macros*/


/*INSTR_MEM31 Register macros*/


/*SM0_CLKDIV Register macros*/

#define PIO1_SM0_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM0_CLKDIV_INT_MASK PIO1_SM0_CLKDIV_INT(ALL1)
#define PIO1_SM0_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM0_CLKDIV_FRAC_MASK PIO1_SM0_CLKDIV_FRAC(ALL1)

/*SM0_EXECCTRL Register macros*/

#define PIO1_SM0_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM0_EXECCTRL_EXEC_STALLED_MASK PIO1_SM0_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM0_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM0_EXECCTRL_SIDE_EN_MASK PIO1_SM0_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM0_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM0_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM0_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM0_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM0_EXECCTRL_JMP_PIN_MASK PIO1_SM0_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM0_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM0_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM0_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM0_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM0_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM0_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM0_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM0_EXECCTRL_OUT_STICKY_MASK PIO1_SM0_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM0_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM0_EXECCTRL_WRAP_TOP_MASK PIO1_SM0_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM0_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM0_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM0_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM0_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO1_SM0_EXECCTRL_STATUS_SEL_MASK PIO1_SM0_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM0_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO1_SM0_EXECCTRL_STATUS_N_MASK PIO1_SM0_EXECCTRL_STATUS_N(ALL1)

/*SM0_SHIFTCTRL Register macros*/

#define PIO1_SM0_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM0_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM0_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM0_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM0_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM0_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM0_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM0_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM0_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM0_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM0_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM0_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM0_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM0_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM0_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM0_SHIFTCTRL_AUTOPULL_MASK PIO1_SM0_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM0_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM0_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM0_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM0_ADDR Register macros*/


/*SM0_INSTR Register macros*/


/*SM0_PINCTRL Register macros*/

#define PIO1_SM0_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM0_PINCTRL_SIDESET_COUNT_MASK PIO1_SM0_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM0_PINCTRL_SET_COUNT_MASK PIO1_SM0_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM0_PINCTRL_OUT_COUNT_MASK PIO1_SM0_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM0_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM0_PINCTRL_IN_BASE_MASK PIO1_SM0_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM0_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM0_PINCTRL_SIDESET_BASE_MASK PIO1_SM0_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM0_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM0_PINCTRL_SET_BASE_MASK PIO1_SM0_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM0_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM0_PINCTRL_OUT_BASE_MASK PIO1_SM0_PINCTRL_OUT_BASE(ALL1)

/*SM1_CLKDIV Register macros*/

#define PIO1_SM1_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM1_CLKDIV_INT_MASK PIO1_SM1_CLKDIV_INT(ALL1)
#define PIO1_SM1_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM1_CLKDIV_FRAC_MASK PIO1_SM1_CLKDIV_FRAC(ALL1)

/*SM1_EXECCTRL Register macros*/

#define PIO1_SM1_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM1_EXECCTRL_EXEC_STALLED_MASK PIO1_SM1_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM1_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM1_EXECCTRL_SIDE_EN_MASK PIO1_SM1_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM1_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM1_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM1_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM1_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM1_EXECCTRL_JMP_PIN_MASK PIO1_SM1_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM1_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM1_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM1_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM1_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM1_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM1_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM1_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM1_EXECCTRL_OUT_STICKY_MASK PIO1_SM1_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM1_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM1_EXECCTRL_WRAP_TOP_MASK PIO1_SM1_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM1_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM1_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM1_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM1_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO1_SM1_EXECCTRL_STATUS_SEL_MASK PIO1_SM1_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM1_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO1_SM1_EXECCTRL_STATUS_N_MASK PIO1_SM1_EXECCTRL_STATUS_N(ALL1)

/*SM1_SHIFTCTRL Register macros*/

#define PIO1_SM1_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM1_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM1_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM1_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM1_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM1_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM1_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM1_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM1_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM1_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM1_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM1_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM1_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM1_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM1_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM1_SHIFTCTRL_AUTOPULL_MASK PIO1_SM1_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM1_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM1_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM1_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM1_ADDR Register macros*/


/*SM1_INSTR Register macros*/


/*SM1_PINCTRL Register macros*/

#define PIO1_SM1_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM1_PINCTRL_SIDESET_COUNT_MASK PIO1_SM1_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM1_PINCTRL_SET_COUNT_MASK PIO1_SM1_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM1_PINCTRL_OUT_COUNT_MASK PIO1_SM1_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM1_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM1_PINCTRL_IN_BASE_MASK PIO1_SM1_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM1_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM1_PINCTRL_SIDESET_BASE_MASK PIO1_SM1_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM1_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM1_PINCTRL_SET_BASE_MASK PIO1_SM1_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM1_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM1_PINCTRL_OUT_BASE_MASK PIO1_SM1_PINCTRL_OUT_BASE(ALL1)

/*SM2_CLKDIV Register macros*/

#define PIO1_SM2_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM2_CLKDIV_INT_MASK PIO1_SM2_CLKDIV_INT(ALL1)
#define PIO1_SM2_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM2_CLKDIV_FRAC_MASK PIO1_SM2_CLKDIV_FRAC(ALL1)

/*SM2_EXECCTRL Register macros*/

#define PIO1_SM2_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM2_EXECCTRL_EXEC_STALLED_MASK PIO1_SM2_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM2_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM2_EXECCTRL_SIDE_EN_MASK PIO1_SM2_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM2_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM2_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM2_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM2_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM2_EXECCTRL_JMP_PIN_MASK PIO1_SM2_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM2_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM2_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM2_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM2_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM2_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM2_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM2_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM2_EXECCTRL_OUT_STICKY_MASK PIO1_SM2_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM2_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM2_EXECCTRL_WRAP_TOP_MASK PIO1_SM2_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM2_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM2_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM2_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM2_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO1_SM2_EXECCTRL_STATUS_SEL_MASK PIO1_SM2_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM2_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO1_SM2_EXECCTRL_STATUS_N_MASK PIO1_SM2_EXECCTRL_STATUS_N(ALL1)

/*SM2_SHIFTCTRL Register macros*/

#define PIO1_SM2_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM2_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM2_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM2_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM2_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM2_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM2_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM2_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM2_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM2_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM2_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM2_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM2_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM2_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM2_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM2_SHIFTCTRL_AUTOPULL_MASK PIO1_SM2_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM2_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM2_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM2_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM2_ADDR Register macros*/


/*SM2_INSTR Register macros*/


/*SM2_PINCTRL Register macros*/

#define PIO1_SM2_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM2_PINCTRL_SIDESET_COUNT_MASK PIO1_SM2_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM2_PINCTRL_SET_COUNT_MASK PIO1_SM2_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM2_PINCTRL_OUT_COUNT_MASK PIO1_SM2_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM2_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM2_PINCTRL_IN_BASE_MASK PIO1_SM2_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM2_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM2_PINCTRL_SIDESET_BASE_MASK PIO1_SM2_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM2_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM2_PINCTRL_SET_BASE_MASK PIO1_SM2_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM2_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM2_PINCTRL_OUT_BASE_MASK PIO1_SM2_PINCTRL_OUT_BASE(ALL1)

/*SM3_CLKDIV Register macros*/

#define PIO1_SM3_CLKDIV_INT(v) (((v)&0xffff)<<16)
#define PIO1_SM3_CLKDIV_INT_MASK PIO1_SM3_CLKDIV_INT(ALL1)
#define PIO1_SM3_CLKDIV_FRAC(v) (((v)&0xff)<<8)
#define PIO1_SM3_CLKDIV_FRAC_MASK PIO1_SM3_CLKDIV_FRAC(ALL1)

/*SM3_EXECCTRL Register macros*/

#define PIO1_SM3_EXECCTRL_EXEC_STALLED(v) (((v)&0x1)<<31)
#define PIO1_SM3_EXECCTRL_EXEC_STALLED_MASK PIO1_SM3_EXECCTRL_EXEC_STALLED(ALL1)
#define PIO1_SM3_EXECCTRL_SIDE_EN(v) (((v)&0x1)<<30)
#define PIO1_SM3_EXECCTRL_SIDE_EN_MASK PIO1_SM3_EXECCTRL_SIDE_EN(ALL1)
#define PIO1_SM3_EXECCTRL_SIDE_PINDIR(v) (((v)&0x1)<<29)
#define PIO1_SM3_EXECCTRL_SIDE_PINDIR_MASK PIO1_SM3_EXECCTRL_SIDE_PINDIR(ALL1)
#define PIO1_SM3_EXECCTRL_JMP_PIN(v) (((v)&0x1f)<<24)
#define PIO1_SM3_EXECCTRL_JMP_PIN_MASK PIO1_SM3_EXECCTRL_JMP_PIN(ALL1)
#define PIO1_SM3_EXECCTRL_OUT_EN_SEL(v) (((v)&0x1f)<<19)
#define PIO1_SM3_EXECCTRL_OUT_EN_SEL_MASK PIO1_SM3_EXECCTRL_OUT_EN_SEL(ALL1)
#define PIO1_SM3_EXECCTRL_INLINE_OUT_EN(v) (((v)&0x1)<<18)
#define PIO1_SM3_EXECCTRL_INLINE_OUT_EN_MASK PIO1_SM3_EXECCTRL_INLINE_OUT_EN(ALL1)
#define PIO1_SM3_EXECCTRL_OUT_STICKY(v) (((v)&0x1)<<17)
#define PIO1_SM3_EXECCTRL_OUT_STICKY_MASK PIO1_SM3_EXECCTRL_OUT_STICKY(ALL1)
#define PIO1_SM3_EXECCTRL_WRAP_TOP(v) (((v)&0x1f)<<12)
#define PIO1_SM3_EXECCTRL_WRAP_TOP_MASK PIO1_SM3_EXECCTRL_WRAP_TOP(ALL1)
#define PIO1_SM3_EXECCTRL_WRAP_BOTTOM(v) (((v)&0x1f)<<7)
#define PIO1_SM3_EXECCTRL_WRAP_BOTTOM_MASK PIO1_SM3_EXECCTRL_WRAP_BOTTOM(ALL1)
#define PIO1_SM3_EXECCTRL_STATUS_SEL(v) (((v)&0x1)<<4)
#define PIO1_SM3_EXECCTRL_STATUS_SEL_MASK PIO1_SM3_EXECCTRL_STATUS_SEL(ALL1)
#define PIO1_SM3_EXECCTRL_STATUS_N(v) (((v)&0xf)<<0)
#define PIO1_SM3_EXECCTRL_STATUS_N_MASK PIO1_SM3_EXECCTRL_STATUS_N(ALL1)

/*SM3_SHIFTCTRL Register macros*/

#define PIO1_SM3_SHIFTCTRL_FJOIN_RX(v) (((v)&0x1)<<31)
#define PIO1_SM3_SHIFTCTRL_FJOIN_RX_MASK PIO1_SM3_SHIFTCTRL_FJOIN_RX(ALL1)
#define PIO1_SM3_SHIFTCTRL_FJOIN_TX(v) (((v)&0x1)<<30)
#define PIO1_SM3_SHIFTCTRL_FJOIN_TX_MASK PIO1_SM3_SHIFTCTRL_FJOIN_TX(ALL1)
#define PIO1_SM3_SHIFTCTRL_PULL_THRESH(v) (((v)&0x1f)<<25)
#define PIO1_SM3_SHIFTCTRL_PULL_THRESH_MASK PIO1_SM3_SHIFTCTRL_PULL_THRESH(ALL1)
#define PIO1_SM3_SHIFTCTRL_PUSH_THRESH(v) (((v)&0x1f)<<20)
#define PIO1_SM3_SHIFTCTRL_PUSH_THRESH_MASK PIO1_SM3_SHIFTCTRL_PUSH_THRESH(ALL1)
#define PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR(v) (((v)&0x1)<<19)
#define PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR_MASK PIO1_SM3_SHIFTCTRL_OUT_SHIFTDIR(ALL1)
#define PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR(v) (((v)&0x1)<<18)
#define PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR_MASK PIO1_SM3_SHIFTCTRL_IN_SHIFTDIR(ALL1)
#define PIO1_SM3_SHIFTCTRL_AUTOPULL(v) (((v)&0x1)<<17)
#define PIO1_SM3_SHIFTCTRL_AUTOPULL_MASK PIO1_SM3_SHIFTCTRL_AUTOPULL(ALL1)
#define PIO1_SM3_SHIFTCTRL_AUTOPUSH(v) (((v)&0x1)<<16)
#define PIO1_SM3_SHIFTCTRL_AUTOPUSH_MASK PIO1_SM3_SHIFTCTRL_AUTOPUSH(ALL1)

/*SM3_ADDR Register macros*/


/*SM3_INSTR Register macros*/


/*SM3_PINCTRL Register macros*/

#define PIO1_SM3_PINCTRL_SIDESET_COUNT(v) (((v)&0x7)<<29)
#define PIO1_SM3_PINCTRL_SIDESET_COUNT_MASK PIO1_SM3_PINCTRL_SIDESET_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_SET_COUNT(v) (((v)&0x7)<<26)
#define PIO1_SM3_PINCTRL_SET_COUNT_MASK PIO1_SM3_PINCTRL_SET_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_OUT_COUNT(v) (((v)&0x3f)<<20)
#define PIO1_SM3_PINCTRL_OUT_COUNT_MASK PIO1_SM3_PINCTRL_OUT_COUNT(ALL1)
#define PIO1_SM3_PINCTRL_IN_BASE(v) (((v)&0x1f)<<15)
#define PIO1_SM3_PINCTRL_IN_BASE_MASK PIO1_SM3_PINCTRL_IN_BASE(ALL1)
#define PIO1_SM3_PINCTRL_SIDESET_BASE(v) (((v)&0x1f)<<10)
#define PIO1_SM3_PINCTRL_SIDESET_BASE_MASK PIO1_SM3_PINCTRL_SIDESET_BASE(ALL1)
#define PIO1_SM3_PINCTRL_SET_BASE(v) (((v)&0x1f)<<5)
#define PIO1_SM3_PINCTRL_SET_BASE_MASK PIO1_SM3_PINCTRL_SET_BASE(ALL1)
#define PIO1_SM3_PINCTRL_OUT_BASE(v) (((v)&0x1f)<<0)
#define PIO1_SM3_PINCTRL_OUT_BASE_MASK PIO1_SM3_PINCTRL_OUT_BASE(ALL1)

/*INTR Register macros*/

#define PIO1_INTR_SM3(v) (((v)&0x1)<<11)
#define PIO1_INTR_SM3_MASK PIO1_INTR_SM3(ALL1)
#define PIO1_INTR_SM2(v) (((v)&0x1)<<10)
#define PIO1_INTR_SM2_MASK PIO1_INTR_SM2(ALL1)
#define PIO1_INTR_SM1(v) (((v)&0x1)<<9)
#define PIO1_INTR_SM1_MASK PIO1_INTR_SM1(ALL1)
#define PIO1_INTR_SM0(v) (((v)&0x1)<<8)
#define PIO1_INTR_SM0_MASK PIO1_INTR_SM0(ALL1)
#define PIO1_INTR_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_INTR_SM3_TXNFULL_MASK PIO1_INTR_SM3_TXNFULL(ALL1)
#define PIO1_INTR_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_INTR_SM2_TXNFULL_MASK PIO1_INTR_SM2_TXNFULL(ALL1)
#define PIO1_INTR_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_INTR_SM1_TXNFULL_MASK PIO1_INTR_SM1_TXNFULL(ALL1)
#define PIO1_INTR_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_INTR_SM0_TXNFULL_MASK PIO1_INTR_SM0_TXNFULL(ALL1)
#define PIO1_INTR_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_INTR_SM3_RXNEMPTY_MASK PIO1_INTR_SM3_RXNEMPTY(ALL1)
#define PIO1_INTR_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_INTR_SM2_RXNEMPTY_MASK PIO1_INTR_SM2_RXNEMPTY(ALL1)
#define PIO1_INTR_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_INTR_SM1_RXNEMPTY_MASK PIO1_INTR_SM1_RXNEMPTY(ALL1)
#define PIO1_INTR_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_INTR_SM0_RXNEMPTY_MASK PIO1_INTR_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTE Register macros*/

#define PIO1_IRQ0_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTE_SM3_MASK PIO1_IRQ0_INTE_SM3(ALL1)
#define PIO1_IRQ0_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTE_SM2_MASK PIO1_IRQ0_INTE_SM2(ALL1)
#define PIO1_IRQ0_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTE_SM1_MASK PIO1_IRQ0_INTE_SM1(ALL1)
#define PIO1_IRQ0_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTE_SM0_MASK PIO1_IRQ0_INTE_SM0(ALL1)
#define PIO1_IRQ0_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTE_SM3_TXNFULL_MASK PIO1_IRQ0_INTE_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTE_SM2_TXNFULL_MASK PIO1_IRQ0_INTE_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTE_SM1_TXNFULL_MASK PIO1_IRQ0_INTE_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTE_SM0_TXNFULL_MASK PIO1_IRQ0_INTE_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTE_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTE_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTE_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTE_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTF Register macros*/

#define PIO1_IRQ0_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTF_SM3_MASK PIO1_IRQ0_INTF_SM3(ALL1)
#define PIO1_IRQ0_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTF_SM2_MASK PIO1_IRQ0_INTF_SM2(ALL1)
#define PIO1_IRQ0_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTF_SM1_MASK PIO1_IRQ0_INTF_SM1(ALL1)
#define PIO1_IRQ0_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTF_SM0_MASK PIO1_IRQ0_INTF_SM0(ALL1)
#define PIO1_IRQ0_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTF_SM3_TXNFULL_MASK PIO1_IRQ0_INTF_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTF_SM2_TXNFULL_MASK PIO1_IRQ0_INTF_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTF_SM1_TXNFULL_MASK PIO1_IRQ0_INTF_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTF_SM0_TXNFULL_MASK PIO1_IRQ0_INTF_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTF_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTF_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTF_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTF_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ0_INTS Register macros*/

#define PIO1_IRQ0_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ0_INTS_SM3_MASK PIO1_IRQ0_INTS_SM3(ALL1)
#define PIO1_IRQ0_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ0_INTS_SM2_MASK PIO1_IRQ0_INTS_SM2(ALL1)
#define PIO1_IRQ0_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ0_INTS_SM1_MASK PIO1_IRQ0_INTS_SM1(ALL1)
#define PIO1_IRQ0_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ0_INTS_SM0_MASK PIO1_IRQ0_INTS_SM0(ALL1)
#define PIO1_IRQ0_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ0_INTS_SM3_TXNFULL_MASK PIO1_IRQ0_INTS_SM3_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ0_INTS_SM2_TXNFULL_MASK PIO1_IRQ0_INTS_SM2_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ0_INTS_SM1_TXNFULL_MASK PIO1_IRQ0_INTS_SM1_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ0_INTS_SM0_TXNFULL_MASK PIO1_IRQ0_INTS_SM0_TXNFULL(ALL1)
#define PIO1_IRQ0_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ0_INTS_SM3_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ0_INTS_SM2_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ0_INTS_SM1_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ0_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ0_INTS_SM0_RXNEMPTY_MASK PIO1_IRQ0_INTS_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTE Register macros*/

#define PIO1_IRQ1_INTE_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTE_SM3_MASK PIO1_IRQ1_INTE_SM3(ALL1)
#define PIO1_IRQ1_INTE_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTE_SM2_MASK PIO1_IRQ1_INTE_SM2(ALL1)
#define PIO1_IRQ1_INTE_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTE_SM1_MASK PIO1_IRQ1_INTE_SM1(ALL1)
#define PIO1_IRQ1_INTE_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTE_SM0_MASK PIO1_IRQ1_INTE_SM0(ALL1)
#define PIO1_IRQ1_INTE_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTE_SM3_TXNFULL_MASK PIO1_IRQ1_INTE_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTE_SM2_TXNFULL_MASK PIO1_IRQ1_INTE_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTE_SM1_TXNFULL_MASK PIO1_IRQ1_INTE_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTE_SM0_TXNFULL_MASK PIO1_IRQ1_INTE_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTE_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTE_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTE_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTE_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTE_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTE_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTE_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTF Register macros*/

#define PIO1_IRQ1_INTF_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTF_SM3_MASK PIO1_IRQ1_INTF_SM3(ALL1)
#define PIO1_IRQ1_INTF_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTF_SM2_MASK PIO1_IRQ1_INTF_SM2(ALL1)
#define PIO1_IRQ1_INTF_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTF_SM1_MASK PIO1_IRQ1_INTF_SM1(ALL1)
#define PIO1_IRQ1_INTF_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTF_SM0_MASK PIO1_IRQ1_INTF_SM0(ALL1)
#define PIO1_IRQ1_INTF_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTF_SM3_TXNFULL_MASK PIO1_IRQ1_INTF_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTF_SM2_TXNFULL_MASK PIO1_IRQ1_INTF_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTF_SM1_TXNFULL_MASK PIO1_IRQ1_INTF_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTF_SM0_TXNFULL_MASK PIO1_IRQ1_INTF_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTF_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTF_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTF_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTF_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTF_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTF_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTF_SM0_RXNEMPTY(ALL1)

/*IRQ1_INTS Register macros*/

#define PIO1_IRQ1_INTS_SM3(v) (((v)&0x1)<<11)
#define PIO1_IRQ1_INTS_SM3_MASK PIO1_IRQ1_INTS_SM3(ALL1)
#define PIO1_IRQ1_INTS_SM2(v) (((v)&0x1)<<10)
#define PIO1_IRQ1_INTS_SM2_MASK PIO1_IRQ1_INTS_SM2(ALL1)
#define PIO1_IRQ1_INTS_SM1(v) (((v)&0x1)<<9)
#define PIO1_IRQ1_INTS_SM1_MASK PIO1_IRQ1_INTS_SM1(ALL1)
#define PIO1_IRQ1_INTS_SM0(v) (((v)&0x1)<<8)
#define PIO1_IRQ1_INTS_SM0_MASK PIO1_IRQ1_INTS_SM0(ALL1)
#define PIO1_IRQ1_INTS_SM3_TXNFULL(v) (((v)&0x1)<<7)
#define PIO1_IRQ1_INTS_SM3_TXNFULL_MASK PIO1_IRQ1_INTS_SM3_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM2_TXNFULL(v) (((v)&0x1)<<6)
#define PIO1_IRQ1_INTS_SM2_TXNFULL_MASK PIO1_IRQ1_INTS_SM2_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM1_TXNFULL(v) (((v)&0x1)<<5)
#define PIO1_IRQ1_INTS_SM1_TXNFULL_MASK PIO1_IRQ1_INTS_SM1_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM0_TXNFULL(v) (((v)&0x1)<<4)
#define PIO1_IRQ1_INTS_SM0_TXNFULL_MASK PIO1_IRQ1_INTS_SM0_TXNFULL(ALL1)
#define PIO1_IRQ1_INTS_SM3_RXNEMPTY(v) (((v)&0x1)<<3)
#define PIO1_IRQ1_INTS_SM3_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM3_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM2_RXNEMPTY(v) (((v)&0x1)<<2)
#define PIO1_IRQ1_INTS_SM2_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM2_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM1_RXNEMPTY(v) (((v)&0x1)<<1)
#define PIO1_IRQ1_INTS_SM1_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM1_RXNEMPTY(ALL1)
#define PIO1_IRQ1_INTS_SM0_RXNEMPTY(v) (((v)&0x1)<<0)
#define PIO1_IRQ1_INTS_SM0_RXNEMPTY_MASK PIO1_IRQ1_INTS_SM0_RXNEMPTY(ALL1)

#endif