#include <stdio.h>
#include <stdlib.h>

void add(void);



int a;
int b;
int x;



void main(void)

{

    system("clear");

    printf("Enter Two Numbers = ");
    scanf("%d%d", &a, &b);

    add();

    printf("Add = %d\n", x);
}


void add(void)

{

    x = a + b;
}