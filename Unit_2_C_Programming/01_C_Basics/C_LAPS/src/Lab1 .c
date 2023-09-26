/*
 * Lab1 .c
 *
 *  Created on: Mar 23, 2023
 *      Author: mm929
 */


#include <stdio.h>
#include <stdlib.h>
// for getch() function
#include <conio.h>

void area(float);
void circum(float);

int lab1(void){
	float r;
	char c;
	printf("Enter circle radius: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&r);
	printf("Enter your choice (a to print the area, c to print the circumference): ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);

	switch(c){
	case 'a':
	case 'A':
		area(r);
		break;
	case 'c':
	case 'C':
		circum(r);
		break;
	default:
		printf("Error choice !");
		break;
	}
	return 0;
}

void area(float r){
	float area = 3.14159*r*r;
	printf("area is %f", area);
}

void circum(float r){
	float circum = 3.14159*2*r;
	printf("circum is %f",circum);
}



