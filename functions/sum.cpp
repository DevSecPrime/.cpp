#include <iostream>
using namespace std;

int sum(int n1, int n2, int n3)
{
    int sum = n1 + n2 + n3;
    return sum;
}
int main()
{
    int n1, n2, n3;
    cout << "Enter the value of n1: " << endl;
    cin >> n1;

    cout << "Enter the value of n2: " << endl;
    cin >> n2;

    cout << "Enter the value of n3: " << endl;
    cin >> n3;

    cout << sum(n1, n2, n3) << endl;
}