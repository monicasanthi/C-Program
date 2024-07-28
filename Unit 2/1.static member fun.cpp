#include <iostream>

class MyClass {
private:
    static int count; // static member variable to store the count of objects

public:
    MyClass() {
        count++; // increment the count whenever an object is created
    }

    ~MyClass() {
        count--; // decrement the count whenever an object is destroyed
    }

    static void showcount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};

// initialize the static member variable
int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showcount(); // display the count of objects

    return 0;
}