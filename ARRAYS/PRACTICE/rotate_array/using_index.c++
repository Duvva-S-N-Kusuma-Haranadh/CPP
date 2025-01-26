// ## #9. * *Rotate an Array * *

//         -**Problem ** : Write a program to rotate an array to the right by `k` positions.-
//     **Input ** : An array of integers and a value `k`.- **Output ** : The array after rotating it by `k` positions.

#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], n, k, kArr[100];
    cout << "Size of an Array:";
    cin >> n;
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "K: ";
    cin >> k;

    for (int i = k; i < n; i++)
    {
        kArr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        kArr[i + k - 1] = arr[i];
    }
    cout << "After shifted: ";
    display(kArr, n);
}