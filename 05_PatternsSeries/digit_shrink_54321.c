/*
 * Problem: Starting from 54321, print the number then keep dropping its
 *          last digit (54321, 5432, 543, 54, 5) by dividing by 10.
 */
#include<stdio.h>

int main()
{
	int i, a = 54321;

	for (i = 1; i <= 5; i++) {
		printf("%d\n", a);
		a = a / 10;
	}

	return 0;
}
