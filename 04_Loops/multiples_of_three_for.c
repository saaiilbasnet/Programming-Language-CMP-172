/*
 * Problem: Print the series 3,6,9,...,30 (multiples of 3).
 */
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 30; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
