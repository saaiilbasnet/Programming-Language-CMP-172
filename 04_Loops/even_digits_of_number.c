/*
 * Problem: Given a multi-digit number, print only its even digits by
 *          peeling off digits one at a time (% 10, / 10).
 */
#include<stdio.h>

int main()
{
	int num, rem;

	printf("Enter a number : ");
	scanf("%d", &num);

	while (num != 0) {
		rem = num % 10;
		if (rem % 2 == 0) {
			printf("%d", rem);
		}
		num = num / 10;
	}

	return 0;
}
