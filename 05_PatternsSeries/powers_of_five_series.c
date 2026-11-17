/*
 * Problem: Print the series 5,25,125,...,up to the 10th term
 *          (each term = previous * 5).
 */
#include<stdio.h>

int main()
{
	int i, temp = 5;

	for (i = 1; i <= 10; i++) {
		printf("%d, ", temp);
		temp = temp * 5;
	}

	return 0;
}
