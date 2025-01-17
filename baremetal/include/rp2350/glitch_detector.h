
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

#ifndef RP2350_GLITCH_DETECTOR_H
#define RP2350_GLITCH_DETECTOR_H

#include <stdint.h>

#define ALL1 ((uint32_t)0xFFFFFFFF)

typedef struct{
		uint32_t arm;
		uint32_t disarm;
		uint32_t sensitivity;
		uint32_t lock;
		uint32_t trig_status;
		uint32_t trig_force;
		uint32_t RSVD0[1018];
		uint32_t xor_arm;
		uint32_t xor_disarm;
		uint32_t xor_sensitivity;
		uint32_t xor_lock;
		uint32_t xor_trig_status;
		uint32_t xor_trig_force;
		uint32_t RSVDxor_0[1018];
		uint32_t set_arm;
		uint32_t set_disarm;
		uint32_t set_sensitivity;
		uint32_t set_lock;
		uint32_t set_trig_status;
		uint32_t set_trig_force;
		uint32_t RSVDset_0[1018];
		uint32_t clr_arm;
		uint32_t clr_disarm;
		uint32_t clr_sensitivity;
		uint32_t clr_lock;
		uint32_t clr_trig_status;
		uint32_t clr_trig_force;
		uint32_t RSVDclr_0[1018];
} GLITCH_DETECTOR_REG_BLOCKS;

#define glitch_detector (*(GLITCH_DETECTOR_REG_BLOCKS volatile *)0x40158000)

/*ARM Register macros*/


/*DISARM Register macros*/


/*SENSITIVITY Register macros*/

#define GLITCH_DETECTOR_SENSITIVITY_DEFAULT(v) (((v)&0xff)<<24)
#define GLITCH_DETECTOR_SENSITIVITY_DEFAULT_MASK GLITCH_DETECTOR_SENSITIVITY_DEFAULT(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET3_INV(v) (((v)&0x3)<<14)
#define GLITCH_DETECTOR_SENSITIVITY_DET3_INV_MASK GLITCH_DETECTOR_SENSITIVITY_DET3_INV(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET2_INV(v) (((v)&0x3)<<12)
#define GLITCH_DETECTOR_SENSITIVITY_DET2_INV_MASK GLITCH_DETECTOR_SENSITIVITY_DET2_INV(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET1_INV(v) (((v)&0x3)<<10)
#define GLITCH_DETECTOR_SENSITIVITY_DET1_INV_MASK GLITCH_DETECTOR_SENSITIVITY_DET1_INV(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET0_INV(v) (((v)&0x3)<<8)
#define GLITCH_DETECTOR_SENSITIVITY_DET0_INV_MASK GLITCH_DETECTOR_SENSITIVITY_DET0_INV(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET3(v) (((v)&0x3)<<6)
#define GLITCH_DETECTOR_SENSITIVITY_DET3_MASK GLITCH_DETECTOR_SENSITIVITY_DET3(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET2(v) (((v)&0x3)<<4)
#define GLITCH_DETECTOR_SENSITIVITY_DET2_MASK GLITCH_DETECTOR_SENSITIVITY_DET2(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET1(v) (((v)&0x3)<<2)
#define GLITCH_DETECTOR_SENSITIVITY_DET1_MASK GLITCH_DETECTOR_SENSITIVITY_DET1(ALL1)
#define GLITCH_DETECTOR_SENSITIVITY_DET0(v) (((v)&0x3)<<0)
#define GLITCH_DETECTOR_SENSITIVITY_DET0_MASK GLITCH_DETECTOR_SENSITIVITY_DET0(ALL1)

/*LOCK Register macros*/


/*TRIG_STATUS Register macros*/

#define GLITCH_DETECTOR_TRIG_STATUS_DET3(v) (((v)&0x1)<<3)
#define GLITCH_DETECTOR_TRIG_STATUS_DET3_MASK GLITCH_DETECTOR_TRIG_STATUS_DET3(ALL1)
#define GLITCH_DETECTOR_TRIG_STATUS_DET2(v) (((v)&0x1)<<2)
#define GLITCH_DETECTOR_TRIG_STATUS_DET2_MASK GLITCH_DETECTOR_TRIG_STATUS_DET2(ALL1)
#define GLITCH_DETECTOR_TRIG_STATUS_DET1(v) (((v)&0x1)<<1)
#define GLITCH_DETECTOR_TRIG_STATUS_DET1_MASK GLITCH_DETECTOR_TRIG_STATUS_DET1(ALL1)
#define GLITCH_DETECTOR_TRIG_STATUS_DET0(v) (((v)&0x1)<<0)
#define GLITCH_DETECTOR_TRIG_STATUS_DET0_MASK GLITCH_DETECTOR_TRIG_STATUS_DET0(ALL1)

/*TRIG_FORCE Register macros*/


#endif
