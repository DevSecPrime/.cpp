#include <iostream>
using namespace std;

int printUniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[9] = {10, 20, 11, 20, 11, 30, 50, 50, 30};

    int n = 9;

    int ans = printUniqueElement(arr, n);

    cout << ans << endl;

    return 0;
}