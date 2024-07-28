#include <iostream>
#include <string>

class Manager {
public:
    std::string name;
    int age;
    Manager(std::string n, int a) : name(n), age(a) {}
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
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