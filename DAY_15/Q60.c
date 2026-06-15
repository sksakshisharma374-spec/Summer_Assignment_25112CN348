//Move zeroes to end
#include <stdio.h>

int main() {
    int arr[20], num, i, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Enter elements: ");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int result[20];

    for(i = 0; i < num; i++) {
        if(arr[i] != 0) {
            result[j] = arr[i];
            j++;
        }
    }

    
    while(j < num) {
        result[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end: ");
    for(i = 0; i < num; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
