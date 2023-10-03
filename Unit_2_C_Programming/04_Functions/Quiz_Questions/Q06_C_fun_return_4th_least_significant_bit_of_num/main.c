/*
 ======================================================================================================================
 Name        : Q06_C_fun_return_4th_least_significant_bit_of_num
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q06_C_fun_return_4th_least_significant_bit_of_num
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char least_4th_bit(long num){
	return ((num & (1<<3))>>3);
}


int main(void){

	long num = 0;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%ld",&num);


	printf("%ld",least_4th_bit(num));



	return 0;
}


