#include <stdio.h>

int main() {
    int month, year, days, startDay;

    printf("Enter Month (1-12): ");
    scanf("%d", &month);

    printf("Enter Year: ");
    scanf("%d", &year);

    printf("Enter the starting day of the month\n");
    printf("(0 = Sunday, 1 = Monday, ..., 6 = Saturday): ");
    scanf("%d", &startDay);

    // Determine number of days in the month
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            days = 31;
            break;

        case 4: case 6: case 9: case 11:
            days = 30;
            break;

        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
            break;

        default:
            printf("Invalid Month!\n");
            return 0;
    }

    printf("\n      Calendar - %02d/%d\n", month, year);
    printf("-----------------------------\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Print initial spaces
    for (int i = 0; i < startDay; i++)
        printf("    ");

    // Print dates
    for (int date = 1; date <= days; date++) {
        printf("%3d ", date);

        if ((date + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}