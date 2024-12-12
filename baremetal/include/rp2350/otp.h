
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

#ifndef RP2350_OTP_H
#define RP2350_OTP_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_RAW_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_GUARDED_REG_BLOCKS;
typedef struct{
		uint32_t sw_lock0;
		uint32_t sw_lock1;
		uint32_t sw_lock2;
		uint32_t sw_lock3;
		uint32_t sw_lock4;
		uint32_t sw_lock5;
		uint32_t sw_lock6;
		uint32_t sw_lock7;
		uint32_t sw_lock8;
		uint32_t sw_lock9;
		uint32_t sw_lock10;
		uint32_t sw_lock11;
		uint32_t sw_lock12;
		uint32_t sw_lock13;
		uint32_t sw_lock14;
		uint32_t sw_lock15;
		uint32_t sw_lock16;
		uint32_t sw_lock17;
		uint32_t sw_lock18;
		uint32_t sw_lock19;
		uint32_t sw_lock20;
		uint32_t sw_lock21;
		uint32_t sw_lock22;
		uint32_t sw_lock23;
		uint32_t sw_lock24;
		uint32_t sw_lock25;
		uint32_t sw_lock26;
		uint32_t sw_lock27;
		uint32_t sw_lock28;
		uint32_t sw_lock29;
		uint32_t sw_lock30;
		uint32_t sw_lock31;
		uint32_t sw_lock32;
		uint32_t sw_lock33;
		uint32_t sw_lock34;
		uint32_t sw_lock35;
		uint32_t sw_lock36;
		uint32_t sw_lock37;
		uint32_t sw_lock38;
		uint32_t sw_lock39;
		uint32_t sw_lock40;
		uint32_t sw_lock41;
		uint32_t sw_lock42;
		uint32_t sw_lock43;
		uint32_t sw_lock44;
		uint32_t sw_lock45;
		uint32_t sw_lock46;
		uint32_t sw_lock47;
		uint32_t sw_lock48;
		uint32_t sw_lock49;
		uint32_t sw_lock50;
		uint32_t sw_lock51;
		uint32_t sw_lock52;
		uint32_t sw_lock53;
		uint32_t sw_lock54;
		uint32_t sw_lock55;
		uint32_t sw_lock56;
		uint32_t sw_lock57;
		uint32_t sw_lock58;
		uint32_t sw_lock59;
		uint32_t sw_lock60;
		uint32_t sw_lock61;
		uint32_t sw_lock62;
		uint32_t sw_lock63;
		uint32_t sbpi_instr;
		uint32_t sbpi_wdata_0;
		uint32_t sbpi_wdata_1;
		uint32_t sbpi_wdata_2;
		uint32_t sbpi_wdata_3;
		uint32_t sbpi_rdata_0;
		uint32_t sbpi_rdata_1;
		uint32_t sbpi_rdata_2;
		uint32_t sbpi_rdata_3;
		uint32_t sbpi_status;
		uint32_t usr;
		uint32_t dbg;
		uint32_t RSVD0;
		uint32_t bist;
		uint32_t crt_key_w0;
		uint32_t crt_key_w1;
		uint32_t crt_key_w2;
		uint32_t crt_key_w3;
		uint32_t critical;
		uint32_t key_valid;
		uint32_t debugen;
		uint32_t debugen_lock;
		uint32_t archsel;
		uint32_t archsel_status;
		uint32_t bootdis;
		uint32_t intr;
		uint32_t inte;
		uint32_t intf;
		uint32_t ints;
		uint32_t RSVD1[931];
		uint32_t xor_sw_lock0;
		uint32_t xor_sw_lock1;
		uint32_t xor_sw_lock2;
		uint32_t xor_sw_lock3;
		uint32_t xor_sw_lock4;
		uint32_t xor_sw_lock5;
		uint32_t xor_sw_lock6;
		uint32_t xor_sw_lock7;
		uint32_t xor_sw_lock8;
		uint32_t xor_sw_lock9;
		uint32_t xor_sw_lock10;
		uint32_t xor_sw_lock11;
		uint32_t xor_sw_lock12;
		uint32_t xor_sw_lock13;
		uint32_t xor_sw_lock14;
		uint32_t xor_sw_lock15;
		uint32_t xor_sw_lock16;
		uint32_t xor_sw_lock17;
		uint32_t xor_sw_lock18;
		uint32_t xor_sw_lock19;
		uint32_t xor_sw_lock20;
		uint32_t xor_sw_lock21;
		uint32_t xor_sw_lock22;
		uint32_t xor_sw_lock23;
		uint32_t xor_sw_lock24;
		uint32_t xor_sw_lock25;
		uint32_t xor_sw_lock26;
		uint32_t xor_sw_lock27;
		uint32_t xor_sw_lock28;
		uint32_t xor_sw_lock29;
		uint32_t xor_sw_lock30;
		uint32_t xor_sw_lock31;
		uint32_t xor_sw_lock32;
		uint32_t xor_sw_lock33;
		uint32_t xor_sw_lock34;
		uint32_t xor_sw_lock35;
		uint32_t xor_sw_lock36;
		uint32_t xor_sw_lock37;
		uint32_t xor_sw_lock38;
		uint32_t xor_sw_lock39;
		uint32_t xor_sw_lock40;
		uint32_t xor_sw_lock41;
		uint32_t xor_sw_lock42;
		uint32_t xor_sw_lock43;
		uint32_t xor_sw_lock44;
		uint32_t xor_sw_lock45;
		uint32_t xor_sw_lock46;
		uint32_t xor_sw_lock47;
		uint32_t xor_sw_lock48;
		uint32_t xor_sw_lock49;
		uint32_t xor_sw_lock50;
		uint32_t xor_sw_lock51;
		uint32_t xor_sw_lock52;
		uint32_t xor_sw_lock53;
		uint32_t xor_sw_lock54;
		uint32_t xor_sw_lock55;
		uint32_t xor_sw_lock56;
		uint32_t xor_sw_lock57;
		uint32_t xor_sw_lock58;
		uint32_t xor_sw_lock59;
		uint32_t xor_sw_lock60;
		uint32_t xor_sw_lock61;
		uint32_t xor_sw_lock62;
		uint32_t xor_sw_lock63;
		uint32_t xor_sbpi_instr;
		uint32_t xor_sbpi_wdata_0;
		uint32_t xor_sbpi_wdata_1;
		uint32_t xor_sbpi_wdata_2;
		uint32_t xor_sbpi_wdata_3;
		uint32_t xor_sbpi_rdata_0;
		uint32_t xor_sbpi_rdata_1;
		uint32_t xor_sbpi_rdata_2;
		uint32_t xor_sbpi_rdata_3;
		uint32_t xor_sbpi_status;
		uint32_t xor_usr;
		uint32_t xor_dbg;
		uint32_t RSVDxor_0;
		uint32_t xor_bist;
		uint32_t xor_crt_key_w0;
		uint32_t xor_crt_key_w1;
		uint32_t xor_crt_key_w2;
		uint32_t xor_crt_key_w3;
		uint32_t xor_critical;
		uint32_t xor_key_valid;
		uint32_t xor_debugen;
		uint32_t xor_debugen_lock;
		uint32_t xor_archsel;
		uint32_t xor_archsel_status;
		uint32_t xor_bootdis;
		uint32_t xor_intr;
		uint32_t xor_inte;
		uint32_t xor_intf;
		uint32_t xor_ints;
		uint32_t RSVDxor_1[931];
		uint32_t set_sw_lock0;
		uint32_t set_sw_lock1;
		uint32_t set_sw_lock2;
		uint32_t set_sw_lock3;
		uint32_t set_sw_lock4;
		uint32_t set_sw_lock5;
		uint32_t set_sw_lock6;
		uint32_t set_sw_lock7;
		uint32_t set_sw_lock8;
		uint32_t set_sw_lock9;
		uint32_t set_sw_lock10;
		uint32_t set_sw_lock11;
		uint32_t set_sw_lock12;
		uint32_t set_sw_lock13;
		uint32_t set_sw_lock14;
		uint32_t set_sw_lock15;
		uint32_t set_sw_lock16;
		uint32_t set_sw_lock17;
		uint32_t set_sw_lock18;
		uint32_t set_sw_lock19;
		uint32_t set_sw_lock20;
		uint32_t set_sw_lock21;
		uint32_t set_sw_lock22;
		uint32_t set_sw_lock23;
		uint32_t set_sw_lock24;
		uint32_t set_sw_lock25;
		uint32_t set_sw_lock26;
		uint32_t set_sw_lock27;
		uint32_t set_sw_lock28;
		uint32_t set_sw_lock29;
		uint32_t set_sw_lock30;
		uint32_t set_sw_lock31;
		uint32_t set_sw_lock32;
		uint32_t set_sw_lock33;
		uint32_t set_sw_lock34;
		uint32_t set_sw_lock35;
		uint32_t set_sw_lock36;
		uint32_t set_sw_lock37;
		uint32_t set_sw_lock38;
		uint32_t set_sw_lock39;
		uint32_t set_sw_lock40;
		uint32_t set_sw_lock41;
		uint32_t set_sw_lock42;
		uint32_t set_sw_lock43;
		uint32_t set_sw_lock44;
		uint32_t set_sw_lock45;
		uint32_t set_sw_lock46;
		uint32_t set_sw_lock47;
		uint32_t set_sw_lock48;
		uint32_t set_sw_lock49;
		uint32_t set_sw_lock50;
		uint32_t set_sw_lock51;
		uint32_t set_sw_lock52;
		uint32_t set_sw_lock53;
		uint32_t set_sw_lock54;
		uint32_t set_sw_lock55;
		uint32_t set_sw_lock56;
		uint32_t set_sw_lock57;
		uint32_t set_sw_lock58;
		uint32_t set_sw_lock59;
		uint32_t set_sw_lock60;
		uint32_t set_sw_lock61;
		uint32_t set_sw_lock62;
		uint32_t set_sw_lock63;
		uint32_t set_sbpi_instr;
		uint32_t set_sbpi_wdata_0;
		uint32_t set_sbpi_wdata_1;
		uint32_t set_sbpi_wdata_2;
		uint32_t set_sbpi_wdata_3;
		uint32_t set_sbpi_rdata_0;
		uint32_t set_sbpi_rdata_1;
		uint32_t set_sbpi_rdata_2;
		uint32_t set_sbpi_rdata_3;
		uint32_t set_sbpi_status;
		uint32_t set_usr;
		uint32_t set_dbg;
		uint32_t RSVDset_0;
		uint32_t set_bist;
		uint32_t set_crt_key_w0;
		uint32_t set_crt_key_w1;
		uint32_t set_crt_key_w2;
		uint32_t set_crt_key_w3;
		uint32_t set_critical;
		uint32_t set_key_valid;
		uint32_t set_debugen;
		uint32_t set_debugen_lock;
		uint32_t set_archsel;
		uint32_t set_archsel_status;
		uint32_t set_bootdis;
		uint32_t set_intr;
		uint32_t set_inte;
		uint32_t set_intf;
		uint32_t set_ints;
		uint32_t RSVDset_1[931];
		uint32_t clr_sw_lock0;
		uint32_t clr_sw_lock1;
		uint32_t clr_sw_lock2;
		uint32_t clr_sw_lock3;
		uint32_t clr_sw_lock4;
		uint32_t clr_sw_lock5;
		uint32_t clr_sw_lock6;
		uint32_t clr_sw_lock7;
		uint32_t clr_sw_lock8;
		uint32_t clr_sw_lock9;
		uint32_t clr_sw_lock10;
		uint32_t clr_sw_lock11;
		uint32_t clr_sw_lock12;
		uint32_t clr_sw_lock13;
		uint32_t clr_sw_lock14;
		uint32_t clr_sw_lock15;
		uint32_t clr_sw_lock16;
		uint32_t clr_sw_lock17;
		uint32_t clr_sw_lock18;
		uint32_t clr_sw_lock19;
		uint32_t clr_sw_lock20;
		uint32_t clr_sw_lock21;
		uint32_t clr_sw_lock22;
		uint32_t clr_sw_lock23;
		uint32_t clr_sw_lock24;
		uint32_t clr_sw_lock25;
		uint32_t clr_sw_lock26;
		uint32_t clr_sw_lock27;
		uint32_t clr_sw_lock28;
		uint32_t clr_sw_lock29;
		uint32_t clr_sw_lock30;
		uint32_t clr_sw_lock31;
		uint32_t clr_sw_lock32;
		uint32_t clr_sw_lock33;
		uint32_t clr_sw_lock34;
		uint32_t clr_sw_lock35;
		uint32_t clr_sw_lock36;
		uint32_t clr_sw_lock37;
		uint32_t clr_sw_lock38;
		uint32_t clr_sw_lock39;
		uint32_t clr_sw_lock40;
		uint32_t clr_sw_lock41;
		uint32_t clr_sw_lock42;
		uint32_t clr_sw_lock43;
		uint32_t clr_sw_lock44;
		uint32_t clr_sw_lock45;
		uint32_t clr_sw_lock46;
		uint32_t clr_sw_lock47;
		uint32_t clr_sw_lock48;
		uint32_t clr_sw_lock49;
		uint32_t clr_sw_lock50;
		uint32_t clr_sw_lock51;
		uint32_t clr_sw_lock52;
		uint32_t clr_sw_lock53;
		uint32_t clr_sw_lock54;
		uint32_t clr_sw_lock55;
		uint32_t clr_sw_lock56;
		uint32_t clr_sw_lock57;
		uint32_t clr_sw_lock58;
		uint32_t clr_sw_lock59;
		uint32_t clr_sw_lock60;
		uint32_t clr_sw_lock61;
		uint32_t clr_sw_lock62;
		uint32_t clr_sw_lock63;
		uint32_t clr_sbpi_instr;
		uint32_t clr_sbpi_wdata_0;
		uint32_t clr_sbpi_wdata_1;
		uint32_t clr_sbpi_wdata_2;
		uint32_t clr_sbpi_wdata_3;
		uint32_t clr_sbpi_rdata_0;
		uint32_t clr_sbpi_rdata_1;
		uint32_t clr_sbpi_rdata_2;
		uint32_t clr_sbpi_rdata_3;
		uint32_t clr_sbpi_status;
		uint32_t clr_usr;
		uint32_t clr_dbg;
		uint32_t RSVDclr_0;
		uint32_t clr_bist;
		uint32_t clr_crt_key_w0;
		uint32_t clr_crt_key_w1;
		uint32_t clr_crt_key_w2;
		uint32_t clr_crt_key_w3;
		uint32_t clr_critical;
		uint32_t clr_key_valid;
		uint32_t clr_debugen;
		uint32_t clr_debugen_lock;
		uint32_t clr_archsel;
		uint32_t clr_archsel_status;
		uint32_t clr_bootdis;
		uint32_t clr_intr;
		uint32_t clr_inte;
		uint32_t clr_intf;
		uint32_t clr_ints;
		uint32_t RSVDclr_1[931];
} OTP_DATA_RAW_GUARDED_REG_BLOCKS;

