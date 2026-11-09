#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()

{
    system("clear");

    // int h = 0;

    // do
    // {
    //     int m = 0;
    //     do
    //     {
    //         int s = 0;
    //         do
    //         {
    //             printf("\r%d: %d: %d", h, m, s);
    //             usleep(100);
    //             fflush(stdout);
    //             s++;
    //         } while (s <= 59);
    //         m++;
    //     } while (m <= 59);
    //     h++;
    // } while (h <= 23);

    //=================================================================//

    // int a = 2;
    // int table;

    // printf("Enter Table Count To Print = ");
    // scanf("%d", &table);

    // int skip;

    // printf("Enter Table To Skip = ");
    // scanf("%d", &skip);

    // do
    // {
    //     if (a == skip)
    //     {
    //         a++;
    //         continue;
    //     }
    //     int b = 1;
    //     do
    //     {

    //         printf("%d x %d = %d\n", a, b, a * b);
    //         b++;
    //     } while (b <= 10);
    //     a++;
    //     printf("=============\n");
    // } while (a <= table);

    //========================================================//

    int a = 1;

    do
    {
        int b = 5;
        do
        {
            printf(" ");
            b--;
        } while (b >= a);

        int c = 1;
        do
        {
            printf("x ");
            c++;
        } while (c <= a);
        a++;
        printf("\n");
    } while (a <= 5);

    return 0;
}