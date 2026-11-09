#include <iostream>

using namespace std;

void show()
{
    cout << "hello world" << endl;
}

int task(int a, int b, void (*f)(void))
{
    f();
    return a - b;
}

int main()
{
    system("cls");

    // funtional pointer
    //  int (*f)(int, int, void (*)(void)) = task;
    // cout << f(10, 20, show);

    // null pointer
    //  int *ptr = NULL;

    // wild pointer
    // int *ptr;

    // pointer to constant
    //  int x = 10;
    //  int z = 20;
    //  const int *ptr = &x;
    //  *ptr = 20;

    // constant to pointer
    //  int x = 10;
    //  int z = 20;
    //  int const *ptr = &x;
    //  ptr = &z;

    // pointer to pointer
    // int x = 10;
    // int *ptr = &x;
    // int **ptr2 = &ptr;

    // dangling pointer
    // int *ptr = (int *)(malloc(sizeof(int)));
    // *ptr = 10;
    // delete ptr;

    // void pointer       0
    int a = 10;
    void *s = &a;

    float f = 2.1f;
    s = &f;
    cout << *(float *)s;

    return 0;
}