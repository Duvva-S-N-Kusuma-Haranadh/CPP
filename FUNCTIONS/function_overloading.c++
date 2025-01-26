// Write a C++ program that will implement the following functionalities :

//     void
//     Add(int, int);

// To Add the given 2 integer numbers and print the sum.

//     void
//     Add(char[], char[]);

// To Concatenate the given 2 character array (strings) and print the concatenated string.

// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

#include <iostream>
#include <cstring>
using namespace std;

void Add(int a, int b)
{
    cout << a + b << endl;
}
void Add(char ch1[], char ch2[])
{
    cout << ch1 << " " << ch2 << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Add(a, b);
    char ch1[10], ch2[10];
    cout << "Enter two strings: ";
    cin >> ch1 >> ch2;
    Add(ch1, ch2);
    return 0;
}