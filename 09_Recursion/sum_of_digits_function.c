/*
 * Problem: Calculate the sum of the digits of a multi-digit number
 *          (e.g. 123 -> 1+2+3 = 6), using a user-defined function with
 *          an iterative while-loop instead of recursion.
 */
#include<stdio.h>

void sumFun();

int main()
{
	sumFun();
	return 0;
}

void sumFun()
{
	int num, rem;

	printf("Enter any number: ");
	scanf("%d", &num);

	int original = num, sum = 0;

	while (num != 0) {
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}

	printf("The sum of %d is %d.", original, sum);
}
