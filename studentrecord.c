#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[100];
    int n, i, choice;
    int topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Menu
    do {
        printf("\n---- MENU ----\n");
        printf("1. Display Students\n");
        printf("2. Find Topper\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\n---- Student List ----\n");
                for(i = 0; i < n; i++) {
                    printf("\nStudent %d\n", i + 1);
                    printf("Name: %s\n", s[i].name);
                    printf("Roll: %d\n", s[i].roll);
                    printf("Marks: %.2f\n", s[i].marks);
                }
                break;

            case 2:
                topperIndex = 0;
                for(i = 1; i < n; i++) {
                    if(s[i].marks > s[topperIndex].marks) {
                        topperIndex = i;
                    }
                }

                printf("\n---- Topper ----\n");
                printf("Name: %s\n", s[topperIndex].name);
                printf("Roll: %d\n", s[topperIndex].roll);
                printf("Marks: %.2f\n", s[topperIndex].marks);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 3);

    return 0;
}