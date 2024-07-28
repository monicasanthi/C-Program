#include <iostream>
#include <string>
using namespace std;
class Student {
    protected:
        int rollNumber;
        string name,address,city;
    public:
        Student(int roll, string n, string add, string c) {
            rollNumber = roll;
            name = n;
            address = add;
            city = c;
        }
        void displayStudentInfo() {
            cout << "The student roll number: " << rollNumber << endl;
            cout << "The student name: " << name << endl;
            cout << "The student address: " << address << endl;
            cout << "The student city: " << city << endl;
        }
};

class StudentReport : public Student {
    private:
        int marks1, marks2, marks3;
    public:
        StudentReport(int roll, string n, string add, string c, int m1, int m2, int m3)
            : Student(roll, n, add, c) {
            marks1 = m1;
            marks2 = m2;
            marks3 = m3;
        }
        void displayStudentReport() {
            displayStudentInfo();
            cout << "Marks1: " << marks1 << endl;
            cout << "Marks2: " << marks2 << endl;
            cout << "Marks3: " << marks3 << endl;
            double total = marks1 + marks2 + marks3;
            double percentage = total / 3.0;
            cout << "Total percentage: " << percentage << endl;
            if (percentage >= 80) {
                cout << "Grade A" << endl;
            } else if (percentage >= 60) {
                cout << "Grade B" << endl;
            } else if (percentage >= 40) {
                cout << "Grade C" << endl;
            } else {
                cout << "Grade F" << endl;
            }
        }
};

int main() {
    int rollNumber;
    string name, address, city;
    int marks1, marks2, marks3;
    cout << "Enter student roll number: ";
    cin >> rollNumber;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student address: ";
    cin >> address;
    cout << "Enter student city: ";
    cin >> city;
    cout << "Enter the marks1: ";
    cin >> marks1;
    cout << "Enter the marks2: ";
    cin >> marks2;
    cout << "Enter the marks3: ";
    cin >> marks3;
    StudentReport studentReport(rollNumber, name, address, city, marks1, marks2, marks3);
    cout << "Student Details:" << endl;
    cout << "" << endl;
    studentReport.displayStudentReport();
    return 0;
}