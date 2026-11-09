#include<stdio.h>
#include<stdlib.h>

int main()
{

    system("clear");

    int a = 1;
    int b = 2;
    int c = 3;

    int d = a;
    // int e = b;

    a = c;
    b = d;
    c = e;

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    return 0;
}