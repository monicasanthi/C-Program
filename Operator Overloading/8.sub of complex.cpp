#include<iostream>
using namespace std;
class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}
		        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
        Complex operator-(const Complex& c) {
            double r = real - c.real;
            double i = imag - c.imag;
            return Complex(r, i);
        }
};
int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    cout << "Complex number 1: ";
    c1.display();
	cout << "Complex number 2: ";
    c2.display();
    Complex c3 = c1 - c2;
    cout << "Subtraction result: ";
    c3.display();
    return 0;
}