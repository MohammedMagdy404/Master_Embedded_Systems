/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming
 	 	 	 >> Assignment 1 C-Basic
 	 	 	 >> EX5 C Program to Find ASCII Value of a Character using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){
	char c;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c = %d\n", c, c);
	return 0;
}
