#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;

    cout << "Enter the value of n1 and n2: " << endl;
    cin >> n1 >> n2;

    int op;
    cout << "Enter which operation you wanna perform: " << endl;
    cin >> op;

    int ans = 0;
    switch (op)
    {
    case 0:
        ans = n1 + n2;
        break;
    case 1:
        ans = n1 - n2;
        break;
    case 3:
        ans = n1 * n2;
        break;
    case 4:
        ans = n1 / n2;
        break;
    default:
        cout << "Invalid number" << endl;
        return 0;
    }

    cout << "Ans is : " << ans << endl;

    return 0;
}