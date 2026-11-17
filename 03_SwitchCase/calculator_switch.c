/*
 * Problem: Take two numbers and an operator and display the result,
 *          using switch-case instead of if-else.
 */
#include<stdio.h>

int main()
{
	int numA, numB;
	char op;

	printf("Enter first num, an operator and last number : ");
	scanf("%d %c%d", &numA, &op, &numB);

	switch (op) {
		case '+': printf("%d + %d = %d.", numA, numB, (numA + numB)); break;
		case '-': printf("%d - %d = %d.", numA, numB, (numA - numB)); break;
		case '*': printf("%d * %d = %d.", numA, numB, (numA * numB)); break;
		case '/': printf("%d / %d = %d.", numA, numB, (numA / numB)); break;
		default: printf("Error.");
	}

	return 0;
}
