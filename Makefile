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
AR = arm-none-eabi-ar
AS = arm-none-eabi-as
OBJCOPY = arm-none-eabi-objcopy
OBJDUMP = arm-none-eabi-objdump
OBJSIZE = arm-none-eabi-size
ELF2UF2 = tools/elf2uf2.py
INSERT_CHECKSUM_INTO_ELF = tools/checksum_pico_elf.py
INCLUDES = -Idrivers -Ibaremetal/include -Ilib
VPATH = src:drivers:baremetal:lib
SYS_CLOCK = 125000000L
-include config.make


OPTS = -Os -flto "-DSYS_CLOCK=$(SYS_CLOCK)" 
TARGET = cortex-m0
CFLAGS = -ffreestanding -nostartfiles -nodefaultlibs \
	 -ffunction-sections -fdata-sections -Wall \
	 -fmessage-length=0 -mcpu=$(TARGET) -mthumb -mfloat-abi=soft \
	 $(DEBUG_OPTS) $(OPTS) $(INCLUDES) 
CFLAGSS = -ffreestanding -nostartfiles \
	 -ffunction-sections -fdata-sections -Wall \
	 -fmessage-length=0 -mcpu=$(TARGET) -mthumb -mfloat-abi=soft \
	 -Os $(INCLUDES) $(IRQ)
ASFLAGS = -mcpu=$(TARGET) -mthumb
#EXECUTE FROM can be flash or ram
EXECUTEFROM=flash
LINKSCRIPT=baremetal/execute_from_$(EXECUTEFROM).ld 
NUM_UF2S := $(shell  ls -dq *.uf2 2>/dev/null | wc -l)

.PHONY:	clean usage program board_plugged_in

# -----------------------------------------------------------------------------

usage: 
	@echo To build an application:
	@echo "     "LIBS=\"list of drivers\" make file.uf2
	@echo ""


clean:
	-rm -f *.o *.out *.bin *.raw *.elf *.uf2 *.tmp

%_init.o: %_init.c
	$(CC) $(CFLAGSS) -c $< -o $@

crt0.o: crt0.c
	$(CC) $(CFLAGSS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.dump: %.out
	$(OBJDUMP) --disassemble $< >$@

%.uf2: %.elf
	$(ELF2UF2) -v $<

%.elf: %.out 
	$(OBJCOPY) -O elf32-littlearm $< $@
	#$(INSERT_CHECKSUM_INTO_ELF) $@

#_startup.o must be first in link order- else LTO removes IRQ Handlers
%.out: %.o $(LIBS) crt0.o _execute_from_$(EXECUTEFROM)_init.o
	$(CC) $(CFLAGS) -T $(LINKSCRIPT) --specs=nano.specs -o $@ $^
	@echo Generated Program has the following segment sizes:
	@$(OBJSIZE) $@

board_plugged_in:
ifeq ($(wildcard /media/$(USER)/RPI-RP2),)
	$(error Raspberry PI not plugged in or not in program mode)
else
	@echo Raspberry Pi Pico found at $(wildcard /media/$(USER)/RPI-RP2)
endif
program: board_plugged_in
ifeq ($(NUM_UF2S),0)
	$(error No UF2 file exists in the current directory)
else
ifeq ($(NUM_UF2S),1)
	cp $(wildcard *.uf2) /media/$(USER)/RPI-RP2/
else
	$(error There is more than one UF2 file in the current directory)  
endif
endif
