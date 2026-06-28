//Contact Management System
#include <stdio.h>

int main() {
    char name[50];
    long long phone;

    printf("Contact Management System\n");

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%lld", &phone);

    printf("\nContact Saved Successfully!\n");
    printf("Name : %s\n", name);
    printf("Phone: %lld\n", phone);

    return 0;
}