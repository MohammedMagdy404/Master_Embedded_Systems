/*
 ============================================================================
 Name        : EX4_Store_Information_of_Students_Using_Structure.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define std_count 3

struct S_student{
	char m_stdName[50];
	unsigned int m_stdRoll;
	double m_stdMarks;
};


void readStudent(struct S_student students[], unsigned char std_indx);
void displayStudent(struct S_student students[], unsigned char std_indx);

int main(void) {

	struct S_student A_student[std_count];
	unsigned char i;

	printf("Enter info. of students: ");

	for(i = 0 ; i < std_count ; i++){
		readStudent(A_student, i);
	}


	printf("\nDisplaying info. of students. \n");

	for(i = 0 ; i < std_count ; i++){
		displayStudent(A_student, i);
	}


	return 0;
}


void readStudent(struct S_student students[], unsigned char std_indx){
	printf("\nFor roll number %d.\n",std_indx+1);
	printf("Enter Name: ");
	fflush(stdout);
	scanf("%s", students[std_indx].m_stdName);


	printf("Enter Marks: ");
	fflush(stdout);
	scanf("%lf", &students[std_indx].m_stdMarks);

	students[std_indx].m_stdRoll = std_indx + 1;
}

void displayStudent(struct S_student students[], unsigned char std_indx){

	printf("\nInformation for Roll number %d", students[std_indx].m_stdRoll);
	printf("\nName: %s",  students[std_indx].m_stdName);
	printf("\nMarks: %.2f\n", students[std_indx].m_stdMarks);

}
