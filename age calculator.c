
#include <stdio.h>

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int ageYears, ageMonths, ageDays;

    printf("========== AGE CALCULATOR ==========\n");

    printf("Enter Birth Date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    printf("Enter Current Date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    ageYears = currentYear - birthYear;
    ageMonths = currentMonth - birthMonth;
    ageDays = currentDay - birthDay;

    if (ageDays < 0) {
        ageDays += 30;
        ageMonths--;
    }

    if (ageMonths < 0) {
        ageMonths += 12;
        ageYears--;
    }

    printf("\n========== RESULT ==========\n");
    printf("Your Age is: %d Years %d Months %d Days\n",
           ageYears, ageMonths, ageDays);

    return 0;
}

