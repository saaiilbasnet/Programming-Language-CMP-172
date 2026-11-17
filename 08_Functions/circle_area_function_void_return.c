/*
 * Problem: Calculate the area of a circle using a user-defined function
 *          that takes an argument but has no return value (prints
 *          directly inside the function).
 */
#include<stdio.h>

void area(float);

int main()
{
	float rad;
	printf("Enter Radius: ");
	scanf("%f", &rad);
	area(rad);
	return 0;
}

void area(float rad)
{
	float area;
	area = 3.14 * rad * rad;
	printf("The area of entered circle is %f.", area);
}
