/*
 * Problem: Calculate the sum of all even numbers from 1 to 100.
 */
#include<stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}
	printf("The sum of even numbers up to 1 to 100 is : %d.", sum);

	return 0;
}
