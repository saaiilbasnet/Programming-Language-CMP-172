/*
 * Problem: Check whether an entered multi-digit number is a palindrome.
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

	if (i == original) {
		printf("Palindrome.");
	} else {
		printf("Not a Palindrome.");
	}

	return 0;
}
