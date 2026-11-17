/*
 * Problem: Print the squares series 1,4,9,16,...,100 using a
 *          user-defined function.
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
		printf("%d, ", i * i);
	}
	return 0;
}
