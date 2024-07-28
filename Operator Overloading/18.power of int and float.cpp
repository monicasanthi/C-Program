#include <iostream>
#include <cmath>
using namespace std;

long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
double power(double base, double exponent) {
    return pow(base, exponent);
}
int main() {
    int intBase = 2;
    int intExponent = 3;
    double doubleBase = 2.5;
    double doubleExponent = 3.2;

    cout << "Power of " << intBase << " raised to " << intExponent << ": " << power(intBase, intExponent) << endl;
    cout << "Power of " << doubleBase << " raised to " << doubleExponent << ": " << power(doubleBase, doubleExponent) << endl;

    return 0;
}