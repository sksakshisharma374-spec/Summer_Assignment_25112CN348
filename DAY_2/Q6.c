//REVERSE OF A NUMBER


#include <stdio.h>

int main() {

    int n, num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (n != 0) {
        
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;

    }

    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}

