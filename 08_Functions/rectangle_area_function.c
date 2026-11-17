/*
 * Problem: Calculate the area of a rectangle using a user-defined
 *          function that takes height and breadth as arguments.
 */
#include<stdio.h>

float area(float, float);

int main()
{
	float b, h;
	printf("Enter Height and Breadth: ");
	scanf("%f%f", &h, &b);
	area(b, h);
	return 0;
}

float area(float h, float b)
{
	float area;
	area = b * h;
	printf("Area = %f", area);
	return area;
}
