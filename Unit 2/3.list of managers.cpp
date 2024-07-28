#include <iostream>
#include <string>
using namespace std;
class Manager {
private:
    string name;
    int age;
    string department;
public:
    Manager(string n, int a, string d) {
        name = n;
        age = a;
        department = d;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "------------------------" << endl;
    }
};
int main() {
    const int NUM_MANAGERS = 3;
    Manager managers[NUM_MANAGERS] = {
        Manager("John Smith", 35, "Sales"),
        Manager("Jane Doe", 40, "Marketing"),
        Manager("Bob Johnson", 45, "IT")
    };
    cout << "List of Managers:" << endl;
    for (int i = 0; i < NUM_MANAGERS; i++) {
        managers[i].displayDetails();
    }
    return 0;
}