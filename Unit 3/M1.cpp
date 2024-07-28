#include <iostream>
#include <cmath>
using namespace std;
class Area {
public:
    Area() {
        cout << "No argument constructor called" << endl;
    }
    Area(double radius) {
        cout << "One argument constructor called" << endl;
        area = M_PI * radius * radius;
    }
    Area(double length, double width) {
        cout << "Two argument constructor called" << endl;
        area = length * width;
    }
    void printArea() {
        cout << "Area: " << area << endl;
    }
private:
    double area;
};
int main() {
    Area c1(5.0);
    c1.printArea();
    Area r1(4.0, 6.0);
    r1.printArea();
    return 0;
}