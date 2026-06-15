//Rotate array right
#include <stdio.h>

int main() {
    int arr[10], num, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Enter elements: ");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[num - 1];


    for(i = num - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Put last element at the front
    arr[0] = temp;

    printf("Array after right rotation: ");
    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

