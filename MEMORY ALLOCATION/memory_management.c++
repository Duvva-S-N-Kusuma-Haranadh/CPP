// In the given code, we are getting the students count and accordingly we are getting the GPA of those students and printing the same.

// Here we are maintaining the Array of floating pointers.

// The total size of the array will be obtained from the user and accordingly the memory will be allocated dynamically using new operator.

// Then using for loop, the GPA values are fetched from the user and stored in the array pointer. Finally those values are printed in the console using for loop.

// As we have created the array pointer using new operator, we have to release the memory manually using delete operator.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    num = 5;
    float *ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << " :" << (*(ptr + i)) << endl;
    }

    delete[] ptr;

    return 0;
}