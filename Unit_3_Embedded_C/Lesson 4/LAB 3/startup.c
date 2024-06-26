// Startup.c
// Eng.Mohamed Magdy

#include <stdio.h>

extern int main(void);

void Reset_Handler (void);

void Default_Handler () {
	Reset_Handler();
}

uint32_t NMI_Handler(void) 			__attribute__((weak, alias ("Default_Handler")));
uint32_t H_Fault_Handler(void) 		__attribute__((weak, alias ("Default_Handler")));

/* Reserve stack size */
static unsigned long STACK_TOP[256]; // 4*256 = 1024 B (place)
//====================

void (* const g_p_fn_Vectors[])() __attribute__((section(".vectors"))) = {
	(void(*)()) ((unsigned long)STACK_TOP + sizeof(STACK_TOP)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
};


extern uint32_t _E_TEXT ;
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_BSS ;
extern uint32_t _E_BSS ;


void Reset_Handler (void){
	// Copy .DATA section from FLASH to RAM 
	uint32_t DATA_size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
	uint8_t* P_src = (uint8_t*)&_E_TEXT ;
	uint8_t* P_dst = (uint8_t*)&_S_DATA ;

	for(int i = 0 ; i < DATA_size ; i++){
		*((uint8_t*)P_dst++) = *((uint8_t*)P_src++) ;
	}

	// init .bss section in RAM
	uint32_t BSS_size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
	P_dst = (uint8_t*)&_S_BSS ;

	for(int i = 0 ; i < BSS_size ; i++){
		*((uint8_t*)P_dst++) = (uint8_t) 0 ;
	}

	//JUMP to main()
	main();
}

