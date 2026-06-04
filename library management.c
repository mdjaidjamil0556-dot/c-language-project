#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int quantity;
};

void addBook(struct Book b[], int *count) {
    printf("\nEnter Book ID: ");
    scanf("%d", &b[*count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[*count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[*count].author);

    printf("Enter Quantity: ");
    scanf("%d", &b[*count].quantity);

    (*count)++;
    printf("Book Added Successfully!\n");
}

void displayBooks(struct Book b[], int count) {
    if(count == 0) {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n===== Library Books =====\n");

    for(int i = 0; i < count; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID   : %d\n", b[i].id);
        printf("Book Name : %s\n", b[i].name);
        printf("Author    : %s\n", b[i].author);
        printf("Quantity  : %d\n", b[i].quantity);
    }
}

void searchBook(struct Book b[], int count) {
    int id, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(b[i].id == id) {
            printf("\nBook Found!\n");
            printf("Book ID   : %d\n", b[i].id);
            printf("Book Name : %s\n", b[i].name);
            printf("Author    : %s\n", b[i].author);
            printf("Quantity  : %d\n", b[i].quantity);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book Not Found!\n");
}

void issueBook(struct Book b[], int count) {
    int id, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(b[i].id == id) {
            found = 1;

            if(b[i].quantity > 0) {
                b[i].quantity--;
                printf("Book Issued Successfully!\n");
            } else {
                printf("Book Out of Stock!\n");
            }

            break;
        }
    }

    if(!found)
        printf("Book Not Found!\n");
}

int main() {
    struct Book b[100];
    int count = 0, choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBook(b, &count);
                break;

            case 2:
                displayBooks(b, count);
                break;

            case 3:
                searchBook(b, count);
                break;

            case 4:
                issueBook(b, count);
                break;

            case 5:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}