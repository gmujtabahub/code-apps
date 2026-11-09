#include <iostream>
#include <conio.h>

#define SIZE 15

using namespace std;

void menu();
void insert_element(int arr[], int c, char *arr_[]);
void view_array(int arr[]);
void search_element(int arr[], int c);
void update_element(int arr[], int c);
void delete_element(int arr[], int c);

int a = 0;
int selection;

int main(int c, char *arr_[])
{
    system("cls");

    int arr[SIZE];

    for (int i = 1; i < c; i++)
        arr[i - 1] = atoi(arr_[i]);

    a = c - 1;

    menu();

    do
    {
        int i = 0;
        cout << "Enter Selection = ";

        do
        {
            if (i > 0)
                cout << "Invalid Selection" << endl;
            cin >> selection;
            i++;
        } while (selection > 6);

        if (selection == 1)
            insert_element(arr, c, arr_);

        else if (selection == 2)
            view_array(arr);

        else if (selection == 3)
            search_element(arr, c);

        else if (selection == 4)
            update_element(arr, c);

        else if (selection == 5)
            delete_element(arr, c);

    } while (selection != 6);

    return 0;
}

void menu()
{
    cout << "ARRAY MENU" << endl;
    cout << "====================================" << endl;
    cout << "[1] INSERT ELEMENT IN ARRAY" << endl;
    cout << "[2] VIEW ARRAY" << endl;
    cout << "[3] SEARCH ELEMENT IN ARRAY" << endl;
    cout << "[4] UPDATE ELEMENT IN ARRAY" << endl;
    cout << "[5] DELETE ELEMENT IN ARRAY" << endl;
    cout << "[6] EXIT" << endl;
    cout << "====================================" << endl;
}

void insert_element(int arr[], int c, char *arr_[])
{
    system("cls");

    view_array(arr);

    int element, location;

    cout << "Enter Element To Insert = ";

    cin >> element;

    cout << "Enter Location = ";

    cin >> location;

    if (a >= location && location > 0)
    {
        int t = location - 1;

        for (int i = a - 1; i >= location - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[t] = element;
        a++;

        cout << "ELEMENT IS SUCCESSFULLY INSERTED IN ARRAY" << endl;
    }

    else
        cout << "Location Not Found" << endl;

    cout << "PRESS ANY KEY TO CONTINUE";
    getch();

    system("cls");

    menu();
}

void view_array(int arr[])
{
    system("cls");

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    if (selection != 1 && selection != 3 && selection != 4 && selection != 5)
    {
        cout << "PRESS ANY KEY TO CONTINUE ";

        getch();
        system("cls");

        menu();
    }
}

void search_element(int arr[], int c)
{
    system("cls");

    view_array(arr);

    int element, i, f = 0;

    cout << "Enter Element To Search = ";

    cin >> element;

    for (i = 0; i < c; i++)
    {
        if (element == arr[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
        cout << element << " is at " << i + 1 << " number location" << endl;

    else
        cout << "Element Not Found" << endl;

    cout << "PRESS ANY KEY TO CONTINUE ";
    getch();

    system("cls");

    menu();
}

void update_element(int arr[], int c)
{
    system("cls");

    view_array(arr);

    int element, n_element, i;

    cout << "Enter Element To Update = ";

    cin >> element;

    for (i = 0; i < c; i++)
    {
        if (element == arr[i])
            break;
    }

    if (a >= i && element > 0)
    {
        cout << "Enter New Element = ";

        cin >> n_element;

        for (i = 0; i < c; i++)
        {
            if (element == arr[i])
            {
                arr[i] = n_element;
            }
        }
        cout << "ELEMENT IS SUCCESSFULLY UPDATED IN ARRAY" << endl;
    }

    else
        cout << "Element Not Found" << endl;

    cout << "PRESS ANY KEY TO CONTINUE ";
    getch();

    system("cls");

    menu();
}

void delete_element(int arr[], int c)
{
    system("cls");

    view_array(arr);

    int location;

    cout << "Enter Location = ";

    cin >> location;

    if (a >= location && location > 0)
    {
        for (int i = location - 1; i < c; i++)
        {
            arr[i] = arr[i + 1];
        }

        a--;

        cout << "ELEMENT IS SUCCESSFULLY DELETED IN ARRAY" << endl;
    }

    else
        cout << "Location Not Found" << endl;

    cout << "PRESS ANY KEY TO CONTINUE ";
    getch();

    system("cls");

    menu();
}