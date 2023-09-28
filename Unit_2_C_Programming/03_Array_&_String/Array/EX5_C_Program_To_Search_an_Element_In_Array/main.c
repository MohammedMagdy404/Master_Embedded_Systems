/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Search_an_Element_In_Array
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX5_C_Program_To_Search_an_Element_In_Array
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int binary_search_intVal(int arr[], unsigned int size, int elem);
int seqencial_search(int arr[], unsigned int size, int elem);


int main(void){

	unsigned int num, i;
	int arr[1000], elem, found;



	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);


	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}


	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &elem);

	found = seqencial_search(arr, num, elem);

	if(found == -1){
		/*
		 * num not found
		 */
	}else{
		printf("Number found at the location = %d",found);
	}


	return 0;
}


int binary_search_intVal(int arr[], unsigned int size, int elem){
	unsigned int st = 0;
	unsigned int end = size-1;
	unsigned int mid = ((st+end)/2)+1;

	while(1){
		if(arr[mid] == elem)
			return mid;
		if(end <= st)
			break;

		if(elem > arr[mid]){
			st = mid + 1;
			mid = ((st+end)/2) + 1 ;
		}else{
			end = mid - 1;
			mid = ((st+end)/2) + 1 ;
		}
	}
	return -1;
}


int seqencial_search(int arr[], unsigned int size, int elem){
	for(unsigned int i = 0; i<size ; i++){
		if(arr[i] == elem){
			return i+1;
		}
	}
	return -1;
}


