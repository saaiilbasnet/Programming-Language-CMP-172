/*
 * Problem: Find the sum 1+2+...+n for an entered number n, using a
 *          recursive function.
 */
#include<stdio.h>

int sumFun(int);

int main()
{
	int num, sum;
	printf("Enter any number: ");
	scanf("%d", &num);
	sum = sumFun(num);
	printf("The sum upto %d is %d.", num, sum);
	return 0;
}

int sumFun(int num)
{
	if (num == 0) {
		return 0;
	} else {
		return num + sumFun(num - 1);
	}
}
