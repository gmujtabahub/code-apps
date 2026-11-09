#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("clear");
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 5; b > a; b--)
        {
            printf(" ");
        }
        for (int i = 1; i <= a; i++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}