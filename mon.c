#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    printf("1. PEPSI CANE Rs.120\n");
    printf("2. SLICE JUICE Rs.60\n");
    printf("3.LAYS Rs.50\n");
    printf("4.DAIRY MILK Rs.100\n");

    int choice;

    printf("Enter choice = ");
    scanf("%d", &choice);

    int money;

    switch (choice)

    {

    case 1:

        printf("YOU CHOOSED PEPSI CANE\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 120)

        {

            printf("PEPSI CANE DISPENSED\n");
            printf("CHANGE = %d\n", money - 120);
        }

        else
            printf("Give 120 rupees\n");

        break;

    case 2:

        printf("YOU CHOOSED SLICE JUICE\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 60)

        {

            printf("SLICE JUICE DISPENSED\n");
            printf("CHANGE = %d\n", money - 60);
        }

        else
            printf("Give 60 rupees\n");

        break;

    case 3:

        printf("YOU CHOOSED LAYS\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 50)

        {

            printf("LAYS DISPENSED\n");
            printf("CHANGE = %d\n", money - 50);
        }

        else
            printf("Give 50 rupees\n");

        break;

    case 4:

        printf("YOU CHOOSED DAIRY MILK\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 100)

        {

            printf("DAIRY MILK DISPENSED\n");
            printf("CHANGE = %d\n", money - 100);
        }

        else
            printf("Give 100 rupees\n");

        break;
    }

    return 0;
}