//FIBONACCI SERIES

#include <stdio.h>

int main() {
    int num, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number up to which you want the Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d:\n", num);

    while (term1 <= num) {
        printf("%d ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}
