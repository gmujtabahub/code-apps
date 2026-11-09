#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int a=10;

    int b = a++ + ++a; // 12

    printf("%d\n",b);  // 

    return 0;
}