#include <iostream>
using namespace std;

int main()

{

    // A
    // A B A
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        char ch;
        /* code */
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            ch = col + 1 + 'A' - 1;
            cout << ch << " ";
        }

        // reverse loop

        for (char alphabet = ch; alphabet > 'A';)
        {
            alphabet--;
            /* code */
            cout
                << alphabet << " ";
        }

        cout << endl;
    }
}