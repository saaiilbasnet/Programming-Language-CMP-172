/*
 * Problem: Take a number 1-7 and display the corresponding day name
 *          using switch-case.
 */
#include<stdio.h>

int main()
{
	int dayNum;

	printf("Enter a number for the day : ");
	scanf("%d", &dayNum);

	switch (dayNum) {
		case 1: printf("Sunday."); break;
		case 2: printf("Monday."); break;
		case 3: printf("Tuesday."); break;
		case 4: printf("Wednesday."); break;
		case 5: printf("Thursday."); break;
		case 6: printf("Friday."); break;
		case 7: printf("Saturday."); break;
		default: printf("Error!");
	}

	return 0;
}
