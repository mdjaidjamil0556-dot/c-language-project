#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("Q1. C language was developed by?\n");
    printf("a) Dennis Ritchie\nb) James Gosling\nc) Bjarne Stroustrup\n");

    scanf(" %c", &ans);

    if(ans == 'a' || ans == 'A')
        score++;

    printf("Your Score = %d", score);

    return 0;
}