#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() = 0; // pure virtual function
    virtual double volume() = 0; // pure virtual function
};
class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() override {
        return 4 * M_PI * pow(radius, 2);
    }
    double volume() override {
        return (4.0/3) * M_PI * pow(radius, 3);
    }
};
class Cylinder : public Shape {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() override {
        return M_PI * pow(radius, 2) * height;
    }
};
int main() {
    Sphere sphere(5);
    Cylinder cylinder(3, 4);
    cout << "Sphere:" << std::endl;
    cout << "Area: " << sphere.area() << std::endl;
    cout << "Volume: " << sphere.volume() << std::endl;

    cout << "\nCylinder:" << std::endl;
    cout << "Area: " << cylinder.area() << std::endl;
    cout << "Volume: " << cylinder.volume() << std::endl;
    return 0;
}