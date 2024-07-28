#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculatePay() = 0; 
};

class Manager : public Employee {
private:
    double salary;
    double bonus;
public:
    Manager(double s, double b) : salary(s), bonus(b) {}

    double calculatePay() override {
        return salary + bonus;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double r, int h) : hourlyRate(r), hoursWorked(h) {}

    double calculatePay() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Manager manager(50000, 10000);
    Engineer engineer(50, 40);

    cout << "Manager's pay: $" << manager.calculatePay() << endl;
    cout << "Engineer's pay: $" << engineer.calculatePay() << endl;

    return 0;
}