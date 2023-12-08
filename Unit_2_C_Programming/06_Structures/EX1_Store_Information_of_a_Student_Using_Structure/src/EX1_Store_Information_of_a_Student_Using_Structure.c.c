/*
 ============================================================================
 Name        : c.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Store Information of a Student Using Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "headerTypes.h"
#include "file_handling.h"
#include "user_input.h"
#include "output.h"
#include "data_processing.h"


unsigned char std_numbers = 0;
student students_DB[100];

int main(void) {

	//	FILE *file = fopen("students.txt", "w");
	//	fprintf(file, "the end");
	//	fclose(file);

	unsigned char choice;

	do {
		displayMenu();
		choice = getUserChoice();

		switch (choice) {
		unsigned int std_idx;
		case 1:
			addStudent();
			break;
		case 2:
			printf("-> Enter student number to be deleted: ");
			fflush(stdout);
			scanf("%u",&std_idx);
			deleteStudent(std_idx);
			break;
		case 3:
			displayAllStudents();
			break;
		case 4:
			// No need for any function here; program will terminate.
			break;
		default:
			printf("Invalid choice. Please try again.\n");
		}

	} while (choice != 4);


	return 0;
}
