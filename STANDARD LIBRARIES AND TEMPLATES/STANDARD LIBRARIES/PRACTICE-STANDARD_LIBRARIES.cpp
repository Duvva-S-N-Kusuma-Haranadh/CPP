#include<iostream>
using namespace std;

template<class T>
class Calculator
{
private:
    T var1, var2;

public:
    Calculator(T n1, T n2)
    {
        var1 = n1;
        var2 = n2;
    }
    T add()
    {
        return var1 + var2;
    }
    T sub()
    {
        return var1 - var2;
    }
    T prod()
    {
        return var1 * var2;
    }
    T div()
    {
        return var1 / var2;
    }
    void displayCalculations()
    {
        cout << "A: " << var1 << ", B: " << var2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << sub() << endl;
        cout << "Multiplication: " << prod() << endl;
        cout << "Division: " << div() << endl;
    }
};

int main()
{
    Calculator<int> intCalc(1, 2);
    Calculator<float> floatCalc(3.14, 1.141);
    intCalc.displayCalculations();
    floatCalc.displayCalculations();
    return 0;
}
