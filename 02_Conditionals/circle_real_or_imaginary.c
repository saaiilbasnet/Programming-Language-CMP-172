/*
 * Problem: Given a radius, check whether a circle is "real" (radius >= 0)
 *          or "imaginary" (negative radius).
 */
#include<stdio.h>

int main()
{
	int radius;

	printf("Enter Radius : ");
	scanf("%d", &radius);

	if (radius < 0) {
		printf("The circle is imaginary.");
	} else {
		printf("The circle is real.");
	}

	return 0;
}
