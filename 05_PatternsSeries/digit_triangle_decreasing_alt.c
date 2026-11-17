/*
 * Problem: Same shape as digit_triangle_decreasing.c, written using
 *          arithmetic (divide by 10 each row) instead of nested loops.
 */
#include<stdio.h>

int main()
{
	int i, a = 12345;

	for (i = 1; i <= 5; i++) {
		printf("%d \n", a);
		a = a / 10;
	}

	return 0;
}
