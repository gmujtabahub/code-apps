#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int a;

    printf("Enter Amount=");
    scanf("%d",&a);

    const int _B=5000;
    int c = a / _B;
    int d = a % _B;
    

    printf("5000=%d\n",c);
    

    const int _C=1000;
    int e = a / _C;
    int f = a % _C;
    int g = d / _C;

    printf("1000=%d\n",g);

    const int _D=500;
    int h = g / _D;

    printf("%d\n",h);
    
    return 0;
}