//Library Management System
#include <stdio.h>

int main() {
    char book[50];
    int choice;

    printf("Library Management System\n");
    printf("1. Add Book\n2. Issue Book\n3. Return Book\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter book name: ");
            scanf("%s", book);
            printf("%s added successfully.\n", book);
            break;

        case 2:
            printf("Enter book name: ");
            scanf("%s", book);
            printf("%s issued successfully.\n", book);
            break;

        case 3:
            printf("Enter book name: ");
            scanf("%s", book);
            printf("%s returned successfully.\n", book);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}