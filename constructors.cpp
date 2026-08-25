#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float empSalary;

public:

    // Default constructor
    Employee()
    {
        empID = 0;
        empName = "Unknown";
        empSalary = 0;
    }

    // Parameterized constructor
    Employee(int id, string name, float salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    // Copy constructor
    Employee(const Employee &e)
    {
        empID = e.empID;
        empName = e.empName;
        empSalary = e.empSalary;
    }

    // Display employee information
    void display()
    {
        cout << "Employee ID     : " << empID << endl;
        cout << "Employee Name   : " << empName << endl;
        cout << "Employee Salary : " << empSalary << endl;
    }
};

int main()
{
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    Employee e2(101, "Miti", 20000);
    e2.display();

    cout << "\nCopy Constructor:" << endl;
    Employee e3(e2);
    e3.display();

    return 0;
}
