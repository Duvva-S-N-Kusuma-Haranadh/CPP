// Write a C++ program to read an amount(integer value) and break the amount into smallest possible number of bank notes.

// Input : 375

// Expected Output :
//  There are :
//  3 Note(s) of 100.00
//  1 Note(s) of 50.00
//  1 Note(s) of 20.00
//  0 Note(s) of 10.00
//  1 Note(s) of 5.00

#include <iostream>
using namespace std;

int main()
{
    int amount, _100, _50, _20, _10, _5;
    cin >> amount;
    cout << "There are: " << endl;
    if (amount > 100)
    {
        _100 = amount / 100;
        amount -= _100 * 100;
        cout << _100 << " Note(s) of 100.00" << endl;
    }
    if (amount > 50)
    {
        _50 = amount / 50;
        amount -= _50 * 50;
        cout << _50 << " Note(s) of 50.00" << endl;
    }
    if (amount > 20)
    {
        _20 = amount / 20;
        amount -= _20 * 20;
        cout << _20 << " Note(s) of 20.00" << endl;
    }
    if (amount > 10)
    {
        _10 = amount / 10;
        amount -= _10 * 10;
        cout << _10 << " Note(s) of 10.00" << endl;
    }
    if (amount > 5)
    {
        _5 = amount / 5;
        amount -= _5 * 5;
        cout << _5 << " Note(s) of 5.00" << endl;
    }
    if (amount < 5)
    {
        int _2;
        if (amount >= 2)
        {
            _2 = amount / 2;
            amount -= _2 * 2;
            cout << _2 << " coin(s) of 2.00." << endl;
        }
        if (amount < 2)
        {
            cout << amount << " coin(s) of 1.00." << endl;
        }
    }

    return 0;
}