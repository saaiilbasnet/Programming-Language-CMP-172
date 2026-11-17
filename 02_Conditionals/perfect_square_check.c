/*
 * Problem: Check whether an entered number is a perfect square.
 */
#include<stdio.h>
#include<math.h>

int main()
{
	int num, temp1, temp2;

	printf("Enter : ");
	scanf("%d", &num);
	temp1 = sqrt(num);
	temp2 = num % temp1;

	if (temp2 == 0) {
		printf("Perfect square.");
	} else {
		printf("Not a perfect square.");
	}

	return 0;
}
