/*
 * Problem: Find the area of a circle from its radius.
 */
#include<stdio.h>

int main()
{
	float r, area;

	printf("Enter Radius : ");
	scanf("%f", &r);

	area = 3.14 * r * r;

	printf("The required area is : %f.", area);

	return 0;
}
