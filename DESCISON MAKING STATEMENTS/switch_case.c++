// Input Format

// A single integer denoting n.

// Constraints : 1 <= n <= 9

// Output Format

// If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print "Greater than 9" instead.

// Sample Input : 5

// Sample Output : five

// Explanation : five is the English word for the number 5.

// Sample Input : 44

// Sample Output : Greater than 9

// Explanation : n = 44 is greater than 9, so we print Greater than 9.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (1 <= n && n <= 9)
    {
        switch (n)
        {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        case 0:
            cout << "Zero";
            break;
        }
    }

    else
    {
        cout << "Greater than 9";
    }
}