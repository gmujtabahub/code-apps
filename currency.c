#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int currency;

    printf("Enter Currency = ");
    scanf("%d", &currency); 

    if(currency >= 5000)

    printf("5000 = %d\n", currency / 5000); 
    currency = currency % 5000;           
    
    if(currency >= 1000)

    printf("1000 = %d\n", currency / 1000);
    currency = currency % 1000;

    if(currency >= 500)

    printf("500 = %d\n", currency / 500);
    currency = currency % 500;

    if(currency >= 100)

    printf("100 = %d\n", currency / 100);
    currency = currency % 100;

    if(currency >= 50)

    printf("50 = %d\n", currency / 50);
    currency = currency % 50;

    if(currency >= 20)

    printf("20 = %d\n", currency / 20);
    currency = currency % 20;

    if(currency >= 10)

    printf("10 = %d\n", currency / 10);
    currency = currency % 10;

    if(currency >= 5)

    printf("5 = %d\n", currency / 5);
    currency = currency % 5;

    if(currency >= 1)

    printf("1 = %d\n", currency / 1);
    currency = currency % 1;

    return 0;
}