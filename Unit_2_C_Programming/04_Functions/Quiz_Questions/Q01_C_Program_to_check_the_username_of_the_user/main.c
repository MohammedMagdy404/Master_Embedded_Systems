/*
 ======================================================================================================================
 Name        : Q01_C_Program_to_check_the_username_of_the_user
 Author      : MOHAMED MAGDY ALI
 Created on	 : Oct 3, 2023
 Description : Quiz function >> Q01_C_Program_to_check_the_username_of_the_user
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void strCompare(char str[], char username[]){
	if(!strcmp(str,username)){
		printf("The same.");
	}else{
		printf("different");
	}
}



int main(void){
	char str[200], username[200];

	printf("Enter your string : ");
	fflush(stdin);	fflush(stdout);
	gets(str);

	printf("Enter your User-Name : ");
	fflush(stdin);	fflush(stdout);
	gets(username);

	strCompare(str, username);

	return 0;
}


