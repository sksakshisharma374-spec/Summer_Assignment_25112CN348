// Mini Employee Management System
#include <stdio.h>

int main() {
    int n, id[50], i;
    char name[50][30];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
    }

    printf("\nEmployee Details:\n");
    for(i=0; i<n; i++) {
        printf("ID: %d\tName: %s\n", id[i], name[i]);
    }

    return 0;
}