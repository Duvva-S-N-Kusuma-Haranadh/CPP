// Write a program in C++ to sort an array using Pointer.

//     Input : First element will be the total no.of elements to store in the array and the following numbers will the elements of the array that needs to be sorted.

//     Output : Sorted array

//      Test Data :

//      5 25 45 89 15 82

//      Expected Output :

//      15 25 49 82 89

#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}