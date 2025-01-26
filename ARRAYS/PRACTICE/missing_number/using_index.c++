#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int checkMiss(int check[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], n;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    cout << "Enter " << n - 1 << " elements (1 to " << n << ", with one missing number): ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int check[n] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        check[arr[i] - 1]++;
    }

    int miss = checkMiss(check, n);
    cout << "The missing number is: " << miss << endl;

    return 0;
}
