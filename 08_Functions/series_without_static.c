/*
 * Problem: Print the series 1..10, this time with the loop inside the
 *          function itself instead of using a static variable
 *          (compare with series_static_variable.c).
 */
#include<stdio.h>

int seriesFun();

int main()
{
	seriesFun();
	return 0;
}

int seriesFun()
{
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d, ", i);
	}
	return 0;
}
