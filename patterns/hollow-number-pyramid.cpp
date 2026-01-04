#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        /* code */
        for (int col = 0; col < row + 1; col++)
        {
            /* code */

            if (row == 0 || row == n - 1)
            {
                /* code */
                cout << col + 1;
            }
            else
            {
                if (col == 0 || col == row + 1 - 1)
                {
                    /* code */
                    cout << col + 1;
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