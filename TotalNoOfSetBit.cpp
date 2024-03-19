#include <iostream>
using namespace std;

int CountSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int SumOfSetBits(int a, int b)
{
    return CountSetBits(a) + CountSetBits(b);
}

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int sum = SumOfSetBits(a, b);
    cout << "Sum of set bits in a and b: " << sum << endl;

    return 0;
}
