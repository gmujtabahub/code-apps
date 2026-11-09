#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");

    float eng     =69.5;
    float isl     =80;
    float che     =65;
    float urdu    =50;
    float phy     =80;
    float comp    =90;
    float maths   =95;

    float tm      =700;
    
    float sum     =eng+isl+che+urdu+phy+comp+maths;
    
    float per     =sum    *   100    /   tm;


    printf("english marks       =%.2f\n",eng);
    printf("islamiat marks      =%.2f\n",isl);
    printf("chemistry marks     =%.2f\n",che);
    printf("urdu marks          =%.2f\n",urdu);
    printf("physics marks       =%.2f\n",phy);
    printf("computer marks      =%.2f\n",comp);
    printf("maths marks         =%.2f\n\n",maths);

    printf("Your Total marks    =%.2f\n",tm);

    printf("Your obtained marks =%.2f\n",sum);

    printf("your percentage     =%.2f\n",per);



    return 0;
}