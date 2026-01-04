#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Upper part
    for (int row = 0; row < n; row++)
    {
        // left side
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            cout << "*";
        }

        // Space print
        for (int space = 0; space < 2 * (n - row) - 1; space++)
        {
            /* code */
            cout << " ";
        }

        // right side star
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (int row = 0; row < n; row++)
    {
        /* code */
        // Upper part
        for (int col = 0; col < n - row; col++)
        {
            /* code */
            cout << "*";
        }

        for (int space = 0; space < 2 * row + 1; space++)
        {
            /* code */
            cout << " ";
        }

        for (int col = 0; col < n - row; col++)
        {
            /* code */
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}