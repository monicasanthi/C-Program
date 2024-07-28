#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void greet() = 0; // Pure virtual function
};

class Student : public Person {
public:
    Student(string n) : Person(n) {}
    void greet() override {
        cout << "Hello, my name is " << name << " and I'm a student." << endl;
    }
};

class Teacher : public Person {
public:
    Teacher(string n) : Person(n) {}
    void greet() override {
        cout << "Hello, my name is " << name << " and I'm a teacher." << endl;
    }
};
int main() {
    Student student("John");
    Teacher teacher("Ms. Smith");

    cout << "Student:" << endl;
    student.greet();

    cout << "\nTeacher:" << endl;
    teacher.greet();

    return 0;
}