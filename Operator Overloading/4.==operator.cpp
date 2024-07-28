#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(const string& n, int a) : name(n), age(a) {}
    bool operator==(const Person& other) const {
        return (name == other.name && age == other.age);
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person person1("Alice", 30);
    Person person2("Alice", 30);
    Person person3("Bob", 25);
    cout << "Person 1: ";
    person1.display();
    cout << "Person 2: ";
    person2.display();
    cout << "Person 3: ";
    person3.display();
    if (person1 == person2) {
        cout << "Person 1 and Person 2 are equal." << endl;
    } else {
        cout << "Person 1 and Person 2 are not equal." << endl;
    }
    if (person1 == person3) {
        cout << "Person 1 and Person 3 are equal." << endl;
    } else {
        cout << "Person 1 and Person 3 are not equal." << endl;
    }
    return 0;
}