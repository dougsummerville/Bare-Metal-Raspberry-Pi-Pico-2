#!/usr/bin/env python3

# Utility to add CRC32 to a Pi Pico ARM32 ELF file with an already padded
# stage 2 boot sector

# Copyright (c) 2022 Douglas H. Summerville (dsummer@binghamton.edu)
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

# Look-up table for reversing bits in a byte
byte_reverse = \
    [((a & 0xf0) >> 4) | ((a & 0x0F) << 4) for a in
     [((b & 0xCC) >> 2) | ((b & 0x33) << 2) for b in
      [((c & 0xAA) >> 1) | ((c & 0x55) << 1) for c in range(0, 256)]]]

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


# Argument Parsing
parser = argparse.ArgumentParser()
parser.add_argument("file_name", help="ELF file to have CRC32 inserted"),
parser.add_argument(
    "-f", action="store_true",
    help="Force write of CRC into ELF when CRC bytes not 0"),
parser.add_argument("-v", action="store_true", help="Verbose")
args = parser.parse_args()


def diag(S):
    if args.v:
        print(S)


try:
    elf_file = open(args.file_name, "rb+")
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
    sys.exit("%s is not executable code" % (args.file_name))
if elf_file_hdr.e_machine != 0x28:
    sys.exit("%s is not ARM machine code" % (args.file_name))
if elf_file_hdr.e_version != 1:
    sys.exit("%s is not  version 1 ELF format" % (args.file_name))
if elf_file_hdr.e_phentsize != 0x20 or elf_file_hdr.e_phnum == 0:
    sys.exit("%s does not have a valid program header" % (args.file_name))
diag("%s is a valid 32b ARM little-endian ELF file" % (args.file_name))

# walk through PH entries looking for LOADable boot section
try:
    elf_file.seek(elf_file_hdr.e_phoff)
except:
    sys.exit("%s does not have a valid program header" % (args.i_file_name))

for i in range(0, elf_file_hdr.e_phnum):
    try:
        elf_prog_hdr = elf32_program_header._make(
            struct.unpack(
                elf32_program_header_format,
                elf_file.read(struct.calcsize(elf32_program_header_format))
            )
        )
    except:
        sys.exit("Error reading program header entries")
    # check for 256B executable segment at start of flash
    if elf_prog_hdr.ph_type == 1 and elf_prog_hdr.ph_paddr == 0x10000000:
        if elf_prog_hdr.ph_memsize == 256 and elf_prog_hdr.ph_flags & 0x5 == 5:
            boot_header_found = True
            boot_section_header = elf_prog_hdr
            break
        elif elf_prog_hdr.ph_memsize != 256:
            sys.exit("Error: section at address 0x10000000 is not 256 bytes")
        else:
            sys.exit("Error: section at address 0x10000000 is not executable")
if boot_header_found:
    diag("Found a valid padded stage2 boot section")
else:
    exit("No valid stage 2 boot found")

# Checksum is CRC-32 calculated over 252, bit-reversed bytes of boot hdr
elf_file.seek(boot_section_header.ph_offset)
boot_code = [byte_reverse[i] for i in elf_file.read(252)]
checksum_bytes = struct.unpack("<I", elf_file.read(4))[0]
if checksum_bytes != 0 and not args.f:
    sys.exit("Checksum byte locations not zero in ELF.\nUse -f flag to force.")
elif checksum_bytes != 0 and args.f:
    diag("Checksum byte locations not zero in ELF.\nForcing overwrite.")

# compute CRC-32
checksum = 0xFFFFFFFF ^ binascii.crc32(bytes(boot_code))
# bit reverse bytes (bytes are reverse below to complete full 32 bit reversal)
checksum_bytes = [byte_reverse[b] for b in struct.pack("<I", checksum)]
diag("Computed checksum: "+",".join([hex(i) for i in checksum_bytes]))
try:
    elf_file.seek(boot_section_header.ph_offset+252)
    elf_file.write(bytearray(checksum_bytes[::-1]))
    elf_file.close()
except:
    sys.exit("Write of checksum bytes to %s failed." % (args.file_name))

diag("Successfully added checksum to %s." % (args.file_name))
