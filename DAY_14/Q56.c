//Find duplicates in array
#include <stdio.h>
int main() {
    int arr[100], num, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    printf("Enter elements of the array:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; 
            }
        }
    }

    return 0;
}
