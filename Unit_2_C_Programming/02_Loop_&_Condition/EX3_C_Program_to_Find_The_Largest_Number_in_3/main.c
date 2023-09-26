/*
 ======================================================================================================================
 Name        : main.c
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 26, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX3 C Program to find the largest number
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
double largestNumber(double num[],int size);

int main(void){
	double arr[3];
	printf("Enter three different numbers: ");
	fflush(stdout);
	scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);

	printf("Largest number = %.2lf", largestNumber(arr, 3));

	return 0;
}


double largestNumber(double num[],int size){
	double max = num[0];
	for(int i=1 ; i<size ; i++){
		if(max < num[i])
			max = num[i];
	}
	return max;
}
