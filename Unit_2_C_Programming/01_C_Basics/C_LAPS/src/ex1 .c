/*
 ============================================================================
 Name        : labs.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ex1(void) {
	// print a string
	char str[50];
	printf("hello, world !\n");
	/* f_flush function causes any unwritten data for that stream to
		be delivered to the host environment to be written to the file */
	fflush(stdout);
	fflush(stdin);
	scanf ("%s", str);
	printf("hello, %s", str);
	return EXIT_SUCCESS;
}
