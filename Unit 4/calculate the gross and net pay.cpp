#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(string n, string id, float bs) : name(n), emp_id(id), basic_salary(bs) {}
};

class Salary : public Employee {
private:
    float gross_salary;
    float deduction;
    float net_salary;
public:
    Salary(string n, string id, float bs) : Employee(n, id, bs) {
        gross_salary = bs + (bs * 0.7); // 70% of basic salary as allowances
        deduction = bs * 0.3; // 30% of basic salary as deductions
        net_salary = gross_salary - deduction;
    }
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Deductions: " << deduction << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    string name, emp_id;
    float basic_salary;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter Employee id: ";
    cin >> emp_id;
    cout << "Enter Employee Salary: ";
    cin >> basic_salary;
    Salary salary(name, emp_id, basic_salary);
    salary.display();
    return 0;
}