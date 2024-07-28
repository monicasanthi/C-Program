#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() = 0; 
    virtual double perimeter() = 0; 
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

    double perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;
public:
    Triangle(double b, double h, double s1, double s2, double s3) : base(b), height(h), side1(s1), side2(s2), side3(s3) {}
    double area() override {
        return 0.5 * base * height;
    }

    double perimeter() override {
        return side1 + side2 + side3;
    }
};
int main() {
    Rectangle rectangle(4, 5);
    Triangle triangle(3, 4, 3, 4, 5);
    
    cout << "Rectangle:" << endl;
    cout << "Area: " << rectangle.area() << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.area() << endl;
    cout << "Perimeter: " << triangle.perimeter() << endl;
    return 0;
}