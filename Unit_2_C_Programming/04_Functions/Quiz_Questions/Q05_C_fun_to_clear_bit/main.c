/*
 ======================================================================================================================
 Name        : Q05_C_fun_to_clear_bit
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q05_C_fun_to_clear_bit
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void clear_bit(long *num, unsigned int bit_num){
	*num &= ~(1<<bit_num);
}


int main(void){

	long num = 0;
	unsigned int bit_num;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%ld",&num);

	printf("Enter a Bit-number: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&bit_num);


	clear_bit(&num, bit_num);

	printf("%ld",num);

	printf("\n==> \nresult = 2");


	return 0;
}


