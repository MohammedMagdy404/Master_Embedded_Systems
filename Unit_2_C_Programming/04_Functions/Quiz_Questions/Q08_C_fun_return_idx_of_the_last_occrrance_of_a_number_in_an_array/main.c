/*
 ======================================================================================================================
 Name        : Q08_C_fun_return_idx_of_the_last_occrrance_of_a_number_in_an_array
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q08_C_fun_return_idx_of_the_last_occrrance_of_a_number_in_an_array
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d, ", arr[i]);
	}
}

int lastOccurrance(int arr[], int size, int num){
	int idx = -1;
	for(int i = 0; i<size ; ++i){
		if(num == arr[i]){
			idx = i;
		}
	}
	return idx;
}


int main(void){
	int arr[10] = {0,4,2,3,4,5,6,7,4,9};
	int num = 4;

	printf("Array = {");
	printArray(arr, 10);
	printf("}, the number is %d ==> result = %d", num, lastOccurrance(arr, 10, num));

	return 0;
}


