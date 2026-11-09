#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int amount;

    printf("Enter Investment Amount = ");
    scanf("%d",&amount);

    int profit = amount * 0.10;
    
    printf("Profit = %d\n",profit);
    
    int tax    = profit * 0.15;

    printf("W.H.T Tax = %d\n",tax);

    int balance= amount + profit - tax;

    printf("Balance = %d\n",balance);

    printf("Profit Details\n");
    printf("xxxxxxxxxxxxxxxxx\n");

    int anually = profit - tax;

    printf("Profit Anually = %d\n",anually);

    int monthly = anually / 12;

    printf("Profit Monthly = %d\n",monthly);

    int daily = anually / 365;

    printf("Profit Daily = %d\n",daily);

    return 0;

}