/*
 * Problem: Read a 3x3 matrix and display its primary diagonal
 *          (top-left to bottom-right) and secondary diagonal
 *          (top-right to bottom-left).
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

	printf("Displaying 3x3 matrix : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d \t", mat1[i][j]);
		}
		printf("\n");
	}

	printf("\nPrimary diagonal: ");
	for (i = 0; i < 3; i++) {
		printf("%d ", mat1[i][i]);
	}

	printf("\nSecondary diagonal: ");
	for (i = 0; i < 3; i++) {
		printf("%d ", mat1[i][2 - i]);
	}

	return 0;
}
