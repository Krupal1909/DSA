#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    switch (num)
    {
        {
        case 1:
            cout << "Number of 1";
            break;
        case 2:
            cout << "Number of 2";
            break;
        default:
            cout << "Number of default";
            break;
        }
    }
}