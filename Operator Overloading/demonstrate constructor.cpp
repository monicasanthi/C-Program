#include<iostream>
using namespace std;
class Rectangle {
    private:
        int length;
        int width;

    public:
        Rectangle() {
            length = 0;
            width = 0;
            cout << "Default constructor called." << endl;
        }

        Rectangle(int l, int w) {
            length = l;
            width = w;
            cout << "Parameterized constructor called." << endl;
        }

        int area() {
            return length * width;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Rectangle rect1;
    rect1.display();
    cout << "Area: " << rect1.area() << endl;

    Rectangle rect2(5, 10);
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    return 0;
}