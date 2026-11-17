/*
 * Problem: Find the reverse of an entered multi-digit number.
 */
#include<stdio.h>

int main()
{
	int num, i = 0, rem;

	printf("Enter a number : ");
	scanf("%d", &num);
	int original = num;

	while (num != 0) {
		rem = num % 10;
		i = i * 10 + rem;
		num = num / 10;
	}
	printf("The reverse of %d is %d.", original, i);

	return 0;
}
