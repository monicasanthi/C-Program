#include <iostream>
using namespace std;
class FinancialInfo {
protected:
    double principal;
    int years;
    double rate;

public:
    void input() {
        cout << "Enter the principal Amount: ";
        cin >> principal;
        cout << "Enter the No. of years: ";
        cin >> years;
        cout << "Enter the rate of Interest (%): ";
        cin >> rate;
    }
};

class SimpleInterestCalculator : public FinancialInfo {
public:
    void calculateAndDisplay() {
        double simpleInterest = (principal * rate * years) / 100;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main() {
    SimpleInterestCalculator calc;
    calc.input();
    calc.calculateAndDisplay();
    return 0;
}