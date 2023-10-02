/*
 ======================================================================================================================
 Name        : EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function
 Author      : Mohamed Magdy Ali
 Created on	 : Oct 2, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment functions 
			>> EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function 
			using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void getPrimeNumbers(unsigned int num1,unsigned int num2){
	int temp;

	if(num1 > num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}


	printf("Prime numbers between %d and %d are: ", num1, num2);

	char flag;

	for(unsigned int i=num1 ; i<=num2 ; i++){

		if(i == 2){
			printf("%d ",i);
			continue;
		}else if(i%2 == 0){
			continue;
		}

		flag = 0;
		for(unsigned int j=i/2 ; j>1 ; j--){
			if(i%j == 0){
				flag =1;
				break;
			}
		}

		if(!flag)
			printf("%d ",i);
	}
}



int main(void){

	int num1, num2 ;
	printf("Enter two numbers(intervals) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);

	getPrimeNumbers(num1, num2);

	return 0;
}

