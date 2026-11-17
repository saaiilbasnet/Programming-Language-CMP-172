/*
 * Problem: Read 5 numbers into an array and print them in reverse order.
 */
#include<stdio.h>

int main()
{
	int numArr[5], i;

	for (i = 0; i < 5; i++) {
		printf("Enter numArr[%d]: ", i + 1);
		scanf("%d", &numArr[i]);
	}

	printf("Reversed Elements : \n");
	for (i = 4; i >= 0; i--) {
		printf("%d\n", numArr[i]);
	}

	return 0;
}
