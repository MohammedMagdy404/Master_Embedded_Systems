/*
 ============================================================================
 Name        : Code_01.c
 Author      : Mohamed Magdy 
 Version     :
 Copyright   : Your copyright notice
 Description : function to take a number and sum all digits
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumDigits(int number){
	int sum = 0;
	while(number != 0){
		sum += number%10;
		number /= 10;
	}
	return sum;
}

int main(void) {

	int num;
	printf("Enter a number: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d", &num);
	printf("sum = %d", sumDigits(num));
	return 0;
}
