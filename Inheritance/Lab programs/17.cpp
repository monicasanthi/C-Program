#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    string getName() { return name; }
    int getAge() { return age; }
    Person* findEldest(Person* persons, int size) {
        Person* eldest = this;
        for (int i = 0; i < size; i++) {
            if (persons[i].getAge() > eldest->getAge()) {
                eldest = &persons[i];
            }
        }
        return eldest;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person persons[] = {
        Person("John", 25),
        Person("Alice", 30),
        Person("Bob", 20),
        Person("Eve", 35)
    };

    int size = sizeof(persons) / sizeof(Person);
    Person* eldest = persons[0].findEldest(persons, size);

    cout << "Eldest person: ";
    eldest->display();

    return 0;
}