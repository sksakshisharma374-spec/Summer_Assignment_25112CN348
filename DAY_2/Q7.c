//PRODUCT OF DIGITS OF A NUMBER 

#include <stdio.h>

int main() {

    int num , n , digit , product = 1;

    printf("Enter a Number : ");
    scanf("%d", &num);
    n = num;

    while( num != 0 ) {

        digit = num % 10;
        product = product * digit;
        num = num / 10;

    }

    printf("Product of digits of %d is %d", n , product );

    

}