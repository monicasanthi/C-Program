#include <iostream>
using namespace std;
int main() {
    double taxableIncome, tax;
    cout << "Enter your 1Income: ";
    cin >> taxableIncome;
    if (taxableIncome <= 60000) {
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
        tax = taxableIncome * 0.1;
    } else {
        tax = taxableIncome * 0.15;
    }
    cout << "Your income tax is: " << tax << endl;
    return 0;
}