#include <iostream>
using namespace std;

void display(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int checkMiss(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == 0)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], n;
    int *ptr = arr;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    cout << "Enter " << n - 1 << " elements (1 to " << n << ", with one missing number): ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> *(arr + i);
    }

    int check[n] = {0};
    int *checkPtr = check;

    for (int i = 0; i < n - 1; i++)
    {
        (*(checkPtr + *(arr + i) - 1))++;
    }

    int miss = checkMiss(checkPtr, n);
    cout << "The missing number is: " << miss << endl;

    return 0;
}
