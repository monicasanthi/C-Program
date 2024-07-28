#include <iostream>
using namespace std;
class Employee {
    protected:
        int employeeID;
        string employeeName;
    public:
        Employee(int id, string name) {
            employeeID = id;
            employeeName = name;
        }
        void displayEmployeeInfo() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Employee Name: " << employeeName << endl;
        }
};

class Salary {
    protected:
        double basicSalary;
    public:
        Salary(double salary) {
            basicSalary = salary;
        }
        double getBasicSalary() {
            return basicSalary;
        }
};

class GrossSalary : public Salary {
    private:
        double grossSalary;
    public:
        GrossSalary(double salary) : Salary(salary) {
            grossSalary = salary + (salary * 0.1);
        }
        double getGrossSalary() {
            return grossSalary;
        }
};

class NetSalary : public Employee, public GrossSalary {
    private:
        double netSalary;
    public:
        NetSalary(int id, string name, double salary) 
            : Employee(id, name), GrossSalary(salary) {
            netSalary = getGrossSalary() - (getGrossSalary() * 0.005);
        }
        void displaySalaries() {
            displayEmployeeInfo();
            cout << "Gross Salary = Rs." << getGrossSalary() << endl;
            cout << "Net Salary = Rs." << netSalary << endl;
        }
};

int main() {
    int employeeID;
    string employeeName;
    double basicSalary;
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cout << "Enter Employee Name: ";
    cin >> employeeName;
    cout << "Enter basic salary of Employee: ";
    cin >> basicSalary;
    NetSalary netSalary(employeeID, employeeName, basicSalary);
    netSalary.displaySalaries();
    return 0;
}