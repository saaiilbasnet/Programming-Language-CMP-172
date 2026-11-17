/*
 * Problem: Print the series 3,6,9,12,...,30 using a do-while loop.
 */
#include<stdio.h>

int main()
{
	int i = 1;

	do {
		if (i % 3 == 0) {
			printf("%d, ", i);
		}
		i++;
	} while (i <= 30);

	return 0;
}
