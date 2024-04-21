# Embedded C, Lesson 4, LAB #3

## ARM CORTEX-M4 TM4C123GH6PM

## Keil Uvision Simulation mode

<video controls src="Keil Uvision Simulation mode .mov" title="Title"></video>

## Debug TM4C123 by openOCD gdbserver

### main.o Symbols

```sh
$ arm-none-eabi-nm.exe main.o
00000000 T main
```

### startup.o Symbols

```sh
$ arm-none-eabi-nm.exe startup.o
         U _E_DATA
         U _E_TEXT
         U _S_BSS
         U _S_DATA
00000000 T Default_Handler
00000000 R g_p_fn_Vectors
00000000 W H_Fault_Handler
         U main
00000000 W NMI_Handler
0000000c T Reset_Handler
00000000 b STACK_TOP

```

### unit3_LAB4_cortex_m4.elf Symbols

```sh
$ arm-none-eabi-nm.exe unit3_LAB4_cortex_m4.elf
20000400 B _E_BSS
20000000 D _E_DATA
00000190 T _E_TEXT
20000000 B _S_BSS
20000000 D _S_DATA
00000104 T Default_Handler
00000000 T g_p_fn_Vectors
00000104 W H_Fault_Handler
00000010 T main
00000104 W NMI_Handler
00000110 T Reset_Handler
20000000 b STACK_TOP
```
