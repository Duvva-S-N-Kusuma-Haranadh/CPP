#include<iostream>
using namespace std;

template<typename T>
T Min(T a, T b)
{
    return a < b? a : b;
}

template<typename T>
T Max(T a, T b)
{
    return a < b ? b : a;
}

int main()
{
    cout << "Maximum and Minimum Elements of ANy Type: " << endl;
    cout << "Integer: " << endl;
    cout << "a = 1, b = 2" << endl << "Maximum(int, int) = " << Max(1, 2) << endl;
    cout << "Minimum(int, int) = " << Min(1, 2) << endl;
    cout << "FLoat: " << endl;
    cout << "a = 3.14, b = 3.141" << endl << "Maximum(float, float) = " << Max(3.14, 3.141) << endl;
    cout << "Minimum(float, float) = " << Min(3.14, 3.141) << endl;
    cout << "String: " << endl;
    cout << "a = C, b = C++" << endl << "Maximum(string, string) = " << Max("C", "C++") << endl;
    cout << "Minimum(string, string) = " << Min("C", "C++") << endl;
    cout << "Boolean: " << endl;
    cout << "a = true, b = false" << endl << "Maximum(bool, bool) = " << Max(true, false) << endl;
    cout << "Minimum(bool, bool) = " << Min(true, false) << endl;
}
