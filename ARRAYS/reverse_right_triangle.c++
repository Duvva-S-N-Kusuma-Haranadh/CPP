// Write a user defined function named cross_upper_triangle() which takes a two dimensional array A, with size N rows and N columns as argument and prints the triangle of the array.

// Eg :

//     *****
//     ****
//     ***
//     **
//     *

#include <iostream>
using namespace std;

void cross_upper_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " * ";
        }
        cout << endl
             << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cross_upper_triangle(n);
    return 0;
}