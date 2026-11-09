#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main()

{

    system("clear");

    int table;
    printf("Enter Table Count To Print = ");
    scanf("%d", &table);

    int skip;
    printf("Enter Table To Skip = ");
    scanf("%d",&skip);

    for (int a = 2; a <= table; a++)
    {
        system("clear");
        if(a == skip)
        continue;
        for (int i = 1; i <= 10; i++)
        {
            printf("\r%d x %d = %d\n", a,i,a*i);
            fflush(stdout);
            sleep(1);
        }
        printf("===============\n");
    }
    return 0;
}