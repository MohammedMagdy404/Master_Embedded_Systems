/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX7 C Program to find factorial of a number
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	long long fact=1;

		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &n);

		if(n<0)
			printf("Error!!! Factorial of a negative number doesn't exist.");
		else{
			for(int i = n; i>0 ;i--){
				fact *= i;
			}
			printf("Factorial = %llu", fact);
		}



return 0;
}


