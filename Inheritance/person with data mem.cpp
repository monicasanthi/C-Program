#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;

public:
    Person(string n, int a, string g) : name(n), age(a), gender(g) {}

    string getName() { return name; }
    int getAge() { return age; }
    string getGender() { return gender; }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(string g) { gender = g; }
};
class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    Student(string n, int a, string g, int rn, string cn) : Person(n, a, g), rollNumber(rn), className(cn) {}

    int getRollNumber() { return rollNumber; }
    string getClassName() { return className; }

    void setRollNumber(int rn) { rollNumber = rn; }
    void setClassName(string cn) { className = cn; }
};
class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    Teacher(string n, int a, string g, string s, double sal) : Person(n, a, g), subject(s), salary(sal) {}

    string getSubject() { return subject; }
    double getSalary() { return salary; }

    void setSubject(string s) { subject = s; }
    void setSalary(double sal) { salary = sal; }
};
int main() {
    Student student("John Doe", 20, "Male", 12345, "10th Grade");
    cout << "Student Details:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Gender: " << student.getGender() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    cout << "Class: " << student.getClassName() << endl;

    Teacher teacher("Jane Smith", 35, "Female", "Mathematics", 50000.0);
    cout << "\nTeacher Details:" << endl;
    cout << "Name: " << teacher.getName() << endl;
    cout << "Age: " << teacher.getAge() << endl;
    cout << "Gender: " << teacher.getGender() << endl;
    cout << "Subject: " << teacher.getSubject() << endl;
    cout << "Salary: " << teacher.getSalary() << endl;

    return 0;
}