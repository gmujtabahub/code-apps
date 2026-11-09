#include <stdio.h>
#include <stdlib.h>

#define PIN 122

void atm();

int main()
{
    system("clear");

    int pin;
    printf("Enter PIN = ");
    scanf("%d", &pin); // 122

    int c = 0;
    while (c != 2)
    {
        if (pin == PIN)
            break;

        printf("Invalid PIN\n");
        printf("Try Again !\n");
        printf("Enter PIN = ");
        scanf("%d", &pin);
        c++;
    }

    if (pin == PIN)
        atm();
    else
        printf("Your Card Is Blocked !\n");

    return 0;
}

void atm()
{
    int balance = 10000;

    do
    {
        system("clear");

        printf("1. Cash Deposit\n");
        printf("2. Cash Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Pay Bill\n");
        printf("5. Exit\n");

        int selection;
        printf("Enter selection = ");
        scanf("%d", &selection); // 2

        if (selection == 1)
        {
            int damount = 0;

            printf("Deposit Amount = ");
            scanf("%d", &damount);
            balance = balance + damount;
            printf("Cash Deposit = %d\n", damount);
        }

        else if (selection == 2)
        {

            int amount = 0;

            printf("Enter Amount = ");
            scanf("%d", &amount); // 8000
            balance = balance - amount;
            if (balance <= amount)
                printf("Cash = %d\n", amount);
            else
                printf("Insufficient Amount\n");
        }

        else if (selection == 3)
        {

            printf("Balance = %d\n", balance);
        }

        else if (selection == 4)
        {

            int bill;

            printf("Bill Amount = ");
            scanf("%d", &bill);
            balance = balance - bill;
            if (bill <= balance)
                printf("Bill Paid\n");
            else
                printf("Insufficient Amount\n");
        }
        else if (selection == 5)
        {
            break;
        }
        else
            printf("invalid Input\n");

        do
        {

            int repeat;
            printf("Do You Want To Repeat? Press\n");
            printf("1 continue\n");
            printf("2 exit ");

            scanf("%d", &repeat); // 1

            if (repeat == 1)
            {
                system("clear");
                break;
            }
            else if (repeat == 2)
                return;
            else
            {
                system("clear");
                printf("invalid Input\n");
            }

        } while (1); // always true

    } while (1); // always true
}