## Project Overview: Embedded C Baremetal Software Development on STM32F103C8

The STM32 Blue Pill LCD Interface project involves developing firmware to interface an LCD with the STM32 microcontroller using Proteus simulation software.

## Makefile:

The makefile is responsible for automating the build process of the firmware. It defines rules to compile source files, generate object files, link them together, and produce the final firmware binary. Additionally, it specifies compiler flags and dependencies required for building the firmware. I created [Makefile](Makefile) and feel free to check it.

## Linker Script:

The linker script defines the memory layout of the simulated STM32 microcontroller. It specifies the memory regions, such as flash memory, RAM, and peripheral registers, and their respective sizes and addresses. The linker script ensures that the compiled firmware is placed in the correct memory locations during the linking process. I created [Linker script](linker.ld) and feel free to check it.

## Startup Code:

The startup code initializes the simulated microcontroller at boot-up. It configures essential system settings, initializes the stack pointer, copies initialized data from flash memory to RAM, and initializes the C runtime environment. The startup code ensures that the microcontroller is in a known state and ready to execute the main firmware code. I created [startup code](startup.c) and feel free to check it.

## Simulation Test:

https://github.com/eyad373/IEEE_task/assets/132578966/6d631457-e68d-448c-98ae-3fbf80017657

