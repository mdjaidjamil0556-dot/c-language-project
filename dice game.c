
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    srand(time(NULL));

    printf("=====================================\n");
    printf("         DICE GAME\n");
    printf("=====================================\n");

    printf("Press Enter to roll the dice...");
    getchar();

    player = rand() % 6 + 1;
    computer = rand() % 6 + 1;

    printf("\nYou rolled      : %d\n", player);
    printf("Computer rolled : %d\n", computer);

    if (player > computer)
        printf("\nCongratulations! You Win!\n");
    else if (player < computer)
        printf("\nComputer Wins!\n");
    else
        printf("\nIt's a Draw!\n");

    return 0;
}

