/*
 * Problem: Using a struct, store and display a single student's roll
 *          number, name, address and telephone number.
 */
#include<stdio.h>

struct student {
	int roll;
	char name[25];
	char address[25];
	long long telephone;
} s;

int main()
{
	printf("Enter roll, name, address and telephone for the student: ");
	scanf("%d%s%s%lld", &s.roll, s.name, s.address, &s.telephone);

	printf("Roll No.\tName\tAddress\tTelephone\n");
	printf("%d\t%s\t%s\t%lld\n", s.roll, s.name, s.address, s.telephone);

	return 0;
}
