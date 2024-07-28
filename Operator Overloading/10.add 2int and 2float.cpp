#include<iostream>
using namespace std;
class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        double add(double a, double b) {
            return a + b;
        }
};
int main() {
    Calculator calc;
    int intNum1 = 10;
    int intNum2 = 20;
    cout << "Sum of integer numbers: " << calc.add(intNum1, intNum2) << endl;

    double doubleNum1 = 10.5;
    double doubleNum2 = 20.7;
    cout << "Sum of double numbers: " << calc.add(doubleNum1, doubleNum2) << endl;
    return 0;
}