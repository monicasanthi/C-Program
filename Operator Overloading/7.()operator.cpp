#include<iostream>
using namespace std;

class FunctionObject {
    public:
        int operator()(int a, int b) {
            return a + b;
        }
};
int main() {
    FunctionObject obj;
    int result = obj(5, 3);
    cout << "Result: " << result << endl;
    return 0;
}