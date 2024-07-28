#include <iostream>
using namespace std;

// Base class Shape
class Shape {
protected:
    double length, breath, height;
public:
    void getDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breath: ";
        cin >> breath;
        cout << "Enter height: ";
        cin >> height;
    }
};

// Base class Rectangle
class Rectangle {
public:
    double calculateArea(double length, double breath) {
        return length * breath;
    }
};

// Derived class Cuboid
class Cuboid : public Rectangle, public Shape {
public:
    void calculateAreaAndVolume() {
        double area = calculateArea(length, breath);
        double volume = length * breath * height;
        cout << "Area of rectangle: " << area << endl;
        cout << "Volume of cuboid: " << volume << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getDimensions();
    cuboid.calculateAreaAndVolume();
    return 0;
}