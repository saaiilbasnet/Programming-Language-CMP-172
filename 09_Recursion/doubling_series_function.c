/*
 * Problem: Print the series 2,4,6,8,...,20 (i*2 for i = 1..10) using a
 *          user-defined function.
 */
#include<stdio.h>

int series();

int main()
{
	series();
	return 0;
}

int series()
{
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d, ", i * 2);
	}
	return 0;
}
