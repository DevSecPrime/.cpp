#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int row = 0; row < 5; row++)
    {
        /* code */
        for (int col = 0; col < row + 1; col++)
        {
            /* code */
            cout << "* ";
        }

        cout << endl;
    }
}