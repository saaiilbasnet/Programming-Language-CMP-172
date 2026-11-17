/*
 * Problem: Print all even numbers from 1 to 100 using a while-loop.
 */
#include<stdio.h>

int main()
{
	int i = 1;

	while (i <= 100) {
		if (i % 2 == 0) {
			printf("%d\t", i);
		}
		i++;
	}

	return 0;
}