#define otp ((OTP_REG_BLOCKS volatile *)0x40120000)

#define otp_data ((OTP_DATA_REG_BLOCKS volatile *)0x40130000)

#define otp_data_raw ((OTP_DATA_RAW_REG_BLOCKS volatile *)0x40134000)

#define otp_data_guarded ((OTP_DATA_GUARDED_REG_BLOCKS volatile *)0x40138000)

#define otp_data_raw_guarded ((OTP_DATA_RAW_GUARDED_REG_BLOCKS volatile *)0x4013c000)

/*SW_LOCK0 Register macros*/

#define OTP_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK0_NSEC_MASK OTP_SW_LOCK0_NSEC(ALL1)
#define OTP_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK0_SEC_MASK OTP_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK1_NSEC_MASK OTP_SW_LOCK1_NSEC(ALL1)
#define OTP_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK1_SEC_MASK OTP_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK2_NSEC_MASK OTP_SW_LOCK2_NSEC(ALL1)
#define OTP_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK2_SEC_MASK OTP_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK3_NSEC_MASK OTP_SW_LOCK3_NSEC(ALL1)
#define OTP_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK3_SEC_MASK OTP_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK4_NSEC_MASK OTP_SW_LOCK4_NSEC(ALL1)
#define OTP_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK4_SEC_MASK OTP_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK5_NSEC_MASK OTP_SW_LOCK5_NSEC(ALL1)
#define OTP_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK5_SEC_MASK OTP_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK6_NSEC_MASK OTP_SW_LOCK6_NSEC(ALL1)
#define OTP_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK6_SEC_MASK OTP_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK7_NSEC_MASK OTP_SW_LOCK7_NSEC(ALL1)
#define OTP_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK7_SEC_MASK OTP_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK8_NSEC_MASK OTP_SW_LOCK8_NSEC(ALL1)
#define OTP_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK8_SEC_MASK OTP_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK9_NSEC_MASK OTP_SW_LOCK9_NSEC(ALL1)
#define OTP_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK9_SEC_MASK OTP_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK10_NSEC_MASK OTP_SW_LOCK10_NSEC(ALL1)
#define OTP_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK10_SEC_MASK OTP_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK11_NSEC_MASK OTP_SW_LOCK11_NSEC(ALL1)
#define OTP_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK11_SEC_MASK OTP_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK12_NSEC_MASK OTP_SW_LOCK12_NSEC(ALL1)
#define OTP_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK12_SEC_MASK OTP_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK13_NSEC_MASK OTP_SW_LOCK13_NSEC(ALL1)
#define OTP_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK13_SEC_MASK OTP_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK14_NSEC_MASK OTP_SW_LOCK14_NSEC(ALL1)
#define OTP_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK14_SEC_MASK OTP_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK15_NSEC_MASK OTP_SW_LOCK15_NSEC(ALL1)
#define OTP_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK15_SEC_MASK OTP_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK16_NSEC_MASK OTP_SW_LOCK16_NSEC(ALL1)
#define OTP_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK16_SEC_MASK OTP_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK17_NSEC_MASK OTP_SW_LOCK17_NSEC(ALL1)
#define OTP_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK17_SEC_MASK OTP_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK18_NSEC_MASK OTP_SW_LOCK18_NSEC(ALL1)
#define OTP_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK18_SEC_MASK OTP_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK19_NSEC_MASK OTP_SW_LOCK19_NSEC(ALL1)
#define OTP_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK19_SEC_MASK OTP_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK20_NSEC_MASK OTP_SW_LOCK20_NSEC(ALL1)
#define OTP_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK20_SEC_MASK OTP_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK21_NSEC_MASK OTP_SW_LOCK21_NSEC(ALL1)
#define OTP_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK21_SEC_MASK OTP_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK22_NSEC_MASK OTP_SW_LOCK22_NSEC(ALL1)
#define OTP_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK22_SEC_MASK OTP_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK23_NSEC_MASK OTP_SW_LOCK23_NSEC(ALL1)
#define OTP_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK23_SEC_MASK OTP_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK24_NSEC_MASK OTP_SW_LOCK24_NSEC(ALL1)
#define OTP_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK24_SEC_MASK OTP_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK25_NSEC_MASK OTP_SW_LOCK25_NSEC(ALL1)
#define OTP_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK25_SEC_MASK OTP_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK26_NSEC_MASK OTP_SW_LOCK26_NSEC(ALL1)
#define OTP_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK26_SEC_MASK OTP_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK27_NSEC_MASK OTP_SW_LOCK27_NSEC(ALL1)
#define OTP_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK27_SEC_MASK OTP_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK28_NSEC_MASK OTP_SW_LOCK28_NSEC(ALL1)
#define OTP_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK28_SEC_MASK OTP_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK29_NSEC_MASK OTP_SW_LOCK29_NSEC(ALL1)
#define OTP_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK29_SEC_MASK OTP_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK30_NSEC_MASK OTP_SW_LOCK30_NSEC(ALL1)
#define OTP_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK30_SEC_MASK OTP_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK31_NSEC_MASK OTP_SW_LOCK31_NSEC(ALL1)
#define OTP_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK31_SEC_MASK OTP_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK32_NSEC_MASK OTP_SW_LOCK32_NSEC(ALL1)
#define OTP_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK32_SEC_MASK OTP_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK33_NSEC_MASK OTP_SW_LOCK33_NSEC(ALL1)
#define OTP_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK33_SEC_MASK OTP_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK34_NSEC_MASK OTP_SW_LOCK34_NSEC(ALL1)
#define OTP_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK34_SEC_MASK OTP_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK35_NSEC_MASK OTP_SW_LOCK35_NSEC(ALL1)
#define OTP_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK35_SEC_MASK OTP_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK36_NSEC_MASK OTP_SW_LOCK36_NSEC(ALL1)
#define OTP_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK36_SEC_MASK OTP_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK37_NSEC_MASK OTP_SW_LOCK37_NSEC(ALL1)
#define OTP_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK37_SEC_MASK OTP_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK38_NSEC_MASK OTP_SW_LOCK38_NSEC(ALL1)
#define OTP_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK38_SEC_MASK OTP_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK39_NSEC_MASK OTP_SW_LOCK39_NSEC(ALL1)
#define OTP_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK39_SEC_MASK OTP_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK40_NSEC_MASK OTP_SW_LOCK40_NSEC(ALL1)
#define OTP_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK40_SEC_MASK OTP_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK41_NSEC_MASK OTP_SW_LOCK41_NSEC(ALL1)
#define OTP_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK41_SEC_MASK OTP_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK42_NSEC_MASK OTP_SW_LOCK42_NSEC(ALL1)
#define OTP_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK42_SEC_MASK OTP_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK43_NSEC_MASK OTP_SW_LOCK43_NSEC(ALL1)
#define OTP_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK43_SEC_MASK OTP_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK44_NSEC_MASK OTP_SW_LOCK44_NSEC(ALL1)
#define OTP_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK44_SEC_MASK OTP_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK45_NSEC_MASK OTP_SW_LOCK45_NSEC(ALL1)
#define OTP_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK45_SEC_MASK OTP_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK46_NSEC_MASK OTP_SW_LOCK46_NSEC(ALL1)
#define OTP_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK46_SEC_MASK OTP_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK47_NSEC_MASK OTP_SW_LOCK47_NSEC(ALL1)
#define OTP_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK47_SEC_MASK OTP_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK48_NSEC_MASK OTP_SW_LOCK48_NSEC(ALL1)
#define OTP_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK48_SEC_MASK OTP_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK49_NSEC_MASK OTP_SW_LOCK49_NSEC(ALL1)
#define OTP_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK49_SEC_MASK OTP_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK50_NSEC_MASK OTP_SW_LOCK50_NSEC(ALL1)
#define OTP_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK50_SEC_MASK OTP_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK51_NSEC_MASK OTP_SW_LOCK51_NSEC(ALL1)
#define OTP_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK51_SEC_MASK OTP_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK52_NSEC_MASK OTP_SW_LOCK52_NSEC(ALL1)
#define OTP_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK52_SEC_MASK OTP_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK53_NSEC_MASK OTP_SW_LOCK53_NSEC(ALL1)
#define OTP_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK53_SEC_MASK OTP_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK54_NSEC_MASK OTP_SW_LOCK54_NSEC(ALL1)
#define OTP_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK54_SEC_MASK OTP_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK55_NSEC_MASK OTP_SW_LOCK55_NSEC(ALL1)
#define OTP_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK55_SEC_MASK OTP_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK56_NSEC_MASK OTP_SW_LOCK56_NSEC(ALL1)
#define OTP_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK56_SEC_MASK OTP_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK57_NSEC_MASK OTP_SW_LOCK57_NSEC(ALL1)
#define OTP_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK57_SEC_MASK OTP_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK58_NSEC_MASK OTP_SW_LOCK58_NSEC(ALL1)
#define OTP_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK58_SEC_MASK OTP_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK59_NSEC_MASK OTP_SW_LOCK59_NSEC(ALL1)
#define OTP_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK59_SEC_MASK OTP_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK60_NSEC_MASK OTP_SW_LOCK60_NSEC(ALL1)
#define OTP_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK60_SEC_MASK OTP_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK61_NSEC_MASK OTP_SW_LOCK61_NSEC(ALL1)
#define OTP_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK61_SEC_MASK OTP_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK62_NSEC_MASK OTP_SW_LOCK62_NSEC(ALL1)
#define OTP_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK62_SEC_MASK OTP_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_SW_LOCK63_NSEC_MASK OTP_SW_LOCK63_NSEC(ALL1)
#define OTP_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_SW_LOCK63_SEC_MASK OTP_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_SBPI_INSTR_EXEC_MASK OTP_SBPI_INSTR_EXEC(ALL1)
#define OTP_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_SBPI_INSTR_IS_WR_MASK OTP_SBPI_INSTR_IS_WR(ALL1)
#define OTP_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_SBPI_INSTR_TARGET_MASK OTP_SBPI_INSTR_TARGET(ALL1)
#define OTP_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_SBPI_INSTR_CMD_MASK OTP_SBPI_INSTR_CMD(ALL1)
#define OTP_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_SBPI_INSTR_SHORT_WDATA_MASK OTP_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_SBPI_STATUS_MISO_MASK OTP_SBPI_STATUS_MISO(ALL1)
#define OTP_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_SBPI_STATUS_FLAG_MASK OTP_SBPI_STATUS_FLAG(ALL1)
#define OTP_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_SBPI_STATUS_INSTR_MISS_MASK OTP_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_SBPI_STATUS_INSTR_DONE_MASK OTP_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_SBPI_STATUS_RDATA_VLD_MASK OTP_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_USR_PD(v) (((v)&0x1)<<4)
#define OTP_USR_PD_MASK OTP_USR_PD(ALL1)
#define OTP_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_USR_DCTRL_MASK OTP_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DBG_PSM_STATE_MASK OTP_DBG_PSM_STATE(ALL1)
#define OTP_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DBG_ROSC_UP_MASK OTP_DBG_ROSC_UP(ALL1)
#define OTP_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DBG_ROSC_UP_SEEN_MASK OTP_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DBG_BOOT_DONE_MASK OTP_DBG_BOOT_DONE(ALL1)
#define OTP_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DBG_PSM_DONE_MASK OTP_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_BIST_CNT_FAIL_MASK OTP_BIST_CNT_FAIL(ALL1)
#define OTP_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_BIST_CNT_CLR_MASK OTP_BIST_CNT_CLR(ALL1)
#define OTP_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_BIST_CNT_ENA_MASK OTP_BIST_CNT_ENA(ALL1)
#define OTP_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_BIST_CNT_MAX_MASK OTP_BIST_CNT_MAX(ALL1)
#define OTP_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_BIST_CNT_MASK OTP_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_CRITICAL_RISCV_DISABLE_MASK OTP_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_CRITICAL_ARM_DISABLE_MASK OTP_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_CRITICAL_DEBUG_DISABLE_MASK OTP_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_MISC_MASK OTP_DEBUGEN_MISC(ALL1)
#define OTP_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_PROC1_SECURE_MASK OTP_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_PROC1_MASK OTP_DEBUGEN_PROC1(ALL1)
#define OTP_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_PROC0_SECURE_MASK OTP_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_PROC0_MASK OTP_DEBUGEN_PROC0(ALL1)
#define OTP_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_LOCK_MISC_MASK OTP_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_LOCK_PROC1_MASK OTP_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_LOCK_PROC0_MASK OTP_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DEBUGEN_LOCK_MISC_MASK OTP_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DEBUGEN_LOCK_PROC1_MASK OTP_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DEBUGEN_LOCK_PROC0_MASK OTP_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_CORE1_MASK OTP_ARCHSEL_CORE1(ALL1)
#define OTP_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_CORE0_MASK OTP_ARCHSEL_CORE0(ALL1)
#define OTP_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_STATUS_CORE1_MASK OTP_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_STATUS_CORE0_MASK OTP_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_ARCHSEL_STATUS_CORE1_MASK OTP_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_ARCHSEL_STATUS_CORE0_MASK OTP_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_BOOTDIS_NEXT_MASK OTP_BOOTDIS_NEXT(ALL1)
#define OTP_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_BOOTDIS_NOW_MASK OTP_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTR_APB_RD_NSEC_FAIL_MASK OTP_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTR_APB_RD_SEC_FAIL_MASK OTP_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTR_APB_DCTRL_FAIL_MASK OTP_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTR_SBPI_WR_FAIL_MASK OTP_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTR_SBPI_FLAG_N_MASK OTP_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTE_APB_RD_NSEC_FAIL_MASK OTP_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTE_APB_RD_SEC_FAIL_MASK OTP_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTE_APB_DCTRL_FAIL_MASK OTP_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTE_SBPI_WR_FAIL_MASK OTP_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTE_SBPI_FLAG_N_MASK OTP_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTF_APB_RD_NSEC_FAIL_MASK OTP_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTF_APB_RD_SEC_FAIL_MASK OTP_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTF_APB_DCTRL_FAIL_MASK OTP_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTF_SBPI_WR_FAIL_MASK OTP_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTF_SBPI_FLAG_N_MASK OTP_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_INTS_APB_RD_NSEC_FAIL_MASK OTP_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_INTS_APB_RD_SEC_FAIL_MASK OTP_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_INTS_APB_DCTRL_FAIL_MASK OTP_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_INTS_SBPI_WR_FAIL_MASK OTP_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_INTS_SBPI_FLAG_N_MASK OTP_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK0_NSEC_MASK OTP_DATA_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK0_SEC_MASK OTP_DATA_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK1_NSEC_MASK OTP_DATA_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK1_SEC_MASK OTP_DATA_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK2_NSEC_MASK OTP_DATA_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK2_SEC_MASK OTP_DATA_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK3_NSEC_MASK OTP_DATA_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK3_SEC_MASK OTP_DATA_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK4_NSEC_MASK OTP_DATA_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK4_SEC_MASK OTP_DATA_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK5_NSEC_MASK OTP_DATA_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK5_SEC_MASK OTP_DATA_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK6_NSEC_MASK OTP_DATA_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK6_SEC_MASK OTP_DATA_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK7_NSEC_MASK OTP_DATA_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK7_SEC_MASK OTP_DATA_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK8_NSEC_MASK OTP_DATA_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK8_SEC_MASK OTP_DATA_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK9_NSEC_MASK OTP_DATA_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK9_SEC_MASK OTP_DATA_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK10_NSEC_MASK OTP_DATA_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK10_SEC_MASK OTP_DATA_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK11_NSEC_MASK OTP_DATA_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK11_SEC_MASK OTP_DATA_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK12_NSEC_MASK OTP_DATA_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK12_SEC_MASK OTP_DATA_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK13_NSEC_MASK OTP_DATA_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK13_SEC_MASK OTP_DATA_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK14_NSEC_MASK OTP_DATA_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK14_SEC_MASK OTP_DATA_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK15_NSEC_MASK OTP_DATA_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK15_SEC_MASK OTP_DATA_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK16_NSEC_MASK OTP_DATA_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK16_SEC_MASK OTP_DATA_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK17_NSEC_MASK OTP_DATA_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK17_SEC_MASK OTP_DATA_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK18_NSEC_MASK OTP_DATA_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK18_SEC_MASK OTP_DATA_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK19_NSEC_MASK OTP_DATA_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK19_SEC_MASK OTP_DATA_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK20_NSEC_MASK OTP_DATA_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK20_SEC_MASK OTP_DATA_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK21_NSEC_MASK OTP_DATA_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK21_SEC_MASK OTP_DATA_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK22_NSEC_MASK OTP_DATA_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK22_SEC_MASK OTP_DATA_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK23_NSEC_MASK OTP_DATA_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK23_SEC_MASK OTP_DATA_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK24_NSEC_MASK OTP_DATA_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK24_SEC_MASK OTP_DATA_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK25_NSEC_MASK OTP_DATA_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK25_SEC_MASK OTP_DATA_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK26_NSEC_MASK OTP_DATA_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK26_SEC_MASK OTP_DATA_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK27_NSEC_MASK OTP_DATA_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK27_SEC_MASK OTP_DATA_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK28_NSEC_MASK OTP_DATA_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK28_SEC_MASK OTP_DATA_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK29_NSEC_MASK OTP_DATA_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK29_SEC_MASK OTP_DATA_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK30_NSEC_MASK OTP_DATA_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK30_SEC_MASK OTP_DATA_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK31_NSEC_MASK OTP_DATA_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK31_SEC_MASK OTP_DATA_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK32_NSEC_MASK OTP_DATA_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK32_SEC_MASK OTP_DATA_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK33_NSEC_MASK OTP_DATA_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK33_SEC_MASK OTP_DATA_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK34_NSEC_MASK OTP_DATA_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK34_SEC_MASK OTP_DATA_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK35_NSEC_MASK OTP_DATA_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK35_SEC_MASK OTP_DATA_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK36_NSEC_MASK OTP_DATA_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK36_SEC_MASK OTP_DATA_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK37_NSEC_MASK OTP_DATA_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK37_SEC_MASK OTP_DATA_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK38_NSEC_MASK OTP_DATA_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK38_SEC_MASK OTP_DATA_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK39_NSEC_MASK OTP_DATA_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK39_SEC_MASK OTP_DATA_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK40_NSEC_MASK OTP_DATA_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK40_SEC_MASK OTP_DATA_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK41_NSEC_MASK OTP_DATA_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK41_SEC_MASK OTP_DATA_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK42_NSEC_MASK OTP_DATA_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK42_SEC_MASK OTP_DATA_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK43_NSEC_MASK OTP_DATA_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK43_SEC_MASK OTP_DATA_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK44_NSEC_MASK OTP_DATA_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK44_SEC_MASK OTP_DATA_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK45_NSEC_MASK OTP_DATA_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK45_SEC_MASK OTP_DATA_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK46_NSEC_MASK OTP_DATA_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK46_SEC_MASK OTP_DATA_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK47_NSEC_MASK OTP_DATA_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK47_SEC_MASK OTP_DATA_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK48_NSEC_MASK OTP_DATA_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK48_SEC_MASK OTP_DATA_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK49_NSEC_MASK OTP_DATA_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK49_SEC_MASK OTP_DATA_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK50_NSEC_MASK OTP_DATA_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK50_SEC_MASK OTP_DATA_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK51_NSEC_MASK OTP_DATA_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK51_SEC_MASK OTP_DATA_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK52_NSEC_MASK OTP_DATA_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK52_SEC_MASK OTP_DATA_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK53_NSEC_MASK OTP_DATA_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK53_SEC_MASK OTP_DATA_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK54_NSEC_MASK OTP_DATA_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK54_SEC_MASK OTP_DATA_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK55_NSEC_MASK OTP_DATA_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK55_SEC_MASK OTP_DATA_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK56_NSEC_MASK OTP_DATA_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK56_SEC_MASK OTP_DATA_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK57_NSEC_MASK OTP_DATA_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK57_SEC_MASK OTP_DATA_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK58_NSEC_MASK OTP_DATA_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK58_SEC_MASK OTP_DATA_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK59_NSEC_MASK OTP_DATA_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK59_SEC_MASK OTP_DATA_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK60_NSEC_MASK OTP_DATA_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK60_SEC_MASK OTP_DATA_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK61_NSEC_MASK OTP_DATA_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK61_SEC_MASK OTP_DATA_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK62_NSEC_MASK OTP_DATA_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK62_SEC_MASK OTP_DATA_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_SW_LOCK63_NSEC_MASK OTP_DATA_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_SW_LOCK63_SEC_MASK OTP_DATA_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_SBPI_INSTR_EXEC_MASK OTP_DATA_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_SBPI_INSTR_IS_WR_MASK OTP_DATA_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_SBPI_INSTR_TARGET_MASK OTP_DATA_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_SBPI_INSTR_CMD_MASK OTP_DATA_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_SBPI_STATUS_MISO_MASK OTP_DATA_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_SBPI_STATUS_FLAG_MASK OTP_DATA_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_USR_PD_MASK OTP_DATA_USR_PD(ALL1)
#define OTP_DATA_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_USR_DCTRL_MASK OTP_DATA_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_DBG_PSM_STATE_MASK OTP_DATA_DBG_PSM_STATE(ALL1)
#define OTP_DATA_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_DBG_ROSC_UP_MASK OTP_DATA_DBG_ROSC_UP(ALL1)
#define OTP_DATA_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_DBG_ROSC_UP_SEEN_MASK OTP_DATA_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_DBG_BOOT_DONE_MASK OTP_DATA_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_DBG_PSM_DONE_MASK OTP_DATA_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_BIST_CNT_FAIL_MASK OTP_DATA_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_BIST_CNT_CLR_MASK OTP_DATA_BIST_CNT_CLR(ALL1)
#define OTP_DATA_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_BIST_CNT_ENA_MASK OTP_DATA_BIST_CNT_ENA(ALL1)
#define OTP_DATA_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_BIST_CNT_MAX_MASK OTP_DATA_BIST_CNT_MAX(ALL1)
#define OTP_DATA_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_BIST_CNT_MASK OTP_DATA_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_CRITICAL_ARM_DISABLE_MASK OTP_DATA_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_MISC_MASK OTP_DATA_DEBUGEN_MISC(ALL1)
#define OTP_DATA_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_PROC1_MASK OTP_DATA_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_PROC0_MASK OTP_DATA_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_LOCK_MISC_MASK OTP_DATA_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_DEBUGEN_LOCK_MISC_MASK OTP_DATA_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_CORE1_MASK OTP_DATA_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_CORE0_MASK OTP_DATA_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_BOOTDIS_NEXT_MASK OTP_DATA_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_BOOTDIS_NOW_MASK OTP_DATA_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTR_SBPI_WR_FAIL_MASK OTP_DATA_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTR_SBPI_FLAG_N_MASK OTP_DATA_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTE_SBPI_WR_FAIL_MASK OTP_DATA_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTE_SBPI_FLAG_N_MASK OTP_DATA_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTF_SBPI_WR_FAIL_MASK OTP_DATA_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTF_SBPI_FLAG_N_MASK OTP_DATA_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_INTS_SBPI_WR_FAIL_MASK OTP_DATA_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_INTS_SBPI_FLAG_N_MASK OTP_DATA_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_RAW_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK0_NSEC_MASK OTP_DATA_RAW_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK0_SEC_MASK OTP_DATA_RAW_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_RAW_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK1_NSEC_MASK OTP_DATA_RAW_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK1_SEC_MASK OTP_DATA_RAW_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_RAW_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK2_NSEC_MASK OTP_DATA_RAW_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK2_SEC_MASK OTP_DATA_RAW_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_RAW_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK3_NSEC_MASK OTP_DATA_RAW_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK3_SEC_MASK OTP_DATA_RAW_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_RAW_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK4_NSEC_MASK OTP_DATA_RAW_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK4_SEC_MASK OTP_DATA_RAW_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_RAW_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK5_NSEC_MASK OTP_DATA_RAW_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK5_SEC_MASK OTP_DATA_RAW_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_RAW_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK6_NSEC_MASK OTP_DATA_RAW_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK6_SEC_MASK OTP_DATA_RAW_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_RAW_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK7_NSEC_MASK OTP_DATA_RAW_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK7_SEC_MASK OTP_DATA_RAW_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_RAW_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK8_NSEC_MASK OTP_DATA_RAW_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK8_SEC_MASK OTP_DATA_RAW_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_RAW_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK9_NSEC_MASK OTP_DATA_RAW_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK9_SEC_MASK OTP_DATA_RAW_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_RAW_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK10_NSEC_MASK OTP_DATA_RAW_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK10_SEC_MASK OTP_DATA_RAW_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_RAW_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK11_NSEC_MASK OTP_DATA_RAW_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK11_SEC_MASK OTP_DATA_RAW_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_RAW_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK12_NSEC_MASK OTP_DATA_RAW_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK12_SEC_MASK OTP_DATA_RAW_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_RAW_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK13_NSEC_MASK OTP_DATA_RAW_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK13_SEC_MASK OTP_DATA_RAW_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_RAW_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK14_NSEC_MASK OTP_DATA_RAW_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK14_SEC_MASK OTP_DATA_RAW_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_RAW_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK15_NSEC_MASK OTP_DATA_RAW_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK15_SEC_MASK OTP_DATA_RAW_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_RAW_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK16_NSEC_MASK OTP_DATA_RAW_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK16_SEC_MASK OTP_DATA_RAW_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_RAW_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK17_NSEC_MASK OTP_DATA_RAW_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK17_SEC_MASK OTP_DATA_RAW_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_RAW_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK18_NSEC_MASK OTP_DATA_RAW_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK18_SEC_MASK OTP_DATA_RAW_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_RAW_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK19_NSEC_MASK OTP_DATA_RAW_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK19_SEC_MASK OTP_DATA_RAW_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_RAW_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK20_NSEC_MASK OTP_DATA_RAW_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK20_SEC_MASK OTP_DATA_RAW_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_RAW_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK21_NSEC_MASK OTP_DATA_RAW_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK21_SEC_MASK OTP_DATA_RAW_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_RAW_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK22_NSEC_MASK OTP_DATA_RAW_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK22_SEC_MASK OTP_DATA_RAW_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_RAW_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK23_NSEC_MASK OTP_DATA_RAW_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK23_SEC_MASK OTP_DATA_RAW_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_RAW_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK24_NSEC_MASK OTP_DATA_RAW_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK24_SEC_MASK OTP_DATA_RAW_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_RAW_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK25_NSEC_MASK OTP_DATA_RAW_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK25_SEC_MASK OTP_DATA_RAW_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_RAW_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK26_NSEC_MASK OTP_DATA_RAW_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK26_SEC_MASK OTP_DATA_RAW_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_RAW_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK27_NSEC_MASK OTP_DATA_RAW_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK27_SEC_MASK OTP_DATA_RAW_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_RAW_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK28_NSEC_MASK OTP_DATA_RAW_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK28_SEC_MASK OTP_DATA_RAW_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_RAW_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK29_NSEC_MASK OTP_DATA_RAW_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK29_SEC_MASK OTP_DATA_RAW_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_RAW_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK30_NSEC_MASK OTP_DATA_RAW_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK30_SEC_MASK OTP_DATA_RAW_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_RAW_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK31_NSEC_MASK OTP_DATA_RAW_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK31_SEC_MASK OTP_DATA_RAW_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_RAW_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK32_NSEC_MASK OTP_DATA_RAW_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK32_SEC_MASK OTP_DATA_RAW_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_RAW_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK33_NSEC_MASK OTP_DATA_RAW_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK33_SEC_MASK OTP_DATA_RAW_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_RAW_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK34_NSEC_MASK OTP_DATA_RAW_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK34_SEC_MASK OTP_DATA_RAW_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_RAW_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK35_NSEC_MASK OTP_DATA_RAW_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK35_SEC_MASK OTP_DATA_RAW_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_RAW_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK36_NSEC_MASK OTP_DATA_RAW_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK36_SEC_MASK OTP_DATA_RAW_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_RAW_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK37_NSEC_MASK OTP_DATA_RAW_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK37_SEC_MASK OTP_DATA_RAW_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_RAW_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK38_NSEC_MASK OTP_DATA_RAW_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK38_SEC_MASK OTP_DATA_RAW_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_RAW_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK39_NSEC_MASK OTP_DATA_RAW_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK39_SEC_MASK OTP_DATA_RAW_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_RAW_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK40_NSEC_MASK OTP_DATA_RAW_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK40_SEC_MASK OTP_DATA_RAW_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_RAW_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK41_NSEC_MASK OTP_DATA_RAW_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK41_SEC_MASK OTP_DATA_RAW_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_RAW_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK42_NSEC_MASK OTP_DATA_RAW_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK42_SEC_MASK OTP_DATA_RAW_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_RAW_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK43_NSEC_MASK OTP_DATA_RAW_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK43_SEC_MASK OTP_DATA_RAW_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_RAW_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK44_NSEC_MASK OTP_DATA_RAW_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK44_SEC_MASK OTP_DATA_RAW_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_RAW_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK45_NSEC_MASK OTP_DATA_RAW_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK45_SEC_MASK OTP_DATA_RAW_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_RAW_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK46_NSEC_MASK OTP_DATA_RAW_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK46_SEC_MASK OTP_DATA_RAW_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_RAW_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK47_NSEC_MASK OTP_DATA_RAW_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK47_SEC_MASK OTP_DATA_RAW_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_RAW_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK48_NSEC_MASK OTP_DATA_RAW_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK48_SEC_MASK OTP_DATA_RAW_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_RAW_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK49_NSEC_MASK OTP_DATA_RAW_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK49_SEC_MASK OTP_DATA_RAW_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_RAW_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK50_NSEC_MASK OTP_DATA_RAW_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK50_SEC_MASK OTP_DATA_RAW_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_RAW_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK51_NSEC_MASK OTP_DATA_RAW_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK51_SEC_MASK OTP_DATA_RAW_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_RAW_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK52_NSEC_MASK OTP_DATA_RAW_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK52_SEC_MASK OTP_DATA_RAW_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_RAW_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK53_NSEC_MASK OTP_DATA_RAW_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK53_SEC_MASK OTP_DATA_RAW_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_RAW_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK54_NSEC_MASK OTP_DATA_RAW_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK54_SEC_MASK OTP_DATA_RAW_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_RAW_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK55_NSEC_MASK OTP_DATA_RAW_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK55_SEC_MASK OTP_DATA_RAW_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_RAW_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK56_NSEC_MASK OTP_DATA_RAW_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK56_SEC_MASK OTP_DATA_RAW_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_RAW_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK57_NSEC_MASK OTP_DATA_RAW_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK57_SEC_MASK OTP_DATA_RAW_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_RAW_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK58_NSEC_MASK OTP_DATA_RAW_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK58_SEC_MASK OTP_DATA_RAW_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_RAW_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK59_NSEC_MASK OTP_DATA_RAW_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK59_SEC_MASK OTP_DATA_RAW_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_RAW_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK60_NSEC_MASK OTP_DATA_RAW_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK60_SEC_MASK OTP_DATA_RAW_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_RAW_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK61_NSEC_MASK OTP_DATA_RAW_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK61_SEC_MASK OTP_DATA_RAW_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_RAW_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK62_NSEC_MASK OTP_DATA_RAW_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK62_SEC_MASK OTP_DATA_RAW_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_RAW_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_SW_LOCK63_NSEC_MASK OTP_DATA_RAW_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_RAW_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_SW_LOCK63_SEC_MASK OTP_DATA_RAW_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_RAW_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_SBPI_INSTR_EXEC_MASK OTP_DATA_RAW_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_SBPI_INSTR_IS_WR_MASK OTP_DATA_RAW_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_RAW_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_RAW_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_SBPI_INSTR_TARGET_MASK OTP_DATA_RAW_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_RAW_SBPI_INSTR_CMD_MASK OTP_DATA_RAW_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_RAW_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_RAW_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_SBPI_STATUS_MISO_MASK OTP_DATA_RAW_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_SBPI_STATUS_FLAG_MASK OTP_DATA_RAW_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_RAW_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_RAW_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_RAW_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_RAW_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_USR_PD_MASK OTP_DATA_RAW_USR_PD(ALL1)
#define OTP_DATA_RAW_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_USR_DCTRL_MASK OTP_DATA_RAW_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_RAW_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_RAW_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_RAW_DBG_PSM_STATE_MASK OTP_DATA_RAW_DBG_PSM_STATE(ALL1)
#define OTP_DATA_RAW_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DBG_ROSC_UP_MASK OTP_DATA_RAW_DBG_ROSC_UP(ALL1)
#define OTP_DATA_RAW_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DBG_ROSC_UP_SEEN_MASK OTP_DATA_RAW_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_RAW_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DBG_BOOT_DONE_MASK OTP_DATA_RAW_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_RAW_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DBG_PSM_DONE_MASK OTP_DATA_RAW_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_RAW_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_BIST_CNT_FAIL_MASK OTP_DATA_RAW_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_RAW_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_BIST_CNT_CLR_MASK OTP_DATA_RAW_BIST_CNT_CLR(ALL1)
#define OTP_DATA_RAW_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_BIST_CNT_ENA_MASK OTP_DATA_RAW_BIST_CNT_ENA(ALL1)
#define OTP_DATA_RAW_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_RAW_BIST_CNT_MAX_MASK OTP_DATA_RAW_BIST_CNT_MAX(ALL1)
#define OTP_DATA_RAW_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_RAW_BIST_CNT_MASK OTP_DATA_RAW_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_RAW_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_RAW_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_RAW_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_RAW_CRITICAL_ARM_DISABLE_MASK OTP_DATA_RAW_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_RAW_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_RAW_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_RAW_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_RAW_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_RAW_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_RAW_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_MISC_MASK OTP_DATA_RAW_DEBUGEN_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_PROC1_MASK OTP_DATA_RAW_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_PROC0_MASK OTP_DATA_RAW_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_RAW_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_CORE1_MASK OTP_DATA_RAW_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_CORE0_MASK OTP_DATA_RAW_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_RAW_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_BOOTDIS_NEXT_MASK OTP_DATA_RAW_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_RAW_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_BOOTDIS_NOW_MASK OTP_DATA_RAW_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTR_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTR_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTE_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTE_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTF_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTF_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_INTS_SBPI_WR_FAIL_MASK OTP_DATA_RAW_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_INTS_SBPI_FLAG_N_MASK OTP_DATA_RAW_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK0_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK0_SEC_MASK OTP_DATA_GUARDED_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK1_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK1_SEC_MASK OTP_DATA_GUARDED_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK2_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK2_SEC_MASK OTP_DATA_GUARDED_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK3_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK3_SEC_MASK OTP_DATA_GUARDED_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK4_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK4_SEC_MASK OTP_DATA_GUARDED_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK5_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK5_SEC_MASK OTP_DATA_GUARDED_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK6_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK6_SEC_MASK OTP_DATA_GUARDED_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK7_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK7_SEC_MASK OTP_DATA_GUARDED_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK8_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK8_SEC_MASK OTP_DATA_GUARDED_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK9_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK9_SEC_MASK OTP_DATA_GUARDED_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK10_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK10_SEC_MASK OTP_DATA_GUARDED_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK11_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK11_SEC_MASK OTP_DATA_GUARDED_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK12_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK12_SEC_MASK OTP_DATA_GUARDED_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK13_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK13_SEC_MASK OTP_DATA_GUARDED_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK14_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK14_SEC_MASK OTP_DATA_GUARDED_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK15_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK15_SEC_MASK OTP_DATA_GUARDED_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK16_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK16_SEC_MASK OTP_DATA_GUARDED_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK17_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK17_SEC_MASK OTP_DATA_GUARDED_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK18_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK18_SEC_MASK OTP_DATA_GUARDED_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK19_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK19_SEC_MASK OTP_DATA_GUARDED_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK20_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK20_SEC_MASK OTP_DATA_GUARDED_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK21_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK21_SEC_MASK OTP_DATA_GUARDED_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK22_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK22_SEC_MASK OTP_DATA_GUARDED_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK23_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK23_SEC_MASK OTP_DATA_GUARDED_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK24_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK24_SEC_MASK OTP_DATA_GUARDED_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK25_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK25_SEC_MASK OTP_DATA_GUARDED_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK26_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK26_SEC_MASK OTP_DATA_GUARDED_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK27_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK27_SEC_MASK OTP_DATA_GUARDED_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK28_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK28_SEC_MASK OTP_DATA_GUARDED_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK29_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK29_SEC_MASK OTP_DATA_GUARDED_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK30_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK30_SEC_MASK OTP_DATA_GUARDED_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK31_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK31_SEC_MASK OTP_DATA_GUARDED_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK32_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK32_SEC_MASK OTP_DATA_GUARDED_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK33_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK33_SEC_MASK OTP_DATA_GUARDED_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK34_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK34_SEC_MASK OTP_DATA_GUARDED_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK35_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK35_SEC_MASK OTP_DATA_GUARDED_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK36_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK36_SEC_MASK OTP_DATA_GUARDED_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK37_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK37_SEC_MASK OTP_DATA_GUARDED_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK38_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK38_SEC_MASK OTP_DATA_GUARDED_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK39_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK39_SEC_MASK OTP_DATA_GUARDED_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK40_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK40_SEC_MASK OTP_DATA_GUARDED_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK41_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK41_SEC_MASK OTP_DATA_GUARDED_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK42_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK42_SEC_MASK OTP_DATA_GUARDED_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK43_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK43_SEC_MASK OTP_DATA_GUARDED_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK44_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK44_SEC_MASK OTP_DATA_GUARDED_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK45_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK45_SEC_MASK OTP_DATA_GUARDED_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK46_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK46_SEC_MASK OTP_DATA_GUARDED_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK47_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK47_SEC_MASK OTP_DATA_GUARDED_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK48_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK48_SEC_MASK OTP_DATA_GUARDED_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK49_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK49_SEC_MASK OTP_DATA_GUARDED_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK50_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK50_SEC_MASK OTP_DATA_GUARDED_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK51_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK51_SEC_MASK OTP_DATA_GUARDED_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK52_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK52_SEC_MASK OTP_DATA_GUARDED_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK53_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK53_SEC_MASK OTP_DATA_GUARDED_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK54_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK54_SEC_MASK OTP_DATA_GUARDED_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK55_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK55_SEC_MASK OTP_DATA_GUARDED_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK56_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK56_SEC_MASK OTP_DATA_GUARDED_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK57_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK57_SEC_MASK OTP_DATA_GUARDED_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK58_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK58_SEC_MASK OTP_DATA_GUARDED_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK59_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK59_SEC_MASK OTP_DATA_GUARDED_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK60_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK60_SEC_MASK OTP_DATA_GUARDED_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK61_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK61_SEC_MASK OTP_DATA_GUARDED_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK62_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK62_SEC_MASK OTP_DATA_GUARDED_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_GUARDED_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_GUARDED_SW_LOCK63_NSEC_MASK OTP_DATA_GUARDED_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_GUARDED_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_GUARDED_SW_LOCK63_SEC_MASK OTP_DATA_GUARDED_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_GUARDED_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_GUARDED_SBPI_INSTR_EXEC_MASK OTP_DATA_GUARDED_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_GUARDED_SBPI_INSTR_IS_WR_MASK OTP_DATA_GUARDED_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_GUARDED_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_GUARDED_SBPI_INSTR_TARGET_MASK OTP_DATA_GUARDED_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_GUARDED_SBPI_INSTR_CMD_MASK OTP_DATA_GUARDED_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_GUARDED_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_GUARDED_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_GUARDED_SBPI_STATUS_MISO_MASK OTP_DATA_GUARDED_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_GUARDED_SBPI_STATUS_FLAG_MASK OTP_DATA_GUARDED_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_GUARDED_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_GUARDED_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_GUARDED_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_GUARDED_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_USR_PD_MASK OTP_DATA_GUARDED_USR_PD(ALL1)
#define OTP_DATA_GUARDED_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_USR_DCTRL_MASK OTP_DATA_GUARDED_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_GUARDED_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_GUARDED_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_GUARDED_DBG_PSM_STATE_MASK OTP_DATA_GUARDED_DBG_PSM_STATE(ALL1)
#define OTP_DATA_GUARDED_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_MASK OTP_DATA_GUARDED_DBG_ROSC_UP(ALL1)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN_MASK OTP_DATA_GUARDED_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_GUARDED_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DBG_BOOT_DONE_MASK OTP_DATA_GUARDED_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_GUARDED_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DBG_PSM_DONE_MASK OTP_DATA_GUARDED_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_GUARDED_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_GUARDED_BIST_CNT_FAIL_MASK OTP_DATA_GUARDED_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_GUARDED_BIST_CNT_CLR_MASK OTP_DATA_GUARDED_BIST_CNT_CLR(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_GUARDED_BIST_CNT_ENA_MASK OTP_DATA_GUARDED_BIST_CNT_ENA(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_GUARDED_BIST_CNT_MAX_MASK OTP_DATA_GUARDED_BIST_CNT_MAX(ALL1)
#define OTP_DATA_GUARDED_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_GUARDED_BIST_CNT_MASK OTP_DATA_GUARDED_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_GUARDED_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_GUARDED_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_GUARDED_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_GUARDED_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_BOOTDIS_NEXT_MASK OTP_DATA_GUARDED_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_GUARDED_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_BOOTDIS_NOW_MASK OTP_DATA_GUARDED_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTR_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTE_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTF_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_GUARDED_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL_MASK OTP_DATA_GUARDED_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_GUARDED_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_GUARDED_INTS_SBPI_FLAG_N_MASK OTP_DATA_GUARDED_INTS_SBPI_FLAG_N(ALL1)

