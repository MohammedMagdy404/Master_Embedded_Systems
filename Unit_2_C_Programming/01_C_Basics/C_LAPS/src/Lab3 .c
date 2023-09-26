/*
 * Lab3 .c
 *
 *  Created on: Mar 23, 2023
 *      Author: mm929
 */


#include <stdio.h>
#include <stdlib.h>
// for getch() function
#include <conio.h>


int lab3(){
	float a, b;
	printf("Enter 2 numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f", &a, &b);

	//(a<b)?printf("the min is %f\r\n",a):printf("the min is %f\r\n",b);
	printf("the min is %d\r\n",(a<b)?a:b);

	return 0;
}
