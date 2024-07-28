#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num, cubeRoot;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        cubeRoot = 0;
    } else {
        cubeRoot = cbrt(num);
    }
    cout << "The cube root of " << num << " is " << cubeRoot << endl;
    return 0;
}