// Single Inheritance
// Single Inheritance is a type of inheritance in which a derived class inherits only one base class.

// Base Class
//     |
// Derived Class

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor Invoked." << endl;
    }
};

class Derived : Base
{
public:
    Derived()
    {
        cout << "Derived Constructor Invoked." << endl;
    }
};

int main()
{
    Derived obj;
}
