#include <stdio.h>
#include <ctype.h>

struct Question {
    char question[200];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char answer;
};

int main() {
    struct Question quiz[5] = {
        {
            "1. What is the capital of India?",
            "A. Delhi",
            "B. Mumbai",
            "C. Kolkata",
            "D. Chennai",
            'A'
        },
        {
            "2. Who invented C language?",
            "A. James Gosling",
            "B. Dennis Ritchie",
            "C. Bjarne Stroustrup",
            "D. Guido van Rossum",
            'B'
        },
        {
            "3. Which symbol is used to end a statement in C?",
            "A. :",
            "B. ,",
            "C. ;",
            "D. .",
            'C'
        },
        {
            "4. Which data type stores decimal numbers?",
            "A. int",
            "B. char",
            "C. float",
            "D. void",
            'C'
        },
        {
            "5. Which loop executes at least once?",
            "A. for",
            "B. while",
            "C. do-while",
            "D. None",
            'C'
        }
    };

    int i, score = 0;
    char choice;

    printf("\n=====================================\n");
    printf("      QUIZ MANAGEMENT SYSTEM\n");
    printf("=====================================\n");

    for (i = 0; i < 5; i++) {

        printf("\n%s\n", quiz[i].question);
        printf("%s\n", quiz[i].optionA);
        printf("%s\n", quiz[i].optionB);
        printf("%s\n", quiz[i].optionC);
        printf("%s\n", quiz[i].optionD);

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &choice);

        choice = toupper(choice);

        if (choice == quiz[i].answer) {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct Answer: %c\n", quiz[i].answer);
        }
    }

    printf("\n=====================================\n");
    printf("           QUIZ RESULT\n");
    printf("=====================================\n");
    printf("Total Score : %d / 50\n", score);

    if (score == 50)
        printf("Excellent!\n");
    else if (score >= 40)
        printf("Very Good!\n");
    else if (score >= 30)
        printf("Good!\n");
    else if (score >= 20)
        printf("Needs Improvement.\n");
    else
        printf("Better Luck Next Time.\n");

    return 0;
}