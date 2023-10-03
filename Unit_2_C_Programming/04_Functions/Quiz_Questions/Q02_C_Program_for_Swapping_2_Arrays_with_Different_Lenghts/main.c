/*
 ======================================================================================================================
 Name        : Q02_C_Program_for_Swapping_2_Arrays_with_Different_Lenghts
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q02_C_Program_for_Swapping_2_Arrays_with_Different_Lenghts
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
}


void swapArray(int arr1[], int arr2[])
{
	int tempArr[200];
	for (int i = 0; i < 200; ++i)
	{
		tempArr[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tempArr[i];
	}
}


int main(void){
	int arr1[200] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[200] = {9,8,7,6,5,4,3,2,1,0};

	swapArray(arr1, arr2);

	printf(">> ");
	printArray(arr1, 10);

	printf("\n>> ");
	printArray(arr2, 10);


	return 0;
}


