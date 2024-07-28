#include <iostream>
using namespace std;
class MyClass {
private:
    int* ptr;
public:
    MyClass(int value = 0) {
        ptr = new int;
        *ptr = value;
        cout << "Constructor called" << endl;
    }
    MyClass(const MyClass& obj) {
        ptr = new int;
        *ptr = *(obj.ptr);
        cout << "Copy constructor called" << endl;
    }
    MyClass& operator=(const MyClass& obj) {
        if (this != &obj) {
            delete ptr;
            ptr = new int;
            *ptr = *(obj.ptr);
            cout << "Assignment operator called" << endl;
        }
        return *this;
    }
    ~MyClass() {
        delete ptr;
        cout << "Destructor called" << endl;
    }
    void display() {
        cout << "Value: " << *ptr << endl;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2;

    MyClass obj3 = obj1;
    obj3.display();

    obj2 = obj1;
    obj2.display();

    return 0;
}