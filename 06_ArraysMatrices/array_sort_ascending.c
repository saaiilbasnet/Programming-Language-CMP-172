/*
 * Problem: Enter 10 numbers into an array and display them sorted in
 *          ascending order (bubble-sort style swap).
 */
#include<stdio.h>

int main()
{
	int varA[10], i, j, temp;

	for (i = 0; i < 10; i++) {
		printf("Enter VarA[%d]: ", i + 1);
		scanf("%d", &varA[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (varA[i] < varA[j]) {
				temp = varA[i];
				varA[i] = varA[j];
				varA[j] = temp;
			}
		}
	}

	printf("Sorted into ascending array: \n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", varA[i]);
	}

	return 0;
}
