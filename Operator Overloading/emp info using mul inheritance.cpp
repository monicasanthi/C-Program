#include<iostream>
using namespace std;
class Person {
    protected:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
        void displayPersonInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
class Employee {
    protected:
        string employeeID;
        string department;
    public:
        Employee(string id, string dept) {
            employeeID = id;
            department = dept;
        }
        void displayEmployeeInfo() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Department: " << department << endl;
        }
};
class EmployeeInfo : public Person, public Employee {
    private:
        double salary;
    public:
        EmployeeInfo(string n, int a, string id, string dept, double s)
            : Person(n, a), Employee(id, dept) {
            salary = s;
        }
        void displayEmployeeInfo() {
            displayPersonInfo();
            Employee::displayEmployeeInfo();
            cout << "Salary: " << salary << endl;
        }
};
int main() {
    EmployeeInfo emp("John Doe", 30, "E123", "IT", 50000.0);
    cout << "Employee Information:" << endl;
    emp.displayEmployeeInfo();
    return 0;
}