/*
 * Problem: Print the series 1,3,5,7,...,21 using a for-loop that steps
 *          by 2 (i += 2).
 */
#include<stdio.h>

int main()
{
	for (int i = 1; i <= 21; i += 2) {
		printf("%d\n", i);
	}

	return 0;
}
