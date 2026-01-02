#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int row = 0; row < 5; row++)
    {
        /* code */
        // Inner loop
        for (int col = 0; col < 5; col++)
        {
            /* code */
            // print * if 0th row and last row
            if (row == 0 || row == 4)
            {
                cout << " * ";
            }
            else
            {
                // Print * if 0 th or last column
                if (col == 0 || col == 4)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
        }

        cout << endl;
    }
}
