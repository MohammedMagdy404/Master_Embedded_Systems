/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX4 C Program to check a number is (+ve) or (-ve)
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

	double num;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%lf", &num);

	if(num == 0)
		printf("You entered 0.");
	else if(num < 0)
		printf("You entered a negative number.");
	else
		printf("You entered a positive number.");


	return 0;
}


