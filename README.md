# Bare Metal Raspberry PI Pico 2
 A bare metal C programming environment for the Raspberry Pi Pico 2 with minimal dependences.  This is "true" minimalistic bare metal C with no SDK, CMSIS, or other layers between programmer and the hardware; it does, however, include header files defining all hardware registers.  Features include: 
- a USB CDC serial driver that uses no system RAM (only USB DPRAM) and provides a virtual COM port
- header files that provide for standard register naming
- stub files for Newlib-nano
- very few examples (see Motivation below)  
- a python-based tool to create UF2 files.
- the ability to create the following types of program images
    - Execute from flash, which uses the XIP cache (best for programs that need lots of RAM)
    - Execute from ram, which copies the program from flash to ram prior to execution (best for minimizing the effects of XIP caching on program run times)
    - RAM-only, which craeats a RAM-only UF2 that will not overwrite the flash (great for debugging)

# Motivation
  This environment was developed for use in an embedded systems course at Binghamton University.  Because of this use case, the number of example programs is purposely limited.  While a software-development kit (SDK) facilitates rapid development and improves portability, it adds a layer of abstraction that hides many of the low-level hardware features, which is undesirable for bare-metal embedded systems education since the skills have limited transferability.  SDKs also produce bloated code, generate excessive files on disk, take too long to compile simple programs, and are overly complicated when building small programs. 

# Status
This environment has not yet undergone significant testing but will be updated as bugs are disovered.
 
# Accessing Hardware Registers
Each peripheral (e.g. UART) and CPU subsystem (e.g. PLL) has an include file (e.g. rp2350/pll.h) that can be included to use the register definitions and field macros.  The register block for a peripheral is overlayed with a struct with the same name as the peripheral.  To access a register, use peripheral.regster notation. For example, the RP2350 datasheet shows pll_sys has a cs register;this would be accessed using pll_sys.cs.  To use the atomic versions of the registers, prepend set_, clr_, or xor to the register name (e.g. pll_sys.clr_cs).  The included example LED driver should make this clear.

# Included Examples
 A sample C program to flash the LED on the Pico 2 is provided in the src directory.  To make the UF2, run the command 

LIBS="led.o" make test_led.uf2

at the prompt in the top level of the hierarchy (same directory as Makefile).

A C program to demonstrate low-level use of the USB CDC driver is included.  It echos back characters received on the serial port.  To build the UF2 file, run the command

LIBS="usbcdc.o" make test_usbcdc.uf2

A program to test Newlib using the USB CDC serial driver is included.  To build the UF2 file, run the command

LIBS="usbcdc.o" make test_newlib.uf2 

A program that flashes the LED using SysTick.  To build the UF2 file, run the command

LIBS="led.o systick.o" make test_systick.uf2
