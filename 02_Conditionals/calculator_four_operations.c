/*
 * Problem: Take two numbers and an operator (+, -, *, /) from the user
 *          and display the result based on the chosen operator.
 */
#include<stdio.h>

int main()
{
	int numA, numB;
	char op;

	printf("Enter Num1, operator and Num2 : ");
	scanf("%d %c%d", &numA, &op, &numB);

	if (op == '+') {
		printf("%d + %d : %d", numA, numB, (numA + numB));
	} else if (op == '-') {
		printf("%d - %d : %d", numA, numB, (numA - numB));
	} else if (op == '*') {
		printf("%d * %d : %d", numA, numB, (numA * numB));
	} else if (op == '/') {
		printf("%d / %d : %d", numA, numB, (numA / numB));
	} else {
		printf("Error.");
	}

	return 0;
}
