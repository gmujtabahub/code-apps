#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter number = ");
    scanf("%d",&number);

    if(number > 0)

    {

        printf("positive number\n");

    }

      else if(number < 0)

    {

        printf("Negative number\n");

    }

    else
    {

        printf("0 input\n");

    }

    return 0;

}