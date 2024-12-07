# Bare Metal Raspberry PI Pico
 A bare metal C programming environment for the Raspberry Pi Pico with minimal dependences.  This is "true" minimalistic bare metal C with no SDK, CMSIS, or other layers between programmer and the hardware.  Features include a USB CDC serial driver that uses no system RAM (only USB DPRAM) and provides a virtual COM port, header files that provide for standard port naming, and a copy-to-RAM stage 2 bootloader that allows programs to be run directly from RAM for faster performance.  To minimize dependences, the environment also includes python-based tools to checksum the bootloader and create UF2 files.

# Motivation
 A software-development kit (SDK) facilitates rapid development and improves portability but adds a layer of abstraction that hides many of the low-level hardware features, which is undesirable for bare-metal embedded systems education.  This environment was developed for use in an embedded systems course at Binghamton University.  
 
# Status
 This environment has not yet undergone significant testing but will be updated as bugs are disovered.
 
#Accessing Hardware Registers
A Each peripheral (e.g. UART) and CPU subsystem (e.g. PLL) has an include file (e.g. rp2040/pll.h) that should be included to use the register definitions and field macros.  The register block for a peripheral is overlayed with a struct pointer with the same name as the peripheral.  To access a register, use struct pointer notation. For example, the RP2040 datasheet shows pll_sys has a cs register;this would be accessed using pll_sys->cs.  To use the atomic versions of the registers, append _xor, _set, or _clr to the register name.  The included example should make this clear.

# Included Examples
 A sample C program to flash the LED on the Pico is provided in the src directory.  To make the UF2, run the command 

LIBS="led.o" make test_led.uf2

at the prompt in the top level of the hierarchy (same directory as Makefile).

A C program to demonstrate USB CDC driver is included.  It echos back characters received on the serial port.  To build the UF2 file, run the command

LIBS="usbcdc.o" make test_usbcdc.uf2
