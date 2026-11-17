/*
 * Problem: Generate the Fibonacci series using a user-defined function.
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
	int a = 1, b = 1, fibo = 0;

	for (i = 1; i <= 10; i++) {
		a = b;
		b = fibo;
		fibo = a + b;
		printf("%d, ", fibo);
	}
	return 0;
}
