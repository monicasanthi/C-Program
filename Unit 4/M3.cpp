#include <iostream>
#include <cmath>
using namespace std;

class Number {
    protected:
        double value;
    public:
        Number(double val) {
            value = val;
        }
        virtual void display() = 0;
};

class Square : public Number {
    public:
        Square(double val) : Number(val) {}
        void display() {
            double square = pow(value, 2);
            cout <<"Square of " <<value << " is: " << square<<endl;
        }
};

class Cube : public Square {
    public:
        Cube(double val) : Square(val) {}
        void display() {
            double cube = pow(value, 3);
            cout << "Cube of " << value << " is: " << cube <<endl;
        }
};
int main() {
    cout << "Enter an integer number: ";
    double num1;
    cin >> num1;
    Square square(num1);
    square.display();

    cout << "Enter an integer number: ";
    double num2;
    cin >> num2;
    Cube cube(num2);
    cube.display();

    return 0;
}