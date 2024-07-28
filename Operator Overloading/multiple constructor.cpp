#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }

        Rectangle(int l) {
            length = l;
            breadth = 0;
        }

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        void display() {
            cout << "Length: " << length << endl;
            cout << "Breadth: " << breadth << endl;
            cout << "Area: " << area() << endl;
        }
};

int main() {
    Rectangle r1; 
    r1.display();
    cout << endl;

    Rectangle r2(5); 
    r2.display();
    cout << endl;

    Rectangle r3(5, 10); 
    r3.display();
    return 0;
}