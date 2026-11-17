/*
 * Problem: Print the series 5,55,555,...,up to the 10th term
 *          (each term = previous * 10 + 5).
 */
#include<stdio.h>

int main()
{
	int i;
	long a = 5;

	for (i = 1; i <= 10; i++) {
		printf("%ld, ", a);
		a = a * 10 + 5;
	}

	return 0;
}
