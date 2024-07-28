#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    void* operator new(size_t size) {
        cout << "Custom new operator called" << endl;
        return ::operator new(size);
    }
    void operator delete(void* ptr) {
        cout << "Custom delete operator called" << endl;
        ::operator delete(ptr);
    }
    MyClass(int value = 0) : data(value) {
        cout << "Constructor called" << endl;
    }
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
};
int main() {
    MyClass* obj = new MyClass(10);
    obj->display();

    delete obj;
    return 0;
}