#include <iostream>
using namespace std;

void shiftArrayRightByOne(int arr[], int n)
{

    int temp = arr[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

void shiftLeftByOne(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    // function call
    shiftArrayRightByOne(arr, n); /// shift right by one

    // shift left by one
    // shiftLeftByOne(arr, n);

    // Print ans
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}