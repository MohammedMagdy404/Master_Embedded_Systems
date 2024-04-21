#@copyright : Mohamed magdy

CC=arm-none-eabi-
# "-gdwarf-2" flag => for gdb inside proteus.
CFLAGS=-g -mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS= 

SRC= $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
# to make name of the project generic
Project_name=unit3_LAB4_cortex_m4

# to execute all the targets not the first one
all: $(Project_name).bin
	@echo "============= Build is Done ============"

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
# $@ => indecates target
# $< => indecates dependencies
# % =>  for Generic
%.o: %.c
	# "-fno-common" this flag to disable COMMON section
	$(CC)gcc.exe -fno-common -c $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.bin *.elf
	@echo "**** Cleaned ****"

clean:
	rm *.bin *.elf