#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int val) {
        value = val;
    }
    friend int max(Number n1, Number n2);
};
int max(Number n1, Number n2) {
    return (n1.value > n2.value) ? n1.value : n2.value;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    Number n1(num1);
    Number n2(num2);
    int max_val = max(n1, n2);
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << max_val << endl;
    return 0;
}