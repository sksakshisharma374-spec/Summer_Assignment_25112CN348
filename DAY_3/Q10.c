//PRIME NUMBERS IN A RANGE
#include <stdio.h>
int main() {
    int i, num,j, count ;

    printf("Enter the number upto which you want the range: ");
    scanf("%d", &num);

    printf("THE RANGE IS:\n");

    for(i=2; i<=num; i++){

        count=0;
        for( j=1 ; j<=i; j++) {

            if (i%j == 0) {
                count++;  
                            
            }              
        }       
        if (count==2){

                printf("%d\n",i);

            }       
    }
    return 0;
}
       