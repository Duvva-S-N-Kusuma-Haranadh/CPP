/*
    Write a program to do the following operations:

    Create a vector to store 10 employee numbers

    Accept 10 employee numbers from the user and store it in Vector object

    Reverse the vector elements and print the same using an Vector Iterator

    Insert 2 elements at the beginning of the vector

    Append 2 elements at the end of the vector and print the vector elements using the Iterator

    Remove three elements at the end of the vector

    Create another vector to store 10 employee numbers

    Swap the contents of the vectors 1 & 2 and print the same
*/

#include<iostream>
#include<vector>
using namespace std;

void vector_insert(vector<int> &emp_numbers)
{
    int n;
    cout << "Insert at begin" << endl;
    cout << "Employee Id: ";
    cin >> n;
    emp_numbers.insert(emp_numbers.begin(), n);
    cout << "Element Inserted at beginning." << endl;
}

void vector_append(vector<int> &emp_numbers)
{
    cout << "Append ELement" << endl;
    int n;
    cout << "Employee Id: ";
    cin >> n;
    emp_numbers.push_back(n);
    cout << "Element appended." << endl;
}

void vector_delete_at_end(vector<int> &emp_numbers)
{
    emp_numbers.pop_back();
    cout << "Element Deleted at end." << endl;
}

void reverse_vector(vector<int> &emp_numbers)
{
    emp_numbers = vector<int>(emp_numbers.rbegin(), emp_numbers.rend());
    cout << "Vector Reversed." << endl;
}

void swap_vectors(vector<int> &v1, vector<int> &v2)
{
    v1.swap(v2);
    cout << "Two Vector Swapped.";
}

void traverse(vector<int> &emp_numbers)
{
    cout << "Vector: ";
    for(int i = 0; i < emp_numbers.size(); i++)
    {
        cout << emp_numbers[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> emp_numbers;
    int n;
    for(int i = 0; i < 10; i++)
    {
        cout << "Employee - " << i + 1 << ": ";
        cin >> n;
        emp_numbers.push_back(n);
    }

    vector_insert(emp_numbers);
    vector_insert(emp_numbers);
    traverse(emp_numbers);
    vector_append(emp_numbers);
    vector_append(emp_numbers);
    traverse(emp_numbers);
    vector_delete_at_end(emp_numbers);
    vector_delete_at_end(emp_numbers);
    vector_delete_at_end(emp_numbers);
    traverse(emp_numbers);
    reverse_vector(emp_numbers);
    traverse(emp_numbers);

    vector<int> emp_numbers_2 = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90};
    cout << "Before Swapping: " << endl;
    cout << "Employee Numbers-1 : ";
    traverse(emp_numbers);
    cout << "Employee Numbers-2 : ";
    traverse(emp_numbers_2);
    swap_vectors(emp_numbers, emp_numbers_2);
    cout << "After Swapping: " << endl;
    cout << "Employee Numbers-1 : ";
    traverse(emp_numbers);
    cout << "Employee Numbers-2 : ";
    traverse(emp_numbers_2);
}
