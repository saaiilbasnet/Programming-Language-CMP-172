/*
 * Problem: Read a 2x2 matrix from the user and print it back.
 */
#include<stdio.h>

int main()
{
	int mat1[2][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", mat1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
