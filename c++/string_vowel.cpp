#include <iostream>
using namespace std;

void ToUpper_case(string input);

int main()
{
    system("cls");

    string input1, input2;

    cout << "Enter 1st String = ";
    getline(std::cin, input1);

    cout << "Enter 2nd String = ";
    getline(std::cin, input2);

    string str1 = " ";
    string str2 = " ";

    // for (int i = 0; i < input1.length(); i++)
    // {
    //     if (input1[i] >= 'a' && input1[i] <= 'z')
    //         str1 = str1 + char(input1[i] - 32);
    //     else
    //         str1 = str1 + input1[i];
    // }

    // for (int i = 0; i < input2.length(); i++)
    // {
    //     if (input2[i] >= 'a' && input2[i] <= 'z')
    //         str2 = str2 + char(input2[i] - 32);
    //     else
    //         str2 = str2 + input2[i];
    // }
    int m = 0;
    if (input1.length() == input2.length())
    {
        for (int i = 0; i < input2.length(); i++)
        {
            if (input1[i] >= 'a' && input1[i] <= 'z')
                str1 = str1 + char(input1[i] - 32);
            else
                str1 = str1 + input1[i];

            if (input2[i] >= 'a' && input2[i] <= 'z')
                str2 = str2 + char(input2[i] - 32);
            else
                str2 = str2 + input2[i];
        }

        for (int i = 0; i < str1.length(); i++)
        {
            m = 0;
            if (str1[i] == str2[i])
                m = 1;

            else
                break;
        }
    }

    if (m == 1)
        cout << "STRING MATCH" << endl;

    else
        cout << "STRING NOT MATCH" << endl;

    // ToUpper_case(input);

    return 0;
}

void ToUpper_case(string input)
{
    string str;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            str = str + char(input[i] - 32);

        else
            str = str + input[i];
    }

    cout << str;
}