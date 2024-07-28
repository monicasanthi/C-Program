#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass(int x); // constructor declaration
    void printValue();
private:
    int value;
};
MyClass::MyClass(int x) { // constructor definition
    value = x;
    cout << "Constructor called with value: " << x << endl;
}
void MyClass::printValue() {
    cout << "Value: " << value << endl;
}
int main() {
    MyClass obj(10);
    obj.printValue();
    return 0;
}