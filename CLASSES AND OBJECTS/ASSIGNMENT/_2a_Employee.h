#include <iostream>
using namespace std;

namespace SeniorEmp
{
    class Employee
    {
    private:
        int empNo;
        string empName;
        float basicSalary;

    public:
        Employee()
        {
            this->empNo = 0;
            this->empName = nullptr;
            this->basicSalary = 0.0;
        }
        Employee(int empNo, string empName, float basicSalary)
        {
            this->empNo = empNo;
            this->empName = empName;
            this->basicSalary = basicSalary;
        }
        double calculateSalary()
        {
            double fullSalary;
            fullSalary = this->basicSalary + this->basicSalary * (15.0 / 100.0);
            return fullSalary;
        }

        void displayEmployee()
        {
            cout << "Employee ID: " << empNo << endl;
            cout << "Employee Name: " << empName << endl;
            cout << "Basic Salary: " << basicSalary << endl;
            cout << "Full Salary: " << calculateSalary() << endl;
        }
    };

}

namespace JuniorEmp
{
    class Employee
    {
    private:
        int empNo;
        string empName;
        float basicSalary;

    public:
        Employee()
        {
            this->empNo = 0;
            this->empName = nullptr;
            this->basicSalary = 0.0;
        }
        Employee(int empNo, string empName, float basicSalary)
        {
            this->empNo = empNo;
            this->empName = empName;
            this->basicSalary = basicSalary;
        }
        double calculateSalary()
        {
            double fullSalary;
            fullSalary = this->basicSalary + this->basicSalary * (8.0 / 100.0);
            return fullSalary;
        }

        void displayEmployee()
        {
            cout << "Employee ID: " << empNo << endl;
            cout << "Employee Name: " << empName << endl;
            cout << "Basic Salary: " << basicSalary << endl;
            cout << "Full Salary: " << calculateSalary() << endl;
        }
    };
}