#include <iostream>

#define SIZE 10

using namespace std;

void push(int a);
void pop();
void display();

int INDEX = 0;
int STACK[SIZE];

int main()
{
    system("cls");

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    push(110);
    push(10);

    display();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    display();

    return 0;
}

void push(int a)
{
    if (INDEX < SIZE)
    {
        STACK[INDEX] = a;
        INDEX++;
    }

    else
        cout << "STACK OVERFLOW" << endl;
}

void pop()
{
    if (INDEX > 0)
    {
        INDEX--;
        STACK[INDEX] = 0;
    }

    else
        cout << "STACK UNDERFLOW" << endl;
}

void display()
{
    for (int i = 0; i < INDEX; i++)
    {
        cout << STACK[i] << endl;
    }
}