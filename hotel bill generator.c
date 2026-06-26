
#include <stdio.h>

int main() {
    char customerName[50];
    int roomType, days;
    float roomCharge, foodBill, laundryBill, totalBill;

    printf("=====================================\n");
    printf("       HOTEL BILL GENERATOR\n");
    printf("=====================================\n");

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("\nRoom Types\n");
    printf("1. Standard Room (Rs.1500/day)\n");
    printf("2. Deluxe Room (Rs.2500/day)\n");
    printf("3. Suite Room (Rs.4000/day)\n");

    printf("Enter Room Type (1-3): ");
    scanf("%d", &roomType);

    printf("Enter Number of Days: ");
    scanf("%d", &days);

    switch(roomType) {
        case 1:
            roomCharge = 1500 * days;
            break;
        case 2:
            roomCharge = 2500 * days;
            break;
        case 3:
            roomCharge = 4000 * days;
            break;
        default:
            printf("Invalid Room Type!\n");
            return 0;
    }

    printf("Enter Food Bill: ");
    scanf("%f", &foodBill);

    printf("Enter Laundry Charges: ");
    scanf("%f", &laundryBill);

    totalBill = roomCharge + foodBill + laundryBill;

    printf("\n=====================================\n");
    printf("            HOTEL BILL\n");
    printf("=====================================\n");
    printf("Customer Name   : %s\n", customerName);
    printf("Days Stayed     : %d\n", days);
    printf("Room Charges    : Rs. %.2f\n", roomCharge);
    printf("Food Bill       : Rs. %.2f\n", foodBill);
    printf("Laundry Charges : Rs. %.2f\n", laundryBill);
    printf("-------------------------------------\n");
    printf("Total Bill      : Rs. %.2f\n", totalBill);
    printf("=====================================\n");

    return 0;
}

