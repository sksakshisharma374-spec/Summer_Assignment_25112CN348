#include <math.h>
#include <stdio.h>

int LCM(int num1, int num2)
{
    int high = ((num1 > num2) ? num1 : num2);
    while(high>0){
        if (high %  num1==0 && high % num2 == 0){
        break;
    }
    high++;
}
return high;
    
    
}

int main() {
    int num1 , num2 ;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("LCM of %d & %d is %d", num1, num2, LCM(num1,num2));
    return 0;

}