/*
 * Problem: Check and display the smaller of two entered numbers.
 */
#include<stdio.h>

int main()
{
	int num1, num2;

	printf("Enter two numbers : ");
	scanf("%d%d", &num1, &num2);

	if (num1 > num2) {
		printf("%d is smaller than %d.", num2, num1);
	} else {
		printf("%d is smaller than %d.", num1, num2);
	}

	return 0;
}
