#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int x;
    char y;
    int z;

    printf("Enter Expression = ");
    scanf("%d %c %d",&x , &y , &z);

    switch(y)

    {

        case '+' :

        printf("Result = %d\n",x + z );
        break;
        
        case '-':

        printf("Result = %d\n",x - z);
        break;

        case '*':

        printf("Result = %d\n",x * z);
        break;

        case '/':

        printf("Result = %d\n",x / z);
        break;

        case '%':

        printf("Result = %d\n",x % z);
        break;

        default:

        printf("INVALID EXPRESSION\n");

    }


    return 0;

}