#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() = 0; 
};
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};
int main() {
    Rectangle rect(4.0, 5.0);
    Circle circ(3.0);

    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Circle area: " << circ.area() << endl;
    return 0;
}