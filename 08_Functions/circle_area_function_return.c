/*
 * Problem: Calculate the area of a circle using a user-defined function
 *          that takes an argument and returns the area (as opposed to
 *          circle_area_function_void_return.c, which prints directly).
 */
#include<stdio.h>

float circle(float);

int main()
{
	float rad, area;
	printf("Enter Radius: ");
	scanf("%f", &rad);
	area = circle(rad);
	printf("The area of circle is : %f", area);
	return 0;
}

float circle(float rad)
{
	return 3.14 * rad * rad;
}
