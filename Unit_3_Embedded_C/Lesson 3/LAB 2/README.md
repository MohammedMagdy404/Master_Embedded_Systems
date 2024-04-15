# Embedded C, Lesson 3, LAB #2

## ARM CORTEX-M3 STM32F103

## For compiling the file:

```sh
$ make
arm-none-eabi-gcc.exe -c -I . -g -mcpu=cortex-m3 -gdwarf-2 main.c -o main.o                             ^
arm-none-eabi-as.exe -g -mcpu=cortex-m3 -gdwarf-2 startup.s -o startup.o
startup.s: Assembler messages:
startup.s: Warning: end of file not at end of a line; newline inserted
arm-none-eabi-ld.exe -T linker_script.ld  main.o startup.o -o learn_in_depth_cortex_m3.elf -Map=Map_file.map
arm-none-eabi-objcopy.exe -O binary learn_in_depth_cortex_m3.elf learn_in_depth_cortex_m3.bin
============= Build is Done ============
```

## For cleaning the build artifacts

```sh
$ make clean_all
rm *.o *.bin *.elf
```
