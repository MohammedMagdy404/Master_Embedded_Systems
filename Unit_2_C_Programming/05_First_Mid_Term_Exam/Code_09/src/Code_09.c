/*
 ============================================================================
 Name        : Code_09.c
 Author      : Mohamed Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : function to reverse words in string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subString(const char *src, int start, int length, char *dest) {
    int i;
    for (i = 0; i < length && src[start + i] != '\0'; i++) {
        dest[i] = src[start + i];
    }
    dest[i] = '\0'; // Null-terminate the destination string
}
void reverseWordsInString(char *name, char *reversed){
	unsigned char st = 0, end = 0, i = 0, len = 0;
	char substr[100];
	char revTemp[1000];
	while(name[i] != '\0'){
		if(name[i] == ' ' || name[i+1] == '\0'){
			len = end - st;
			subString(name, st, len, substr);
			if(name[i+1] == '\0'){
				strcat(substr," ");
			}
			strcpy(revTemp, reversed);
			strcpy(reversed, substr);
			strcat(reversed, revTemp);
			if(name[i+1] == '\0')
				break;
			end = st = i+1;
		}
		end++;
		i++;
	}
}
int main(void) {
	char str[1000] = "";
	char reversed[1000] = "";
	printf("Enter any string: ");
	fflush(stdout);
	gets(str);
	reverseWordsInString(str, reversed);
	printf("the reversed string is: \"%s\"", reversed);
	return 0;
}
