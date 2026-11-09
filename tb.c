#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    long TB;

    printf("Enter TB = ");
    scanf("%ld",&TB);

    printf("GB = %ld\n",TB*1024);
    printf("MB = %ld\n",TB*1024*1024);
    printf("KB = %ld\n",TB*1024*1024*1024);
    printf("Bytes = %ld\n",TB*1024*1024*1024*1024);
    printf("Bits = %ld\n",TB*1024*1024*1024*1024*8);

    return 0;
}