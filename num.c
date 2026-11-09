#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d",&number);

    int a = number/10;
    int b = number%10;

    int c = b*10+a;

    printf("%d\n",c);

    return 0;
}