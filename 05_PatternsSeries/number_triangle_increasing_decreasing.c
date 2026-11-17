/*
 * Problem: Same pyramid shape as square_number_pyramid.c, but built
 *          digit-by-digit with nested loops instead of arithmetic:
 *   1
 *   121
 *   12321
 *   ...
 */
#include<stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		for (j = i - 1; j >= 1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
