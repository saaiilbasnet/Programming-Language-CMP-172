/*
 * Problem: Check whether an entered number is odd or even using
 *          switch-case on (num % 2).
 */
#include<stdio.h>

int main()
{
	int num;

	printf("Enter a Number: ");
	scanf("%d", &num);

	switch (num % 2) {
		case 0: printf("Even."); break;
		case 1: printf("Odd."); break;
		default: printf("Error.");
	}

	return 0;
}
