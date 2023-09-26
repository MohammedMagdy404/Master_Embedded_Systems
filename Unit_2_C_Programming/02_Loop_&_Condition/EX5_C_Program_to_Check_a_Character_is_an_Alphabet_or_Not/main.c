/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX5 C Program to check a character in alphabet or not
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	char c;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);


	if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
		printf("%c is an alphabet.", c);
	else
		printf("%c is not an alphabet.", c);


	return 0;
}


