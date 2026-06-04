//Find  nth Fibonacci Term

#include <stdio.h>

int main() {
    int n, i;
    int term1 = 0, term2 = 1, nextTerm;

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci term %d is %d\n", n, term1);
    } else if (n == 2) {
        printf("Fibonacci term %d is %d\n", n, term2);
    } else {
        for (i = 3; i <= n; i++) {
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
        printf("Fibonacci term %d is %d\n", n, term2);
    }

    return 0;
}
