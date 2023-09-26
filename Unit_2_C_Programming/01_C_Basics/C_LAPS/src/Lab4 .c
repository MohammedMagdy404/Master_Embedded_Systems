/*
 * Lab4 .c
 *
 *  Created on: Mar 23, 2023
 *      Author: mm929
 */

#include <stdio.h>
#include <stdlib.h>
// for getch() function
#include <conio.h>


int lab4(){
	int i,sum = 0;
	for(i=0;i<100;i++){
		sum+=i;
	}
	printf("the summation of values between (1 and 99) is : %d",sum);
	return 0;
}


