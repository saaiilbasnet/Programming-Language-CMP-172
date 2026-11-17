/*
 * Problem: Calculate the factorial of an entered number using a
 *          user-defined function (iterative version, handles 0 and
 *          negative input as special cases).
 */
#include<stdio.h>

void facto();

int main()
{
	facto();
	return 0;
}

void facto()
{
	int i, num;
	long fact = 1;
	printf("Enter any number : ");
	scanf("%d", &num);

	if (num < 0) {
		printf("The factorial of negative number is unavailable!");
	} else if (num == 0) {
		printf("The factorial of 0 is 1.");
	} else {
		for (i = 1; i <= num; i++) {
			fact = fact * i;
		}
		printf("The factorial of %d is %ld.", num, fact);
	}
}
