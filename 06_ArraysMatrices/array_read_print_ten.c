/*
 * Problem: Enter 10 numbers into an array and display them back.
 */
#include<stdio.h>

int main()
{
	int varA[10], i;

	for (i = 0; i < 10; i++) {
		printf("Enter varA[%d]: ", i + 1);
		scanf("%d", &varA[i]);
	}

	printf("Entered Numbers are : \n");
	for (i = 0; i < 10; i++) {
		printf("varA[%d]: %d \n", i + 1, varA[i]);
	}

	return 0;
}
