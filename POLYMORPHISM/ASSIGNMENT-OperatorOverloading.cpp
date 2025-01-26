// Operator Overloading
// Operator overloading is a compile-time polymorphism in which the operator
// is overloaded to provide the special meaning to the user-defined data type.
// Operator overloading is used to overload or redefines most of the operators
// available in C++. It is used to perform the operation on the user-defined data type.

#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string name;

public:
    String()
    {
        cout << "String Obj Created." << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    String operator+(String s1)
    {
        String s2;
        s2.name = name + " " + s1.name;
        return s2;
    }
};

int main()
{
    String obj1, obj2;
    obj1.setName("Rama");
    obj2.setName("Krishna");
    String obj3 = obj1 + obj2;

    cout << "Name in Object - 3: " << obj3.getName() << endl;
    return 0;
}
