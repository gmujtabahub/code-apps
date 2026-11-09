#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()

{

    system("cls");

    int arr[SIZE] = {0,1,2,3,4};
    int arr2[SIZE];

    for(int i = 0; i < SIZE;i++)
    {
        arr2[SIZE] = arr[SIZE];
    }

    for(int a = 0;a < SIZE;a++)
    {
        if(arr[a] == 0)
        continue;
        printf("%d ",arr[a]);
    }
}