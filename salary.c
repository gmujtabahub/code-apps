#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    float salary; 

    printf("Enter Basic Salary = ");
    scanf("%f",&salary);

    float medical_allowance = salary        *   0.05;

    float house_rent        = salary        *   0.05;

    float gross_salary      = salary        +   house_rent     +    house_rent;

    float tax               = gross_salary  * 0.07;

    float net_salary        = gross_salary  - tax;

    printf("Medical Allowance = %.0f\n",medical_allowance);
    printf("House Rent = %.0f\n",house_rent);
    printf("Gross Salary = %.0f\n",gross_salary);
    printf("Tax = %.0f\n",tax);
    printf("Net Salary = %.0f\n",net_salary);

    return 0;

}