//Ticket Booking System
#include <stdio.h>

int main() {
    int seats = 50, book;

    printf("Ticket Booking System\n");
    printf("Available Seats = %d\n", seats);

    printf("How many tickets do you want? ");
    scanf("%d", &book);

    if(book <= seats) {
        seats -= book;
        printf("Booking Successful!\n");
        printf("Remaining Seats = %d\n", seats);
    } else {
        printf("Seats Not Available!\n");
    }

    return 0;
}