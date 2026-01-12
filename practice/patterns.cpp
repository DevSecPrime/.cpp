#include <iostream>
using namespace std;

int main()
{
    // Basic Star Patterns
    // *
    // **
    // ***
    // ****
    // *****

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         /* code */
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Inverse star
    // *****
    // ****
    // ***
    // **
    // *

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         /* code */
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Right & Left Aligned Patterns

    //     *
    //    **
    //   ***
    //  ****
    // *****

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < n - row; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }

    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // *****
    //  ****
    //   ***
    //    **
    //     *

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < row; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }

    //     for (int col = 0; col < n - row; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Pyramid & Inverted Pyramid
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < n - row - 1; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < row; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }

    //     for (int col = 0; col < 2 * (n - row) - 1; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Diamond Pattern
    //     *
    //    ***
    //   *****
    //  *******
    //   *****
    //    ***
    //     *

    // int n = 4;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < n - row - 1; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row < n; row++)
    // {
    //     /* code */
    //     for (int space = 0; space < row; space++)
    //     {
    //         /* code */
    //         cout << " ";
    //     }

    //     for (int col = 0; col < 2 * (n - row) - 1; col++)
    //     {
    //         /* code */
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Hollow Star Patterns (Very Important)
    // *****
    // *   *
    // *   *
    // *   *
    // *****

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int col = 0; col < n; col++)
    //     {
    //         /* code */
    //         if (row == 0 || row == n - 1)

    //         {
    //             /* code */
    //             cout << "*";
    //         }
    //         else
    //         {
    //             if (col == 0 || col == n - 1)
    //             {
    //                 /* code */
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    //     *
    //    * *
    //   *   *
    //  *     *
    // *********
    // int n = 5;

    // for (int row = 0; row < n; row++)
    // {
    //     // spaces
    //     for (int space = 0; space < n - row - 1; space++)
    //     {
    //         cout << " ";
    //     }

    //     // stars and spaces
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    // // bottom row
    // for (int i = 0; i < 2 * n - 1; i++)
    //     cout << "*";

    //     Number Increasing Patterns
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     /* code */
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         /* code */
    //         cout << col + 1;
    //     }

    //     cout << endl;
    // }

    // 1
    // 23
    // 456
    // 78910

    int n = 5;
    int floydNumber = 1;

    // i = row
    // j = column
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < i + 1; j++)
        {
            /* code */
            cout << floydNumber++ << " ";
        }
        cout << endl;
    }
}