#include <iostream>
#include <cmath>
using namespace std;
int absValue(int num) {
    return (num < 0) ? -num : num;
}
double absValue(double num) {
    return fabs(num);
}
int main() {
    int intNum = -5;
    double doubleNum = -3.5;
    cout << "Absolute value of " << intNum << ": " << absValue(intNum) << endl;
    cout << "Absolute value of " << doubleNum << ": " << absValue(doubleNum) << endl;
    return 0;
}