/*
 * Problem: Print the series 3,33,333,...,up to the 10th term
 *          (each term = previous * 10 + 3).
 */
#include<stdio.h>

int main()
{
	int i, a = 3;

	for (i = 1; i <= 10; i++) {
		printf("%d, ", a);
		a = a * 10 + 3;
	}

	return 0;
}
