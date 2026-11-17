/*
 * Problem: Check whether an entered number is positive or negative,
 *          using a user-defined function with no arguments and no
 *          return value.
 */
#include<stdio.h>

void numChecker();

int main()
{
	numChecker();
	return 0;
}

void numChecker()
{
	int varA;

	printf("Enter any number: ");
	scanf("%d", &varA);

	if (varA > 0) {
		printf("Positive.");
	} else {
		printf("Negative.");
	}
}
