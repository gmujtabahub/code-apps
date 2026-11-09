#include <iostream>

using namespace std;

void bits_to_TB();
void TB_to_bits();

int main()
{
    system("cls");

    bits_to_TB();
    TB_to_bits();

    return 0;
}

void bits_to_TB()
{
    size_t bits;

    cout << "Enter Bits = ";

    cin >> bits;

    size_t bytes = bits * 1024;

    cout << "Bytes = " << bytes << endl;

    size_t KB = bytes * 1024;

    cout << "KB = " << KB << endl;

    size_t MB = KB * 1024;

    cout << "MB = " << MB << endl;

    size_t GB = MB * 1024;

    cout << "GB = " << GB << endl;

    size_t TB = GB * 1024;

    cout << "TB = " << TB << endl;
}

void TB_to_bits()
{
    size_t TB;

    cout << "Enter TB = ";

    cin >> TB;

    size_t GB = TB / 1024;

    cout << "GB = " << GB << endl;

    size_t MB = GB / 1024;

    cout << "MB = " << MB << endl;

    size_t KB = GB / 1024;

    cout << "KB = " << KB << endl;

    size_t bytes = KB / 1024;

    cout << "Bytes = " << bytes << endl;

    size_t bits = bytes / 1024;

    cout << "Bits = " << bits << endl;
}