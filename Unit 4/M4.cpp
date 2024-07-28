#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    int *p1, *p2, *p3;
    cout << "Enter the three numbers: ";
    cin >> num1 >> num2 >> num3;
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if (*p1 >= *p2 && *p1 >= *p3) {
        cout << "The greatest is P1: " << num1 << endl;
    } else if (*p2 >= *p1 && *p2 >= *p3) {
        cout << "The greatest is P2: " << num2 << endl;
    } else {
        cout << "The greatest is P3: " << num3 << endl;
    }
    return 0;
}