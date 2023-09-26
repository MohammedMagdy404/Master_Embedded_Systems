/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX2 C Program to check Vowel or Consonant letter
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){

	char c = 0;
	char *str;
		printf("Enter an alphabet: ");
		fflush(stdout);
		scanf("%c", &c);
		switch(c){
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
		case 'a':
		case 'A':
		case 'e':
		case 'E':
			str = "vowel";
			break;
		default:
			str = "consonant";
		}
		printf("%c is %s.", c, str);



return 0;
}


