
#include <stdio.h>

int main() {
    int empId;
    char empName[50];
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    printf("=====================================\n");
    printf("       EMPLOYEE SALARY CALCULATOR\n");
    printf("=====================================\n");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Salary Calculations
    hra = basicSalary * 0.20;   // 20% HRA
    da  = basicSalary * 0.10;   // 10% DA
    pf  = basicSalary * 0.12;   // 12% PF Deduction

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    printf("\n=====================================\n");
    printf("          SALARY SLIP\n");
    printf("=====================================\n");
    printf("Employee ID      : %d\n", empId);
    printf("Employee Name    : %s\n", empName);
    printf("-------------------------------------\n");
    printf("Basic Salary     : Rs. %.2f\n", basicSalary);
    printf("HRA (20%%)        : Rs. %.2f\n", hra);
    printf("DA (10%%)         : Rs. %.2f\n", da);
    printf("PF (12%%)         : Rs. %.2f\n", pf);
    printf("-------------------------------------\n");
    printf("Gross Salary     : Rs. %.2f\n", grossSalary);
    printf("Net Salary       : Rs. %.2f\n", netSalary);
    printf("=====================================\n");

    return 0;
}

