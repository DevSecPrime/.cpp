#include <iostream>
using namespace std;

int main()
{
    // Reference variable--> when nick name is given to the variable is called as the reference variable;

    int n = 5;
    int &k = n; // K is nick name of n
    int &c = n; // c is nick name of n
    int &j = n; // j is nick name of n

    // Here, k, c, j all are the reference to n , they all would be printing the value of n----> means  k, c, j =

    cout
        << "n : " << n << endl;

    cout << "k : " << k << endl;
    cout << "c : " << c << endl;
    cout << "j : " << j << endl;
}
