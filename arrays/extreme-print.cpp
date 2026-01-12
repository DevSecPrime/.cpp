#include <iostream>
using namespace std;

void printExtremArray(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        /* code */
        cout << arr[left] << " ";
        cout << arr[right] << " ";
        left++;
        right--;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    printExtremArray(arr, size);
    return 0;
}