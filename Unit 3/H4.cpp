#include <iostream>
using namespace std;
class Shape {
public:
    void printArea(double side) {
        cout << "Area of square: " << side * side << endl;
    }
    void printArea(double length, double breadth) {
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};
int main() {
    Shape shape;
    double side;
    cout << "Enter the side of the square: ";
    cin >> side;
    shape.printArea(side);
    double length, breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    shape.printArea(length, breadth);
    return 0;
}