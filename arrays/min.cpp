#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int minAns = INT_MAX;

    // int range --> -2^31 ---> 2^31-1
    int a[7] = {2, 3, 55, 1, 6, 5, 12};
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] < minAns)
        {
            minAns = a[i]; // instead of this condition use this min(a[i],minAns)
        }
    }

    cout << "Min ans is---> " << minAns << endl;
}