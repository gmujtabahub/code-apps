#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("clear");

    // int e = 2;
    // int sum = 0;

    // while (e <= 10)
    // {
    //     if (e % 2 == 0)
    //     {
    //         sum = sum + e;

    //         printf("%d\n", e);
    //     }

    //     e++;
    // }
    // printf("======%d\n", sum);


    int o = 1;
    int sum = 0;

    while(o <= 10)
    {
        if(o % 2 != 0)
        {
            sum = sum + o;
            printf("%d\n",o);
        }
        o++;
    }
    printf("=====%d\n",sum);
    printf("=====%d\n",sum / 5);
    return 0;
}
