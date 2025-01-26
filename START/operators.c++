// Write a C++ program to convert specified days into years, weeks and days.Note : Ignore leap year.

// Input : Number of days : 1329

// Expected Output : Years : 3 Weeks : 33 Days : 3

#include <iostream>
using namespace std;

int main()
{
    int _days, years, weeks;
    cin >> _days;
    years = _days / 365;
    _days = _days - years * 365;
    weeks = _days / 7;
    _days = _days - weeks * 7;
    cout << "Years: " << years << ", Weeks: " << weeks << ", Days: " << _days;
}