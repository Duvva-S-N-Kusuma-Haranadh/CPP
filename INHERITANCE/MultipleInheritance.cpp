// Multiple Inheritance
// Multiple Inheritance is a type of inheritance in which a derived class inherits from more than one base class.

// Base Class 1  Base Class 2
//         \       /
//          \     /
//           \   /
//            \ /
//         Derived Class

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

class Derived
{
public:
    Derived()
    {
        cout << "Derived Constructor Invoked." << endl;
    }
};

class Derived_2 : Base, Derived
{
public:
    Derived_2()
    {
        cout << "2nd Derived Class Constructor is Invoked." << endl;
    }
};

int main()
{
    Derived_2 d2;
}
