//Reverse Array
#include <stdio.h>
int main() {
    int i, arr[10], num;
    printf("Enter number of elements of an array: ");
    scanf("%d", &num);

    printf("Enter elements of an array: ");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for(i = num - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
