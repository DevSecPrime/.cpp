#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 3, 1, 1};
    int n = 5;
    int numberOf0s = 0;
    int numberOf1s = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 0)
            numberOf0s++;
        else if (arr[i] == 1)
            numberOf1s++;
    }

    cout << "Number of 1`s --> " << numberOf1s << endl;
    cout << "Number of 0`s --> " << numberOf0s << endl;
}