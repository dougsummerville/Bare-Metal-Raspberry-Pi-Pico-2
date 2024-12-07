/* Copy to RAM Bootloader
 *
 * Copyright (c) 2022-2025 Douglas H. Summerville, Binghamton University 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <rp2040/ssi.h>
#include <rp2040/resets.h>
#include <rp2040/clocks.h>
#include <stdint.h>

extern uint32_t __rom_copy_start, __ram_copy_start, __ram_copy_end;
//extern void __attribute__((naked)) __system_entry_point_thumb();
//extern uint32_t __system_entry_point;
extern void __attribute__((noreturn)) _reset_init();

/*Stage 2 needs to fit in 256 bytes and will be at the top of RAM.  At the
 * time this is executed, the SP will be initialized by the stage 1 boot to
 * be just below this code in RAM.  
 */
void __attribute__((naked, noreturn, section (".stage_2_bootloader")))
copy_to_ram_bootloader()
{
	//Stage 1 gets us here with clocks & XIP configured.
	/*Set up XIP for the copy loop*/
	ssi -> ssienr = 0;
	ssi -> baudr =4;
	ssi -> ctrlr0 =
	       	 SSI_CTRLR0_TMOD(3) 
		|SSI_CTRLR0_DFS_32(0x1F);
	ssi -> spi_ctrlr0 = 
		 SSI_SPI_CTRLR0_XIP_CMD(0x03)
		|SSI_SPI_CTRLR0_INST_L(2)
		|SSI_SPI_CTRLR0_ADDR_L(6);	
	ssi -> ctrlr1 = SSI_CTRLR1_NDF(0);
	ssi -> ssienr = SSI_SSIENR_SSI_EN(1);

    
    /* linker script will warn if copy to RAM may overwrite this stage 2
     * by enforcing minimu stack size 
     */
	uint32_t *ram_ptr = (uint32_t *) &__ram_copy_start;
	uint32_t *rom_ptr = (uint32_t *) &__rom_copy_start;
	while( ram_ptr  < (uint32_t *) &__ram_copy_end )
		*ram_ptr++ = *rom_ptr++;
	//AT this time we're done with XIP so disable 
	ssi -> ssienr = 0;
	//switch the glitchless mux to before resetting peripherals (including PLL)
	clocks -> clr_clk_sys_ctrl = CLOCKS_CLK_SYS_CTRL_SRC_MASK;
	while( !(clocks -> clk_sys_selected & 0x1) );

	//got to system initialization
	_reset_init();
}


/*The second stage boot needs to be padded to 256 and then checksummed.
 * Padding is done by moving the location counter to 252 in the linker
 * script adding four checksum bytes, all initialized to 0.
 *
 * This is checksummed after generation of the ELF to allow the linker to
 * resolve symbols.
 */
static const uint8_t __attribute__((used,section (".stage_2_crc"))) crc[4];
