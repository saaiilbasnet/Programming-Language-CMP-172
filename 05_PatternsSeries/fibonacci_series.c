/*
 * Problem: Print the first terms of the Fibonacci series:
 *          1,1,2,3,5,8,13,... up to the 10th term.
 */
#include<stdio.h>

int main()
{
	int a = 1, b = 1, sum = 0;

	printf("%d, %d, ", a, b);
	for (int i = 1; i <= 10; i++) {
		sum = a + b;
		a = b;
		b = sum;
		printf("%d, ", sum);
	}

	return 0;
}
