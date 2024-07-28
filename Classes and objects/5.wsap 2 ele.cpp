#include <iostream>
using namespace std;

class class_2;  // Forward declaration

class class_1 {
private:
    int value1;
public:
    class_1(int v) : value1(v) {}

    void display() const {
        cout << "class_1 value: " << value1 << endl;
    }

    friend void swapValues(class_1 &c1, class_2 &c2);
};

class class_2 {
private:
    int value2;
public:
    class_2(int v) : value2(v) {}

    void display() const {
        cout << "class_2 value: " << value2 << endl;
    }

    friend void swapValues(class_1 &c1, class_2 &c2);
};

void swapValues(class_1 &c1, class_2 &c2) {
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swapValues(obj1, obj2);

    cout << "After swap:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}