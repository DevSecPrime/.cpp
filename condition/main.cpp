#include <iostream>
using namespace std;

int main()
{
    int balance;
    cout << "Enter your balance: " << endl;
    cin >> balance;
    cout << "Balance: " << balance << endl;
    if (balance >= 10)
    {
        cout << "Hi! Aryan" << '\n';
    }
    else
    {
        cout << "Out side of condition!!!";
    }
}