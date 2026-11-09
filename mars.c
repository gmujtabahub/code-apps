#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int a;
    int b;

    int c;
   

    printf("enter number for a: ");
    scanf("%d",&a);
    printf("enter number for b: ");
    scanf("%d",&b);
    printf("xxxxxxxxxxxxxx\n");
    c = a+b;
    printf("a+b=%d\n",c);
    c = a-b;
    printf("a-b=%d\n",c); 
    c = a*b;
    printf("a*b=%d\n",c);
    c = a/b;
    printf("a/b=%d\n",c);

    printf("xxxxxxxxxxxxxx\n");
    return 0;

}