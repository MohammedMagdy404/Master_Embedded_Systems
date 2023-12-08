/*
 ============================================================================
 Name        : EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 Author      : Mohamed magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description :  C Program to Add Two Distances Systems Using Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance{
	unsigned int Mfeet;
	double Minch;
};

struct Sdistance addDistances(struct Sdistance *distance1, struct Sdistance *distance2);
struct Sdistance readDistance();
void printDistance (struct Sdistance distance);


int main(void) {
	struct Sdistance distance1, distance2, result;

	printf ("Enter information 1st distance. \n" );
	fflush(stdout);
	distance1 = readDistance();

	printf ("\nEnter information 1st distance : \n" );
	fflush(stdout);
	distance2 = readDistance();

	result = addDistances(&distance1, &distance2);

	printDistance(result);

	return 0;
}

struct Sdistance addDistances(struct Sdistance *distance1, struct Sdistance *distance2){
	struct Sdistance result;

	result.Mfeet = distance1->Mfeet + distance2->Mfeet;
	result.Minch = distance1->Minch + distance2->Minch;

	unsigned int feetsNum;
	feetsNum = (int)result.Minch/12;

	result.Mfeet += feetsNum;
	result.Minch -= 12 * feetsNum;


	return result;
}


struct Sdistance readDistance(){
	struct Sdistance distance;

	printf ("Enter the distance in feet is: " );
	fflush (stdin); fflush(stdout);
	scanf ("%d", &distance.Mfeet);

	printf ("Enter the distance in inches: " );
	fflush (stdin); fflush(stdout);
	scanf ("%lf",  &distance.Minch);

	return distance ;
}

void printDistance (struct Sdistance distance)
{
	printf ("\nSum of the distances = %d\' - %.1f\" ", distance.Mfeet, distance.Minch);
}
