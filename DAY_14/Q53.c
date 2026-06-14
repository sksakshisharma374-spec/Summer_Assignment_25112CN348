//Linear Search
#include <stdio.h>
int main(){
    int  i, el, arr[10], num;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &num);
    printf("Enter the element to be searched: ");
    scanf("%d", &el);


    printf("Elements of the array: ");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);

        

        
    }
    for(i=0; i<num; i++){
        if(arr[i] == el){
            printf("Number found at index %d", i);
            break;

        
        }
        else{
            continue;
        }
    }
    return 0;


}
    


