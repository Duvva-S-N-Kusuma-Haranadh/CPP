// ## #3. * *Find the Second Largest Element in an Array * *

//         -**Problem ** : Write a program to find the second largest element in an array without sorting the array.-
//     **Input ** : An array of integers.- **Output ** : The second largest integer from the array.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    int *ptr = arr;
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> *(ptr + i);
    }
    int max = *(ptr), max2 = *(ptr);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max2 = max;
            max = *(ptr + i);
        }
        if (*(ptr + i) > max2 && max != *(ptr + i))
        {
            max2 = *(ptr + i);
        }
    }

    cout << "Second Largest Element: " << max2;
    return 0;
}