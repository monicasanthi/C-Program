#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};
class Square : public Shape {
private:
    double side;
public:
    void setSide() {
        cout << "Enter the length of the square: ";
        cin >> side;
    }
    double area() override {
        return side * side;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    void setRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};
int main() {
    Square square;
    Circle circle;
    square.setSide();
    circle.setRadius();
    cout << "\nArea of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;
    return 0;
}