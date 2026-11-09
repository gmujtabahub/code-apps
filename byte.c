#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int bits;

    printf("Enter Bits= ");
    scanf("%d",&bits);

    printf("Bytes= %d\n",bits/8);
    printf("KB= %d\n",bits/8/1024);
    printf("MB= %d\n",bits/8/1024/1024);
    printf("GB= %d\n",bits/8/1024/1024/1024);
    printf("TB= %d\n",bits/8/1024/1024/1024/1024);

    return 0;
}