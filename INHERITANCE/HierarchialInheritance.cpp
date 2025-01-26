// Hierarchial Inheritance
// Hierarchical Inheritance is a type of inheritance in which more than one derived class inherits from a single base class.

//          Base Class
//          /       \
// Derived Class  Derived Class 2

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

class Derived_2 : Base
{
public:
    Derived_2()
    {
        cout << "2nd Derived Class Constructor is Invoked." << endl;
    }
};

int main()
{
    Derived d;
    Derived_2 d2;
}
