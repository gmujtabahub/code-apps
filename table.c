#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int table;
    printf("Enter Table Count To Print = ");
    scanf("%d", &table);

    int esc;

    printf("Which Table To Escape = ");
    scanf("%d", &esc);

    int a;

    for (a = 2; a <= table; a++) // 5
    {
        if (a == esc) /// 3
            continue;

        for (int i = 1; i <= 10; i++)
        {

            printf("%d x %d = %d\n", a, i, i * a);
        }

        printf("===============\n");
    }

    // int a;

    // printf("enter table=");
    // scanf("%d", &a);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%dx%d=%d\n",a,i,i*a);
    // }
    return 0;
}
