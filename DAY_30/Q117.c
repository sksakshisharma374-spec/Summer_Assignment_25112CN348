//Student Record System Using Arrays and Strings
#include <stdio.h>

int main() {
    int n, roll[50], i;
    char name[50][30];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);
    }

    printf("\nStudent Records:\n");
    for(i=0; i<n; i++) {
        printf("Roll No: %d\tName: %s\n", roll[i], name[i]);
    }

    return 0;
}