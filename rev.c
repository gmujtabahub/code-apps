#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter Number = "),
    scanf("%d",&number);

    int a = number / 100;//5
    int b = number / 10%10;//7
    int c = number % 10;//8
    int d = c*100+b*10+a;//875

    printf("%d\n",d);
    
    if(a >= b && b >= c || c <= b && b >= a)

    {
        printf("Greater value is = %d\n",a >= b && b >= c || c <= b && b >= a);
    }

    return 0;
}