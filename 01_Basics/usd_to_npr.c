/*
 * Problem: Convert an entered amount in US Dollars to Nepali Rupees
 *          using a fixed exchange rate.
 */
#include<stdio.h>

int main()
{
	float usd, npr;

	printf("Enter US dollar : ");
	scanf("%f", &usd);

	npr = usd * 135;

	printf("%f USD = Rs %f", usd, npr);

	return 0;
}
