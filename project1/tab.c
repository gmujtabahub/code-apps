#include <stdio.h>
#include <stdlib.h>

void t(int table);

int main()

{

    system("clear");

    int table;
    printf("Enter Table = ");
    scanf("%d", &table);

    t(table);

    return 0;
}

void t(int table)
{

    for (int b = 1; b <= 10; b++)
    {
        printf("%d x %d = %d\n", table, b, table * b);
    }
}