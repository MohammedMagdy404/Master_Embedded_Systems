/*
 * ex2 .c
 *
 *  Created on: Mar 22, 2023
 *      Author: mm929
 */

#include <stdio.h>
#include <stdlib.h>

int ex2(void){
	unsigned char x = 0;

	// (*) give space before the value replace the star with the number
	printf("variable width control:\n");
	printf("right-justified variable width: '%*c'\n",6,'x');
	printf("left-justified variable width: '%*c'\n",-6,'x');

	// assign string to int or float
	int r = printf("Strings:\n");
	float so = printf("StringsStrings:\n");

	printf("(the last printf printed %d characters)\n",r);
	printf("(the last printf printed %f characters)\n",so);


	// [%10.3s] => the whole space is 10 include 3 of the string s
	// [%.3s] => [Hel]
	const char *s = "Hello";
	printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%10.*s]\n\t[%-*.*s]\n\t[%.3s%5.0s]\n",s, s, 10, s, 3, s, 10, 4, s, s,s);

	// %% => %
	printf("chars:\t%c %%\n",65);

	printf("Integers\n");
	printf("Decimal:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
	printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
	printf("Octal:\t%o %#o %#o\n", 10, 10, 4);




	printf("Floating point\n");
	// %.0f, 1.5 => 2
	printf("Rounding:\t%f %.0f %.32f\n",1.5,1.5,1.5);
	printf("padding:\t%05.2f %.2f %5.2f\n",1.5,1.5,1.5);
	printf("Scientific:\t%E %e\n",1.5,1.5);

	// ؟؟
	printf("Special values:\t 1/0=%g\n", 0.0/0.0, 1.0/0.0);

	// ؟؟
	// c_trick
	printf("C_trick:\t %d %d %d \n",++x,x,x++);
	printf("C_trick:\t %d %d %d \n",x++,++x,x);





	return 0;
}

