#include <iostream>
#include <stdexcept> 
using namespace std;
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero.");
    }
    return numerator / denominator;
}
int main() {if
    int num, denom;
    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;
    try {
        int result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}