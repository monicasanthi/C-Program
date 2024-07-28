#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() = 0; 
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14 * radius * radius;
    }
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};
int main() {
    double radius, side;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> side;
    Circle c(radius);
    Square s(side);
    cout << "Area of square: " << s.area() << endl;
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}