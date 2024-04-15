#@copyright : Mohamed magdy

CC=arm-none-eabi-
# "-gdwarf-2" flag => for gdb inside proteus.
CFLAGS=-g -mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS= 

SRC= $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
# to make name of the project generic
Project_name=learn_in_depth_cortex_m3

# to execute all the targets not the first one
all: $(Project_name).bin
	@echo "============= Build is Done ============"

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@
# $@ => indecates target
# $< => indecates dependencies
# % =>  for Generic
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.bin *.elf

clean:
	rm *.bin *.elf