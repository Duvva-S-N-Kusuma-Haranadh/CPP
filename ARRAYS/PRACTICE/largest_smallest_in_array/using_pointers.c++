// ### 1. **Find the Largest and Smallest Element in an Array**

// - **Problem **:Write a program to find the largest and smallest elements in a given array of integers.- **Input **:An array of integers.- **Output **:The largest and smallest integer from the array.

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
    int min = *(ptr + 0), max = *(ptr + 0);
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    cout << "MAX element: " << max << endl;
    cout << "MIN element: " << min;
    return 0;
}