#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(string n, string id, float salary) : name(n), emp_id(id), basic_salary(salary) {}
    virtual void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};
class Salary : public Employee {
private:
    float gross_salary;
    float deduction;
    float net_salary;
public:
    Salary(string n, string id, float salary) : Employee(n, id, salary) {
        gross_salary = basic_salary + (0.5 * basic_salary) + (0.2 * basic_salary);  // HRA = 50% of basic, DA = 20% of basic
        deduction = 50000;  // Assuming a fixed deduction amount
        net_salary = gross_salary - deduction;
    }
    void display() const override {
        Employee::display();
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Deduction: " << deduction << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};
int main() {
    string name, emp_id;
    float basic_salary;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter Employee ID: ";
    cin >> emp_id;
    cout << "Enter Employee Salary: ";
    cin >> basic_salary;

    Salary employee(name, emp_id, basic_salary);
    employee.display();

    return 0;
}