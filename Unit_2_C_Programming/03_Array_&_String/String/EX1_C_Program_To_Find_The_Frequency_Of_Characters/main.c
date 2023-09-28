/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_The_Frequency_Of_Characters
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX1_C_Program_To_Find_The_Frequency_Of_Characters
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>



int main(void){

	char str[200];
	char ch;
	unsigned int cnt = 0, i=0;

	printf("Enter a string : ");
	fflush(stdin); fflush(stdout);
	// gets(text);
	scanf(" %[^\n]",str);



	printf("Enter a character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);


	while(str[i] != '\0'){
		if(str[i] == ch)
			cnt++;
		i++;
	}


	printf("Frequency of e = %u", cnt);


	return 0;
}




