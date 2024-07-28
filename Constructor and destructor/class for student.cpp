#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Student object created: " << name << " - " << age << endl;
    }
    ~Student() {
        cout << "Student object destroyed: " << name << " - " << age << endl;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student student1("Monica", 19);
    student1.displayInfo();

    Student student2("Karthika", 18);
    student2.displayInfo();

    return 0;
}