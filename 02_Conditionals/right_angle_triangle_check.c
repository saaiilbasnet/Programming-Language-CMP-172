/*
 * Problem: Given the hypotenuse, base and perpendicular of a triangle,
 *          check whether it forms a right-angled triangle
 *          (hypotenuse^2 == perpendicular^2 + base^2).
 */
#include<stdio.h>
#include<math.h>

int main()
{
	int h, p, b;

	printf("Enter Hypotenuse, Perpendicular and Base : ");
	scanf("%d%d%d", &h, &p, &b);

	if (pow(h, 2) == pow(p, 2) + pow(b, 2)) {
		printf("Right Angle Triangle.");
	} else {
		printf("Not a Right Angled Triangle.");
	}

	return 0;
}
