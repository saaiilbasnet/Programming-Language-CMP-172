/*
 * Problem: Calculate the sum of the first 50 odd numbers.
 */
#include<stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 1; i <= 50; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	printf("The sum of odd numbers up to 1 to 50 is : %d.", sum);

	return 0;
}
