//GCD
#include <math.h>
#include <stdio.h>

int gcd(int num1, int num2)
{
    int lowest = ((num1 < num2) ? num1 : num2);
    while (lowest>0) {
        if (num1 % lowest == 0 && num2 % lowest == 0){
              break;

        }
    lowest--;
}
return lowest;
}

int main()
{
    int num1 , num2 ;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    

    printf("GCD OF %d & %d is %d", num1, num2, gcd(num1,num2));
    return 0;

}






    
    