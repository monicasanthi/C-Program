#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
    virtual double bonus() = 0;
};

class Admin : public Person {
private:
    double salary;
public:
    void getData() {
        cout << "Enter salary: ";
        cin >> salary;
        while (cin.fail()) {
            cout << "Invalid input. Please enter a valid salary: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> salary;
        }
    }

    void displayData() {
        cout << "Salary: " << salary << endl;
    }

    double bonus() {
        return salary * 0.02;
    }
};

class Account : public Person {
private:
    double salary;
public:
    void getData() {
        cout << "Enter salary: ";
        cin >> salary;
        while (cin.fail()) {
            cout << "Invalid input. Please enter a valid salary: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> salary;
        }
    }

    void displayData() {
        cout << "Salary: " << salary << endl;
    }

    double bonus() {
        return salary * 0.03;
    }
};

class Master : public Admin, public Account {
public:
    void getData() {
        Admin::getData();
    }

    void displayData() {
        Admin::displayData();
        cout << "Bonus: " << salary + bonus() << endl;
    }

    double bonus() {
        return Admin::bonus();
    }
};

int main() {
    Person* person = new Master();
    person->getData();
    person->displayData();
    delete person;
    return 0;
}