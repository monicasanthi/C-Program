#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    float salary;
public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
    virtual float bonus() {
        return 0;
    }
};
class Admin : virtual public Person {
public:
    float bonus() override {
        return salary * 0.1;
    }
};
class Account : virtual public Person {
public:
    float bonus() override {
        return salary * 0.05;
    }
};
class Master : public Admin, public Account {
public:
    void getdata() {
        Person::getdata(); 
    }
    void displaydata() {
        Person::displaydata(); 
    }
    float bonus() override {
        return salary * 1.1; 
    }
};
int main() {
    Master employee;
    employee.getdata();
    employee.displaydata();
    cout << "Bonus: " << employee.bonus() << endl;
    return 0;
}