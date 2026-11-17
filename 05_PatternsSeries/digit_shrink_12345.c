/*
 * Problem: Same idea as digit_shrink_54321.c, starting from 12345
 *          instead (12345, 1234, 123, 12, 1).
 */
#include<stdio.h>

int main()
{
	int i, a = 12345;

	for (i = 1; i <= 5; i++) {
		printf("%d\n", a);
		a = a / 10;
	}

	return 0;
}
