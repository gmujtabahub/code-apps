#include <iostream>
#include <conio.h>

#define SIZE 15

int element_c = 0;
int temp_arr[SIZE];

using namespace std;

int Menu(int arr[]);
void insert_element(int arr[]);
void view_array(int arr[]);
void small(int arr[]);
void second_small(int arr[]);
void large(int arr[]);
void second_large(int arr[]);

void search_element(int arr[]);
void update_element(int arr[]);
void delete_element(int arr[]);
void sort_array(int arr[]);
void reset_array(int arr[], int temp_arr[]);
void count_duplicate_array(int arr[]);
void zero_moves_to_end(int arr[]);
void reverse_array(int arr[]);

int main(int count, char *Array[])
{
    int array[SIZE];

    for (int i = 1; i < count; i++)
        array[i - 1] = atoi(Array[i]);

    element_c = count - 1;

    for (int j = 0; j < element_c; j++)
    {
        temp_arr[j] = array[j];
    }

    do
    {
        system("cls");

        if (Menu(array))
            break;

        cout << "Press any key to continue!" << endl;
        getch();

    } while (1);

    return 0;
}

int Menu(int arr[])
{
    int selection;

    cout << "ARRAY MENU" << endl;
    cout << "====================================" << endl;
    cout << "[1] INSERT ELEMENT IN ARRAY" << endl;
    cout << "[2] VIEW ARRAY" << endl;
    cout << "[3] SEARCH ELEMENT IN ARRAY" << endl;
    cout << "[4] UPDATE ELEMENT IN ARRAY" << endl;
    cout << "[5] DELETE ELEMENT IN ARRAY" << endl;
    cout << "[6] SORT ARRAY" << endl;
    cout << "[7] RESET ARRAY" << endl;
    cout << "[8] COUNT DUPLICATE ARRAY" << endl;
    cout << "[9] ZERO MOVES TO END" << endl;
    cout << "[10] REVERSE ARRAY" << endl;
    cout << "[11] EXIT" << endl;
    cout << "====================================" << endl;

    cout << "Enter Selection = ";
    cin >> selection;
    system("cls");

    if (selection == 1)
        insert_element(arr);
    else if (selection == 2)
        view_array(arr);
    else if (selection == 3)
        search_element(arr);
    else if (selection == 4)
        update_element(arr);
    else if (selection == 5)
        delete_element(arr);
    else if (selection == 6)
        sort_array(arr);
    else if (selection == 7)
        reset_array(arr, temp_arr);
    else if (selection == 8)
        count_duplicate_array(arr);
    else if (selection == 9)
        zero_moves_to_end(arr);
    else if (selection == 10)
        reverse_array(arr);
    else if (selection == 11)
        return 1;
    else
    {
        cout << "Invalid condition! " << endl;
        return 0;
    }
    return 0;
}

void insert_element(int arr[])
{
    view_array(arr);

    int element, location;

    cout << "Enter Element To Insert = ";
    cin >> element; // 222

    cout << "Enter Location = ";
    cin >> location; // 1

    // if (element_c >= location && location > 0)//4
    if (location > 0 && location <= element_c)
    {
        int t = location - 1; // 0

        for (int i = element_c - 1; i >= t; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[t] = element;
        element_c++;

        cout << "ELEMENT IS SUCCESSFULLY INSERTED IN ARRAY" << endl;
    }

    else
        cout << "Location Not Found" << endl;
}

void view_array(int arr[])
{
    for (int i = 0; i < element_c; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    small(arr);
    second_small(arr);
    large(arr);
    second_large(arr);
}

void small(int arr[])
{
    int small = arr[0];

    for (int i = 0; i < element_c; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    cout << "Small = " << small << endl;
}

void second_small(int arr[])
{
    int small = arr[0];
    int second_small = 9999;

    for (int i = 0; i < element_c; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < second_small)
            second_small = arr[i];
    }

    cout << "Second Small = " << second_small << endl;
}

void large(int arr[])
{
    int large = arr[0];

    for (int i = 0; i < element_c; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    cout << "Large = " << large << endl;
}

void second_large(int arr[])
{
    int large = arr[0];
    int second_large = -9999;

    for (int i = 0; i < element_c; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] < large && arr[i] > second_large)
            second_large = arr[i];
    }

    cout << "Second Large = " << second_large << endl;
}

void search_element(int arr[])
{
    view_array(arr);

    int element, i, found = 0;

    cout << "Enter Element To Search = ";
    cin >> element;

    for (i = 0; i < element_c; i++)
    {
        if (element == arr[i])
        {
            found = 1;
            break;
        }
    }

    if (found)
        cout << element << " is at " << i + 1 << " number location" << endl;
    else
        cout << "Element Not Found" << endl;
}

void update_element(int arr[])
{
    view_array(arr);

    int element, n_element, i, f = 0;

    cout << "Enter Element To Update = ";
    cin >> element;

    for (i = 0; i < element_c; i++)
    {
        if (element == arr[i])
        {
            f = 1;
            break;
        }
    }

    // if (element >= i && element > 0 && f == 1)

    if (f == 1)
    {
        cout << "Enter New Element = ";

        cin >> n_element;

        for (i = 0; i < element_c; i++)
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
}

void delete_element(int arr[])
{
    view_array(arr);

    int location;

    cout << "Enter Location = ";
    cin >> location;

    if (element_c >= location && location > 0)
    {
        for (int i = location - 1; i < element_c; i++)
        {
            arr[i] = arr[i + 1];
        }

        element_c--;

        cout << "ELEMENT IS SUCCESSFULLY DELETED IN ARRAY" << endl;
    }

    else
        cout << "Location Not Found" << endl;
}

void sort_array(int arr[])
{
    for (int i = 0; i < element_c; i++)
    {
        for (int j = 0; j < element_c; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array is Sorted Successfully" << endl;
}

void reset_array(int arr[], int temp_arr[])
{
    for (int i = 0; i < element_c; i++)
    {
        arr[i] = temp_arr[i];
    }

    cout << "Array is Successfully Resets" << endl;
}

void count_duplicate_array(int arr[])
{
    int s, c = 0, a = 0, f = 1;

    view_array(arr);

    for (int i = 0; i < element_c; i++)
    {
        a = 0;
        f = 1;
        s = arr[i];
        while (a != i)
        {
            if (arr[a] == arr[i])
            {
                f = 0;
                break;
            }

            a++;
        }

        if (f == 1)
        {
            for (int j = 0; j < element_c; j++)
            {
                if (s == arr[j])
                    c++;
            }
            if (c != 1)
            {
                cout << arr[i] << " = " << c << endl;
            }
        }
        c = 0;
    }
}

void zero_moves_to_end(int arr[])
{
    int s;

    for (int j = 0; j < element_c; j++)
    {
        for (int i = 0; i < element_c - 1; i++)
        {
            if (arr[i] == 0)
            {
                s = arr[i + 1];
                arr[i + 1] = 0;
                arr[i] = s;
            }
        }
    }

    cout << "Zero Successfully Moves To End" << endl;
}

void reverse_array(int arr[])
{
    int s;

    for (int i = 0; i < element_c / 2; i++)
    {
        s = arr[element_c - 1 - i];
        arr[element_c - 1 - i] = arr[i];
        arr[i] = s;
    }

    cout << "Array Is Successfully Revesred" << endl;
}