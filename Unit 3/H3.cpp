#include <iostream>
using namespace std;
class AddAmount {
private:
    double amount;
public:
    AddAmount() : amount(50.0) {
        cout << "No amount added. Initial amount: $" << amount << endl;
    }
    AddAmount(double addAmount) : amount(50.0) {
        amount += addAmount;
        cout << "Added $" << addAmount << " to the Piggie Bank. New amount: $" << amount << endl;
    }
    void displayAmount() {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};
int main() {
    AddAmount a1;
    a1.displayAmount();

    AddAmount a2(20.0);
    a2.displayAmount();

    AddAmount a3(30.0);
    a3.displayAmount();

    return 0;
}