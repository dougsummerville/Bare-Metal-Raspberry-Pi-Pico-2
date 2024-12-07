
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

#ifndef RP2040_PADS_QSPI_H
#define RP2040_PADS_QSPI_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t voltage_select;
		uint32_t gpio_qspi_sclk;
		uint32_t gpio_qspi_sd0;
		uint32_t gpio_qspi_sd1;
		uint32_t gpio_qspi_sd2;
		uint32_t gpio_qspi_sd3;
		uint32_t gpio_qspi_ss;
		uint32_t RSVD0[1017];
		uint32_t xor_voltage_select;
		uint32_t xor_gpio_qspi_sclk;
		uint32_t xor_gpio_qspi_sd0;
		uint32_t xor_gpio_qspi_sd1;
		uint32_t xor_gpio_qspi_sd2;
		uint32_t xor_gpio_qspi_sd3;
		uint32_t xor_gpio_qspi_ss;
		uint32_t RSVDxor_0[1017];
		uint32_t set_voltage_select;
		uint32_t set_gpio_qspi_sclk;
		uint32_t set_gpio_qspi_sd0;
		uint32_t set_gpio_qspi_sd1;
		uint32_t set_gpio_qspi_sd2;
		uint32_t set_gpio_qspi_sd3;
		uint32_t set_gpio_qspi_ss;
		uint32_t RSVDset_0[1017];
		uint32_t clr_voltage_select;
		uint32_t clr_gpio_qspi_sclk;
		uint32_t clr_gpio_qspi_sd0;
		uint32_t clr_gpio_qspi_sd1;
		uint32_t clr_gpio_qspi_sd2;
		uint32_t clr_gpio_qspi_sd3;
		uint32_t clr_gpio_qspi_ss;
		uint32_t RSVDclr_0[1017];
} PADS_QSPI_REG_BLOCKS;

#define pads_qspi ((PADS_QSPI_REG_BLOCKS volatile *)0x40020000)

/*VOLTAGE_SELECT Register macros*/


/*GPIO_QSPI_SCLK Register macros*/

#define PADS_QSPI_GPIO_QSPI_SCLK_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SCLK_OD_MASK PADS_QSPI_GPIO_QSPI_SCLK_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SCLK_IE_MASK PADS_QSPI_GPIO_QSPI_SCLK_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SCLK_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SCLK_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SCLK_PUE_MASK PADS_QSPI_GPIO_QSPI_SCLK_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SCLK_PDE_MASK PADS_QSPI_GPIO_QSPI_SCLK_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SCLK_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SCLK_SLEWFAST(ALL1)

/*GPIO_QSPI_SD0 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD0_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD0_OD_MASK PADS_QSPI_GPIO_QSPI_SD0_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD0_IE_MASK PADS_QSPI_GPIO_QSPI_SD0_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD0_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD0_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD0_PUE_MASK PADS_QSPI_GPIO_QSPI_SD0_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD0_PDE_MASK PADS_QSPI_GPIO_QSPI_SD0_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD0_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD0_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD0_SLEWFAST(ALL1)

/*GPIO_QSPI_SD1 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD1_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD1_OD_MASK PADS_QSPI_GPIO_QSPI_SD1_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD1_IE_MASK PADS_QSPI_GPIO_QSPI_SD1_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD1_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD1_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD1_PUE_MASK PADS_QSPI_GPIO_QSPI_SD1_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD1_PDE_MASK PADS_QSPI_GPIO_QSPI_SD1_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD1_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD1_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD1_SLEWFAST(ALL1)

/*GPIO_QSPI_SD2 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD2_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD2_OD_MASK PADS_QSPI_GPIO_QSPI_SD2_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD2_IE_MASK PADS_QSPI_GPIO_QSPI_SD2_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD2_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD2_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD2_PUE_MASK PADS_QSPI_GPIO_QSPI_SD2_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD2_PDE_MASK PADS_QSPI_GPIO_QSPI_SD2_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD2_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD2_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD2_SLEWFAST(ALL1)

/*GPIO_QSPI_SD3 Register macros*/

#define PADS_QSPI_GPIO_QSPI_SD3_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SD3_OD_MASK PADS_QSPI_GPIO_QSPI_SD3_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SD3_IE_MASK PADS_QSPI_GPIO_QSPI_SD3_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SD3_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SD3_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SD3_PUE_MASK PADS_QSPI_GPIO_QSPI_SD3_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SD3_PDE_MASK PADS_QSPI_GPIO_QSPI_SD3_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SD3_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SD3_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SD3_SLEWFAST(ALL1)

/*GPIO_QSPI_SS Register macros*/

#define PADS_QSPI_GPIO_QSPI_SS_OD(v) (((v)&0x1)<<7)
#define PADS_QSPI_GPIO_QSPI_SS_OD_MASK PADS_QSPI_GPIO_QSPI_SS_OD(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_IE(v) (((v)&0x1)<<6)
#define PADS_QSPI_GPIO_QSPI_SS_IE_MASK PADS_QSPI_GPIO_QSPI_SS_IE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_DRIVE(v) (((v)&0x3)<<4)
#define PADS_QSPI_GPIO_QSPI_SS_DRIVE_MASK PADS_QSPI_GPIO_QSPI_SS_DRIVE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_PUE(v) (((v)&0x1)<<3)
#define PADS_QSPI_GPIO_QSPI_SS_PUE_MASK PADS_QSPI_GPIO_QSPI_SS_PUE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_PDE(v) (((v)&0x1)<<2)
#define PADS_QSPI_GPIO_QSPI_SS_PDE_MASK PADS_QSPI_GPIO_QSPI_SS_PDE(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_SCHMITT(v) (((v)&0x1)<<1)
#define PADS_QSPI_GPIO_QSPI_SS_SCHMITT_MASK PADS_QSPI_GPIO_QSPI_SS_SCHMITT(ALL1)
#define PADS_QSPI_GPIO_QSPI_SS_SLEWFAST(v) (((v)&0x1)<<0)
#define PADS_QSPI_GPIO_QSPI_SS_SLEWFAST_MASK PADS_QSPI_GPIO_QSPI_SS_SLEWFAST(ALL1)

#endif