/*
 * Problem: Check whether an entered number is prime or composite
 *          (for-loop version, kept from original class file alongside
 *          the do-while series below).
 */
#include<stdio.h>

int main()
{
	int num, i, counterVar = 0;

	printf("Enter : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			counterVar++;
		}
	}
	if (counterVar == 2) {
		printf("Prime.");
	} else {
		printf("Composite.");
	}

	return 0;
}
