/*
 * Problem: Print the square-number pyramid:
 *   1
 *   121
 *   12321
 *   1234321
 *   123454321
 * using varA = varA*10 + 1, then squaring it.
 */
#include<stdio.h>

int main()
{
	int i, varA = 1;

	for (i = 1; i <= 5; i++) {
		printf("%d\n", varA * varA);
		varA = varA * 10 + 1;
	}

	return 0;
}
