/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Reverse_String_Without_Using_Library_Fun
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX3_C_Program_to_Reverse_String_Without_Using_Library_Fun
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){


	char str[200], rev[200];
	int size = 0, i = 0, j = 0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	scanf(" %[^\n]", str);


	while(str[size] != '\0'){
		size++;
	}


	// ****** important *****
	// if i here was (unsigned int) it will cause >> infinite loop :""

	for(i=size-1 ; i>=0 ; i--){
		rev[j] = str[i];
		//		printf("Reverse string is : %c >> %c \n", str[i], rev[j]);
		j++;
	}

	// ********** important *********
	// Null-terminate the reversed string
	rev[j] = '\0';

	printf("Reverse string is : %s", rev);



	return 0;
}




