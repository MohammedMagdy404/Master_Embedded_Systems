/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Calculate_Average_Using_Arr
 Author      : Mohamed Magdy Ali
 Created on	 : Sep 28, 2023
 Description : Unit 2 C-Progtamming
			>> Assignment 2 C-Basic
			>> EX2_C_Program_To_Calculate_Average_Using_Arr
			   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	unsigned int num;
	double arr[1000];
	long double sum = 0;

	// printf("Enter the number of data : %Lf \n", sum);

	printf("Enter the number of data : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%u", &num);

	for (unsigned int i = 0; i < num; i++)
	{
		printf("%d. Enter number: ", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%lf", &arr[i]);
	}

	for (unsigned int i = 0; i < num; i++)
	{
		sum += arr[i];
	}

	//

	/*
	 * prefer using gcc compiler Not MingW
	 *
	 * mingw uses the Microsoft C run-time libraries and their
	 * implementation of printf does not support the 'long double' type.
	 * As a work-around, you could cast to 'double' and pass that to printf instead.
	 *
	 * For example:
	 * >>	printf("value = %g\n", (double) my_long_double_value);
	 *
	 */

	/*
	 *
	 * Note that a similar problem exists for 'long long' type. Use the 'I64' (eye sixty-four)
	 * length modifier instead of gcc's 'll' (ell ell).
	 * For example:
	 *
	 * >>	printf("value = %I64d\n", my_long_long_value);
	 *
	 */

	printf("Average = %.2Lf\n", (sum / num));

	return 0;
}
