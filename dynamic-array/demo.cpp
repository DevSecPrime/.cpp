#include <iostream>
using namespace std;

void printDynamicArray(int arr[], int n)
{
    cout << "Output: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the how much elements you want inside array: " << endl;
    cin >> n;

    //
    cout << "Enter " << n << " elements : " << '\n';
    int *arr = new int[n]; // initialise the value of n --> may use int arr[n]; but not valid because its ont supported by the compiler , Each element would be 0, or garbage value
    for (int i = 0; i < n; i++)
    {
        /* code */
        int data;
        cin >> data;
        arr[i] = data;
    }

    printDynamicArray(arr, n);
}