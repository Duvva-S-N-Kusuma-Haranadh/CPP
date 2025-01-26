// Exceptions
// Exceptions are runtime errors that can be handled in C++ using try, catch and throw blocks.

#include <iostream>
using namespace std;

float divide(int Numerator, int Denominator)
{
    int Quotient;
    try
    {
        if (Denominator == 0)
        {
            throw 0;
        }
        Quotient = Numerator / Denominator;
    }
    catch (const int i)
    {
        cout << "Program has found: Zero Division Error" << endl;
    }
    return Quotient;
}

int main(int argc, char **argv)
{
    int Numerator;
    int Denominator;

    cout << "Enter any two numbers: " << endl;
    cin >> Numerator >> Denominator;

    try
    {
        if (Numerator > 0 && Denominator > 0)
        {
            throw "negative";
        }
        int iQuotient = divide(Numerator, Denominator);
        cout << "The Quotient is = " << iQuotient << endl;
    }
    catch (const char *msg)
    {
        cout << "Program has found : None of the Numbers are negative, there should be atleast one negative number." << endl;
    }
    catch (...)
    {
        cout << "Program has found : Special Error" << endl;
    }

    return 0;
}