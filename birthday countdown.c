
#include <stdio.h>

int main() {
    int currentDay, currentMonth;
    int birthDay, birthMonth;
    int currentDayOfYear = 0, birthdayDayOfYear = 0;
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i, daysLeft;

    printf("=====================================\n");
    printf("      BIRTHDAY COUNTDOWN\n");
    printf("=====================================\n");

    printf("Enter Today's Date (DD MM): ");
    scanf("%d %d", &currentDay, &currentMonth);

    printf("Enter Your Birthday (DD MM): ");
    scanf("%d %d", &birthDay, &birthMonth);

    // Convert today's date to day number of the year
    for(i = 0; i < currentMonth - 1; i++)
        currentDayOfYear += daysInMonth[i];
    currentDayOfYear += currentDay;

    // Convert birthday to day number of the year
    for(i = 0; i < birthMonth - 1; i++)
        birthdayDayOfYear += daysInMonth[i];
    birthdayDayOfYear += birthDay;

    if(birthdayDayOfYear >= currentDayOfYear)
        daysLeft = birthdayDayOfYear - currentDayOfYear;
    else
        daysLeft = (365 - currentDayOfYear) + birthdayDayOfYear;

    printf("\n=====================================\n");

    if(daysLeft == 0)
        printf("🎉 Happy Birthday! Today is your birthday!\n");
    else
        printf("Only %d day(s) left until your birthday!\n", daysLeft);

    printf("=====================================\n");

    return 0;
}
