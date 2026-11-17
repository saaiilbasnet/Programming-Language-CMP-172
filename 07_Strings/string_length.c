/*
 * Problem: Read a single word and display its length using strlen()
 *          from <string.h>.
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char a[10];
	printf("Enter any word: ");
	scanf("%s", a);

	int length = strlen(a);
	printf("The length of %s is %d.", a, length);

	return 0;
}
