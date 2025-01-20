/* Linker Script for Bare Metal Pi Pico 2 with ram image bootloader
 *
 * Copyright (c) 2025 Douglas H. Summerville, Binghamton University 
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

MEMORY
{
  RAM   (rwx) : ORIGIN = 0x20000000,  LENGTH = 520K
}

/*Map sections to memory*/
SECTIONS
{
	__stack_top = ORIGIN(RAM) + LENGTH(RAM);

	.boot : {
		KEEP(_ram_only_init.o(.vector_table))
		KEEP(_ram_only_init.o(.start_block*))
		KEEP(_ram_only_init.o(.init))
	} > RAM

	TEXT : {
		__text_lma = .;
		__text = .;
		*(.text*)
		*(.rodata) 
		*(.rodata*) 
		__etext = .;
	} >RAM
	
	DATA : {
		__data_lma = .;
		__data = .;
		*(.data*)
		__edata = .;
	} >RAM 

	BSS (COPY):
	{
		__bss = .;
		*(.bss*)
	} > RAM
	__ebss = .;
	__end = .;
}
    
