#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    int age;
    float height;
    Person(string n, int a, float h) {
        name = n;
        age = a;
        height = h;
    }
};
int main() {
    Person person("John Doe", 30, 5.9);
    Person *ptr = &person;
    cout << "Attributes of person object using pointer:" << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Height: " << ptr->height << endl;
    return 0;
}