/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX6 C Program to calculate sum of natural numbers
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int n, sum=0;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%u", &n);

	if(n&1){
		sum = (n/2)*n + n;
		printf("Sum= %u",sum);
	}else{
		sum = ((n/2)-1)*n + (n/2) + n;
		printf("Sum = %u",sum);
	}

	return 0;
}


