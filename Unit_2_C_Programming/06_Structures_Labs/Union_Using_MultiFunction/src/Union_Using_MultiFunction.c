/*
 ============================================================================
 Name        : Union_Using_MultiFunction.c
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

union UNUMValue{
	int u_intValue;
	float u_floatValue;
	double u_doubleValue;
};

union UNUMValue addDataType(union UNUMValue num1, union UNUMValue num2, enum NUMType dataType);

int main(void) {

	union UNUMValue num1, num2, result;

	num1.u_intValue = 8;
	num2.u_intValue = 8;
	result = addDataType(num1, num2, INT);
	printf("the INT result: %d + %d = %d", num1.u_intValue, num2.u_intValue, result.u_intValue);

	num1.u_floatValue = 8.2;
	num2.u_floatValue = 8.2;
	result = addDataType(num1, num2, FLOAT);
	printf("\nthe INT result: %.1f + %.1f = %d", num1.u_floatValue, num2.u_floatValue, result.u_floatValue);

	return 0;
}

union UNUMValue addDataType(union UNUMValue num1, union UNUMValue num2, enum NUMType dataType){
	union UNUMValue result;
	switch(dataType){
	case INT:
		result.u_intValue = num1.u_intValue + num2.u_intValue;
		break;
	case FLOAT:
		result.u_floatValue = num1.u_floatValue + num2.u_floatValue;
		break;
	case DOUBLE:
		result.u_doubleValue = num1.u_doubleValue + num2.u_doubleValue;
		break;
	}
	return result;
}



