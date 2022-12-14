#include <iostream>
using namespace std;

class Employee
{
private:
    int employee_id;
    string name;

public:
    Employee(int e, string n)
    {
        employee_id = e;
        name = n;
    }
    int getEmployeeID()
    {
        return employee_id;
    }
    string getName()
    {
        return name;
    }
};

class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    FullTimeEmployee(int e, string n, int sal) : Employee(e, n)
    {
        salary = sal;
    }
    int getSalary()
    {
        return salary;
    }
};

class PartTimeEmployee : public Employee
{
private:
    int wage;

public:
    PartTimeEmployee(int e, string n, int w) : Employee(e, n)
    {
        wage = w;
    }

    int getWage()
    {
        return wage;
    }
};

int main()
{
    PartTimeEmployee p1(1, "John", 300);
    FullTimeEmployee p2(2, "Raj", 5000);

    cout << "Salary of " << p2.getName() << " is " << p2.getSalary() << endl;
    cout << "Daily wage of " << p1.getName() << " is " << p1.getWage() << endl;

    return 0;
}
