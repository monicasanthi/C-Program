#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout <<"Rectangle object created: length = " <<length<< ", width = " <<width<<endl;
    }
    ~Rectangle() {
        cout <<"Rectangle object destroyed: length = "<<length<< ", width = "<<width<<endl;
    }
    void displayArea() {
        double area = length * width;
        cout << "Area: " << area << endl;
    }
    void displayPerimeter() {
        double perimeter = 2 * (length + width);
        cout << "Perimeter: " << perimeter << endl;
    }
};
int main() {
    Rectangle rectangle1(5.0, 3.0);
    rectangle1.displayArea();
    rectangle1.displayPerimeter();
    
    Rectangle rectangle2(8.0, 4.0);
    rectangle2.displayArea();
    rectangle2.displayPerimeter();
    return 0;
}