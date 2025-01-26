// A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes. For example, a LinkedList class may be allowed to access private members of Node.
// Like a friend class, a friend function can be granted special access to private and protected members of a class in C++. They are not the member functions of the class but can access and manipulate the private and protected members of that class for they are declared as friends.

// A friend function can be :
//     A global function
//     A member function of another class

#include <iostream>
using namespace std;

enum eColors
{
    RED,
    GREEN,
    BLUE
};
class Rectangle;
class Circle;

class Rectangle
{
    friend bool fnColorCmp(Rectangle &rect, Circle &circ);

private:
    eColors color;

public:
    void Cube(eColors m_Colors) { color = m_Colors; }
};

class Circle
{
    friend bool fnColorCmp(Rectangle &rect, Circle &circ);

private:
    eColors color;

public:
    void Cylinder(eColors m_Colors) { color = m_Colors; }
};

bool fnColorCmp(Rectangle &r, Circle &c)
{
    if (r.color == c.color)
    {
        cout << "Same color\n";
        return true;
    }
    else
    {
        cout << "Different color\n";
        return false;
    }
}

int main()
{
    Rectangle rect;
    Circle circ;

    rect.Cube(RED);
    circ.Cylinder(RED);
    fnColorCmp(rect, circ);

    rect.Cube(GREEN);
    circ.Cylinder(BLUE);
    fnColorCmp(rect, circ);
}