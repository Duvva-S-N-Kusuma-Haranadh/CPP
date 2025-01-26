// ### 1. **Find the Largest and Smallest Element in an Array**

// - **Problem **:Write a program to find the largest and smallest elements in a given array of integers.- **Input **:An array of integers.- **Output **:The largest and smallest integer from the array.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "MAX element: " << max << endl;
    cout << "MIN element: " << min;
    return 0;
}