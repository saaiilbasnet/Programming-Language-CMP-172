/*
 * Problem: Same as middle_of_three_numbers.c, written using compound
 *          boolean conditions as an alternative approach. Kept here as
 *          it was originally written in class, but note the logic is
 *          not fully correct for every input ordering.
 */
#include<stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Enter 3 numbers : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	if ((num1 > num2 || num2 > num1) && num1 > num3 || num3 > num1) {
		printf("The middle number is %d.", num2);
	} else if ((num1 > num3 || num3 > num1) && num1 > num2 || num2 > num1) {
		printf("The middle number is %d.", num3);
	} else {
		printf("The middle number is %d.", num1);
	}

	return 0;
}
