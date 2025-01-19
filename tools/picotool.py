#!/bin/python3
import usb.core
import usb.util
import struct
import argparse
import sys

epo = None
epi = None
dev = None

class picobootCmd:
    def __init__(self, cmdId, cmdSize, dTransferLength, args, dToken=-1,) :
        if dToken != -1:
            self.dToken=dToken
        else:
            picobootCmd.token = picobootCmd.token +1
            self.dToken=picobootCmd.token
        self.bCmdId=cmdId;
        self.cmdSize=cmdSize
        self.dTransferLength=dTransferLength
        self.args =args
    dMagic=0x431fd10b
    token   = 0
    def encode(self,fmt):
        match self.bCmdId:
            case 0x03 | 0x8b:
                return struct.pack( "<IIBBHIIIII",self.dMagic, self.dToken, self.bCmdId, self.cmdSize, 0,self.dTransferLength, 
                                   self.args[0], self.args[1], 0, 0)
            #case 0x8b:
            #    return struct.pack( "<IIBBHIIIII",self.dMagic, self.dToken, self.bCmdId, self.cmdSize, 0,self.dTransferLength, 
            #                       self.args[0], self.args[1], 0, 0)
            case 0x05 | 0x84:
                return struct.pack( "<IIBBHIIIII",self.dMagic, self.dToken, self.bCmdId, self.cmdSize, 0,self.args[1], 
                                   self.args[0], self.args[1], 0, 0)
            case 0x01:
                return struct.pack( "<IIBBHIIIII",self.dMagic, self.dToken, self.bCmdId, 1, 0,0, self.args[0], 0,0,0)
                                   
            case _:
                return None

def  memMap(addr, data):
    idx=0
    lines=[]
    while idx < len(data):
        line= f'0x{base+idx:08x}  '
        line= line + " ".join([f'{i:02x}' for i in data[idx:idx+8] ])
        idx = idx + 8
        line= line + " " +  " ".join([f'{i:02x}' for i in data[idx:idx+8] ])
        idx = idx + 8
        lines.append(line)
    return lines

def picobootResetInterface():
    return dev.ctrl_transfer(0x41,0x41,0, 1, 0)

def picobootWrite( cmd, retries=2):
    count = 0
    ret = None
    while count < retries and ret != 32: 
        try:
            if args.v:
                print( "Trying to write to endpoint {ep}" )
            ret=epo.write(cmd)
        except usb.core.USBTimeoutError:
            if args.v:
                print( "Write did not succeed.  Attempting to reset endpoint.")
            picobootResetInterface()
            count = count + 1
    return ret

def readMem(base, chunk, retries=3):
        ret=None
        try:
            readCmd=picobootCmd(0x84, 8, 0, [base, chunk])
            ret=picobootWrite(readCmd)
        except Exception as e:
            print(f"A USB error occurred: {e}")
            sys.exit(5)
        data=None
        if ret == 32:
            try:
                data=epi.read( chunk, 1000)
            except usb.core.USBTimeoutError:
                pass
            except Exception as e:
                print(f"A USB error occurred: {e}")
                sys.exit(5)
        return data

def writeMem( addr, data, retries=3):
    writeCmd=picobootCmd(0x05, 0x08, 16, [addr,len(data)])
    ret=0
    if 32 == picobootWrite( writeCmd):
        try:
            ret=epo.write(data)
        except Exception as e:
            print(f"A USB error occurred: {e}")
            sys.exit(5)
    return ret

def getInfo(cmd, arg):
    infoCmd=picobootCmd(0x8b, 0x10, 32, [cmd,arg])
    picobootWrite( infoCmd, retries=2)
    return epi.read( 32)




parser = argparse.ArgumentParser()
parser.add_argument("--exclusive", "-x", action="store_true", help="Gain exclusive Picoboot access"),
parser.add_argument("--erase","-e", action="store_true", help="Erase Pico2 flash"),
parser.add_argument("--read","-r", nargs=2, help="Erase Pico2 flash"),
parser.add_argument("-v", action="store_true", help="Verbose"),

#Find RP2350 in Bootsel
try:
    args = parser.parse_args()
except:
    sys.exit(1)
dev = usb.core.find(idVendor=0x2e8a, idProduct=0x000f)
if dev is None:
    print('Pico2 not found.  Is one connected in Bootsel mode?')
    sys.exit(2)
if args.v:
    print(f"Found Pico 2 device {dev.idVendor:04x}:{dev.idProduct:04x}with address {dev.address} on bus {dev.bus}")

cfg=dev.configurations()[0]
for i in cfg.interfaces():
    if i.bInterfaceClass == 255 and i.bNumEndpoints == 2:
        inf = i
if inf is None:
    print('Picoboot Interface not found.')
    sys.exit(3)
if args.v:
    print(f"Found Picoboot Interface")

try:
    (epo,epi) = inf.endpoints()
except:
    print('Unknown USB error occurred.')
    sys.exit(4)


if args.exclusive:
    exclusiveCmd=picobootCmd(0x01, 0x01, 0, [2])
    try:
        ret=picobootWrite( exclusiveCmd)
    except Exception as e:
        print(f"A USB error occurred: {e}")
        exit(5)
    if ret != 32:
        print( "Unable to obtain exclusive Picoboot access.  Proceeding anyway...")
    else:
        print( "Obtained exclusive Picoboot access.")

if args.erase:
    eraseCmd=picobootCmd(0x03, 8, 0, [0x10000000,0x00400000])
    try:
        ret=picobootWrite( eraseCmd, 5)
    except Exception as e:
        print(f"A USB error occurred: {e}")
        sys.exit(5)
    if ret != 32:
        print( "Erase flash did not succeed.")
        sys.exit(4)
    elif args.v:
        print( "Flash Erase succeeded.")

if args.read != None:
    saddr = None
    size = None
    try:
        size=int(args.read[1])
        saddr=int(args.read[0])
    except ValueError:
        saddr=int(args.read[0],16)
    finally:
        if saddr == None:
            print(f"Start address {args.read[0]} does not appear to be an integer.")
            sys.exit(2)
        if size == None:
            print(f"Read size {args.read[1]} does not appear to be an integer.")
            sys.exit(2)
    base = saddr - saddr % 16
    total = 16*(round( (saddr+size)/16+.5) - round( saddr/16 -.5))
    chunk = min( 1024, total)
    retries = 3
    while size > 0:
        if retries == 0 :
            break
        retries = retries -1
        ret=None
        data=readMem( base, chunk)
        if data != None:
            for line in memMap( base, data):
                print(line)
                base=base+16
                size=size-16
            retries = 3


#writeCmd=picobootCmd(0x05, 0x08, 16, [0x20000000,16])


