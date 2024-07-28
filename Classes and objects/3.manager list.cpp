#include <iostream>
#include <string>
using namespace std;
class Manager {
public:
    string name;
    int age;
    Manager(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Manager managers[3] = {
        Manager("John", 30),
        Manager("Alice", 25),
        Manager("Bob", 40)
    };
    for (int i = 0; i < 3; i++) {
        managers[i].display();
    }
    return 0;
}