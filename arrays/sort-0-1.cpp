#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int n = 9;

    // Initialization
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        /* code */
        // logic
        if (arr[left] == 1)
        {
            swap(arr[left], arr[right]);
        }
        else
        {
            left++;
        }

        if (arr[right] == 0)
        {
            swap(arr[right], arr[left]);
        }
        else
        {
            right--;
        }

        // // Updation
        // left++;
        // right--;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}