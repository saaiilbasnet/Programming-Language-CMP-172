/*
 * Problem: Take a number 1-12 and display the corresponding month name.
 */
#include<stdio.h>

int main()
{
	int monthNum;

	printf("Enter a number for the month : ");
	scanf("%d", &monthNum);

	if (monthNum == 1) printf("January.");
	else if (monthNum == 2) printf("February.");
	else if (monthNum == 3) printf("March.");
	else if (monthNum == 4) printf("April.");
	else if (monthNum == 5) printf("May.");
	else if (monthNum == 6) printf("June.");
	else if (monthNum == 7) printf("July.");
	else if (monthNum == 8) printf("August.");
	else if (monthNum == 9) printf("September.");
	else if (monthNum == 10) printf("October.");
	else if (monthNum == 11) printf("November.");
	else if (monthNum == 12) printf("December.");
	else printf("Error!");

	return 0;
}
