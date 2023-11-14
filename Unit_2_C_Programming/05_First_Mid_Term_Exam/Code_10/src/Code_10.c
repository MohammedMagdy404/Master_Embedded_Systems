/*
 ============================================================================
 Name        : Code_10.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to count the max number of ones between two zeros.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


unsigned int maxOnes(int num){
	unsigned int count = 0, max = 0;
	unsigned int bitsNum = 32;

	for(unsigned int i = 0 ; i < bitsNum ; i++){
		if(num & (1<<i))
		{
			count++;
		}
		else
		{
			if(count > max){
				max = count;
			}
			count = 0;
		}
	}

	return max;
}


int main(void) {
	int number;

	printf("Enter an integer number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);


	printf("%u",maxOnes(number));

	return 0;
}
