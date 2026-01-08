#include <iostream>
using namespace std;

int main()
{
    cout << "Sum of the array: " << endl;
    int sa[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> sa[i];
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum = sum + sa[i];
    }

    cout << sum << endl;

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