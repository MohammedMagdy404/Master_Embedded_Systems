# LAB 1

## Compilation and Assimplying

### uart.o
```shell script
$ arm-none-eabi-gcc.exe -c -g -mcpu=arm926ej-s -I . uart.c -o uart.o
```


### app.o
```shell script
$ arm-none-eabi-gcc.exe -c -g -mcpu=arm926ej-s -I . app.c -o app.o
```



### startup.o
```shell script
$ arm-none-eabi-as.exe  -mcpu=arm926ej-s startup.s -o startup.o
```

## Sections for Object files:
### app.o
```shell script
$ arm-none-eabi-objdump.exe -h app.o

app.o:     file format elf32-littlearm

Sections:
Idx Name          Size      VMA       LMA       File off  Algn
  0 .text         0000001c  00000000  00000000  00000034  2**2
                  CONTENTS, ALLOC, LOAD, RELOC, READONLY, CODE
  1 .data         00000064  00000000  00000000  00000050  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  2 .bss          00000000  00000000  00000000  000000b4  2**0
                  ALLOC
  3 .rodata       00000064  00000000  00000000  000000b4  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  4 .debug_info   00000091  00000000  00000000  00000118  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  5 .debug_abbrev 00000061  00000000  00000000  000001a9  2**0
                  CONTENTS, READONLY, DEBUGGING
  6 .debug_aranges 00000020  00000000  00000000  0000020a  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  7 .debug_line   00000035  00000000  00000000  0000022a  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  8 .debug_str    000000ec  00000000  00000000  0000025f  2**0
                  CONTENTS, READONLY, DEBUGGING
  9 .comment      0000007f  00000000  00000000  0000034b  2**0
                  CONTENTS, READONLY
 10 .debug_frame  0000002c  00000000  00000000  000003cc  2**2
                  CONTENTS, RELOC, READONLY, DEBUGGING
 11 .ARM.attributes 00000032  00000000  00000000  000003f8  2**0
                  CONTENTS, READONLY
```

### uart.o
```shell script
$ arm-none-eabi-objdump.exe -h uart.o

uart.o:     file format elf32-littlearm

Sections:
Idx Name          Size      VMA       LMA       File off  Algn
  0 .text         00000054  00000000  00000000  00000034  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
  1 .data         00000000  00000000  00000000  00000088  2**0
                  CONTENTS, ALLOC, LOAD, DATA
  2 .bss          00000000  00000000  00000000  00000088  2**0
                  ALLOC
  3 .debug_info   00000057  00000000  00000000  00000088  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  4 .debug_abbrev 00000051  00000000  00000000  000000df  2**0
                  CONTENTS, READONLY, DEBUGGING
  5 .debug_aranges 00000020  00000000  00000000  00000130  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  6 .debug_line   00000039  00000000  00000000  00000150  2**0
                  CONTENTS, RELOC, READONLY, DEBUGGING
  7 .debug_str    000000db  00000000  00000000  00000189  2**0
                  CONTENTS, READONLY, DEBUGGING
  8 .comment      0000007f  00000000  00000000  00000264  2**0
                  CONTENTS, READONLY
  9 .debug_frame  00000030  00000000  00000000  000002e4  2**2
                  CONTENTS, RELOC, READONLY, DEBUGGING
 10 .ARM.attributes 00000032  00000000  00000000  00000314  2**0
                  CONTENTS, READONLY
```

### startup.o

```shell script
$ arm-none-eabi-objdump.exe -h startup.o

startup.o:     file format elf32-littlearm

Sections:
Idx Name          Size      VMA       LMA       File off  Algn
  0 .text         00000010  00000000  00000000  00000034  2**2
                  CONTENTS, ALLOC, LOAD, RELOC, READONLY, CODE
  1 .data         00000000  00000000  00000000  00000044  2**0
                  CONTENTS, ALLOC, LOAD, DATA
  2 .bss          00000000  00000000  00000000  00000044  2**0
                  ALLOC
  3 .ARM.attributes 00000022  00000000  00000000  00000044  2**0
                  CONTENTS, READONLY
```

## Symbol table for Object files:

### app.o

```shell script
$ arm-none-eabi-nm.exe app.o
00000000 T main
00000000 D stringBuffer
00000000 R stringBuffer2
         U uartSendString
```

### uart.o
```shell script
$ arm-none-eabi-nm.exe uart.o
00000000 T uartSendString
```

### startup.o
```shell script
$ arm-none-eabi-nm.exe startup.o
         U main
00000000 T reset
         U stack_top
00000008 t stop
```

## Linking and Generating Executable file & map file:

```shell script
$ arm-none-eabi-ld.exe -T Linker_Script.ld -Map=learn-in-depth.map startup.o App.o Uart.o -o learn-in-depth.elf
```

## Sections of learn-in-depth.elf

```shell script
$ arm-none-eabi-objdump.exe -h learn-in-depth.elf

learn-in-depth.elf:     file format elf32-littlearm

Sections:
Idx Name          Size      VMA       LMA       File off  Algn
  0 .startup      00000010  00010000  00010000  00010000  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
  1 .text         000000d4  00010010  00010010  00010010  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
  2 .data         00000064  000100e4  000100e4  000100e4  2**2
                  CONTENTS, ALLOC, LOAD, DATA
  3 .ARM.attributes 0000002e  00000000  00000000  00010148  2**0
                  CONTENTS, READONLY
  4 .comment      0000007e  00000000  00000000  00010176  2**0
                  CONTENTS, READONLY
  5 .debug_info   000000e8  00000000  00000000  000101f4  2**0
                  CONTENTS, READONLY, DEBUGGING
  6 .debug_abbrev 000000b2  00000000  00000000  000102dc  2**0
                  CONTENTS, READONLY, DEBUGGING
  7 .debug_aranges 00000040  00000000  00000000  0001038e  2**0
                  CONTENTS, READONLY, DEBUGGING
  8 .debug_line   0000006e  00000000  00000000  000103ce  2**0
                  CONTENTS, READONLY, DEBUGGING
  9 .debug_str    0000010e  00000000  00000000  0001043c  2**0
                  CONTENTS, READONLY, DEBUGGING
 10 .debug_frame  0000005c  00000000  00000000  0001054c  2**2
                  CONTENTS, READONLY, DEBUGGING
```

## Symbols of learn-in-depth.elf

```shell script
$ arm-none-eabi-nm.exe learn-in-depth.elf
00010010 T main
00010000 T reset
00011148 D stack_top
00010008 t stop
000100e4 D stringBuffer
00010080 T stringBuffer2
0001002c T uartSendString
```

## Generating Binary file

```shell script
$ arm-none-eabi-objcopy.exe -O binary learn-in-depth.elf learn-in-depth.bin
```

## Burn and Run the Binary on the Board using Qemu

```shell scripts
$ qemu-system-arm -M versatilepb -m 128M -nographic -kernel learn-in-depth.bin
learn-in-depth:mohamed

```

