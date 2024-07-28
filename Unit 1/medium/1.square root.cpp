#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num, squareRoot;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        squareRoot = sqrt(num);
        cout << "The square root of " << num << " is " << squareRoot << endl;
    } else {
        cout << "Error: cannot take square root of a negative number." << endl;
    }

    return 0;
}