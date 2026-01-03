#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the rows you want: " << endl;
    cin >> num;

    int n = num / 2;

    // Upper part
    for (int row = 0; row < n; row++)
    {
        // Inverted pyramid 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // Pyramid space
        for (int col = 0; col < 2 * row + 1; col++)
        {
            /* code */
            cout << " ";
        }
        // Inverted pyramid - left face side
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part

    for (int row = 0; row < n; row++)
    {
        // Inverted pyramid 1
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        // Pyramid space
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            /* code */
            cout << " ";
        }
        // Inverted pyramid - left face side
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
