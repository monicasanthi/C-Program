#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    char gender;
    int totalMarks;
    char grade;
public:
    void readInfo() {
        cout << "Enter student's information:\n";
        cout << "Name?: ";
        cin >> name;
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }
    void printInfo() {
        double percentage = (double)totalMarks / 500 * 100;
        cout<<"Name: "<<name<<", Age: "<<age<<", Gender: "<<gender<<endl;
        cout<<"Total Marks: "<<totalMarks<<", Percentage: "<<percentage<<", Grade: "<<grade<<endl;
    }
};
int main() {
    Student student;
    student.readInfo();
    student.printInfo();
    return 0;
}