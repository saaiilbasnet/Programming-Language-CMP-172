/*
 * Problem: Enter 10 numbers into an array and display the highest
 *          entered number.
 */
#include<stdio.h>

int main()
{
	int varA[10], i, temp;

	for (i = 0; i < 10; i++) {
		printf("Enter VarA[%d]: ", i + 1);
		scanf("%d", &varA[i]);
	}

	temp = varA[0];
	for (i = 0; i < 10; i++) {
		if (temp < varA[i]) {
			temp = varA[i];
		}
	}

	printf("The greatest number is %d.", temp);

	return 0;
}
