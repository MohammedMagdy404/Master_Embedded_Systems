/* startup_cortexM3.s
Eng.Mohamed magdy
*/

/* 
	SRAM start=> 0x20000000
	< .word > stores the value in the ram and cpu will take the first byte as (SP =>)

	".section .vectors" is parameters(commands) passed to assemmpler
	to define section name for some lines of assemply in the Object file startup.o
  
  */
.section .vectors
 
.word 0x20001000 			/* stack top address */ 
.word _reset				/* 1 Reset */
.word Vector_Handler 		/* 2 NMI */
.word Vector_Handler 		/* 3 Hard Fault */
.word Vector_Handler 		/* 4 MM Fault */
.word Vector_Handler 		/* 5 Bus Fault */
.word Vector_Handler 		/* 6 Usage Fault */
.word Vector_Handler 		/* 7 RESERVED */
.word Vector_Handler 		/* 8 RESERVED */
.word Vector_Handler 		/* 9 RESERVED */
.word Vector_Handler 		/* 10 RESERVED */
.word Vector_Handler 		/* 11 SV Call */
.word Vector_Handler 		/* 12 Debug Reserved */
.word Vector_Handler 		/* 13 RESERVED */
.word Vector_Handler 		/* 14 PendSV */
.word Vector_Handler 		/* 15 SysTick */
.word Vector_Handler 		/* 16 IRQ0 */
.word Vector_Handler 		/* 17 IRQ1 */
.word Vector_Handler 		/* 18 IRQ2 */
.word Vector_Handler 		/* 19 ... */
	/* On to IRQ67 */



.section .text
_reset:
	bl main
	b . /* Looping on ur self if main function finished */

.thumb_func 				/* Command that Enabling Thumb_Mode for Precessor to use 16-bit and 32-bit instructions if avilable */

Vector_Handler:
	b _reset