#include <iostream>
using namespace std;

void add(float a, int b)
{
    cout << "First add function is execution" << endl;
}

void add(int a, float b)
{
    cout << "Second add function is execution" << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    add(a, b);
    add(a, b);
}
