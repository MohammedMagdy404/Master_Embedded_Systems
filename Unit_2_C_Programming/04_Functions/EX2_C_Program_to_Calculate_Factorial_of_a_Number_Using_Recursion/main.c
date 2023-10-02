/*
 ======================================================================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion
 Author      : Mohamed Magdy Ali
 Created on	 : Oct 2, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment functions 
			>> EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion 
			using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

long long fact(int num){
	if(num == 1)
		return 1;

	return num * fact(num-1);
}



int main(void){
	int num;

	printf("Enter an positive integer : ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);

		printf("Factorial of %d : %ld", num, fact(num));

	return 0;
}

