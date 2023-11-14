/*
 ============================================================================
 Name        : Code_06.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to return unique number in array with one loop
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int uniqueNum(int arr[], unsigned int size){
	unsigned int index = 0;
	unsigned char flag = 0;

	for(int i = 0 ; i < size ; i++){
		if(i == 0)
			flag = 0;
		if(i == index)
			continue;
		if(arr[index] == arr[i]){
			index++;
			i = -1;
			flag = 1;
		}
	}

	if(flag == 0){
		return arr[index];
	}
	else{
		return -1;
	}


}



int main(void) {

	int arr[7] = {4,2,5,2,5,7,4};

	printf("the unique number is: %d", uniqueNum(arr, 7));

	return 0;
}
