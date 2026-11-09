#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int feet;
    const int _INCHES=12;

    printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x \033[1;33m Feet To Inch Program\033[0m\tx\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("Enter feet = ");
    scanf("%d",&feet);
    printf("Inches=%d\n\n",feet*_INCHES);

    int inches;
    const int _FEETS=12;

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x \033[1;33mInch To Feet Program\033[0m\tx\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("Enter inches = ");
    scanf("%d",&inches);
    printf("Feets=%d\n",inches/_FEETS);
    
    return 0;
}