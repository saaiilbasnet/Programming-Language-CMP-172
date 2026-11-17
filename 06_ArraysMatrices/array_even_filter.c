/*
 * Problem: Enter 10 numbers into an array and display only the even
 *          ones.
 */
#include<stdio.h>

int main()
{
	int varA[10], i;

	for (i = 0; i < 10; i++) {
		printf("Enter varA[%d]: ", i + 1);
		scanf("%d", &varA[i]);
	}

	for (i = 0; i < 10; i++) {
		if (varA[i] % 2 == 0) {
			printf("%d\n", varA[i]);
		}
	}

	return 0;
}