/*SW_LOCK0 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK0_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK0_SEC(ALL1)

/*SW_LOCK1 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK1_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK1_SEC(ALL1)

/*SW_LOCK2 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK2_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK2_SEC(ALL1)

/*SW_LOCK3 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK3_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK3_SEC(ALL1)

/*SW_LOCK4 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK4_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK4_SEC(ALL1)

/*SW_LOCK5 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK5_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK5_SEC(ALL1)

/*SW_LOCK6 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK6_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK6_SEC(ALL1)

/*SW_LOCK7 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK7_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK7_SEC(ALL1)

/*SW_LOCK8 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK8_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK8_SEC(ALL1)

/*SW_LOCK9 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK9_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK9_SEC(ALL1)

/*SW_LOCK10 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK10_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK10_SEC(ALL1)

/*SW_LOCK11 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK11_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK11_SEC(ALL1)

/*SW_LOCK12 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK12_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK12_SEC(ALL1)

/*SW_LOCK13 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK13_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK13_SEC(ALL1)

/*SW_LOCK14 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK14_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK14_SEC(ALL1)

/*SW_LOCK15 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK15_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK15_SEC(ALL1)

/*SW_LOCK16 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK16_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK16_SEC(ALL1)

/*SW_LOCK17 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK17_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK17_SEC(ALL1)

/*SW_LOCK18 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK18_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK18_SEC(ALL1)

/*SW_LOCK19 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK19_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK19_SEC(ALL1)

/*SW_LOCK20 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK20_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK20_SEC(ALL1)

/*SW_LOCK21 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK21_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK21_SEC(ALL1)

/*SW_LOCK22 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK22_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK22_SEC(ALL1)

/*SW_LOCK23 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK23_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK23_SEC(ALL1)

/*SW_LOCK24 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK24_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK24_SEC(ALL1)

/*SW_LOCK25 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK25_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK25_SEC(ALL1)

/*SW_LOCK26 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK26_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK26_SEC(ALL1)

/*SW_LOCK27 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK27_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK27_SEC(ALL1)

/*SW_LOCK28 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK28_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK28_SEC(ALL1)

/*SW_LOCK29 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK29_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK29_SEC(ALL1)

/*SW_LOCK30 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK30_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK30_SEC(ALL1)

/*SW_LOCK31 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK31_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK31_SEC(ALL1)

/*SW_LOCK32 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK32_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK32_SEC(ALL1)

/*SW_LOCK33 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK33_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK33_SEC(ALL1)

/*SW_LOCK34 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK34_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK34_SEC(ALL1)

/*SW_LOCK35 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK35_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK35_SEC(ALL1)

/*SW_LOCK36 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK36_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK36_SEC(ALL1)

/*SW_LOCK37 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK37_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK37_SEC(ALL1)

/*SW_LOCK38 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK38_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK38_SEC(ALL1)

/*SW_LOCK39 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK39_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK39_SEC(ALL1)

/*SW_LOCK40 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK40_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK40_SEC(ALL1)

/*SW_LOCK41 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK41_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK41_SEC(ALL1)

/*SW_LOCK42 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK42_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK42_SEC(ALL1)

/*SW_LOCK43 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK43_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK43_SEC(ALL1)

/*SW_LOCK44 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK44_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK44_SEC(ALL1)

/*SW_LOCK45 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK45_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK45_SEC(ALL1)

/*SW_LOCK46 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK46_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK46_SEC(ALL1)

/*SW_LOCK47 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK47_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK47_SEC(ALL1)

/*SW_LOCK48 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK48_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK48_SEC(ALL1)

/*SW_LOCK49 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK49_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK49_SEC(ALL1)

/*SW_LOCK50 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK50_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK50_SEC(ALL1)

/*SW_LOCK51 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK51_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK51_SEC(ALL1)

/*SW_LOCK52 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK52_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK52_SEC(ALL1)

/*SW_LOCK53 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK53_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK53_SEC(ALL1)

/*SW_LOCK54 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK54_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK54_SEC(ALL1)

/*SW_LOCK55 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK55_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK55_SEC(ALL1)

/*SW_LOCK56 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK56_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK56_SEC(ALL1)

/*SW_LOCK57 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK57_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK57_SEC(ALL1)

/*SW_LOCK58 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK58_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK58_SEC(ALL1)

/*SW_LOCK59 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK59_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK59_SEC(ALL1)

/*SW_LOCK60 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK60_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK60_SEC(ALL1)

/*SW_LOCK61 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK61_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK61_SEC(ALL1)

/*SW_LOCK62 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK62_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK62_SEC(ALL1)

/*SW_LOCK63 Register macros*/

