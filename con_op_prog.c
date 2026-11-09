#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int a;

    printf("Enter Value a = ");
    scanf("%d",&a);
    
    int b;

    printf("Enter Value b = ");
    scanf("%d",&b);

    printf("Greater Value is = %d\n",a>b? a:b);

    return 0;

}