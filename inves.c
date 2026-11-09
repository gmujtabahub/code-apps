#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int amount;

    printf("Enter Investment Amount = ");
    scanf("%d", &amount);

    int filer;

    printf("Are you a filer?");
    scanf("%d", &filer);

    if (filer == 0)

    {

        printf("Profit = %.0f\n", amount * 0.10);
        printf("W.H.T = %.0f\n", amount * 0.10 * 0.30);
        printf("Balance = %.0f\n", amount * 0.10 - amount * 0.10 * 0.30 + amount);
    }

    else
       

        {

            printf("Profit = %.0f\n", amount * 0.10);
            printf("W.H.T = %.0f\n", amount * 0.10 * 0.15);
            printf("Balance = %.0f\n", amount * 0.10 - amount * 0.10 * 0.15 + amount);
        }

    return 0;
}
