/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX1 C Program to check a number is even or odd
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int x = 0;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &x);
	printf("%d is %s.", x, (x&1)?"odd":"even");

	return 0;
}


