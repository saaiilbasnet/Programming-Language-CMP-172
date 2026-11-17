/*
 * Problem: Read a 3x3 matrix, print it as entered, then print its
 *          transpose (swap rows and columns).
 */
#include<stdio.h>

int main()
{
	int mat1[3][3];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Enter Matrix1[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("Original Matrix: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

	printf("Transpose:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", mat1[j][i]);
		}
		printf("\n");
	}

	return 0;
}
