// Write a C++ program to print a binomial coefficient table.

//     Input :

//     10

//     Output :

//     Mx 0 1 2 3 4 5 6 7 8 9 10
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
// 0 1
// 1 1 1
// 2 1 2 1
// 3 1 3 3 1
// 4 1 4 6 4 1
// 5 1 5 10 10 5 1
// 6 1 6 15 20 15 6 1
// 7 1 7 21 35 35 21 7 1
// 8 1 8 28 56 70 56 28 8 1
// 9 1 9 36 84 126 126 84 36 9 1
// 10 1 10 45 120 210 252 210 120 45 10 1

// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

#include <iostream>
using namespace std;
#define m 10

int main()
{
    int k, w, b;
    cout << "Mx  ";
    for (k = 0; k <= 10; ++k)
    {
        cout << k << " ";
    }
    cout << endl
         << "-- -- -- -- -- -- -- -- -- --" << endl;
    k = 0;
    do
    {
        w = 0;
        b = 1;
        cout << k << "   ";
        while (w <= k)
        {
            if (k == 0 || w == 0)
            {
                cout << b << " ";
            }
            else
            {
                b = b * (k - w + 1) / w;
                cout << b << " ";
            }
            w = w + 1;
        }
        cout << endl;
        k = k + 1;
    } while (k <= m);
}