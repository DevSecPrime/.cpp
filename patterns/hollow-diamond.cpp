#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of n: " << endl;
    cin >> num;

    int n = num / 2;

    // Upper Hollow pyramid
    for (int i = 0; i < n; i++)
    {
        // print space
        for (int j = 0; j < n - i - 1; j++)
        {
            /* code */
            cout << " ";
        }

        // print *

        for (int j = 0; j < i + 1; j++)
        {
            /* code */
            if (j == 0 || j == i + 1 - 1)
            {
                /* code */
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    // Inverse pyarmid
    for (int i = 0; i < n; i++)
    {
        /* code */
        // Print space
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << " ";
        }

        // Print *
        for (int j = 0; j < n - i; j++)
        {
            /* code */
            if (j == 0 || j == n - i - 1)
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