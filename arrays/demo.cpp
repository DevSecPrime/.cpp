#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << arr[0] << endl; // Indexing in array
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[10] << endl; // garbage value

    // Printing an array
    int a[50] = {1, 2, 3, 4, 5};

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " " << endl; // Here, i is working as an index
    }

    return 0;
}