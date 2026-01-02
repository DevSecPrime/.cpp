#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    cout << "Number is : " << num << endl;

    if (!num)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        if (num % 2 == 0)
        {
            cout << "Even!" << endl;
        }
        else
        {
            cout << "Odd!" << endl;
        }
    }
}