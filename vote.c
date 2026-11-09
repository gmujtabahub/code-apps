#include<stdio.h>
#include<stdlib.h>

int main()

{
    system("clear");

    int age;

    printf("Enter your Age = ");
    scanf("%d",&age); //15

    // int  a = age>=18;

    // printf("%s\n", a ?"  You can Vote  " : " You cannot Vote  ");

    // other way ...
    age >=  18 ? printf("You can Vote\n") : printf("You can\'t Vote\n");

    return 0;
}