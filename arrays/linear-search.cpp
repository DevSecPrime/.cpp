#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 10, 12};

    int n = 5;
    int target = 10;
    bool targetFound = false;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == target)
        {
            targetFound = true;
            break;
        }
    }

    if (targetFound)
    {
        cout << "Target found" << endl;
    }
}