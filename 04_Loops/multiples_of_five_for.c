/*
 * Problem: Print the series 5,10,15,...,50 (multiples of 5), written
 *          with a for-loop (compare with multiples_of_five_while.c).
 */
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 50; i++) {
		if (i % 5 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
