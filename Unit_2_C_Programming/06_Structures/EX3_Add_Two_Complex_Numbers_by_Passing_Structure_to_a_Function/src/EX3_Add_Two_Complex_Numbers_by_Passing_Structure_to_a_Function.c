/*
 ============================================================================
 Name        : EX3_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct S_complexNum{
	double m_real;
	double m_img;
};

struct S_complexNum addTwoComplex(struct S_complexNum *num1, struct S_complexNum *num2);
void readComplex(struct S_complexNum *number);
void printComplexNum(struct S_complexNum *number);


int main(void) {

	printf("For 1st Complex Number.\n");
	struct S_complexNum num1;
	readComplex(&num1);

	printf("\nFor 2nd Complex Number.\n");
	struct S_complexNum num2;
	readComplex(&num2);


	struct S_complexNum result;
	result = addTwoComplex(&num1, &num2);

	printComplexNum(&result);


	return 0;
}


struct S_complexNum addTwoComplex(struct S_complexNum *num1, struct S_complexNum *num2){
	struct S_complexNum result;

	result.m_real = num1->m_real + num2->m_real;
	result.m_img = num1->m_img + num2->m_img;

	return result;
}

void readComplex(struct S_complexNum *number){

	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%lf %lf", &number->m_real, &number->m_img);

}

void printComplexNum(struct S_complexNum *number){

	printf("\nSum = %.1lf + %.1lf i", number->m_real, number->m_img);

}
