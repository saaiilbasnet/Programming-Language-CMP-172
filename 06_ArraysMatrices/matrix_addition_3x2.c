/*
 * Problem: Read two 3x2 matrices from the user and print their
 *          element-wise sum.
 */
#include<stdio.h>

int main()
{
	int mat1[3][2], mat2[3][2], sum[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix1[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix2[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
