// ## #7. * *Find the Frequency of Elements in an Array * *

//         -**Problem ** : Write a program that counts the frequency of each element in an array.-
//     **Input ** : An array of integers.- **Output ** : The frequency of each element in the array.

#include <iostream>
using namespace std;

int max(int *ptr, int n)
{
    int max = *ptr;
    for (int i = 1; i < n; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
    }
    return max;
}

int main()
{
    int arr[100], n;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    cout << "Enter " << n << " elements (1 to " << 100 << "): ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    int maxi = max(arr, n);

    int frequency[maxi + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        (*(frequency + *(arr + i)))++;
    }

    for (int i = 1; i <= maxi; i++)
    {
        if (*(frequency + i) > 0)
        {
            cout << "Frequency of " << i << " is " << *(frequency + i) << endl;
        }
    }

    return 0;
}