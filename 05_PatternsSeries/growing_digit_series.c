/*
 * Problem: Print the series 1,12,123,1234,12345 by appending the next
 *          digit each time (alternative, non-nested-loop approach).
 */
#include<stdio.h>

int main()
{
	int a = 1, b = 2;

	for (int i = 1; i <= 5; i++) {
		printf("%d, ", a);
		a = a * 10 + b;
		b = b + 1;
	}

	return 0;
}
