#include <stdio.h>
#include <stdlib.h>

int counting(int a);
int factorial = 1;

void main(void)
{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d",&number);

    counting(number);
}

int counting(int a)

{

    if(a != 0)//5
    {
        factorial = factorial * a;//5
        a--;
        counting(a);
    }
    
    printf("%d\n",a);

}