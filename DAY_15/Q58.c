//Rotate array left 
#include <stdio.h>

int main() {
    int arr[10], num, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Enter elements: ");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    
    temp = arr[0];

   
    for(i = 0; i < num - 1; i++) {
        arr[i] = arr[i + 1];
    }

   
    arr[num - 1] = temp;

    printf("Array after left rotation: ");
    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
