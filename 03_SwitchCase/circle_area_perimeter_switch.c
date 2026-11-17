/*
 * Problem: Take a circle's radius, then let the user pick (via
 *          switch-case) whether to display the area or the perimeter.
 */
#include<stdio.h>

int main()
{
	int choiceNum;
	float radius;

	printf("Enter Radius : ");
	scanf("%f", &radius);

	if (radius < 0) {
		printf("Error!, Imaginary Circle.");
		return 0;
	}

	printf("\n1. Area\n2. Perimeter.\nEnter Your Choice : ");
	scanf("%d", &choiceNum);

	switch (choiceNum) {
		case 1: printf("Area : %f.", (3.14 * radius * radius)); break;
		case 2: printf("Perimeter : %f.", (2 * 3.14 * radius)); break;
		default: printf("Error!");
	}

	return 0;
}
