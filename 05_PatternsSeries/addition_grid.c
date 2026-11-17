/*
 * Problem: Print the addition grid:
 *   10 20 30
 *   20 30 40
 *   30 40 50
 */
#include<stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d\t", (i + j) * 10);
		}
		printf("\n");
	}

	return 0;
}
