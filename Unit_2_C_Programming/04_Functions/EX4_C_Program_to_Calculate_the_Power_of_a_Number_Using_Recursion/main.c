/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion
 Author      : Mohamed Magdy Ali
 Created on	 : Oct 2, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment functions 
			>> EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion 
			using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int powerOfNum(int num, int pow){
	if(pow == 0)
		return 1;
	else if(pow == 1)
		return num;

	return (num * powerOfNum(num, pow-1));
}


int main(void){

	int num, pow ;

	printf ("Enter base number: ");
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &num);

	printf ("Enter power number(Positive integer): ");
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &pow);

	printf ("%d^%d = %d", num, pow, powerOfNum(num, pow));


	return 0;
}

