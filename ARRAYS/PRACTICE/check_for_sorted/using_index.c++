// ## #6. * *Check if an Array is Sorted * *

//             -**Problem ** : Write a function to check if a given array is sorted in ascending order.-
//         **Input ** : An array of integers.- **Output ** : A message indicating whether the array is sorted or
//     not .

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];
    bool flag = true;
    cout << "Size of the array to be allocated: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = false;
            }
        }
    }
    if (flag)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
    return 0;
}
