/*
 * Problem: Using an array of structs, input employee id, name and
 *          salary for 5 employees, then display them in a table.
 */
#include<stdio.h>

struct account {
	int empId;
	char empName[25];
	float salary;
};

int main()
{
	struct account e[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("Enter Employee Id, Name and Salary of Employee%d : ", i + 1);
		scanf("%d%s%f", &e[i].empId, e[i].empName, &e[i].salary);
	}

	printf("Employee Id\tEmployee Name\tEmployee Salary\n");
	for (i = 0; i < 5; i++) {
		printf("%d\t%s\t%f\n", e[i].empId, e[i].empName, e[i].salary);
	}

	return 0;
}
