/*
 * Problem: Using a struct, input marks for 5 subjects and a name for a
 *          single student, then display the marks, total and
 *          percentage.
 */
#include<stdio.h>

struct subjects {
	int a, b, c, d, e;
	char name[25];
};

int main()
{
	struct subjects s;

	printf("Enter mark of 5 subjects : ");
	scanf("%d %d %d %d %d", &s.a, &s.b, &s.c, &s.d, &s.e);
	printf("Enter Name of the student : ");
	scanf("%s", s.name);

	float total, percent;

	total = s.a + s.b + s.c + s.d + s.e;
	percent = total / 5;

	printf("Name\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\tPercentage\n");
	printf("%s \t%d\t%d\t%d\t%d\t%d\t%f\t%f", s.name, s.a, s.b, s.c, s.d, s.e, total, percent);

	return 0;
}
