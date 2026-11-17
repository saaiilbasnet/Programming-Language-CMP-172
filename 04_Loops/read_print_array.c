/*
 * Problem: Read 5 numbers into an array and print them back.
 */
#include<stdio.h>

int main()
{
	int num[5];

	for (int i = 0; i < 5; i++) {
		printf("Enter num[%d] : ", i + 1);
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("Num[%d] : %d.\n", i, num[i]);
	}

	return 0;
}
