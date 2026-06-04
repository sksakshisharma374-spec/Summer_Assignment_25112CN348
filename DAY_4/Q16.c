//Armstrong Numbers in a Range
#include <stdio.h>

int main() {
    int start, end, num, originalNum, remainder, result;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;  // cube each digit
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

