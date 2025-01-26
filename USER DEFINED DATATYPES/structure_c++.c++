// Write a C++ program which accepts 5 student records .The records of each student will include student id, name and total marks, grade and percentage. Display the details of all the students at the end.

// Step 1: Store the student details in a structure. We can use a character array

// to store the names i.e the character array will be a member of the structure

// Step 2: Create an array for 5 structure variables to access the information for 5 Students

// Step 3: Accept the information from the user to store the details of the students

// Step 4: Use a display function which will display the details. The display function should accept structure reference variable as parameter

#include <iostream>
using namespace std;

struct student
{
    int sId;
    string sName;
    int tMarks;
    char grade;
    float percentage;
};

void display_students(student student[])
{
    cout << "Student Details" << endl;
    cout << "+----+-------------------+-------------+-------+-----------+" << endl;
    cout << " SID | STUDENT NAME      | TOTAL MARKS | GRADE | PERCENTAGE " << endl;
    cout << "+----+-------------------+-------------+-------+-----------+" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << " " << student[i].sId << " -> " << student[i].sName << " -> " << student[i].tMarks << " -> " << student[i].grade << " -> " << student[i].percentage << endl;
        cout << "+----+-------------------+-------------+-------+-----------+" << endl;
    }
}

int main()
{
    student student[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Student ID: " << i + 1 << endl;
        student[i].sId = i + 1;
        cout << "Enter Student Name: ";
        cin >> student[i].sName;
        cout << "Enter Total Marks: ";
        cin >> student[i].tMarks;
        cout << "Enter Student's Grade: ";
        cin >> student[i].grade;
        cout << "Enter Student's Percentage: ";
        cin >> student[i].percentage;
    }
    display_students(student);

    return 0;
}