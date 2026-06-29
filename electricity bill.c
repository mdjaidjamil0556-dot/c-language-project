
#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float units, bill = 0, gst, finalBill;

    printf("====================================\n");
    printf("      ELECTRICITY BILL GENERATOR\n");
    printf("====================================\n");

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Bill Calculation
    if (units <= 100) {
        bill = units * 2.50;
    }
    else if (units <= 200) {
        bill = (100 * 2.50) + ((units - 100) * 4.00);
    }
    else if (units <= 300) {
        bill = (100 * 2.50) + (100 * 4.00) + ((units - 200) * 5.50);
    }
    else {
        bill = (100 * 2.50) + (100 * 4.00) + (100 * 5.50)
             + ((units - 300) * 7.00);
    }

    // GST (5%)
    gst = bill * 0.05;

    finalBill = bill + gst;

    printf("\n====================================\n");
    printf("          ELECTRICITY BILL\n");
    printf("====================================\n");
    printf("Customer ID      : %d\n", customerId);
    printf("Customer Name    : %s\n", customerName);
    printf("Units Consumed   : %.2f\n", units);
    printf("------------------------------------\n");
    printf("Electricity Bill : Rs. %.2f\n", bill);
    printf("GST (5%%)         : Rs. %.2f\n", gst);
    printf("------------------------------------\n");
    printf("Total Amount     : Rs. %.2f\n", finalBill);
    printf("====================================\n");

    return 0;
}
