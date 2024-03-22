CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb -g
LDFLAGS = -T linker.ld -nostdlib -Wl,-Map=executable.map
ACH = cortex-m4

compile:
	@$(CC) $(CFLAGS) main.c -o main.o

GPIO_Prog.o:GPIO_Prog.c
	@$(CC) $(CFLAGS) $^ -o $@
	
RCC_Prog.o:RCC_Prog.c
	@$(CC) $(CFLAGS) $^ -o $@
	
SysTick_Prog.o:SysTick_Prog.c
	@$(CC) $(CFLAGS) $^ -o $@
	
startup.o:startup.c
	@$(CC) $(CFLAGS) $^ -o $@
	
eyad_essam.elf: main.o startup.o RCC_Prog.o SysTick_Prog.o GPIO_Prog.o
	@$(CC) $(LDFLAGS) $^ -o $@
	
all: main.o startup.o RCC_Prog.o SysTick_Prog.o GPIO_Prog.o eyad_essam.elf
clean:
	@rm -f *.o *.elf *.map

debug: compile
	@arm-none-eabi-objdump -g main.o
analysis: compile
	@arm-none-eabi-objdump -d main.o