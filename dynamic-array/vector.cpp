#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    int sizeOfVector = v.size();

    for (int i = 0; i < sizeOfVector; i++)
    {
        /* code */
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;

    // v.push_back(1);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(10);
    // v.push_back(25);

    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int data;
        cin >> data;
        v.push_back(data);
    }
    // I can also increate the inserts, which array can't perform
    // for (int i = 0; i < 6; i++)
    // {

    //     v.push_back(13);
    // }

    // Print before pop
    cout << "Printing all element: " << '\n';
    printVector(v);

    cout << endl
         << endl;
    // pop ---> pop/delete element from last index
    v.pop_back();

    cout << "Printing  with pop: " << endl;
    printVector(v);

    cout << endl
         << endl;
    // clear the vector array
    // v.clear();
    // cout << "vector is cleared: " << '\n';

    printVector(v);
}