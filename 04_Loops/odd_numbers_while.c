/*
 * Problem: Print all odd numbers from 1 to 50 using a while-loop.
 */
#include<stdio.h>

int main()
{
	int i = 1;

	while (i <= 50) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}
