// Write a C++ Program which accepts a string from the user and determines its length and also determines if it is a palindrome. Use pointer notation to access the elements of the string.

// Step 1: Declare a character type pointer variable and integers, iCount and iLen.

// Step 2: Read value for string from keyboard

// Step 3: Find the length of the string using strlen() as well as include the corresponding header file <string.h>

// Step 4: Iterate the loop for len/2 times to compare the characters by extracting a character from left and at the same time a character from right

// Step 5: Display whether the given string is a palindrome or not

// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], revStr[100];
    char *pStr = str, *pRevStr = revStr;
    int ilen;
    cin >> str;
    ilen = strlen(str);

    for (int i = 0; i < ilen; i++)
    {
        *(pRevStr + i) = *(pStr + ilen - i - 1);
    }
    *(pRevStr + ilen) = '\0';
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << revStr << endl;

    if (strcmp(str, revStr) == 0)
    {
        cout << "Given string is a palindrome.";
    }
    else
    {
        cout << "Given string is not a palindrome";
    }
    return 0;
}