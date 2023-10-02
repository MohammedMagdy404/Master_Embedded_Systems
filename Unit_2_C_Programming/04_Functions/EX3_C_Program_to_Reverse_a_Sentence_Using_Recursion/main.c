/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion
 Author      : Mohamed Magdy Ali
 Created on	 : Oct 2, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment functions 
			>> EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion 
			using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


void reverseStr(char str[]){
	unsigned int i = 0;
	while(str[i++] != '\0');
//	printf(" %d\n",i);
	for(int j = i-2 ; j >= 0 ; j--)
		printf("%c",str[j]);
	/*
	 * OR
	 * char str2[200];
	 * unsigned int k = 0;
	 * for(unsigned int j = i-2 ; j>=0 ; j--){
	 * 		str2[k] = str[j]; k++;
	 * 	}
	 */
}



int main(void){

	char str[200];
	printf ("Enter a sentence: ");
	fflush(stdin);	fflush(stdout);
	gets(str);


	reverseStr(str);


	return 0;
}

