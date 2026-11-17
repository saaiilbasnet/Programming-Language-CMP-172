/*
 * Problem: Check whether an entered number is positive or negative.
 */
#include<stdio.h>

int main()
{
	int num;

	printf("Enter number : ");
	scanf("%d", &num);

	if (num < 0) {
		printf("Negative.");
	} else {
		printf("Positive.");
	}

	return 0;
}
