#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // print rows
    for (int row = 0; row < n; row++)
    {
        /* code */
        for (int col = 0; col < n - row - 1; col++)
        {
            /* code */
            cout << " ";
        }

        // print star
        for (int col = 0; col < row + 1; col++)
        {

            // /* code */
            // print star for first col and last col
            if (col == 0 || col == row + 1 - 1) // can also write row 
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}