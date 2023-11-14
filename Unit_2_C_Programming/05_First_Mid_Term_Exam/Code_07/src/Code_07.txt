/*
 ============================================================================
 Name        : Code_07.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int countFromTo(int x, int y){
	int sum = 0;

	if(x == y)
		return y;

	sum += x;
	return (sum + countFromTo(x+1 , y));


}


int main(void) {

	printf("sum num from 1 to 100 = %d", countFromTo(1, 100));


	return 0;
}
