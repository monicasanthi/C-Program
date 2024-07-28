#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(Complex, Complex);
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}