#define OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC(v) (((v)&0x3)<<2)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK63_NSEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC(v) (((v)&0x3)<<0)
#define OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC_MASK OTP_DATA_RAW_GUARDED_SW_LOCK63_SEC(ALL1)

/*SBPI_INSTR Register macros*/

#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_EXEC(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_IS_WR(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_HAS_PAYLOAD(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(v) (((v)&0xf)<<24)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_PAYLOAD_SIZE_M1(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_TARGET(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD(v) (((v)&0xff)<<8)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_CMD(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA(v) (((v)&0xff)<<0)
#define OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA_MASK OTP_DATA_RAW_GUARDED_SBPI_INSTR_SHORT_WDATA(ALL1)

/*SBPI_WDATA_0 Register macros*/


/*SBPI_WDATA_1 Register macros*/


/*SBPI_WDATA_2 Register macros*/


/*SBPI_WDATA_3 Register macros*/


/*SBPI_RDATA_0 Register macros*/


/*SBPI_RDATA_1 Register macros*/


/*SBPI_RDATA_2 Register macros*/


/*SBPI_RDATA_3 Register macros*/


/*SBPI_STATUS Register macros*/

#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO(v) (((v)&0xff)<<16)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_MISO(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_FLAG(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_MISS(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_INSTR_DONE(ALL1)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD_MASK OTP_DATA_RAW_GUARDED_SBPI_STATUS_RDATA_VLD(ALL1)

