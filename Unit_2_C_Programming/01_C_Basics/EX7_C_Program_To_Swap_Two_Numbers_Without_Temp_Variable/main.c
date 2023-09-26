/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming
 	 	 	 >> Assignment 1 C-Basic
 	 	 	 >> EX7 Swap Two Numbers Without-Temp Variable using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	double a = 0, b =0;

	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf",&b);
	/*
	 * There is two ways to swap two variables with out
	 * with arithmetic operation - and +
	 * with bitwise operation ^
	 *
	 */

	a = a + b;
	b = a - b;
	a = a - b;


	printf("After swapping, value of a = %.2lf\n",a);
	printf("After swapping, value of b = %.2lf\n",b);
	return 0;
}
