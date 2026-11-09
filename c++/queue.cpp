#include <iostream>
using namespace std;

#define SIZE 10

void dequeue();
void enqueue(int value);
void display();

int rear = -1;
int front = -1;
int QUEUE[SIZE];

int main()
{
    system("cls");

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    enqueue(100);
    // enqueue(10);
    // enqueue(20);
    // enqueue(30);
    // enqueue(40);
    // enqueue(50);

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    // dequeue();
    // dequeue();
    // dequeue();
    // dequeue();
    // dequeue();
    // dequeue();

    enqueue(10);
    enqueue(20);

    display();

    return 0;
}

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "QUEUE IS FULL" << endl;
    }

    else
    {
        if (front == -1)
            front = 0;

        rear++;
        QUEUE[rear] = value;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "QUEUE IS EMPTY" << endl;
    }

    else
    {
        front++;

        if (front > rear)
            front = rear = -1;
    }
}

void display()
{    
    if (front == -1)
    {
        cout << "QUEUE IS EMPTY" << endl;
    }

    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << QUEUE[i] << endl;
        }
    }
}