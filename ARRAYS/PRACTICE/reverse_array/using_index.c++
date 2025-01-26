// ## #2. * *Reverse an Array * *

//         -**Problem ** : Write a program to reverse an array in place.-
//     **Input ** : An array of integers.- **Output ** : The array after being reversed.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], rev[100];
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[n - i - 1];
    }
    cout << "Original array: {";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}" << endl
         << "Reversed array: {";
    for (int i = 0; i < n; i++)
    {
        cout << rev[i] << " ";
    }
    cout << "}";
    return 0;
}