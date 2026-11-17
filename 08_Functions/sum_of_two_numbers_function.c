/*
 * Problem: Add two numbers using a user-defined function that takes two
 *          arguments and returns their sum.
 */
#include<stdio.h>

int sum(int, int);

int main()
{
	int varA, varB, sumVar;
	printf("Enter A and B: ");
	scanf("%d%d", &varA, &varB);
	sumVar = sum(varA, varB);
	printf("The sum of %d and %d is %d.", varA, varB, sumVar);
	return 0;
}

int sum(int varA, int varB)
{
	return varA + varB;
}
