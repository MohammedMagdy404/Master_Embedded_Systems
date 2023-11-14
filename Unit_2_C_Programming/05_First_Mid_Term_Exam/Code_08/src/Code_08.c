/*
 ============================================================================
 Name        : Code_08.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to take an array and revers its elements
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100];
	int size, i;

	printf("Enter size of the array: ");
	fflush(stdout);
	scanf("%d", &size);

	printf("Enter elements in array: ");
	fflush(stdout);
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Reverse order of the array is: ");
	for(i = size-1; i>=0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
