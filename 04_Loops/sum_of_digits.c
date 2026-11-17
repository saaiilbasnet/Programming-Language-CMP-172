/*
 * Problem: Find the sum of the digits of an entered multi-digit number.
 */
#include<stdio.h>

int main()
{
	int num, rem, sum = 0;

	printf("Enter a number : ");
	scanf("%d", &num);
	int original = num;

	while (num != 0) {
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("The sum of all the digits of %d is : %d.", original, sum);

	return 0;
}
