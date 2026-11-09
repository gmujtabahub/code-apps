#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

   
    int loop;
    int fnumber = 1;

    printf("Enter Number = ");
    scanf("%d", &loop); // 5

    if (loop >= 0 && loop != 0)
    {
        for (int a = 1; a <= loop; a++) // 5
            fnumber = fnumber * a;    // 120

        printf("Factorial = %d\n", fnumber);
    }
    else
    {
        printf("INVALID NUMBER \n");
    }

    return 0;
}