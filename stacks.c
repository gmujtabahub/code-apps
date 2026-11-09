#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void push(int a);
void pop();
void display(int b);

int STACK[SIZE];
int TOP = 0;

int main()
{
    system("cls");

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(4);
    push(4);

    display(TOP);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    push(7);

    display(TOP);

    return 0;
}

void push(int a)
{
    if (TOP < SIZE)
    {
        STACK[TOP] = a;
        TOP++;
    }
    else
        printf("Stack Overflow\n");
}

void pop()
{
    if (TOP > 0)
    {
        TOP--;
        STACK[TOP] = 0;
    }
    else
        printf("Stack Underflow\n");
}

void display(int b)
{
    for (int i = TOP - 1; i >= 0; i--)
    {
        printf("%d ", STACK[i]);
    }
}