#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter the side: " << endl;
    cin >> side;

    cout << "Side:" << side << '\n';

    if (side == 3)
    {
        cout << "Triangle" << endl;
    }
    else if (side == 4)
    {
        /* code */
        cout << "Rectangle" << endl;
    }
    else
    {
        cout << "Invalid side" << endl;
    }
}
