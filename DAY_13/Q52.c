//Count Even and Odd Elements
#include <stdio.h>
int main(){
    int i, a[10], n, countEven = 0, countOdd = 0;
    printf("Enter number of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array: ");
    for(i=0; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<n ; i++){
        if (a[i]%2 == 0) {
        countEven+= 1;

    }
    else {
        countOdd+= 1;

    }
    }
    printf("Even number of element: %d\n", countEven);
    printf("Odd number of element: %d\n", countOdd);

    return 0;




}