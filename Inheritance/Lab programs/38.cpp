#include <iostream>
#include <stdexcept>
using namespace std;
class MyException : public runtime_error {
public:
    MyException(const string& what) : runtime_error(what) {}
};
void process(int value) {
    try {
        if (value < 0) {
            throw MyException("Negative value");
        }
        cout << "Processing value: " << value << endl;
    } catch (MyException& e) {
        cout << "Caught MyException in process(): " << e.what() << endl;
        throw; // re-throw the exception
    }
}
void mainFunction() {
    try {
        process(-5);
    } catch (MyException& e) {
        cout << "Caught MyException in mainFunction(): " << e.what() << endl;
    }
}
int main() {
    try {
        mainFunction();
    } catch (MyException& e) {
        cout << "Caught MyException in main(): " << e.what() << endl;
    }
    return 0;
}