# Makefile for Bare-metal Pi Pico C Environment
#
# Copyright (c) 2025 Douglas H. Summerville, Binghamton University
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

CC = arm-none-eabi-gcc
OBJSIZE = arm-none-eabi-size
ELF2UF2 = tools/elf2uf2.py
INCLUDES = -Idrivers -Ibaremetal/include -Ilib -Iinclude
VPATH = src:drivers:baremetal:lib
-include config.make


#enable Link time removal of unused functions
LTOPTS = -fdata-sections -ffunction-sections -Xlinker -gc-sections
LINKOPTS = -nostartfiles -specs=nano.specs
OPTS = -Os 

TARGET = armv8-m.main+fp+dsp
CFLAGS = -ffreestanding -march=$(TARGET) -mfloat-abi=hard -mthumb \
	  $(OPTS) $(INCLUDES) $(LTOPTS) -Wall
#EXECUTE FROM can be flash, ram, or ram_only
EXECUTEFROM=flash
LINKSCRIPT=baremetal/_$(EXECUTEFROM).ld 

.PHONY:	clean usage 

# -----------------------------------------------------------------------------

usage: 
	@echo To build an application:
	@echo "     "LIBS=\"list of drivers\" make file.uf2
	@echo ""


clean:
	-rm -f *.o *.out *.bin *.raw *.elf *.uf2 *.tmp

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.uf2: %.elf
	$(ELF2UF2) -v $<

%.elf: %.c $(LIBS) _crt0.o _$(EXECUTEFROM)_init.o _newlib_stubs.o
	$(CC) $(CFLAGS) $(LINKOPTS) -T $(LINKSCRIPT) -o $@ $^
	@echo
	@echo Generated Program has the following segments: \n
	@echo
	-@$(OBJSIZE) -A	$@  | awk 'NR==2{print; next } NR>2 && NR<7 {$$3=sprintf("0x%08x",$$3); print}' | column -t

