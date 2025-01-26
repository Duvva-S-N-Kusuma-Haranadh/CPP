#include <iostream>
using namespace std;

class A
{
    static int a;

public:
    A()
    {
        cout << "Object of A is created\n";
    }
    void show()
    {
        a++;
        cout << "a: " << a << endl;
    }
};

class B
{
public:
};

int main(int argc, char const *argv[])
{
    A a1, a2;
    A a3 = a1 + a2;
    return 0;
}