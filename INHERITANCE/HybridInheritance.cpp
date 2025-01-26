// Hybrid Inheritance
// Hybrid Inheritance is a combination of two or more types of inheritance.
// Single Inheritance + Hierarchical Inheritance

#include <iostream>
using namespace std;

class Base_1
{
public:
    Base_1()
    {
        cout << "Base-1 Constructor Invoked." << endl;
    }
};

class Base_2
{
public:
    Base_2()
    {
        cout << "Base-2 Constructor Invoked." << endl;
    }
};

class Derived : Base_1
{
public:
    Derived()
    {
        cout << "Derived Constructor Invoked.(Child of Base_1)" << endl;
    }
};

class Derived_2 : Base_1, Base_2
{
public:
    Derived_2()
    {
        cout << "Derived Constructor is Invoked.(Child of Base_1, Base_2)" << endl;
    }
};

int main()
{
    Derived d;
    Derived_2 d2;
}
