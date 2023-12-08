/*
 ============================================================================
 Name        : PointerToFunction_Using_MultiFunction.c
 Author      : Mohamed Magdy Ali
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum NUMType{
	INT, FLOAT, DOUBLE
};


int addInt(int num1, int num2);
float addFloat(float num1, float num2);
double addDouble(double num1, double num2);


typedef int (*IntFunc)(int num1, int num2);
typedef float (*FloatFunc)(float num1, float num2);
typedef double (*DoubleFunc)(double num1, double num2);

//	typedef void (*AddFunc)(void *, void *);

int main(void) {


	int num1 = 5, num2 = 5, resultInt = 0;
	float num3 = 5.56, num4 = 5.47, resultFloat = 0;
	double num5 = 40, num6 = 5.2, resultDouble = 0;


	enum NUMType type = FLOAT;

	addWrapper(&num3, &num4, &resultFloat, type);


	printf("adding integers: result = %d", resultInt);
	printf("\nadding floats: result = %.2f", resultFloat);
	printf("\nadding doubles: result = %.2f", resultDouble);


	return 0;
}

void addWrapper(void *num1, void *num2, void *result, enum NUMType type) {
	void *functionPoiters[] = {(IntFunc)addInt, (FloatFunc)addFloat, (DoubleFunc)addDouble};

	IntFunc funcI;
	FloatFunc funcF;
	DoubleFunc funcD;

	switch(type){
	case INT:
		// Cast the void pointers back to the correct types
		funcI = functionPoiters[INT];
		*(int*)result = funcI(*(int*)num1,*(int*)num2);
		break;
	case FLOAT:
		funcF = functionPoiters[FLOAT];
		*(float*)result = funcF(*(float*)num1,*(float*)num2);
		break;
	case DOUBLE:
		funcD = functionPoiters[DOUBLE];
		*(double*)result = funcD(*(double*)num1,*(double*)num2);
		break;
	}
}


int addInt(int num1, int num2){
	return num1 + num2;
}
float addFloat(float num1, float num2){
	return num1 + num2;
}
double addDouble(double num1, double num2){
	return num1 + num2;
}
