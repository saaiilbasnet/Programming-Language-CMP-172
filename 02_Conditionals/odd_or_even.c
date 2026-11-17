/*
 * Problem: Check whether an entered number is odd or even.
 */
#include<stdio.h>

int main()
{
	int num;

	printf("Enter number : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("Even.");
	} else {
		printf("Odd.");
	}

	return 0;
}
