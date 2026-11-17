/*
 * Problem: Check whether an entered number is prime or composite,
 *          written with a for-loop (conditionals-focused variant).
 */
#include<stdio.h>

int main()
{
	int num, i, counter = 0;

	printf("Enter : ");
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
