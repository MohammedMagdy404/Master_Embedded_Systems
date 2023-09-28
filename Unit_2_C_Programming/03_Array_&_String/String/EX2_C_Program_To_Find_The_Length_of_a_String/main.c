/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX2_C_Program_To_Find_The_Length_of_a_String
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>



int main(void){

	char str[200];
	unsigned int len = 0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	gets(str);


	while(str[len] != '\0'){
		len++;
	}



	printf("Length of string : %u", len);



	return 0;
}




