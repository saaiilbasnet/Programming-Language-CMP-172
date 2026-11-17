/*
 * Problem: Convert Fahrenheit to Celsius using a user-defined function
 *          that takes an argument and returns a value.
 */
#include<stdio.h>

float temp(float);

int main()
{
	float feh, celc;

	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f", &feh);

	celc = temp(feh);

	printf("%f F is equal to %f C.", feh, celc);
	return 0;
}

float temp(float feh)
{
	return (0.55 * (feh - 32));
}
