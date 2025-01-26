#include <iostream>
using namespace std;

class MyClass
{
public:
    static int add(int a, int b) { return a + b; }
    static int diff(int a, int b) { return a - b; }
    static int mul(int a, int b) { return a * b; }
    static int div(int a, int b) { return a / b; }
};

int main()
{
    int a = 1, b = 2;
    cout << MyClass::add(a, b) << endl;
    cout << MyClass::diff(a, b) << endl;
    cout << MyClass::mul(a, b) << endl;
    cout << MyClass::div(a, b) << endl;
}