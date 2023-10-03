/*
 ======================================================================================================================
 Name        : Q07_check_if_num_is_power_of_3
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q07_check_if_num_is_power_of_3
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


char checkPowOf3(int num){
	if(!(num & 1))
		return 1;
	if(num == 3)
		return 0;
	while(num > 3){
		if(!(num % 3 == 0))
			return 1;
		num /= 3;
	}

	return 0;
}


int main(void){
	int num = 5;

	printf("9 ==> %d\n", checkPowOf3(9));
	printf("%d ==> %d\n",num , checkPowOf3(num));

	return 0;
}


