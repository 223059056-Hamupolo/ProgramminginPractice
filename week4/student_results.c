#include <stdio.h>

int main() {
    /* Variable declarations */
    char studentName[100];
    double test1, test2, assignmentMark;
    double total;

    /* Input */
    printf("===== STUDENT RESULTS PROGRAM =====\n");
    printf("Enter Student Name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("Enter Test 1 Mark (out of 100): ");
    scanf("%lf", &test1);

    printf("Enter Test 2 Mark (out of 100): ");
    scanf("%lf", &test2);

    printf("Enter Assignment Mark (out of 100): ");
    scanf("%lf", &assignmentMark);

    /* Calculate total */
    total = test1 + test2 + assignmentMark;

    /* Formatted output */
    printf("\n===== STUDENT RESULT SUMMARY =====\n");
    printf("Student Name   : %s", studentName);
    printf("Test 1 Mark    : %.2f\n", test1);
    printf("Test 2 Mark    : %.2f\n", test2);
    printf("Assignment     : %.2f\n", assignmentMark);
    printf("Total Marks    : %.2f\n", total);

    /* Determine result using if...else if...else */
    if (total >= 75 && total <= 100) {
        printf("Result         : Distinction\n");
    } else if (total >= 60 && total <= 74) {
        printf("Result         : Credit\n");
    } else if (total >= 50 && total <= 59) {
        printf("Result         : Pass\n");
    } else if (total >= 0 && total < 50) {
        printf("Result         : Fail\n");
    } else {
        printf("Result         : Invalid total (check marks)\n");
    }

    return 0;
}