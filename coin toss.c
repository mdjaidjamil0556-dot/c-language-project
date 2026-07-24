
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice, toss;

    srand(time(NULL));

    printf("=====================================\n");
    printf("         COIN TOSS GAME\n");
    printf("=====================================\n");

    printf("Choose Your Guess\n");
    printf("1. Heads\n");
    printf("2. Tails\n");

    printf("Enter Your Choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("Invalid Choice!\n");
        return 0;
    }

    toss = rand() % 2 + 1;

    printf("\nFlipping the coin...\n");

    if (toss == 1)
        printf("Result : Heads\n");
    else
        printf("Result : Tails\n");

    if (choice == toss)
        printf("Congratulations! You Won.\n");
    else
        printf("Sorry! You Lost.\n");

    return 0;
}

