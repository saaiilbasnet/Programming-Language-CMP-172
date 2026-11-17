/*
 * Problem: Enter 10 numbers into an array and display their sum.
 */
#include<stdio.h>

int main()
{
	int varA[10], i, sum = 0;

	for (i = 0; i < 10; i++) {
		printf("Enter VarA[%d]: ", i + 1);
		scanf("%d", &varA[i]);
	}

	for (i = 0; i < 10; i++) {
		sum = sum + varA[i];
	}

	printf("The sum of all entered numbers is : %d", sum);

	return 0;
}
