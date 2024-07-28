#include <iostream>
using namespace std;
class Rectangle {
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    Rectangle(double side) {
        length = side;
        breadth = side;
    }
    double calculateArea() {
        return length * breadth;
    }
    void printArea() {
        cout << "Area: " << calculateArea() << endl;
    }
private:
    double length, breadth;
};
int main() {
    Rectangle r1; // default constructor
    r1.printArea();
    Rectangle r2(3, 3); // parameterized constructor with two arguments
    r2.printArea();
    Rectangle r3(3); // parameterized constructor with one argument
    r3.printArea();
    return 0;
}