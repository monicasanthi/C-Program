#include <iostream>
using namespace std;
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
double factorial(double x) {
    double result = 1.0;
    for (double i = 1.0; i <= x; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int intNum = 5;
    double doubleNum = 3.5;

    cout << "Factorial of " << intNum << "!: " << factorial(intNum) << endl;
    cout << "Factorial of " << doubleNum << "!: " << factorial(doubleNum) << endl;

    return 0;
}