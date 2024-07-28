#include<iostream>
using namespace std;
int main() {
    int a, b, sum;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int* pa = &a;
    int* pb = &b;

    int* psum = &sum;
    *psum = *pa + *pb;

    cout << "The sum is: " << sum << endl;
    return 0;
}