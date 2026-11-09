#include<stdio.h>
#include<stdlib.h>

int main()

{
    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d",&number);//982

    int a = number / 100;       // 982 / 100 = 9
    int b = number / 10 % 10;   // 982 / 10 % 10 = 8
    int c = number % 10;        // 982 % 10 = 2

    
    int d = c   *   100 +   b  *   10  +   a; //289

    printf("%d\n",d); //289

    if(a >= b && a >= c)
    {
        printf("Greater value is %d\n",a);
    }
    if(b >= a && b >= c)
    {
        printf("Greater value is %d\n",b);
    }
    if(c >= a && c >= b)
    {
        printf("Greater value is %d\n",c);
    }
    return 0;
}