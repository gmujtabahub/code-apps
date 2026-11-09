#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d",&number);

    int a = number/1000;
    int b = number/100%10;
    int c = number/10%10;
    int d = number%10;

    printf("Number = %d\n",d*1000+c*100+b*10+a);

    return 0;
}