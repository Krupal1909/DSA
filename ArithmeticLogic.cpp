#include <iostream>
using namespace std;

int Arithmetic(int n)
{
    int ArithmeticOpp = (3 * n + 7);

    cout << ArithmeticOpp << endl;
}

int main()
{

    int n;
    cin >> n;

    Arithmetic(n);
}