CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb -g
ACH = cortex-m4
all:
	@$(CC) -c $(CFLAGS) main.c -o main.o 
	@$(CC) main.o -nostdlib -nolibc -o main.elf -lc

compile:
	@$(CC) $(CFLAGS) main.c -o main.o
clean:
	@rm -f *.o .elf
debug: compile
	@arm-none-eabi-objdump -g main.o
analysis: compile
	@arm-none-eabi-objdump -d main.o