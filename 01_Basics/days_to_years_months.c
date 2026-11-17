/*
 * Problem: Convert a total number of days into years, months and the
 *          remaining days (1 year = 365 days, 1 month = 30 days).
 */
#include<stdio.h>

int main()
{
	int days, year, month, temp, remDays;

	printf("Enter the number of days : ");
	scanf("%d", &days);

	year = days / 365;
	temp = days % 365;
	month = temp / 30;
	remDays = temp % 30;

	printf("Input Days : %d\nYears : %d\nMonths : %d\nRemaining Days: %d",
	       days, year, month, remDays);

	return 0;
}
