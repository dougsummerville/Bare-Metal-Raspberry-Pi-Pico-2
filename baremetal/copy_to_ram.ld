/* Linker Script for Bare Metal Pi Pico with copy-to-ram bootloader
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
  ROM  (rx)    : ORIGIN = 0x10000000,  LENGTH = 16M 
  RAM  (rwx)   : ORIGIN = 0x20000000,  LENGTH = 256K
  DPSRAM (rw)  : ORIGIN = 0x50100000,  LENGTH = 4K
}

/*Libraries
 *libgcc is needed when using C features that do not map to
 *instructions in the ARM M0+ set
 */
GROUP(libgcc.a)


/*This defines the entry point of the system*/
ENTRY(__stage2_bootloader_start)

/*Map sections to memory*/
SECTIONS
{
	.boot : {
		__stage2_bootloader_start = .;
		KEEP(*(.stage_2_bootloader*))
		. = 252;
		KEEP(*(.stage_2_crc))
		__rom_copy_start = .;
	} > ROM

	.text : {
		. = ALIGN(256);
		__ram_copy_start = .;
		__vector_table_offset = .;
		__vector_table_offset_vtor = __vector_table_offset >> 8;
		KEEP(*(.vector_table*))
		. = ALIGN(2);
		KEEP(*(.system_startup_code))
		. = ALIGN(4);
		*(.text*)
		. = ALIGN(4);
		*(.rodata*)
		. = ALIGN(4);
		__etext = .;
    } > RAM AT> ROM

        
    .data :
    {
        __data = .;
        *(.data*)
        . = ALIGN(4);
        __edata = .;
	__ram_copy_end = .;
    } >RAM AT> ROM

    .bss (COPY):
    {
        . = ALIGN(4);
        __bss_start = .;
        *(.bss*)
    } > RAM
    __bss_end = .;
    __end = .;
    /* Set stack top to end of RAM */
    __stack_top = ORIGIN(RAM) + LENGTH(RAM);
    /*Sanity Checks*/
    ASSERT( __ram_copy_end < ORIGIN(RAM) + LENGTH(RAM) - __min_stack_size__,
    "Program too large to fit in RAM")
    /*TODO: check that bootloader is right size*/
    
}
    
