#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int a = 1;
    int b = 11;
    int c;

    while (a <= 100)
    {
        if (a == b)
        {
            printf("Enter 1 To Continue = ");
            scanf("%d", &c);

            b = b + 10;
        }

        else
        {
            printf("%d\n",a);
        }
        a++;
    }
    return 0;
}