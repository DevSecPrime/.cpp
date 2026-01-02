#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // Outer loop
    for (int row = 0; row < n; row++)
    {
        /* code */
        // Inner loop
        for (int col = 0; col < n - row; col++)
        {
            /* code */
            cout << col + 1 << " ";
        }

        cout << endl;
    }
}