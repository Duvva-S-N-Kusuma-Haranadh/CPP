// ## #4. * *Find the Sum of All Elements in an Array * *

//         -**Problem ** : Write a program that takes an array of integers and outputs the sum of all its elements.-
//     **Input ** : An array of integers.- **Output ** : Sum of the elements in the array.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], sum = 0;
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the arrays elements: " << sum;
    return 0;
}
