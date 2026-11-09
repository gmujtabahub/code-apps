#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int amount;
    printf("enter num ");
    scanf("%d", &amount); // 150

    if (amount / 5000 >= 5000)
        printf("5000 %d\n", amount / 5000); //

    amount = amount % 5000; //150

    if (amount >= 1000)
        printf("1000 %d\n", amount / 1000); //
                                           
    amount = amount % 1000; //150

    if (amount >= 500)
        printf("500 %d\n", amount / 500); // 

    amount = amount % 500; // 150

    if (amount >= 100)
        printf("100 %d\n", amount / 100); // 1

    amount = amount % 100; // 50

    if (amount >= 50)
        printf("50 %d\n", amount / 50); // 1

    amount = amount % 50; // 0

    if (amount >= 20)
        printf("20 %d\n", amount / 20); // 
   
    amount = amount % 20; // 

    if (amount >= 10)
        printf("10 %d\n", amount / 10); // 

    amount = amount % 10;//
    if(amount >= 5)

    printf("remaing %d\n", amount / 5); //

    amount = amount % 5;

    if(amount >= 1)

    printf("1 = %d\n",amount /1);
    

    return 0;
}