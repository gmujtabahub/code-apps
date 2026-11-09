#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int amount, need, expense;

    printf("Enter amount in wallet = ");
    scanf("%d", &amount);

    if (amount == 0)
    {
        printf("paisay nahi hai");
    }
    else
    {
        printf("Enter need = ");
        scanf("%d", &need);

        if (amount >= need)
        {
            amount = amount - need;

            printf("Enter expense = ");
            scanf("%d", &expense);

            int change = need - expense;
            amount = amount + change;

            // printf("Amount = %d\n", amount);
            printf("Need = %d\n", need);
            printf("Expense = %d\n", expense);
            printf("Change = %d\n", change);

            printf("Value in wallet = %d\n", amount);
        }
        else
            printf("Insufficent value\n");
    }
    return 0;
}