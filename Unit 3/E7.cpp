#include <iostream>
using namespace std;
class PrimeSum {
public:
    PrimeSum(int n) {
        checkPrimeSum(n);
    }
    ~PrimeSum() {
        cout << "Destructor called." << endl;
    }
private:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    void checkPrimeSum(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << n << " can be expressed as the sum of two prime numbers: " << i << " and " << n - i << endl;
                return;
            }
        }
        cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    PrimeSum ps(num);
    return 0;
}