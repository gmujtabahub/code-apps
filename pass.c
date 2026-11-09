#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int password;
    int a;
    int b;

    printf("Enter Password = ");
    scanf("%d", &password);

    if (password == 123)
    {
        printf("You are Welcome\n");
    }

    else

    {
        for (a = 1; a <= 3; a++)
        {

            printf("Invalid Password\n");
            printf("Enter your password again = ");
            scanf("%d", &b);
            if (b == 123)
                break;
        }
    }

    if (b == 123)
        printf("You are welcome\n");

    if(b == 123)
    printf("your card is blocked\n");

    return 0;
}