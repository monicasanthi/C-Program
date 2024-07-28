#include <iostream>
using namespace std;
class Complex {
    private:
        int real;
        int imag;

    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }

        Complex operator+() {
            return Complex(real, imag);
        }

        Complex operator+(const Complex& c) {
            return Complex(real + c.real, imag + c.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = +c1; 
    cout << "Unary + operator: ";
    c3.display();

    Complex c4 = c1 + c2; 
    cout << "Binary + operator: ";
    c4.display();
    return 0;
}