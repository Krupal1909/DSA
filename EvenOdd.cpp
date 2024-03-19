#include <iostream>
using namespace std;

bool EvenOdd(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cin >> n;

    if (EvenOdd(n))
    {
        cout << "number is odd";
    }
    else
    {
        cout << "Number is Even";
    }
}