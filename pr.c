#include <stdio.h>
#include <stdlib.h>

void p(int prime);

int main()
{

    system("clear");

    int prime = 1;

    p(prime);

    return 0;
}

void p(int prime)
{

    for (int a = 2; a <= 20; a++)
    {
        prime = 1;

        for (int b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d\n", a);
    }
}
