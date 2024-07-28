#include <iostream>
using namespace std;
class Person {
public:
    virtual void work() = 0; // Pure virtual function
};

class Employee : public Person {
public:
    void work() override {
        cout << "I'm an employee, I'm working on my tasks." << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "I'm a manager, I'm managing my team and making decisions." << endl;
    }
};
int main() {
    Employee employee;
    Manager manager;

    cout << "Employee:" << endl;
    employee.work();

    cout << "\nManager:" << endl;
    manager.work();

    return 0;
}