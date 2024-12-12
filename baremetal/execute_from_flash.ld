/* Linker Script for Bare Metal Pi Pico 2 with copy-to-ram bootloader
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

EXTERN( __min_stack_size__ )
PROVIDE( __min_stack_size__ = 1024);
MEMORY
{
  ROM  (rwx)    : ORIGIN = 0x10000000,  LENGTH = 4M 
  RAM  (rwx)   : ORIGIN = 0x20000000,  LENGTH = 520K
  DPSRAM (rwx)  : ORIGIN = 0x50100000,  LENGTH = 4K
}

/*Libraries
 *libgcc is needed when using C features that do not map to
 *instructions in the ARM M0+ set
 */
GROUP(libgcc.a)

/*Map sections to memory*/
SECTIONS
{
	.text : {
		KEEP(*(.vector_table*))
		KEEP(*(.start_block*))
		__start_block_loc = .;
		KEEP(*(.init))
		*(.text*)
		*(.rodata*)
		__etext = .;
	} > ROM

        
	.data :
	{
		__ram_copy_start = .;
		. = ALIGN(4);
		__data = .;
		*(.data*)
		. = ALIGN(4);
		__edata = .;
		__ram_copy_end = .;
		. = ALIGN(4);
		KEEP (*(.end_block))
		__end_block_loc = . ;
	} >RAM AT> ROM

	.bss (COPY):
	{
		. = ALIGN(4);
		__bss_start = .;
		*(.bss*)
	} > RAM
	__bss_end = .;
	__end = .;

    __stack_top = ORIGIN(RAM) + LENGTH(RAM);
    __block_loop_link_forward = __end_block_loc - __start_block_loc;
    __block_loop_link_reverse = __start_block_loc - __end_block_loc;
    /*Sanity Checks*/
    ASSERT( __ram_copy_end < ORIGIN(RAM) + LENGTH(RAM) - __min_stack_size__,
    "Program too large to fit in RAM")
    
}
    
