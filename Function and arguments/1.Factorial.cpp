#include<iostream>
using namespace std;
long long factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}