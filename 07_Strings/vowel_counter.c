/*
 * Problem: Enter a word and count the number of vowels in it.
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char word[25];
	int vowCounter = 0;

	printf("Enter any word : ");
	scanf("%s", word);
	strlwr(word);

	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
		    word[i] == 'o' || word[i] == 'u') {
			vowCounter++;
		}
	}

	printf("The number of vowels in %s is %d.", word, vowCounter);

	return 0;
}
