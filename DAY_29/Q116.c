//Inventory Management System
#include <stdio.h>

int main()
{
    int id, qty;
    float price;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    printf("\n----- Inventory Details -----\n");
    printf("Product ID : %d\n", id);
    printf("Quantity   : %d\n", qty);
    printf("Price      : %.2f\n", price);
    printf("Total Cost : %.2f\n", qty * price);

    return 0;
}