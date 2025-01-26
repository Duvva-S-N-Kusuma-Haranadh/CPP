// Virtual Function
// A virtual function (also known as virtual methods) is a member function that is declared
// within a base class and is re-defined (overridden) by a derived class. When you refer to a
// derived class object using a pointer or a reference to the base class, you can call a virtual
// function for that object and execute the derived class's version of the method.

#include <iostream>
#include <string>
using namespace std;

class Publisher
{
private:
    string title;
    float price;

public:
    Publisher(string title, float price)
    {
        this->title = title;
        this->price = price;
    }
    virtual int isOverSize() = 0;
};

class Book : Publisher
{
private:
    int noOfPages;

public:
    Book(string title, float price, int noOfPages) : Publisher(title, price)
    {
        this->noOfPages = noOfPages;
    }
    int isOverSize()
    {
        if (noOfPages > 800)
            return 1;
        return 0;
    }
};

class Tape : Publisher
{
private:
    float playingTime;

public:
    Tape(string title, float price, float playingTime) : Publisher(title, price)
    {
        this->playingTime = playingTime;
    }
    int isOverSize()
    {
        if (playingTime > 90)
            return 1;
        return 0;
    }
};

int main()
{
    Book b1("Object Oriented Programming with C++", 220.00, 598);
    Tape t1("Michael Jackson Pop Music", 600, 120);

    if (b1.isOverSize())
        cout << "Book exceeds maximum size." << endl;
    else
        cout << "Book size is in limits." << endl;
    if (t1.isOverSize())
        cout << "Playing Time is Longer." << endl;
    else
        cout << "Playing Time id in limits" << endl;

    return 0;
}