/*USR Register macros*/

#define OTP_DATA_RAW_GUARDED_USR_PD(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_USR_PD_MASK OTP_DATA_RAW_GUARDED_USR_PD(ALL1)
#define OTP_DATA_RAW_GUARDED_USR_DCTRL(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_USR_DCTRL_MASK OTP_DATA_RAW_GUARDED_USR_DCTRL(ALL1)

/*DBG Register macros*/

#define OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG(v) (((v)&0x1)<<12)
#define OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG_MASK OTP_DATA_RAW_GUARDED_DBG_CUSTOMER_RMA_FLAG(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_STATE(v) (((v)&0xf)<<4)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_STATE_MASK OTP_DATA_RAW_GUARDED_DBG_PSM_STATE(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_MASK OTP_DATA_RAW_GUARDED_DBG_ROSC_UP(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN_MASK OTP_DATA_RAW_GUARDED_DBG_ROSC_UP_SEEN(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE_MASK OTP_DATA_RAW_GUARDED_DBG_BOOT_DONE(ALL1)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_DONE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DBG_PSM_DONE_MASK OTP_DATA_RAW_GUARDED_DBG_PSM_DONE(ALL1)

/*BIST Register macros*/

#define OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL(v) (((v)&0x1)<<30)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_CLR(v) (((v)&0x1)<<29)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_CLR_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_CLR(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_ENA(v) (((v)&0x1)<<28)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_ENA_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_ENA(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MAX(v) (((v)&0xfff)<<16)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MAX_MASK OTP_DATA_RAW_GUARDED_BIST_CNT_MAX(ALL1)
#define OTP_DATA_RAW_GUARDED_BIST_CNT(v) (((v)&0x1fff)<<0)
#define OTP_DATA_RAW_GUARDED_BIST_CNT_MASK OTP_DATA_RAW_GUARDED_BIST_CNT(ALL1)

