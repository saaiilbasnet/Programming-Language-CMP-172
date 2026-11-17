/*
 * Problem: Find the factorial of an entered number using a for-loop.
 */
#include<stdio.h>

int main()
{
	int num, i, fact = 1;

	printf("Enter a number for the factorial: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("Error, Negative Number.");
	} else {
		for (i = 1; i <= num; i++) {
			fact = fact * i;
		}
		printf("The factorial of %d is %d.", num, fact);
	}

	return 0;
}
