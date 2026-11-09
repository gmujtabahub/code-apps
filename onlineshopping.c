#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int cf_cost = 1250;
    
    printf("ONLINE SHOPPING\n");
    printf("==================\n");
    printf(" 1. CHARGING FAN = %d\n",cf_cost);
    printf(" 2. DIGITAL MAGNIFIER = Rs.8000\n");
    printf(" 3. DRONE = Rs.9000\n");
    printf(" 4. SMART WATCH = Rs.15000\n");

    int choice;

    printf("Enter your choice = ");
    scanf("%d",&choice);
 
    if(choice <= 4)
    {
     int quantity;

     printf("Enter Quantity = ");
     scanf("%d",&quantity);

     printf("Do you want STANDARD DELIEVERY or EXPRESS DELIEVERY\n Press 1 for STANDARD DELIEVERY and Press 0 for EXPRESS DELIEVERY.\n");
     printf("1. STANDARD DELIEVERY\n");
     printf("2. EXPRESS DELIEVERY\n");
     
     int shipping_charges;
     int choose;

    scanf("%d",&choose);
    
    if(choose == 1)
    
        shipping_charges = 100;

    else 

        shipping_charges = 200;

        if(choice == 1)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("CHARGING FAN = %d\n",cf_cost);
            printf("Charges = %d\n",cf_cost * quantity);
            printf("Delievery = %d\n",shipping_charges);
            printf("Total = %d\n",cf_cost * quantity + shipping_charges);

        }

    
     if(choice == 2)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("DIGITAL MAGNIFIER = Rs.8000\n");
            printf("Charges = %d\n",8000 * quantity);
            printf("Delievery = %d\n",shipping_charges);
            printf("Total = %d\n",8000 * quantity + shipping_charges);

        }

             if(choice == 3)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("DRONE = Rs.9000\n");
            printf("Charges = %d\n",9000 * quantity);
            printf("Delievery = %d\n",shipping_charges);
            printf("Total = %d\n",9000 * quantity + shipping_charges);

        }

        if(choice == 4)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("SMART WATCH = Rs.15000\n");
            printf("Charges = %d\n",15000 * quantity);
            printf("Delievery = %d\n",shipping_charges);
            printf("Total = %d\n",15000 * quantity + shipping_charges);

        }

    }

    else
    {

        printf("INVALID\n");

    }

    return 0;

}