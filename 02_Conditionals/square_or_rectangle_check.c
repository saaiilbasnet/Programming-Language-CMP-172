/*
 * Problem: Given a length and breadth, check whether they represent a
 *          square or a rectangle.
 */
#include<stdio.h>

int main()
{
	int length, breadth;

	printf("Enter Length and Breadth : ");
	scanf("%d%d", &length, &breadth);

	if (length == breadth) {
		printf("Square.");
	} else {
		printf("Rectangle.");
	}

	return 0;
}
