/*
 * Problem: Same shape as digit_triangle_increasing.c, written using
 *          arithmetic (append the next digit each row) instead of
 *          nested loops.
 */
#include<stdio.h>

int main()
{
	int i, a = 1, b = 2;

	for (i = 1; i <= 5; i++) {
		printf("%d\n", a);
		a = a * 10 + b;
		b++;
	}

	return 0;
}
