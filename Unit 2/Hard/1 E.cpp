#include<iostream>
using namespace std;
int calculateSum(int a, int b, int c , int d ) {
    return a + b + c + d;
}
int main() {
    int a, b, c, d;
    cout << "Enter the values: ";
    cin >> a >> b >> c >> d;
    int sum = calculateSum(a, b, c, d);
    cout << "Sum: " << sum << endl;
    return 0;
}