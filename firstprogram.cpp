#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter your data" << "\n";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is Uppercase" << " ";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is Lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "this is numerical";
    }
    else
    {
        cout << "Nothing matched";
    }
}