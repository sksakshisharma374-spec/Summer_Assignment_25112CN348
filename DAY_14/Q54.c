//Frequency of an element
#include <stdio.h>
int main(){
    int  i, el, arr[10], num, count=0;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &num);
    printf("Enter the element of which frequency is to be found ");
    scanf("%d", &el);


    printf("Elements of the array: ");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);

        

        
    }
    for(i=0; i<num; i++){
        if(arr[i] == el){
            count++;
        
        }
        else{
            continue;
        }
        
    }
    printf("The frequency of %d is %d", el, count);
    return 0;


}
    