/*CRT_KEY_W0 Register macros*/


/*CRT_KEY_W1 Register macros*/


/*CRT_KEY_W2 Register macros*/


/*CRT_KEY_W3 Register macros*/


/*CRITICAL Register macros*/

#define OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE(v) (((v)&0x1)<<17)
#define OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_RISCV_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE(v) (((v)&0x1)<<16)
#define OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_ARM_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(v) (((v)&0x3)<<5)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS_MASK OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_SENS(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_GLITCH_DETECTOR_ENABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL_MASK OTP_DATA_RAW_GUARDED_CRITICAL_DEFAULT_ARCHSEL(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_DEBUG_DISABLE(ALL1)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE_MASK OTP_DATA_RAW_GUARDED_CRITICAL_SECURE_BOOT_ENABLE(ALL1)

/*KEY_VALID Register macros*/


/*DEBUGEN Register macros*/

#define OTP_DATA_RAW_GUARDED_DEBUGEN_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_PROC0(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*DEBUGEN_LOCK Register macros*/

#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(v) (((v)&0x1)<<8)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_MISC(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC1(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_SECURE(ALL1)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0_MASK OTP_DATA_RAW_GUARDED_DEBUGEN_LOCK_PROC0(ALL1)

/*ARCHSEL Register macros*/

