#include <iostream>
#include <stdexcept>
using namespace std;
class MyException : public runtime_error {
public:
    MyException(const string& what) : runtime_error(what) {}
};
void foo() throw(MyException) {
    cout << "Inside foo()" << endl;
    throw MyException("Exception from foo()");
}
void bar() throw(MyException, runtime_error) {
    cout << "Inside bar()" << endl;
    foo();
}
void baz() throw(runtime_error) {
    cout << "Inside baz()" << endl;
    bar();
}
int main() {
    try {
        baz();
    } catch (MyException& e) {
        cout << "Caught MyException: " << e.what() << endl;
    } catch (runtime_error& e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }
    return 0;
}