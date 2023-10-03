/*
 ======================================================================================================================
 Name        : Q03_C_function_reverse_Array
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q03_C_function_reverse_Array
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//0 1 2 3 4 5 6 7 8 9

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
}


void reverseArr(int arr[], int size){
	int tempArr[200], j = 0;

	for ( int i = size-1 ; i>=0 ; i--){
		tempArr[j] = arr[i];
		j++;
	}

	for ( int i = 0 ; i<size ; ++i){
		arr[i] = tempArr[i];
	}
}


int main(void){

	int arr[200] = {0,1,2,3,4,5,6,7,8,9};

	printf("\n>> ");
	printArray(arr, 10);

	reverseArr(arr, 10);

	printf("\n>> ");
	printArray(arr, 10);

	return 0;
}


