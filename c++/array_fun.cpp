#include <iostream>
// #include <algorithm>

using namespace std;

bool greater_(int a, int b)
{
    return a > b;
}

int main(void)
{
    system("cls");

    int arr[] = {111, 13, 2, 13};
    int n = 11;

    // sort(arr, arr + n);
    // sort(arr, arr + n, greater<int>());

    // sort(arr, arr + n, greater_);
    // sort(arr, arr + n, [](int a, int b)
    //         {
    //             return a > b;
    //         }
    //     );

    // reverse(arr,arr+n);

    // cout<< count(arr, arr + 4, 13);

    // int *p = find(arr, arr + n, 13);

    // if (p != arr + n)
    //     cout << "Index: " << p - arr;
    // else
    //     cout << "Element not found";

    // cout << sizeof(arr) / sizeof(arr[0]);

    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }

    return 0;
}
