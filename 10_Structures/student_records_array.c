/*
 * Problem: Using an array of structs, input roll no., name, address and
 *          telephone number for multiple students, then display them.
 * (Loop bound set to 2 for quick testing - raise to 10 for the full
 * assignment.)
 */
#include<stdio.h>

struct student {
	int roll;
	char stdName[25];
	char address[30];
	long long telephone;
};

int main()
{
	struct student s[10];
	int i;

	for (i = 0; i < 2; i++) {
		printf("Enter Roll No, Name, Address and Telephone No. of Student%d : ", i + 1);
		scanf("%d%s%s%lld", &s[i].roll, s[i].stdName, s[i].address, &s[i].telephone);
	}

	printf("Roll No.\tName\tAddress\tTelephone\n");
	for (i = 0; i < 2; i++) {
		printf("%d\t%s\t%s\t%lld\n", s[i].roll, s[i].stdName, s[i].address, s[i].telephone);
	}

	return 0;
}