#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_CORE0(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*ARCHSEL_STATUS Register macros*/

#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE1(ALL1)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0_MASK OTP_DATA_RAW_GUARDED_ARCHSEL_STATUS_CORE0(ALL1)

/*BOOTDIS Register macros*/

#define OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT_MASK OTP_DATA_RAW_GUARDED_BOOTDIS_NEXT(ALL1)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NOW(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_BOOTDIS_NOW_MASK OTP_DATA_RAW_GUARDED_BOOTDIS_NOW(ALL1)

/*INTR Register macros*/

#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTR_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTR_SBPI_FLAG_N(ALL1)

/*INTE Register macros*/

#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTE_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTE_SBPI_FLAG_N(ALL1)

/*INTF Register macros*/

#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTF_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTF_SBPI_FLAG_N(ALL1)

/*INTS Register macros*/

#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL(v) (((v)&0x1)<<4)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_RD_NSEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL(v) (((v)&0x1)<<3)
#define OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_RD_SEC_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL(v) (((v)&0x1)<<2)
#define OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_APB_DCTRL_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL(v) (((v)&0x1)<<1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL_MASK OTP_DATA_RAW_GUARDED_INTS_SBPI_WR_FAIL(ALL1)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N(v) (((v)&0x1)<<0)
#define OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N_MASK OTP_DATA_RAW_GUARDED_INTS_SBPI_FLAG_N(ALL1)

#endif