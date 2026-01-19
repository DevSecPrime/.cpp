#include <iostream>
using namespace std;

void printRowSum(int arr[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        /* code */
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            /* code */
            sum = sum + arr[i][j];
        }

        cout << sum << endl;
    }
};

void printColumnWiseSum(int arr[][5], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        /* code */
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            /* code */
            sum = sum + arr[j][i];
        }

        cout << sum << endl;
    }
}

int main()
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    int row = 3;
    int col = 5;

    cout << "Print row wise sum: " << endl;
    printRowSum(arr, row, col);

    cout << endl;
    cout << "Print column wise sum: " << endl;
    printColumnWiseSum(arr, row, col);
}