#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual float bonus() = 0; // pure virtual function
};

class Admin : public Person {
protected:
    float salary;
public:
    void getData() {
        Person::getData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
    float bonus() {
        return salary * 0.1; // 10% bonus
    }
};

class Account : public Person {
protected:
    float salary;
public:
    void getData() {
        Person::getData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }
    float bonus() {
        return salary * 0.05; // 5% bonus
    }
};

class Master : public Admin, public Account {
public:
    void getData() {
        Admin::getData();
    }
    void displayData() {
        Admin::displayData();
    }
    float bonus() {
        return Admin::bonus() + Account::bonus();
    }
};

int main() {
    Master master;
    master.getData();
    master.displayData();
    cout << "Bonus: " << master.bonus() << endl;
    return 0;
}