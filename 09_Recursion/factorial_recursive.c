/*
 * Problem: Find the factorial of an entered number using a recursive
 *          function.
 */
#include<stdio.h>

int facto(int);

int main()
{
	int num;
	printf("Enter : ");
	scanf("%d", &num);
	int fact = facto(num);
	printf("The factorial of %d is %d.", num, fact);
	return 0;
}

int facto(int num)
{
	if (num == 0) {
		return 1;
	} else {
		return num * facto(num - 1);
	}
}
