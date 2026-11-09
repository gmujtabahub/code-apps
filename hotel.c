#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int rent;

    printf("Enter room rent per night= ");
    scanf("%d",&rent);

    int live;

    printf("Enter no.of nights you live= ");
    scanf("%d",&live);

    int bill;

    printf("Enter Food Bill= ");
    scanf("%d",&bill);

    int persons;

    printf("No. of persons= ");
    scanf("%d",&persons);

    printf("Total Hotel Rent= %d\n",rent*live);

    printf("Food Bill=%d\n",bill);

    printf("Total Expenses=%d\n",rent*live+bill);

    printf("Per head=%d\n",(rent*live+bill)/persons);

    return 0;
}