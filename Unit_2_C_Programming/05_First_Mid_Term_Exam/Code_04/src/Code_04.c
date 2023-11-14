/*
 ============================================================================
 Name        : Code_04.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to reverse digits in number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int reverseNum(unsigned int number){
	unsigned int temp = 0;

	while(number != 0){
		temp = temp * 10 + number%10;
		number /= 10;
	}
	return temp;
}


int main(void) {

	int num;

	printf("Enter a number to reverse: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &num);

	printf("Reverse of the number = %d\n", reverseNum(num));

	return 0;
}
