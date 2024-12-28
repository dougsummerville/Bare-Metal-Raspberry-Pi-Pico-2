#!/usr/bin/env python3

# Utility to convert a Pi Pico 2 ARM32 ELF to UF2

# Copyright (c) 2022-2025 Douglas H. Summerville (dsummer@binghamton.edu)
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

import argparse
import sys
import binascii
import struct
from collections import namedtuple


class Uf2Record:
    uf2_format   = "<IIIIIIII476sI"
    num_records  = 0
    magic_start0 = 0x0A324655
    magic_start1 = 0x9E5D5157
    flags        = 0x00002000
    family_id    = 0xe48bff59
    magic_end    = 0x0AB16F30
    num_bytes    = 256  #Pico bootloader only accepts 256B records

    def __init__(self, addr, data):
        self.block_num = Uf2Record.num_records
        Uf2Record.num_records = Uf2Record.num_records+1
        self.addr = addr
        self.data = data

    def pack(self):
        return struct.pack(
            Uf2Record.uf2_format, Uf2Record.magic_start0,
            Uf2Record.magic_start1, Uf2Record.flags, self.addr,
            Uf2Record.num_bytes, self.block_num, Uf2Record.num_records,
            Uf2Record.family_id, self.data, Uf2Record.magic_end)

# pi pico stuff
class rp2350:
    flash_start = 0x10000000
    flash_end = 0X10400000
    sram_start = 0X20000000
    sram_end = 0X20082000

    def is_ram_address(A):
        return A >= rp2350.sram_start and A < rp2350.sram_end

    def is_flash_address(A):
        return A >= rp2350.flash_start and A < rp2350.flash_end


# ELF32 stuff
elf32_ei = {
    "ei_magic": "4s",
    "ei_class": "B",
    "ei_data": "B",
    "ei_version": "B",
    "ei_osabi": "B",
    "ei_abiversion": "B",
    "ei_pad": "7s"
}
elf32_e_ident = namedtuple("elf32_eident", elf32_ei.keys())
elf32_e_ident_format = "<"+"".join(elf32_ei.values())

elf32_fh = {
    "e_ident": "16s",
    "e_type": "H",
    "e_machine": "H",
    "e_version": "I",
    "e_entry": "I",
    "e_phoff": "I",
    "e_shoff": "I",
    "e_flags": "I",
    "e_ehsize": "H",
    "e_phentsize": "H",
    "e_phnum": "H",
    "e_shentsize": "H",
    "e_shnum": "H",
    "e_shstrndx": "H"
}
elf32_file_header = namedtuple("elf32_file_header", elf32_fh.keys())
elf32_file_header_format = "<"+"".join(elf32_fh.values())

elf32_ph = {
    "ph_type": "I",
    "ph_offset": "I",
    "ph_vaddr": "I",
    "ph_paddr": "I",
    "ph_filesz": "I",
    "ph_memsize": "I",
    "ph_flags": "I",
    "ph_align": "I"
}
elf32_program_header = namedtuple("elf32_program_header", elf32_ph.keys())
elf32_program_header_format = "<"+"".join(elf32_ph.values())

# Require one ELF file as argument
parser = argparse.ArgumentParser()
parser.add_argument("file_name", help="ELF file to have CRC32 inserted"),
parser.add_argument("-o", required=False, help="UF2 output file"),
parser.add_argument("-v", action="store_true", help="Verbose"),
parser.add_argument("-vv", action="store_true", help="Verbose"),
args = parser.parse_args()


def diag(S):
    if args.v:
        print(S)

try:
    elf_file = open(args.file_name, "rb")
except:
    sys.exit("Could not open file: %s" % (args.file_name))

# Unpack ELF header and do some sanity checking

try:
    elf_file_hdr = elf32_file_header._make(
        struct.unpack(
            elf32_file_header_format,
            elf_file.read(struct.calcsize(elf32_file_header_format))
        )
    )
except:
    sys.exit("Error reading file %s" % (args.file_name))

elf_e_ident = elf32_e_ident._make(
    struct.unpack(elf32_e_ident_format, elf_file_hdr[0])
)
# Sanity check ELF
if elf_e_ident.ei_magic != b'\177ELF':
    sys.exit("%s is not an ELF binary" % (args.file_name))
if elf_e_ident.ei_class != 1:
    sys.exit("%s is not a 32b ELF binary" % (args.file_name))
