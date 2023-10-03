/*
 ======================================================================================================================
 Name        : Q04_C_to_convert_ASCII_ARRAY_to_unsigned_int
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q04_C_to_convert_ASCII_ARRAY_to_unsigned_int
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


void asciiIntToUint(int arr[], int size){
	for(int i = 0 ; i<size ; i++){
		arr[i] = arr[i] - 48;
	}
}
unsigned int asciiCharToUint(char arr[], int size){
	unsigned int num;
	num = atoi(arr);
	return num;
}



int main(void){
//	printf("%d",0x30);

	int arr[] = {48,49,50,51,52};
	char arr1[] = "2568";

	printf("%u", asciiCharToUint(arr1, 4));

	printf("\n>> ");
	printArray(arr, 5);

	asciiIntToUint(arr, 5);


	printf("\n>> ");
	printArray(arr, 5);

//	>> 48 49 50 51 52
//	>> 0 1 2 3 4



	return 0;
}


