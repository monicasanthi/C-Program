#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "The value after swapping for call by value: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "The value after swapping for call by reference: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    swapByValue(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByReference(a, b);
    return 0;
}