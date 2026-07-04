
#include <stdio.h>

int main() {
    char name[50];
    float weight, height, bmi;

    printf("=====================================\n");
    printf("        BMI CALCULATOR\n");
    printf("=====================================\n");

    printf("Enter Your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter Height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\n=====================================\n");
    printf("          BMI REPORT\n");
    printf("=====================================\n");
    printf("Name      : %s\n", name);
    printf("Weight    : %.2f kg\n", weight);
    printf("Height    : %.2f m\n", height);
    printf("BMI       : %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Category  : Underweight\n");
    else if (bmi < 25)
        printf("Category  : Normal Weight\n");
    else if (bmi < 30)
        printf("Category  : Overweight\n");
    else
        printf("Category  : Obese\n");

    printf("=====================================\n");

    return 0;
}

