#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("clear");

    int a = 5;

    while (a >= 1)
    {
        int b = 1;
        while (b < a)
        {
            printf(" ");
            b++;
        }
        int c = 5;
        while (c >= b)
        {
            printf("x ");
            c--;
        }
        a--;
        printf("\n");
    }

    return 0;
}