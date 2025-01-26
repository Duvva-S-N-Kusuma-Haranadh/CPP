// Multi-level Inheritance
// Multi-level Inheritance is a type of inheritance in which a derived class inherits from a base class and then acts as a base class for another class.

// Base Class
//     |
// Derived Class
//     |
// Derived Class 2

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

class Derived_2 : Derived
{
public:
    Derived_2()
    {
        cout << "2nd Level Derived Constructor Invoked." << endl;
    }
};

int main()
{
    Derived_2 d2;
    Derived d;
}
