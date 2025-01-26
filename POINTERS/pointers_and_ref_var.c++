// Write a program in C++ to print all permutations of a given string using pointers.

//     Test Data :

//     String to print the permutations : abcd

//     Expected Output :

//     The permutations of the string are :

//     abcd abdc acbd acdb adcb adbc bacd badc bcad bcda bdca bdac cbad cbda cabd cadb cdab cdba dbca dbac dcba dcab dacb dabc

#include <iostream>
#include <cstring>
using namespace std;

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

void charPermutation(char *ch, int start, int end)
{
    int i;
    if (start == end)
    {
        cout << ch << " ";
    }
    else
    {
        for (i = start; i <= end; i++)
        {
            swap((ch + start), (ch + i));
            charPermutation(ch, start + 1, end);
            swap((ch + start), (ch + i));
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter a string to find its permutations: ";
    cin >> str;
    int n = strlen(str);
    cout << n;
    cout << "Permutations of " << str << ": " << endl;
    charPermutation(str, 0, n - 1);
    return 0;
}