#include <iostream>
using namespace std;

int main()
{
    // Outer loop
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 5; j > i; j--)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
}