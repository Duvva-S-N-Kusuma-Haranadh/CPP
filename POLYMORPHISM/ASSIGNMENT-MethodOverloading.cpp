// Method Overloading
// Method overloading is a feature in C++ that allows multiple functions
// to have the same name but different parameters. This is a form of
// polymorphism in C++ and enhances the readability and maintainability of the code

#include <iostream>
#include <string>
using namespace std;

class Addition
{
public:
    void Add(int a, int b)
    {
        cout << "Given Two Integers." << endl;
        cout << a + b << endl;
    }

    void Add(string str1, string str2)
    {
        cout << "Given two Strings." << endl;
        cout << str1 + str2 << endl;
    }
};

int main()
{
    Addition obj1;
    obj1.Add(1, 2);
    obj1.Add("Sita", "Ramam");
    return 0;
}
