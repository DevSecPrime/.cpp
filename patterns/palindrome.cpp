#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int space = 0; space < n - row; space++)
        {
            cout << " ";
        }

        // left numbers
        for (int col = 1; col <= row; col++)
        {

            cout << col;
        }

        // right numbers
        for (int col = row - 1; col >= 1; col--)
        {

            cout << col;
        }

        cout << endl;
    }
    return 0;
}
