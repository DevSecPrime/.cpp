#include <iostream>
using namespace std;

void printPairSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << "pair: " << arr[i] << "," << arr[j] << " --->" << arr[i] + arr[j] << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30};
    int n = 3;
    printPairSum(arr, n);

    return 0;
}