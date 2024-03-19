#include <iostream>
using namespace std;

int PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int number[15] = {1, 2, 3, 4, 5, 6, 7};

    PrintArray(number, 15);
}