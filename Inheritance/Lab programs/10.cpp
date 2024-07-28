#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    double getReal() const { return real; }
    double getImag() const { return imag; }
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator*(const Complex& c) const {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};
int main() {
    Complex c1(3, 4); 
    Complex c2(2, 5);  

    Complex c3 = c1 + c2;  
    Complex c4 = c1 * c2;  
    
    cout << "Complex Number 1: " << c1 << endl;
    cout << "Complex Number 2: " << c2 << endl;
    cout << "Addition: " << c3 << endl;
    cout << "Multiplication: " << c4 << endl;

    return 0;
}