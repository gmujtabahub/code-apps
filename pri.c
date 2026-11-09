#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("clear");

    int a = 1;
    int b = 10;

    while (a <= 10 && b >= 1)
    {

        printf("%d\t%d\n", a, b);

        a++;
        b--;
        
    }

    return 0;
}