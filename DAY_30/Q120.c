// Complete Mini Project Using Arrays, Strings and Functions (Student Management System)
#include <stdio.h>

int roll[50], n;
char name[50][30];

void addStudents() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);
    }
}

void displayStudents() {
    int i;

    printf("\nStudent Records:\n");
    for(i=0; i<n; i++) {
        printf("Roll No: %d\tName: %s\n", roll[i], name[i]);
    }
}

int main() {
    addStudents();
    displayStudents();

    return 0;
}