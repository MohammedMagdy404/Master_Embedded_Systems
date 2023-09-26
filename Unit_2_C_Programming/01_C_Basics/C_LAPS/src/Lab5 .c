/*
 * Lab5 .c
 *
 *  Created on: Mar 23, 2023
 *      Author: mm929
 */


#include <stdio.h>
#include <stdlib.h>
// for getch() function
#include <conio.h>

int lab5(){
	int num,tem;
	float sum = 0;
	printf("Enter the number of the students: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		printf("Enter student (%d) degree: ",i);
		fflush(stdout); fflush(stdin);
		scanf("%d",&tem);
		sum += tem;
	}

	printf("Average of students degree is : %f", sum/num);
	return 0;
}
