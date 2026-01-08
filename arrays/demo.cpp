#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << arr[0] << endl; // Indexing in array
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[10] << endl; // garbage value

    return 0;
}