/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int num1,num2;
	long long sum = 0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	// On Linux and many other systems using "%lld"
	// On Windows use "%I64d"
	printf("Sum: %I64d\n", sum);
	return 0;
}
