//Menu Driven String Operations
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1.Length\n2.Uppercase\n3.Reverse\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
        {
            int i;
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase String = %s", str);
            break;
        }

        case 3:
        {
            int i, len = strlen(str);
            printf("Reversed String = ");
            for(i = len - 1; i >= 0; i--)
                printf("%c", str[i]);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}