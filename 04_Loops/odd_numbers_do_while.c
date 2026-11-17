/*
 * Problem: Print odd numbers up to 100 using a do-while loop.
 */
#include<stdio.h>

int main()
{
	int i = 1;
	printf("Odd Numbers:\n");

	do {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
		i++;
	} while (i <= 100);

	return 0;
}
