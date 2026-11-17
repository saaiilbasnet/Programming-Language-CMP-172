/*
 * Problem: Check whether an entered number is a "perfect number"
 *          (sum of its proper divisors equals the number, e.g. 6).
 */
#include<stdio.h>

int main()
{
	int num, i, counterNum = 0;

	printf("Enter a number : ");
	scanf("%d", &num);

	for (i = 1; i < num; i++) {
		if (num % i == 0) {
			counterNum = counterNum + i;
		}
	}
	if (counterNum == num) {
		printf("Perfect Number.");
	} else {
		printf("Not a perfect number.");
	}

	return 0;
}
