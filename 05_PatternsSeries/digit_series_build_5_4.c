/*
 * Problem: Build a growing-digit series starting from 5, where each
 *          term appends the next lower digit (5, 54, 543, 5432, 54321).
 */
#include<stdio.h>

int main()
{
	int i, temp1 = 5, temp2 = 4;

	for (i = 1; i <= 5; i++) {
		printf("%d \n", temp1);
		temp1 = temp1 * 10 + temp2;
		temp2 = temp2 - 1;
	}

	return 0;
}
