// ## #5. * *Sort an Array Using Bubble Sort * *

//         -**Problem ** : Implement the bubble sort algorithm to sort an array in ascending order.-
//     **Input ** : An array of integers.- **Output ** : The sorted array.

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << endl
         << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
