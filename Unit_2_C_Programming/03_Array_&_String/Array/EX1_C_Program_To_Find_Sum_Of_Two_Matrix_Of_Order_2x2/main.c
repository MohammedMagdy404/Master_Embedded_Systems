/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){

	double arr1[2][2];
	double arr2[2][2];
	double sum[2][2];

	// taking 1st array from the user
	printf("Enter the elements of the 1st matrix: \n");
	fflush(stdin);	fflush(stdout);
	for(int i = 0 ; i<2 ; i++){
		for(int j = 0; j<2 ; j++){
			printf("Enter a%d%d: ", i, j);
			fflush(stdin);	fflush(stdout);
			scanf("%lf", &arr1[i][j]);
		}
	}

	// taking 2nt array from the user
	printf("Enter the elements of the 2nt matrix: \n");
	fflush(stdin);	fflush(stdout);
	for(int i = 0 ; i<2 ; i++){
		for(int j = 0; j<2 ; j++){
			printf("Enter b%d%d: ", i, j);
			fflush(stdin);	fflush(stdout);
			scanf("%lf", &arr2[i][j]);
		}
	}

	// Sum of 2 matrices
	for(int i = 0 ; i<2 ; i++){
		for(int j = 0; j<2 ; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}


	printf("Sum Of Matrix: \n");
	for(int i = 0 ; i<2 ; i++){
		for(int j = 0; j<2 ; j++){
			printf("%.1lf	 ",sum[i][j]);
		}
		printf("\n");
	}





	return 0;
}


