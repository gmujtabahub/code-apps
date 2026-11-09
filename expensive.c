#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int amount;

    printf("Enter Amount= ");
    scanf("%d",&amount);

    int persons;

    printf("No. of persons to to visit spend= ");
    scanf("%d",&persons);

    int expensive;
    printf("Enter Expensive= ");
    scanf("%d",&expensive);

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("Total Amount=%d\n",amount);

    printf("Spend=%d\n",expensive);

    printf("Balance=%d\n",amount-expensive);

    printf("Per Head=%d\n",expensive/persons);

    return 0;
}