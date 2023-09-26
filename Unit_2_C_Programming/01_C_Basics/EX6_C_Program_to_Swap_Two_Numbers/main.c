/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming
 	 	 	 >> Assignment 1 C-Basic
 	 	 	 >> EX6 C Program to Swap Two Numbers using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){

	double a = 0, b =0;
	double temp = 0;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf",&b);

	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a = %.2lf\n",a);
	printf("After swapping, value of b = %.2lf\n",b);
	return 0;
}
