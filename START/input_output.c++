// Write a C++ program to compute the perimeter and area of a rectangle with the given length and breadth.

//     Input :

//     7 5

//         [where length = 7, breadth = 5]

//     Output :

//     Perimeter = 24;Area = 35

#include <iostream>
using namespace std;

int main()
{
    int l, b, area, perimeter;
    cin >> l;
    cin >> b;
    area = l * b;
    perimeter = 2 * l + 2 * b;
    cout << "Perimeter = " << perimeter << "; Area = " << area;
}