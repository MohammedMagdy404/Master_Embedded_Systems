/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX8 C Program to make a simple calculator
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char op;
	double num1, num2, result = 0;

	printf("Enter an operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c", &op);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%lf %lf", &num1, &num2);

	switch(op){
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}

	printf("%.1lf %c %.1lf = %.1lf", num1, op, num2, result);

	return 0;
}


