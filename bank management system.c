#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank b;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Name: ");
    scanf("%s", b.name);

    b.balance = 0;

    while (1) {
        printf("\n1.Deposit\n2.Withdraw\n3.Show Balance\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter amount: ");
            scanf("%f", &amount);
            b.balance += amount;
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);

            if (amount > b.balance)
                printf("Insufficient Balance\n");
            else
                b.balance -= amount;

            break;

        case 3:
            printf("Balance = %.2f\n", b.balance);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}