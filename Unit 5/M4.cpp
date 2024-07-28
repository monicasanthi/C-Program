#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
};

class Rectangle : public Shape {
protected:
    double length;
    double breadth;
public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        while (cin.fail()) {
            cout << "Invalid input. Please enter a valid length: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> length;
        }
        cout << "Enter breadth: ";
        cin >> breadth;
        while (cin.fail()) {
            cout << "Invalid input. Please enter a valid breadth: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> breadth;
        }
    }

    void displayData() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }

    double area() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
private:
    double height;
public:
    void getData() {
        Rectangle::getData();
        cout << "Enter height: ";
        cin >> height;
        while (cin.fail()) {
            cout << "Invalid input. Please enter a valid height: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> height;
        }
    }

    void displayData() {
        Rectangle::displayData();
        cout << "Height: " << height << endl;
        cout << "Area of rectangle: " << area() << endl;
        cout << "Volume of cuboid: " << area() * height << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getData();
    cuboid.displayData();
    return 0;
}