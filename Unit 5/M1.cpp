#include <iostream>
using namespace std;
class AddAmount {
protected:
    float amount;
public:
    AddAmount() : amount(50) {}  
    virtual void add(float addAmount = 0) {
        amount += addAmount;
    }
    void displayAmount() const {
        cout << "Total Amount is = " << amount << endl;
    }
};
class AddAmountWithParameter : public AddAmount {
public:
    AddAmountWithParameter(float addAmount) {
        add(addAmount);
    }
};
int main() {
    float addAmount;
    cout << "Enter the amount: ";
    cin >> addAmount;
    AddAmountWithParameter piggyBank(addAmount);
    piggyBank.displayAmount();
    return 0;
}