/*
 * Problem: Check whether an entered number is prime or composite,
 *          written using goto instead of a for-loop as an alternative
 *          control-flow exercise.
 */
#include<stdio.h>

int main()
{
	int num, rem, temp = 1, counter = 0;

	printf("Enter : ");
	scanf("%d", &num);

	line:
	rem = num % temp;
	if (rem == 0) {
		counter++;
	}
	temp++;
	if (temp <= num) goto line;

	if (counter == 2) {
		printf("Prime.");
	} else {
		printf("Composite.");
	}

	return 0;
}
