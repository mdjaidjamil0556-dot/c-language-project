
#include <stdio.h>

int main() {
    char name[50], father[50], email[50], phone[20];
    char address[100], qualification[50], skills[100];
    char objective[200];

    printf("=====================================\n");
    printf("        RESUME BUILDER\n");
    printf("=====================================\n");

    printf("Enter Your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Father's Name: ");
    scanf(" %[^\n]", father);

    printf("Enter Email: ");
    scanf(" %[^\n]", email);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", phone);

    printf("Enter Address: ");
    scanf(" %[^\n]", address);

    printf("Enter Highest Qualification: ");
    scanf(" %[^\n]", qualification);

    printf("Enter Skills: ");
    scanf(" %[^\n]", skills);

    printf("Enter Career Objective: ");
    scanf(" %[^\n]", objective);

    printf("\n\n========================================\n");
    printf("               RESUME\n");
    printf("========================================\n");

    printf("Name            : %s\n", name);
    printf("Father's Name   : %s\n", father);
    printf("Email           : %s\n", email);
    printf("Phone           : %s\n", phone);
    printf("Address         : %s\n", address);

    printf("\n----------------------------------------\n");
    printf("CAREER OBJECTIVE\n");
    printf("----------------------------------------\n");
    printf("%s\n", objective);

    printf("\n----------------------------------------\n");
    printf("EDUCATIONAL QUALIFICATION\n");
    printf("----------------------------------------\n");
    printf("%s\n", qualification);

    printf("\n----------------------------------------\n");
    printf("SKILLS\n");
    printf("----------------------------------------\n");
    printf("%s\n", skills);

    printf("\n========================================\n");
    printf("      THANK YOU\n");
    printf("========================================\n");

    return 0;
}
