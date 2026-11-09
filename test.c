#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("clear");
    int table;

    printf("Enter Table = ");
    scanf("%d", &table);
    int a = 2;
    int i = 1;

    do
    {

        printf("%d x %d = %d\n", table, i, table * i);
        a++;
        i++;

    } while (a <= table && i <= 10);
    return 0;
}