#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imag << endl;
    }
};
int main() {
    int real, imag;
    cout << "Enter two values (real and imaginary parts): ";
    cin >> real >> imag;
    Complex *c = new Complex(real, imag);
    c->display();
    delete c;  
    return 0;
}