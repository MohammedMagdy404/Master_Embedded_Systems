/*
 ============================================================================
 Name        : EX6_C_Finding_The_Size_of_Both_Union_and_Structure.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

union U_job
{
	char name [32] ;
	float salary;
	int worker_no;

} U_union;

struct S_job
{
	char name [32];
	float salary;
	int worker_no;

} S_structure;


int main ()
{
	printf("Size of the union is: %d", sizeof(U_union));
	printf("\nSize of the structure is: %d", sizeof(S_structure));

	return 0;
}
