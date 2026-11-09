#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int investment;

    printf("Enter Investment Amount = ");
    scanf("%d",&investment);

    int filer;

    printf("Enter you are FILER or NON FILER = ");
    scanf("%d",&filer);

    float whttax;
    if(filer == 1)
    whttax = 0.15;
    else
    whttax = 0.30;

    float profit = investment * 0.10;
    float wht_tax = profit * whttax;
    float balance = wht_tax + investment;

    printf("Profit = %.0f\n",profit);
    printf("W.H.T TAX = %.0f\n",wht_tax);
    printf("Balance = %.0f\n",balance);

    return 0;

}