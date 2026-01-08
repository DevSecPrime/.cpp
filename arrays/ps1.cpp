#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << "Enter the value at index " << i << " :";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << 2 * arr[i] << " ";
    }
}