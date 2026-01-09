#include <iostream>
using namespace std;

void printReverse(int arr[], int size)
{
    // initialization
    // while (condition)
    // {
    //     /* code logic */

    //     // updation
    // }

    // initialization
    int left = 0;
    int right = size - 1;

    while (left <= right) // condition
    {
        /* code */
        swap(arr[left], arr[right]); // logic

        left++;  // updation
        right--; // updation
    }

    // print array
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 4, 2, 5, 3};
    int size = 5;
    printReverse(arr, size);
}