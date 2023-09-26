/*
 * Lab2 .c
 *
 *  Created on: Mar 23, 2023
 *      Author: mm929
 */

#include <stdio.h>
#include <stdlib.h>
// for getch() function
#include <conio.h>



int lab2(void){
	float a, b, c;
	printf("Enter 3 numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f", &a, &b, &c);
	if(a>b && a>c){
		printf("the largest value is %f\r\n",a);
	}
	else if(b>a && b>c){
		printf("the largest value is %f\r\n",b);
	}
	else{
		printf("the largest value is %f\r\n",c);
	}

	return 0;
}








