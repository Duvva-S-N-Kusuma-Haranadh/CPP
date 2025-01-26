/*
    Problem Description:

    Execute the starter code by passing 2 string values as arguments to fnExchange().

    If it throws any error, resolve it.

    * Function fnExchange

    * DESCRIPTION: To swap the content of two variables

    * PARAMETERS:

    *   T & rtVal1  – Reference to the first argument passed

    *   T & rtVal2  – Reference to the second argument passed

    * RETURNS: void

*/

#include <iostream>
using namespace std;
template <class T>
void swapVariables(T &rtVal1, T &rtVal2) {
    T rtTemp = rtVal1;
    rtVal1 = rtVal2;
    rtVal2 = rtTemp;
}
int main (int argc, char**argv) {

    int integer_1 = 30, integer_2 = 90;
    cout << "Integer Swapping " << endl;
    cout << "Before: " << integer_1 <<", " << integer_2 << endl;
    swapVariables(integer_1,integer_2);
    cout << "After: " << integer_1 <<", " << integer_2 << endl;
    cout << "Double Swapping " << endl;
    double double_1 = 3939.20, double_2 = 2009.32;
    cout << "Before: " << double_1 <<", " << double_2 << endl;
    swapVariables(double_1, double_2);
    cout << "After: " << double_1 << ", " << double_2 << endl;
    cout << "String Swapping" << endl;
    string string_1 = "Hello", string_2 = "World";
    cout << "Before: " << string_1 <<", " << string_2 << endl;
    swapVariables(string_1,string_2);
    cout << "After: " << string_1 <<", " << string_2 << endl;

    return 0;
}
