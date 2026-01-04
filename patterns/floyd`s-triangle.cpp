#include <iostream>
using namespace std;

int main()
{
    /* code */
    int value = 1;
    for (int row = 0; row < 6; row++)
    {
        /* code */
        for (int col = 0; col < row; col++)
        {

            cout << value++ << " ";
        }

        cout << endl;
    }
}