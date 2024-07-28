#include<iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++)
        if(num % i == 0) return false;
    return true;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << (isPrime(num) ? "It is" : "It is not") << " a prime number.";
    return 0;
}