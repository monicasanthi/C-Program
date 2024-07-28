#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
};
int main() {
    int a, b, c, d;

    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> a >> b;
    Complex c1(a, b);

    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> c >> d;
    Complex c2(c, d);

    cout << "Input Values" << endl;
    cout << a << " + " << b << "i" << endl;
    cout << c << " + " << d << "i" << endl;

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "Result" << endl;
    cout << "Addition: ";
    c3.display();
    cout << "Subtraction: ";
    c4.display();

    return 0;
}