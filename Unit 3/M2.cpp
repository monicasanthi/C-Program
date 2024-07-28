#include <iostream>
using namespace std;
class Shape {
public:
    Shape() {
        cout << "Enter the side of the cube: ";
        cin >> side;
        cubeVolume = calculateCubeVolume();
        cout << "Volume of the cube: " << cubeVolume << endl;
    }
    Shape(double radius, double height) {
        this->radius = radius;
        this->height = height;
        cylinderVolume = calculateCylinderVolume();
        cout << "Volume of the cylinder: " << cylinderVolume << endl;
    }

private:
    double side, radius, height, cubeVolume, cylinderVolume;
    double calculateCubeVolume() {
        return side * side * side;
    }
    double calculateCylinderVolume() {
        return 3.14 * radius * radius * height;
    }
};
int main() {
    Shape cube; // default constructor
    cout << "\n";
    Shape cylinder(5.0, 10.0); // parameterized constructor
    return 0;
}