// Declare an array of function pointers.The function pointers should point to a function accepting two integers and returning an integer.

//     Implement the following functions : int
// fnAdd(int, int);
// int fnMultiply(int, int);
// int fnDivide(int, int);
// int fnSubtract(int, int);

// Initialize the array with the address of these four functions and call the functions using the function pointers in the array.

// Hint : Declare an array of function pointers having the same prototype as : int (*fnptr[4])(int, int);

// Assign the corresponding fnAdd, fnMultiply, fnDivide and fnSubtract function‟s addresses to the elements of the function pointer array

#include <iostream>
using namespace std;

int fnAdd(int a, int b)
{
    return a + b;
}
int fnMultiply(int a, int b)
{
    return a * b;
}
int fnDivide(int a, int b)
{
    return a / b;
}
int fnSubtract(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b;
    cout << "Enter any two numbers: ";
    cin >> a >> b;

    int (*fnPtr[4])(int, int) = {fnAdd, fnMultiply, fnSubtract, fnDivide};

    cout << "a + b = " << fnPtr[0](a, b) << endl
         << "a - b = " << fnPtr[2](a, b) << endl
         << "a * b = " << fnPtr[1](a, b) << endl
         << "a / b = " << fnPtr[3](a, b) << endl;
    return 0;
}