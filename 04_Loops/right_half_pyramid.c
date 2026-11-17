/*
 * Problem: Print a right-half pyramid pattern of stars, 5 rows tall:
 *   *
 *   * *
 *   * * *
 *   * * * *
 *   * * * * *
 */
#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
