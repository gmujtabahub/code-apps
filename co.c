#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");
    

    int a;

    printf("Enter Value = ");
    scanf("%d",&a);

    int b;

    printf("Enter Value = ");
    scanf("%d",&b);

    printf("Greater value is = %d\n",a>b?a:b);

    return 0;
}           