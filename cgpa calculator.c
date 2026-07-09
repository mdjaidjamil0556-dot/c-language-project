
#include <stdio.h>

int main() {
    int i, semesters;
    float gpa, total = 0, cgpa;

    printf("=====================================\n");
    printf("         CGPA CALCULATOR\n");
    printf("=====================================\n");

    printf("Enter Number of Semesters: ");
    scanf("%d", &semesters);

    for (i = 1; i <= semesters; i++) {
        printf("Enter GPA of Semester %d: ", i);
        scanf("%f", &gpa);

        total += gpa;
    }

    cgpa = total / semesters;

    printf("\n=====================================\n");
    printf("            RESULT\n");
    printf("=====================================\n");
    printf("CGPA = %.2f\n", cgpa);

    if (cgpa >= 9.0)
        printf("Grade : O (Outstanding)\n");
    else if (cgpa >= 8.0)
        printf("Grade : A+\n");
    else if (cgpa >= 7.0)
        printf("Grade : A\n");
    else if (cgpa >= 6.0)
        printf("Grade : B\n");
    else if (cgpa >= 5.0)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    printf("=====================================\n");

    return 0;
}
