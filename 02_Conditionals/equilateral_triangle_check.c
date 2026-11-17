/*
 * Problem: Given the three sides of a triangle, check whether it is
 *          equilateral.
 */
#include<stdio.h>

int main()
{
	int sideA, sideB, sideC;

	printf("Enter Side A, B and C : ");
	scanf("%d%d%d", &sideA, &sideB, &sideC);

	if (sideA == sideB && sideB == sideC) {
		printf("Equilateral Triangle.");
	} else {
		printf("Not an Equilateral Triangle.");
	}

	return 0;
}
