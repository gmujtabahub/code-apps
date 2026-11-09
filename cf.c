#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    float C;

    printf("Enter Centigrade= ");
    scanf("%f",&C);
C=(C*9/5)+32;
    printf("Fahrenheit= %f\n",C);

    return 0;
}