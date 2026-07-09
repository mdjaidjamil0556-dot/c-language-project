
#include <stdio.h>
#include <windows.h>

int main() {
    SYSTEMTIME t;

    while (1) {
        GetLocalTime(&t);

        system("cls");   // Clear screen

        printf("=====================================\n");
        printf("          DIGITAL CLOCK\n");
        printf("=====================================\n\n");

        printf("      %02d : %02d : %02d\n",
               t.wHour, t.wMinute, t.wSecond);

        printf("\nDate : %02d/%02d/%04d\n",
               t.wDay, t.wMonth, t.wYear);

        Sleep(1000);   // Wait for 1 second
    }

    return 0;
}

