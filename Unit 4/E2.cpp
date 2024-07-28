#include <iostream>
using namespace std;
class A {
protected:
    int x;
public:
    A(int val = 10) {
        x = val;
    }
};
class B : private A {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};
int main() {
    B obj;
    obj.display();
    return 0;
}