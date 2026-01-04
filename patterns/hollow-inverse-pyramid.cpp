#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    // Outer loop

    cin >> n;

    for (int row = 0; row < n; row++)
    {
        /* code */
        for (int col = 0; col < n - row; col++)
        {
            /* code */
            // cout << "* ";

            if (row == 0 || row == n - 1)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == n - row - 1)
                {
                    /* code */
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}