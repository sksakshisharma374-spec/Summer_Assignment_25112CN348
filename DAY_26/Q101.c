//Number Guessing Game
#include <stdio.h>

int main() {
    int num = 7, guess;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    if (guess == num)
        printf("Correct Guess!");
    else
        printf("Wrong Guess! Number was %d", num);

    return 0;
}