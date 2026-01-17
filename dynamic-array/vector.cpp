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
        // Both print the same output (at() is safer)
    }
}

int main()
{
    vector<int> v; // Declare an empty vector

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

    // Print vector before pop operation
    cout << "Printing all element: " << '\n';
    printVector(v);

    cout << endl
         << endl;

    /*
        Accessing elements examples
    */
    cout << "First element using v[0]: " << v[0] << endl;

    cout << "First element using front(): " << v.front() << endl;

    cout << "Last element using back(): " << v.back() << endl;

    cout << "Last element using size()-1 index: "
         << v[v.size() - 1] << endl;

    cout << endl;

    /*
        for-each (range-based for loop) example
        Cleaner way to traverse a vector
    */
    cout << "Printing using for-each loop: " << endl;
    for (int element : v) // can also use auto element:v --> will automaticaly select the type
    {
        cout << element << " ";
    }

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
