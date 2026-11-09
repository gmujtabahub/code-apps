#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");

    FILE *f = fopen("d:\\myprog.txt", "w");

    if (f == NULL)
        printf("File Not Able To Open\n");

    int table;

    printf("Enter Table = ");
    scanf("%d", &table);

    for (int a = 1; a <= 10; a++)
    {
        fprintf(f, "%d X %d = %d\n", table, a, table * a);
        printf("%d X %d = %d\n", table, a, table * a);
    }

    fclose(f);
}