// ## #3. * *Find the Second Largest Element in an Array * *

//         -**Problem ** : Write a program to find the second largest element in an array without sorting the array.-
//     **Input ** : An array of integers.- **Output ** : The second largest integer from the array.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], index;
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    int max = arr[0], max2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        if (arr[i] > max2 && max != arr[i])
        {
            max2 = arr[i];
        }
    }

    cout << "Second Largest Element: " << max2;
    return 0;
}