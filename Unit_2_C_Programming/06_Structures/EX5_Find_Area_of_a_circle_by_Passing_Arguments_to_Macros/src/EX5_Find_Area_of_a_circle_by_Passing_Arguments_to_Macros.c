/*
 ============================================================================
 Name        : EX5_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define AreaOfCircle(radius) radius*radius*PI

int main(void) {

	double radius ;

		printf ("Enter the radius of the circle: ");
		fflush (stdin);	fflush (stdout);
		scanf ("%lf", &radius);

		printf ("\nThe Area of the circle is: %.2lf", AreaOfCircle(radius));

	return 0;
}
