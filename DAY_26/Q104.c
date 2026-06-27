// Quiz Application
#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q2. 5 + 5 = ?\n");
    scanf("%d", &ans);

    if(ans == 10)
        score++;

    printf("Your Score = %d/2", score);

    return 0;
}