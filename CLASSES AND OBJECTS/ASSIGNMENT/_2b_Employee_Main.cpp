#include <stdio.h>
#include "_2a_Employee.h"

int main()
{
    using namespace SeniorEmp;
    Employee se(1, "Sandeep", 10000);
    float seniorEmpSal = se.calculateSalary();
    printf("Senior Employee Salary: %.2f\n", seniorEmpSal);
    using namespace JuniorEmp;
    JuniorEmp::Employee je(1, "Shiva", 75000);
    float juniorEmpSal = je.calculateSalary();
    printf("Junior Employee Salary %.2f\n", juniorEmpSal);
}