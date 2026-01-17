#include <iostream>
#include <vector>
using namespace std;

/*
    Function to print all elements of the vector
*/
void printVector(vector<int> v)
{
    int sizeOfVector = v.size(); // Get total number of elements

    // Loop through vector and print each element
    for (int i = 0; i < sizeOfVector; i++)
    {
        cout << v[i] << " ";
        // OR
        // cout << v.at(i) << " ";
        // Both print the same output
    }
}

int main()
{
    vector<int> v; // Declare an empty vector

    /*
        Uncomment below lines to insert static values
        v.push_back(1);
        v.push_back(5);
        v.push_back(7);
        v.push_back(10);
        v.push_back(25);
    */

    int n;
    cout << "Enter value of n: " << endl;
    cin >> n;

    /*
        Take input from user
        push_back() dynamically increases vector size
    */
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }

    /*
        Vector allows dynamic insertion
        This is not possible with normal arrays
    */
    // for (int i = 0; i < 6; i++)
    // {
    //     v.push_back(13);
    // }

    // Print vector before pop operation
    cout << "Printing all element: " << '\n';
    printVector(v);

    cout << endl
         << endl;

    /*
        pop_back() removes the last element from vector
    */
    v.pop_back();

    // Print vector after pop operation
    cout << "Printing with pop: " << endl;
    printVector(v);

    cout << endl
         << endl;

    /*
        clear() removes all elements from vector
        v.clear();
        cout << "vector is cleared: " << '\n';
        printVector(v);
    */

    return 0;
}
