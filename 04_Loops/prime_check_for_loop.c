/*
 * Problem: Check whether an entered number is prime or composite using
 *          a for-loop that counts its divisors.
 */
#include<stdio.h>

int main()
{
	int num, i, counter = 0;

	printf("Enter Number : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			counter++;
		}
	}

	if (counter == 2) {
		printf("Prime.");
	} else {
		printf("Composite.");
	}

	return 0;
}
