#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int id;
    double basic, hra, da, gp, np;
public:
    void inputData() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basic;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
    }
    void calculateGP() {
        gp = basic + hra + da;
    }
    void calculateNP() {
        np = gp - (0.1 * gp);
    }
    void displayData() {
        cout << name << "\t\t" << id << "\t" << basic << "\t" << hra << "\t" << da << "\t" << gp << "\t" << np << endl;
    }
};
int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee emp[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the employee details " << i + 1 << ":" << endl;
        emp[i].inputData();
        emp[i].calculateGP();
        emp[i].calculateNP();
    }
    cout << "\nEMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP" << endl;
    for (int i = 0; i < n; i++) {
        emp[i].displayData();
    }
    return 0;
}