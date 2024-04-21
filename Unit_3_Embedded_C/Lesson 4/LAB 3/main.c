/**
 ******************************************************************************
 * @file           : main.c
 * @author         : 
 * @brief          : Main program body
 ******************************************************************************
*/

#include <stdint.h>

#define SYSCTL_RCGC2_R (*((volatile unsigned long *)0x400FE108))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long *)0x4002551C))


int main(void)
{
	volatile unsigned long delay_cnt;
	SYSCTL_RCGC2_R = 0x00000020;
	// delay after enabling the clk to make sure of establishing and run
	for(delay_cnt = 0; delay_cnt < 200 ; delay_cnt++);
	GPIO_PORTF_DIR_R |= 1<<3 ;
	GPIO_PORTF_DEN_R |= 1<<3 ;
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for(delay_cnt = 0; delay_cnt < 200000 ; delay_cnt++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay_cnt = 0; delay_cnt < 200000 ; delay_cnt++);
	}

	return 0;
}