//Bank Account System
#include <stdio.h>

int main() {
    float balance = 1000, amount;
    int choice;

    printf("Bank Account System\n");
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Updated Balance = %.2f\n", balance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("Balance = %.2f\n", balance);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}