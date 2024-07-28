#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex& operator+=(const Complex& c) {
        real += c.real;
        imag += c.imag;
        return *this;
    }
};
int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    c1 += c2;

    cout << "Complex number 1 after addition: ";
    c1.display();

    return 0;
}