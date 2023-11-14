/*
 ============================================================================
 Name        : Code_03.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to print all prime numbers between two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeBetweens(unsigned int num1, unsigned int num2){
	unsigned char flag = 0;

	if(num1 > num2){
		printf("the first number must be lower than the second\n");
		return;
	}

	for(unsigned int i = num1 ; i < num2 ; i++){
		flag = 0;
		if(i == 1)
			continue;
		for(unsigned int j = i/2 ; j > 1 ; j--){
			if(i%j == 0){
				flag = 1;
				break;
			}
		}

		if(!flag)
			printf(" %u", i);
	}
}


int main(void) {

	int num1, num2;

	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &num1, &num2);

	printf("Prime numbers between %d and %d are:\n", num1, num2);
	primeBetweens(num1, num2);


	return 0;
}