if elf_e_ident.ei_data != 1:
    sys.exit("%s is not a 32b ELF binary" % (args.file_name))
if elf_e_ident.ei_version != 1:
    sys.exit("%s has the wrong ELF version" % (args.file_name))
if elf_e_ident.ei_osabi != 0:
    sys.exit("%s has the wrong EABI" % (args.file_name))
if elf_e_ident.ei_abiversion != 0:
    sys.exit("%s has the wrong EABI version" % (args.file_name))
if elf_file_hdr.e_type != 2:
    sys.exit("%s does not contain executable code" % (args.file_name))
if elf_file_hdr.e_machine != 0x28:
    sys.exit("%s does not contain ARM machine code" % (args.file_name))
if elf_file_hdr.e_version != 1:
    sys.exit("%s is not is not a version 1 ELF file" % (args.file_name))
if elf_file_hdr.e_phentsize != 0x20 or elf_file_hdr.e_phnum == 0:
    sys.exit("%s does not have a valid program header" % (args.file_name))
diag("%s is valid 32b ARM little-endian ELF file" % (args.file_name))

# walk through PH entries looking for LOADable
try:
    elf_file.seek(elf_file_hdr.e_phoff)
except:
    sys.exit("%s does not have a valid program header" % (args.file_name))

ram_segments_present = False
flash_segments_present = False
loadable_segments = []

for i in range(0, elf_file_hdr.e_phnum):
    try:
        elf_prog_hdr = elf32_program_header._make(
            struct.unpack(
                elf32_program_header_format, elf_file.read(
                    struct.calcsize(elf32_program_header_format))))
    except:
        sys.exit("Error reading program header entries")

    size = min(elf_prog_hdr.ph_filesz, elf_prog_hdr.ph_memsize)
    memory = "ram" if rp2350.is_ram_address(elf_prog_hdr.ph_paddr) \
        else "flash" if rp2350.is_flash_address(elf_prog_hdr.ph_paddr) \
        else "none"
    if memory == "ram":
        ram_segments_present = True
    if memory == "flash":
        flash_segments_present = True
    if elf_prog_hdr.ph_type == 1 and size != 0 and memory != "none":
        diag("ELF contains loadable %s segment at 0x%x" %
             (memory, elf_prog_hdr.ph_paddr))
        loadable_segments.append(elf_prog_hdr)
    else:
        diag("Skipping program header for non-loadable segment")

if ram_segments_present and flash_segments_present:
    diag("Mixed RAM and flash binary; UF2 will program flash and RAM.")
elif ram_segments_present:
    diag("RAM only binary; UF2 will program RAM only.")
elif flash_segments_present:
    diag("Flash only binary; UF2 will program flash.")
#Get list of segments
# DOES NOT CHECK FOR OVERLAP
# ASSUME there can be non-contiguous segments?
uf2_data=[]
segment_data=bytearray()
seg_paddr=loadable_segments[0].ph_paddr
for p_hdr in loadable_segments:
    size = min(p_hdr.ph_filesz, p_hdr.ph_memsize)
    elf_file.seek(p_hdr.ph_offset)
    data = elf_file.read(size)
    if seg_paddr + len(segment_data) != p_hdr.ph_paddr:
        uf2_data.append( (seg_paddr,segment_data) )
        seg_paddr = p_hdr.ph_paddr
        segment_data = data
    else:
        segment_data = segment_data + data
uf2_data.append( (seg_paddr,segment_data) )
seg_paddr = p_hdr.ph_paddr
# create UF2 blocks 
uf2_records = []
for (paddr,data) in uf2_data:
    diag("Processing %d byte segment at physical address %x"%(len(data),paddr))
    while len(data) > 0:
        chunk_size = min(len(data),256)
        uf2 = Uf2Record(paddr, data[:chunk_size])
        uf2_records.append(uf2)
        paddr += chunk_size
        data = data[chunk_size:]
try:
    ofile_name = ".".join(args.file_name.split(".")[0:-1])+".uf2"
    ofile_name = ofile_name if not args.o else args.o
    diag("Writing output to " + ofile_name)
    ofile = open(ofile_name, "wb")
except:
    sys.exit("Could not open file: %s" % (args.ofile_name))
for u in uf2_records:
    diag( "Writing UF2 record of 256B @ addr %s"%(hex(u.addr)))
    ofile.write(u.pack())
ofile.close()
