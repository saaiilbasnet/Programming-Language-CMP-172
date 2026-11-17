/*
 * Problem: Read two 2x2 matrices from the user and print their
 *          element-wise sum (simpler version of matrix_addition_3x2.c).
 */
#include<stdio.h>

int main()
{
	int mat1[2][2], mat2[2][2], sum[2][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix1[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix2[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
