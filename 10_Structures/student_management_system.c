#include <stdio.h>
#include <string.h>


/*
 * Problem: Using a struct, input roll no., name and 5 subject marks for
 *          students, compute each student's total, percentage and a
 *          PASS/FAIL remark (pass if percentage >= 40), then display a
 *          results table.
 * This is the corrected/cleaned-up version of student_struct_buggy.c -
 * total is reset per student and the printing loop is fixed.
 * Change the loop bound from 2 to 20 (or a STUDENT_COUNT constant) to
 * handle the full class of students.
 */
// Define a struct for students
struct students {
    int subMarks[5];
    int roll;
    char stdname[25];
    char remark[30];
};

int main() {
    struct students s[20];
    int i, j;
    float total, percent;

    // Taking input for students
    for (i = 0; i < 2; i++) { // Change 2 to STUDENT_COUNT for full program
        printf("\nEnter Roll No. and Name of Student %d: ", i + 1);
        scanf("%d %s", &s[i].roll, s[i].stdname);

        total = 0; // Reset total for each student

        for (j = 0; j < 5; j++) {
            printf("Enter Marks for Subject %d: ", j + 1);
            scanf("%d", &s[i].subMarks[j]);
            total += s[i].subMarks[j]; // Summing marks
        }

        // Calculate percentage
        percent = total / 5;

        // Assign remark based on percentage
        if (percent >= 40) {
            strcpy(s[i].remark, "PASS");
        } else {
            strcpy(s[i].remark, "FAIL");
        }
    }

    // Printing Results
    printf("\nRoll No.\tName\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\tPercentage\tRemark\n");
    for (i = 0; i < 2; i++) { // Change 2 to STUDENT_COUNT for full program
        total = 0; // Reset total before printing
        printf("%d\t%s\t", s[i].roll, s[i].stdname);

        for (j = 0; j < 5; j++) {
            printf("%d\t", s[i].subMarks[j]);
            total += s[i].subMarks[j];
        }

        percent = total / 5;
        printf("%.2f\t%.2f%%\t%s\n", total, percent, s[i].remark);
    }

    return 0;
}

