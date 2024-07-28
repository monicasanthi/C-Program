#include <iostream>
#include <stdexcept> 
using namespace std;
class TooSmallException : public runtime_error {
public:
    TooSmallException() : runtime_error("The number is too small") {}
};
class NegativeNumberException : public runtime_error {
public:
    NegativeNumberException() : runtime_error("Accept only positive integers") {}
};
void checkNumber(double number) {
    if (number <= 0) {
        throw NegativeNumberException();
    }
    if (number < 0.0001) {
        throw TooSmallException();
    }
}
int main() {
    double x;
    cout << "Enter a positive number: ";
    cin >> x;
    try {
        checkNumber(x);
        cout << "The number is acceptable." << endl;
    } catch (const TooSmallException& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const NegativeNumberException& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << "Runtime Error: " << e.what() << endl;
    }
    return 0;
}