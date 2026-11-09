#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    system("clear");

    printf(" 1. Left To Right\n");
    printf(" 2. Top To Bottom\n");
    printf(" 3. Right To Left\n");
    printf(" 4. Bottom To Top\n");

    int choice;
    printf("Enter your choice = ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("clear");

        for (int i = 1; i <= 140; i++)
        {
            printf("\033[1;%dH", i);
            printf("Hello");
            fflush(stdout);
            usleep(10000);
            printf("\033[1;%dH", i);
            printf("     ");
        }
    }
    if (choice == 2)
    {
        system("clear");

        for (int i = 1; i <= 42; i++)
        {
            printf("\033[%d;140H", i);
            printf("Hello");
            fflush(stdout);
            usleep(10000);
            printf("\033[%d;140H", i);
            printf("     ");
        }
    }
    if (choice == 3)
    {
        system("clear");
        for (int i = 100; i >= 1; i--)
        {
            printf("\033[100;%dH", i);
            printf("Hello");
            fflush(stdout);
            usleep(10000);
            printf("\033[100;%dH", i);
            printf("     ");
        }
    }
    if (choice == 4)
    {
        system("clear");
        for (int i = 42; i >= 1; i--)
        {
            printf("\033[%d;1H", i);
            printf("Hello");
            fflush(stdout);
            usleep(10000);
            printf("\033[%d;1H", i);
            printf("     ");
        }
    }

    return 0;
}