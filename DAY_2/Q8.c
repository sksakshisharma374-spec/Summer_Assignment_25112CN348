// TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT 

#include <stdio.h>

int main() {

    int rev = 0, digit, num, n;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;   

    while (n != 0) {
        digit = n % 10;          
        rev = rev * 10 + digit;
        n = n / 10;             
    }
    
    if (rev == num) {            
        printf("The entered number is a PALINDROME. Yayyy!!!\n");
    }
    else {
        printf("The entered number is NOT a PALINDROME.\n");
    }

    return 0;
}

