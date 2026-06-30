// Mini Library System
#include <stdio.h>

int main() {
    int n, i;
    char book[50][30];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter Book Name: ");
        scanf("%s", book[i]);
    }

    printf("\nBooks in Library:\n");
    for(i=0; i<n; i++) {
        printf("%d. %s\n", i+1, book[i]);
    }

    return 0;
}