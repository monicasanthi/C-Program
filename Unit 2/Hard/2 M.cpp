#include<iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a, b, c;
    cout << "Enter the values for a, b, c: ";
    if (!(cin >> a >> b >> c)) {
        cout << "Invalid input. Please enter three integers." << endl;
        return 1;
    }
    int sum2 = add(a, b);
    int sum3 = add(a, b, c);
    cout << "The value of addition using two parameter is " << sum2 << endl;
    cout << "The value of addition using three parameter is " << sum3 << endl;
    return 0;
}