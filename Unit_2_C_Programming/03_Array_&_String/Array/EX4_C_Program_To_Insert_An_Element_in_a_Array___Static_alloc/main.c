/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Insert_An_Element_in_a_Array___Static_alloc
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX4_C_Program_To_Insert_An_Element_in_a_Array___Static_alloc
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){

	unsigned int num, insert_num, location, i;
	int arr[200];



	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%u", &num);

	for(i = 0 ; i < num ; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &insert_num);


	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	for(i=num-1 ; i>0 ; i--){
		arr[i+1] = arr[i];
		if(i == location){
			arr[i] = insert_num;
			break;
		}
	}


	for (i = 0; i < num+1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;


	return 0;
}


