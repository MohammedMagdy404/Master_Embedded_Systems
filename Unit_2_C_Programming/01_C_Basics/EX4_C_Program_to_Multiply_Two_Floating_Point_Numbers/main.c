/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming
 	 	 	 >> Assignment 1 C-Basic
 	 	 	 >> EX4 C Program to Multiply two Floating Point Numbers using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	double num1,num2;
	double product = 0;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%lf %lf", &num1, &num2);
	product = num1 * num2;
	printf("Product: %lf\n", product);
	return 0;
}
