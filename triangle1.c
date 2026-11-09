#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int prime = 1;
    
    for (int j = 2; j <= 15; j++)
    {
        prime = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", j);
    }
    return 0;
}