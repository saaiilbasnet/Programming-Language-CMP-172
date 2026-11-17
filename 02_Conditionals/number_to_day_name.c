/*
 * Problem: Take a number 1-7 and display the corresponding day name
 *          (1 = Sunday, 2 = Monday, ...).
 */
#include<stdio.h>

int main()
{
	int dayNum;

	printf("Enter a number for the day : ");
	scanf("%d", &dayNum);

	if (dayNum == 1) printf("Sunday.");
	else if (dayNum == 2) printf("Monday.");
	else if (dayNum == 3) printf("Tuesday.");
	else if (dayNum == 4) printf("Wednesday.");
	else if (dayNum == 5) printf("Thursday.");
	else if (dayNum == 6) printf("Friday.");
	else if (dayNum == 7) printf("Saturday.");
	else printf("Error!");

	return 0;
}
