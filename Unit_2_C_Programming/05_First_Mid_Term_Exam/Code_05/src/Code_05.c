/*
 ============================================================================
 Name        : Code_05.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to count number of ones in binary number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


unsigned int numberOfOnes(unsigned int num){
	unsigned int count = 0;
	// int 4 bytes
	unsigned int bitsNum = 32;

	for(unsigned int i = 0 ; i < bitsNum ; i++){
		if(num & (1<<i))
			count++;
	}
	return count;
}



int main(void) {


	int num;

	printf("Enter any number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &num);

	printf("%u", numberOfOnes(num));

	return 0;
}
