#include <iostream>
using namespace std;
class Shape {
protected:
    float length;
    float width;
public:
    Shape(float l, float w) : length(l), width(w) {}
};
class Rectangle : public Shape {
public:
    Rectangle(float l, float w) : Shape(l, w) {}
    float area() {
        return length * width;
    }
};
class Cuboid : public Rectangle {
private:
    float height;
public:
    Cuboid(float l, float w, float h) : Rectangle(l, w), height(h) {}
    float volume() {
        return area() * height;
    }
    float getArea() {
        return area();
    }
};
int main() {
    Cuboid cuboid(5.0, 3.0, 2.0);
    cout << "Area of Cuboid: " << cuboid.getArea() << endl;
    cout << "Volume of Cuboid: " << cuboid.volume() << endl;
    return 0;
}