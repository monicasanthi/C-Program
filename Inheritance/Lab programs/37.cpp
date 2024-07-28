#include <iostream>
#include <stdexcept>
using namespace std;
class MyException : public runtime_error {
public:
    MyException(const string& what) : runtime_error(what) {}
};
class DivideByZeroException : public runtime_error {
public:
    DivideByZeroException(const string& what) : runtime_error(what) {}
};
class InvalidOperationException : public runtime_error {
public:
    InvalidOperationException(const string& what) : runtime_error(what) {}
};
int divide(int a, int b) {
    if (b == 0) {
        throw DivideByZeroException("Cannot divide by zero!");
    }
    if (a < 0 || b < 0) {
        throw InvalidOperationException("Invalid operation: cannot divide negative numbers!");
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (DivideByZeroException& e) {
        cout << "Caught DivideByZeroException: " << e.what() << endl;
    } catch (InvalidOperationException& e) {
        cout << "Caught InvalidOperationException: " << e.what() << endl;
    } catch (exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }
    try {
        int result = divide(-5, 2);
        cout << "Result: " << result << endl;
    } catch (DivideByZeroException& e) {
        cout << "Caught DivideByZeroException: " << e.what() << endl;
    } catch (InvalidOperationException& e) {
        cout << "Caught InvalidOperationException: " << e.what() << endl;
    } catch (exception& e) {
        cout << "Caught general exception: " << e.what() << endl;
    }
    return 0;
}