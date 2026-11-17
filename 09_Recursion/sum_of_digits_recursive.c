/*
 * Problem: Find the sum of digits of a multi-digit number using a
 *          recursive function.
 */
#include<stdio.h>

int sumFun(int);

int main()
{
	int num, sum;
	printf("Enter any number : ");
	scanf("%d", &num);
	sum = sumFun(num);
	printf("The sum of %d is %d.", num, sum);
	return 0;
}

int sumFun(int num)
{
	if (num == 0) {
		return 0;
	} else {
		return (num % 10) + sumFun(num / 10);
	}
}
