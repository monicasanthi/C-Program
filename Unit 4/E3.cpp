#include <iostream>
using namespace std;
class A {
protected:
    int a;
public:
    void readA() {
        cout << "Enter value of a: ";
        cin >> a;
    }
    void printA() {
        cout << "value of a: " << a << endl;
    }
};
class B {
protected:
    int b;
public:
    void readB() {
        cout << "Enter value of b: ";
        cin >> b;
    }
    void printB() {
        cout << "value of b: " << b << endl;
    }
};
class C {
protected:
    int c;
public:
    void readC() {
        cout << "Enter value of c: ";
        cin >> c;
    }
    void printC() {
        cout << "value of c: " << c << endl;
    }
};
class D : public A, public B, public C {
public:
    void readAll() {
        readA();
        readB();
        readC();
    }
    void printAll() {
        printA();
        printB();
        printC();
    }
};
int main() {
    D obj;
    obj.readAll();
    cout << "\nValues are:" << endl;
    obj.printAll();
    return 0;
}