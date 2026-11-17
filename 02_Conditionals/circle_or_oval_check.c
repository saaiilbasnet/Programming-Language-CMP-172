/*
 * Problem: Given a vertical and a horizontal radius, check whether the
 *          shape is a circle or an oval.
 */
#include<stdio.h>

int main()
{
	int radiusVer, radiusHor;

	printf("Enter the Vertical-Radius and Horizontal-Radius : ");
	scanf("%d%d", &radiusVer, &radiusHor);

	if (radiusVer == radiusHor) {
		printf("Circle.");
	} else {
		printf("Oval.");
	}

	return 0;
}
