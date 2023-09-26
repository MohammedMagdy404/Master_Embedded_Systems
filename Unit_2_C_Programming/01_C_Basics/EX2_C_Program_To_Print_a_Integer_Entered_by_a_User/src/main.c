/*
 ============================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Copyright   : Your copyright notice
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX2 C Program To Print a Integer Entered by a User using Ansi-style (c99)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
	return 0;
}
