//PRIME NUMBER
#include <stdio.h>
int main() {
    int num, i, count=0 ;
    printf("Enter a number : ");
    scanf("%d", &num);

    for( i=1 ; i<= num; i++) {
        if (num%i == 0) {
            count = count + 1;
            
        }
       
    }
     if (count>2){
                printf("The number is not PRIME");
            }
            else {
                printf("The number is PRIME");
            }
    return 0;

}