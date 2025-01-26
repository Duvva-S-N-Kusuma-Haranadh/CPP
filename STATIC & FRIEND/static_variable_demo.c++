#include <iostream>
using namespace std;

class MyClass
{
private:
    int n = 0;

public:
    static int count;

    MyClass()
    {
        count++;
        n = count;
        cout << "Object Created, " << count << endl;
    }
};

int MyClass::count = 0;

int main()
{
    MyClass obj1, obj2, obj3;
    cout << "Number of Objects created: " << MyClass::count;
}