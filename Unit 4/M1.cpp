#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    void calculateArea() {
        double area = 3.14 * radius * radius;
        cout << "The area = " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;
public:
    void setLength(double l) {
        length = l;
    }
    void setBreadth(double b) {
        breadth = b;
    }
    void calculateArea() {
        double area = length * breadth;
        cout << "The area = " << area << endl;
    }
    double getLength() {
        return length;
    }
    double getBreadth() {
        return breadth;
    }
};

class Cylinder : public Rectangle {
private:
    double height;
public:
    void setHeight(double h) {
        height = h;
    }
    void calculateVolume() {
        double area = getLength() * getBreadth(); // Calculate area of base (rectangle)
        double volume = height * area;
        cout << "The volume of the cylinder is: " << volume << endl;
    }
};

int main() {
    Circle circle;
    cout << "Enter the radius: ";
    double radius;
    cin >> radius;
    circle.setRadius(radius);
    circle.calculateArea();

    Rectangle rectangle;
    cout << "Enter the length: ";
    double length;
    cin >> length;
    rectangle.setLength(length);
    cout << "Enter the breadth: ";
    double breadth;
    cin >> breadth;
    rectangle.setBreadth(breadth);
    rectangle.calculateArea();

    Cylinder cylinder;
    cout << "Enter the length: ";
    cin >> length;
    cylinder.setLength(length);
    cout << "Enter the breadth: ";
    cin >> breadth;
    cylinder.setBreadth(breadth);
    cout << "Enter the height: ";
    double height;
    cin >> height;
    cylinder.setHeight(height);
    cylinder.calculateVolume();

    return 0;
}