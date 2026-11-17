/*
 * Problem: Print the squares series 1,4,9,16,...,100 separated by
 *          commas (no trailing comma after the last term).
 */
#include<stdio.h>

int main()
{
	int i, counterVar = 0;

	for (i = 1; i <= 10; i++) {
		printf("%d", i * i);
		counterVar++;
		if (counterVar < 10) {
			printf(", ");
		}
	}

	return 0;
}
