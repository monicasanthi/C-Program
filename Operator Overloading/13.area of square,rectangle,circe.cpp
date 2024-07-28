#include <iostream>
#include <cmath>
using namespace std;
double area(double side) {
    return side * side;
}
double area(double length, double width) {
    return length * width;
}
double area(double radius, bool isCircle) {
    if (isCircle) {
        return M_PI * radius * radius;
    }
    return 0;
}
int main() {
    double side = 5.0;
    double length = 10.0;
    double width = 4.0;
    double radius = 7.0;
    cout << "Area of the square: " << area(side) << endl;
    cout << "Area of the rectangle: " << area(length, width) << endl;
    cout << "Area of the circle: " << area(radius, true) << endl;

    return 0;
}