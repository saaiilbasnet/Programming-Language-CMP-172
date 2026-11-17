/*
 * Problem: Print the series 1..10 by calling a function 10 times that
 *          remembers its count between calls using a `static` variable.
 */
#include<stdio.h>

int seriesFun();

int main()
{
	int j, num[10];
	for (j = 0; j < 10; j++) {
		num[j] = seriesFun();
		printf("%d\n", num[j]);
	}

	return 0;
}

int seriesFun()
{
	static int i = 0;
	i++;
	return i;
}
