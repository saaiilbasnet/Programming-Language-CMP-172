/*
 * Problem: Print the first 10 natural numbers using a do-while loop.
 */
#include<stdio.h>

int main()
{
	int i = 1;
	printf("Natural Numbers : \n");

	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}
