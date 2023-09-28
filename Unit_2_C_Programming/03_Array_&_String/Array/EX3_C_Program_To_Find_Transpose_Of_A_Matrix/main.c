/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Find_Transpose_Of_A_Matrix
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming 
			>> Assignment 2 C-Basic 
			>> EX3_C_Program_To_Find_Transpose_Of_A_Matrix
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define ROW 200
#define COL 200


int main(void){

	double arr[ROW][COL];
	unsigned int row = 0, col = 0;
	double transposed[ROW][COL];
	unsigned int i,j;

	printf("Enter rows and columns of matrix: ");
	fflush(stdin);	fflush(stdout);
	scanf("%u %u", &row, &col);


	printf("Enter the elements of matrix: \n");
	fflush(stdin);	fflush(stdout);
	for(i = 0 ; i<row ; i++){
		for(j = 0; j<col ; j++){
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin);	fflush(stdout);
			scanf("%lf", &arr[i][j]);
		}
	}


	// transpose the matrix
	for(i = 0 ; i<row ; i++){
		for(j = 0; j<col ; j++){
			transposed[j][i] = arr[i][j];
		}
	}


		printf("\n");

	printf("Entered of Matrix: \n");
	for(i = 0 ; i<row ; i++){
		for(j = 0; j<col ; j++){
			printf("%.1lf	 ",arr[i][j]);
		}
		printf("\n");
	}


	printf("Transposed of Matrix: \n");
	for(i = 0 ; i<col ; i++){
		for(j = 0; j<row ; j++){
			printf("%.1lf	 ",transposed[i][j]);
		}
		printf("\n");
	}

	return 0;
}


