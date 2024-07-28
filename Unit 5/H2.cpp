#include <iostream>
#include <stdexcept>
using namespace std;

class Student {
private:
    double python, cProgramming, mathematics, physics;
public:
    void inputData() {
        cout << "Enter the marks in Python: ";
        cin >> python;
        while (cin.fail() || python < 0 || python > 100) {
            cout << "Invalid input. Please enter a valid mark (0-100): ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> python;
        }
        cout << "Enter the marks in C Programming: ";
        cin >> cProgramming;
        while (cin.fail() || cProgramming < 0 || cProgramming > 100) {
            cout << "Invalid input. Please enter a valid mark (0-100): ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> cProgramming;
        }
        cout << "Enter the marks in Mathematics: ";
        cin >> mathematics;
        while (cin.fail() || mathematics < 0 || mathematics > 100) {
            cout << "Invalid input. Please enter a valid mark (0-100): ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> mathematics;
        }
        cout << "Enter the marks in Physics: ";
        cin >> physics;
        while (cin.fail() || physics < 0 || physics > 100) {
            cout << "Invalid input. Please enter a valid mark (0-100): ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> physics;
        }
    }

    void calculateGrade() {
        double total = python + cProgramming + mathematics + physics;
        double average = total / 4;
        if (average < 50) {
            throw runtime_error("Fail");
        } else {
            cout << "Pass" << endl;
        }
    }
};

int main() {
    Student student;
    student.inputData();
    try {
        student.calculateGrade();
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}