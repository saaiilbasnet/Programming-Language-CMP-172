/*
 * Problem: Read a single word and print it converted to uppercase
 *          using strupr() from <string.h>.
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char a[10];
	printf("Enter a word: ");
	scanf("%s", a);

	printf("%s is uppercased into %s.", a, strupr(a));

	return 0;
}
