#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int a = 10;
    int b = 20;
    int c = 30;

    int d = a;

    a = c;
    c = b;
    b = d;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    
    return 0;
}