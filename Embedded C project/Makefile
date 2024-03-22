CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb -gdwarf-2
LDFLAGS = -T linker.ld -nostdlib -Wl,-Map=executable.map
ACH = cortex-m3


OBJ := main.o startup.o lcd.o Stm32_F103C6_GPIO.o

.PHONY: all clean

all: eyad.elf

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
	
eyad.elf: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

clean:
	rm -f *.o *.elf *.map


