#include <iostream>

using namespace std;

#define RECORD 12
#define ROW 5
#define COLUMN 15

int main()
{
    system("cls");

    char arr[RECORD][ROW][COLUMN] = {

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Hyderabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Sakkar"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Hyderabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Sakkar"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Hyderabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Sakkar"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Karachi"}}

    };

    string city;
    int f = 1;
    int message = 1;

    cout << "Enter City = ";
    cin >> city;

    system("cls");

    cout << "============================================================================" << endl;
    cout << "NAME" << "\t\t" << "ROLL NO" << "\t\t" << "CLASS" << "\t\t" << "GRADE" << "\t\t" << "CITY" << endl;
    cout << "============================================================================" << endl;

    for (int o = 0; o < RECORD; o++)
    {
        f = 0;
        for (int j = 0; j < ROW; j++)
        {            
            if (city.compare(arr[o][4])==0)
            {
                cout << arr[o][j] << "\t\t";

                f = 1;
                message = 0;
            }
        }

        if (f)
            cout << endl << "----------------------------------------------------------------------------" << endl;
    }

    if (message == 1)
    {
        system("cls");
        cout << "Record Not Found !" << endl;
    }

    return 0;
}