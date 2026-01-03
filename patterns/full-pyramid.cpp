#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "Value of n : " << n << endl;

    // Pint rows
    for (int row = 0; row < n; row++)
    {
        /* code */
        // print space
        for (int col = 0; col < n - row - 1; col++)
        {
            /* code */
            cout << " ";
        }

        // print stars
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            cout << "* ";
        }

        cout << endl;
    }
}