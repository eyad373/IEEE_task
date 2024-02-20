# Flags
CC = arm-none-eabi-gcc  

CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb -g  

ACH = cortex-m4

# to get object file and the executable
all:  

	@$(CC) -c $(CFLAGS) main.c -o main.o   
	
	@$(CC) main.o -nostdlib -nolibc -o main.elf -lc
	
# to get object file
compile:  

	@$(CC) $(CFLAGS) main.c -o main.o

# to delete object file
clean:  

	@rm -f *.o 
	
# to get the contents of the .debug_info section
debug: compile  

	@arm-none-eabi-objdump -g main.o

# disassembly of .text section 
analysis: compile  

	@arm-none-eabi-objdump -d main.o