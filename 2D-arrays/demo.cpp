#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void colWisePrint(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        /* code */
        for (int j = 0; j < row; j++)
        {
            /* code */
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int row = 3;
    int col = 4;
    cout << "Row wise print: " << endl;
    printArray(arr, row, col);

    cout << endl;
    cout << "Column wise print: " << endl;
    colWisePrint(arr, row, col);

    return 0;
}