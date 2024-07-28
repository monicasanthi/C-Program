#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "Name: " << p.name << ", Age: " << p.age;
        return os;
    }
};
int main() {
    Person person1("Monica", 19);
    Person person2("Dharshini", 20);
    cout << "Person1 details: " << person1 << endl;
    cout << "Person2 details: " << person2 << endl;
    return 0;
}